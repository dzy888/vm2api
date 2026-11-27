//! Reconstructed `craggemini_core::shm` — SPSC ring buffers over one memfd.
//!
//! Wire layout, verified against a live capture of `craggemini` 0.4.13:
//!
//! ```text
//! memfd: [0x1000 prefix][request ring cap][response ring cap]
//! prefix: request header at +0x000, response header at +request_cap
//! header: head u64 @+0x40, tail u64 @+0x80, pushed u64 @+0x140,
//!         bytes u64 @+0x150, overflow u64 @+0x160
//! frame:  magic u16=0xA602 | kind u16 | seq u32 | r1 u32 | r2 u32 |
//!         payload_len u32 | crc32c u32 | payload | zero padding to 8
//! crc32c covers frame_header[0..20] followed by the payload.
//! ```
//!
//! `kind` observed: 1 = Submit, 0x0A = provider_sse, 0x0F = provider_start.
//! Request payload: `u32 meta_len | meta JSON | prompt | NUL`.
#![allow(dead_code, unused)]

use std::io;
use std::os::fd::{AsRawFd, FromRawFd, OwnedFd};
use std::sync::atomic::{AtomicU64, Ordering};

pub const MAGIC: u16 = 0xA602;
pub const PREFIX: usize = 0x1000;
pub const FRAME_HEADER: usize = 0x18;
pub const MIN_RING: usize = 0x10000;
pub const MAX_RING: usize = 0x4000000;
pub const MAX_FRAME: usize = 0xffff_ffff;

pub const KIND_SUBMIT: u16 = 1;
pub const KIND_PROVIDER_SSE: u16 = 0x0a;
pub const KIND_PROVIDER_START: u16 = 0x0f;

const OFF_HEAD: usize = 0x40;
const OFF_TAIL: usize = 0x80;
const OFF_PUSHED: usize = 0x140;
const OFF_BYTES: usize = 0x150;
const OFF_OVERFLOW: usize = 0x160;

#[repr(C)]
pub struct FrameHeader {
    pub magic: u16,
    pub kind: u16,
    pub seq: u32,
    pub reserved1: u32,
    pub reserved2: u32,
    pub payload_len: u32,
    pub crc32c: u32,
}

pub struct ShmRingOwner {
    pub mapping: std::cell::UnsafeCell<memmap2::MmapMut>,
    pub request_eventfd: OwnedFd,
    pub response_eventfd: OwnedFd,
    pub request_cap: usize,
    pub response_cap: usize,
}

pub struct ShmOwner {
    pub mapping: std::cell::UnsafeCell<memmap2::MmapMut>,
    pub request_eventfd: OwnedFd,
    pub response_eventfd: OwnedFd,
}

pub struct Mapping;

// The ring is single-producer/single-consumer per direction; the owner is shared
// behind Arc and every field is either an fd or the atomically-cursored mapping.
unsafe impl Send for ShmRingOwner {}
unsafe impl Sync for ShmRingOwner {}
unsafe impl Send for ShmOwner {}
unsafe impl Sync for ShmOwner {}

#[derive(Debug)]
pub struct RingFrame {
    pub kind: u16,
    pub seq: u32,
    pub crc32c: u32,
    pub payload: Vec<u8>,
}

fn round_pow2(n: usize) -> usize {
    n.max(MIN_RING).min(MAX_RING).next_power_of_two()
}

fn notify(fd: &OwnedFd) {
    let one: u64 = 1;
    unsafe {
        libc::write(
            fd.as_raw_fd(),
            (&one as *const u64).cast(),
            std::mem::size_of::<u64>(),
        );
    }
}

fn crc32c(bytes: &[u8]) -> u32 {
    let mut crc = !0u32;
    for &b in bytes {
        crc ^= b as u32;
        for _ in 0..8 {
            let mask = (crc & 1).wrapping_neg();
            crc = (crc >> 1) ^ (0x82f6_3b78 & mask);
        }
    }
    !crc
}

impl ShmRingOwner {
    /// `create_memfd` @ 0x2fc670: one sealed memfd with two rings and two eventfds.
    pub fn create(request_bytes: usize, response_bytes: usize) -> io::Result<Self> {
        let request_cap = round_pow2(request_bytes);
        let response_cap = round_pow2(response_bytes);
        let total = PREFIX + request_cap + response_cap;
        unsafe {
            let name = b"craggemini_ring\0";
            let fd = crate::syscompat::memfd_create(
                name.as_ptr().cast(),
                crate::syscompat::MFD_CLOEXEC | crate::syscompat::MFD_ALLOW_SEALING,
            );
            if fd < 0 {
                return Err(io::Error::last_os_error());
            }
            if libc::ftruncate(fd, total as libc::off_t) != 0 {
                return Err(io::Error::last_os_error());
            }
            if libc::fcntl(
                fd,
                crate::syscompat::F_ADD_SEALS,
                crate::syscompat::F_SEAL_SEAL
                    | crate::syscompat::F_SEAL_SHRINK
                    | crate::syscompat::F_SEAL_GROW,
            ) != 0
            {
                return Err(io::Error::last_os_error());
            }
            // Ring header magic for both rings: "AGYSHM02", version 2.
            let mut base = vec![0u8; PREFIX];
            base[..8].copy_from_slice(b"AGYSHM02");
            base[8..12].copy_from_slice(&2u32.to_le_bytes());
            base[0x10..0x14].copy_from_slice(&(PREFIX as u32).to_le_bytes());
            base[0x18..0x1c].copy_from_slice(&(request_cap as u32).to_le_bytes());
            base[0x1c..0x20].copy_from_slice(&(response_cap as u32).to_le_bytes());
            libc::pwrite(fd, base.as_ptr().cast(), PREFIX, 0);
            let e1 = crate::syscompat::eventfd(
                0,
                crate::syscompat::EFD_CLOEXEC | crate::syscompat::EFD_NONBLOCK,
            );
            if e1 < 0 {
                return Err(io::Error::last_os_error());
            }
            let e2 = crate::syscompat::eventfd(
                0,
                crate::syscompat::EFD_CLOEXEC | crate::syscompat::EFD_NONBLOCK,
            );
            if e2 < 0 {
                return Err(io::Error::last_os_error());
            }
            let file = std::fs::File::from_raw_fd(fd);
            let mapping = memmap2::MmapMut::map_mut(&file)?;
            Ok(Self {
                mapping: std::cell::UnsafeCell::new(mapping),
                request_eventfd: OwnedFd::from_raw_fd(e1),
                response_eventfd: OwnedFd::from_raw_fd(e2),
                request_cap,
                response_cap,
            })
        }
    }

    fn map(&self) -> &mut [u8] {
        unsafe { &mut *self.mapping.get() }
    }

    fn atom(&self, header: usize, off: usize) -> &AtomicU64 {
        unsafe { &*self.map().as_ptr().add(header + off).cast::<AtomicU64>() }
    }

    /// `push_request` @ 0x2fcb20: reserve, crc32c(header+payload), wrap-copy, notify.
    pub fn push_request(&self, seq: u32, kind: u16, payload: &[u8]) -> io::Result<()> {
        let ring = self.request_cap;
        let mask = (ring - 1) as u64;
        let frame_len = ((payload.len() + FRAME_HEADER + 7) & !7) as u64;
        if payload.len() > MAX_FRAME || frame_len as usize > ring {
            return Err(io::Error::new(
                io::ErrorKind::InvalidInput,
                "ring frame exceeds total ring capacity",
            ));
        }
        let head_at = self.atom(0, OFF_HEAD);
        let tail_at = self.atom(0, OFF_TAIL);
        let head = head_at.load(Ordering::Acquire);
        let tail = tail_at.load(Ordering::Acquire);
        if head.wrapping_sub(tail) + frame_len > ring as u64 {
            self.atom(0, OFF_OVERFLOW).fetch_add(1, Ordering::Relaxed);
            return Err(io::Error::new(io::ErrorKind::WouldBlock, "ring full"));
        }
        let mut hdr = FrameHeader {
            magic: MAGIC,
            kind,
            seq,
            reserved1: 0,
            reserved2: 0,
            payload_len: payload.len() as u32,
            crc32c: 0,
        };
        let hdr_bytes = unsafe {
            std::slice::from_raw_parts(
                (&hdr as *const FrameHeader).cast::<u8>(),
                FRAME_HEADER,
            )
        };
        let mut crc_input = Vec::with_capacity(0x14 + payload.len());
        crc_input.extend_from_slice(&hdr_bytes[..0x14]);
        crc_input.extend_from_slice(payload);
        hdr.crc32c = crc32c(&crc_input);
        let hdr_bytes = unsafe {
            std::slice::from_raw_parts(
                (&hdr as *const FrameHeader).cast::<u8>(),
                FRAME_HEADER,
            )
        };

        let pos = head & mask;
        let map = self.map();
        let start = PREFIX + pos as usize;
        for (i, b) in hdr_bytes.iter().enumerate() {
            map[PREFIX + ((pos as usize + i) & (ring - 1))] = *b;
        }
        for (i, b) in payload.iter().enumerate() {
            map[PREFIX + ((pos as usize + FRAME_HEADER + i) & (ring - 1))] = *b;
        }
        for i in 0..(frame_len as usize - FRAME_HEADER - payload.len()) {
            map[PREFIX + ((pos as usize + FRAME_HEADER + payload.len() + i) & (ring - 1))] = 0;
        }
        let _ = start;
        head_at.store(head.wrapping_add(frame_len), Ordering::Release);
        self.atom(0, OFF_PUSHED).fetch_add(1, Ordering::Relaxed);
        self.atom(0, OFF_BYTES).fetch_add(payload.len() as u64, Ordering::Relaxed);
        notify(&self.request_eventfd);
        Ok(())
    }

    /// `drain_responses` @ 0x2fcf80: parse frames from the response ring.
    pub fn drain_responses(&self, max: usize) -> io::Result<Vec<RingFrame>> {
        let ring = self.response_cap;
        let header = PREFIX + self.request_cap;
        let head_at = self.atom(header, OFF_HEAD);
        let tail_at = self.atom(header, OFF_TAIL);
        let tail = tail_at.load(Ordering::Acquire);
        let head = head_at.load(Ordering::Acquire);
        let available = head.wrapping_sub(tail) as usize;
        let map = self.map();
        let mut out = Vec::new();
        let mut pos = tail;
        while (pos.wrapping_sub(tail) as usize) < available
            && out.len() < max
            && available - pos.wrapping_sub(tail) as usize >= FRAME_HEADER
        {
            let slot = header + (pos as usize & (ring - 1));
            let mut hdr = [0u8; FRAME_HEADER];
            for (i, b) in hdr.iter_mut().enumerate() {
                *b = map[header + ((pos as usize + i) & (ring - 1))];
            }
            let magic = u16::from_le_bytes([hdr[0], hdr[1]]);
            let kind = u16::from_le_bytes([hdr[2], hdr[3]]);
            let seq = u32::from_le_bytes([hdr[4], hdr[5], hdr[6], hdr[7]]);
            let len = u32::from_le_bytes([hdr[0x10], hdr[0x11], hdr[0x12], hdr[0x13]]) as usize;
            let crc = u32::from_le_bytes([hdr[0x14], hdr[0x15], hdr[0x16], hdr[0x17]]);
            if magic != MAGIC || len > ring {
                break;
            }
            let mut payload = vec![0u8; len];
            for (i, b) in payload.iter_mut().enumerate() {
                *b = map[header + ((pos as usize + FRAME_HEADER + i) & (ring - 1))];
            }
            let mut crc_input = Vec::with_capacity(0x14 + len);
            crc_input.extend_from_slice(&hdr[..0x14]);
            crc_input.extend_from_slice(&payload);
            if crc32c(&crc_input) != crc {
                break;
            }
            let _ = slot;
            let frame_len = ((len + FRAME_HEADER + 7) & !7) as u64;
            pos = pos.wrapping_add(frame_len);
            out.push(RingFrame {
                kind,
                seq,
                crc32c: crc,
                payload,
            });
        }
        if pos != tail {
            tail_at.store(pos, Ordering::Release);
        }
        Ok(out)
    }
}

impl ShmOwner {
    pub fn create(request_bytes: usize, response_bytes: usize) -> io::Result<Self> {
        let owner = ShmRingOwner::create(request_bytes, response_bytes)?;
        Ok(Self {
            mapping: owner.mapping,
            request_eventfd: owner.request_eventfd,
            response_eventfd: owner.response_eventfd,
        })
    }
}

pub fn ring_header_bytes() -> usize {
    PREFIX
}
