//! Reconstructed `craggemini_core::shm` (0.5.2 wire layout).
//!
//! Two independent memfds, one per direction; each starts with a 0x1000 prefix:
//! `AGYSHM02`, version 2, prefix 0x1000, ring capacity, 0x1000+capacity, 0.
//! Frames are `magic u16=0xA602 | kind u16 | seq u32 | r1 u32 | r2 u32 |
//! len u32 | crc32c u32 | payload`, crc over header[0..20]+payload.
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
// Response ring uses the second cursor pair in the shared header.
const OFF_RESP_HEAD: usize = 0xC0;
const OFF_RESP_TAIL: usize = 0x100;

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

pub struct RingSide {
    pub file: std::fs::File,
    pub map: std::cell::UnsafeCell<memmap2::MmapMut>,
    pub cap: usize,
}

pub struct ShmRingOwner {
    pub request: RingSide,
    pub response: RingSide,
    pub request_eventfd: OwnedFd,
    pub response_eventfd: OwnedFd,
    pub extra_eventfd: OwnedFd,
}

pub struct ShmOwner {
    pub request: OwnedFd,
    pub response: OwnedFd,
}

pub struct Mapping;

unsafe impl Send for RingSide {}
unsafe impl Sync for RingSide {}
unsafe impl Send for ShmRingOwner {}
unsafe impl Sync for ShmRingOwner {}

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
        libc::write(fd.as_raw_fd(), (&one as *const u64).cast(), 8);
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

fn make_memfd(size: usize) -> io::Result<std::fs::File> {
    unsafe {
        let fd = crate::syscompat::memfd_create(
            b"craggemini_ring\0".as_ptr().cast(),
            crate::syscompat::MFD_CLOEXEC | crate::syscompat::MFD_ALLOW_SEALING,
        );
        if fd < 0 {
            return Err(io::Error::last_os_error());
        }
        if libc::ftruncate(fd, size as libc::off_t) != 0 {
            return Err(io::Error::last_os_error());
        }
        libc::fcntl(
            fd,
            crate::syscompat::F_ADD_SEALS,
            crate::syscompat::F_SEAL_SEAL
                | crate::syscompat::F_SEAL_SHRINK
                | crate::syscompat::F_SEAL_GROW,
        );
        Ok(std::fs::File::from_raw_fd(fd))
    }
}

impl ShmRingOwner {
    pub fn create(request_bytes: usize, response_bytes: usize) -> io::Result<Self> {
        let request_cap = round_pow2(request_bytes);
        let response_cap = round_pow2(response_bytes);
        let total = PREFIX + request_cap + response_cap;
        let file = make_memfd(total)?;
        unsafe {
            let mut base = vec![0u8; PREFIX];
            base[..8].copy_from_slice(b"AGYSHM02");
            base[8..12].copy_from_slice(&2u32.to_le_bytes());
            base[0x10..0x14].copy_from_slice(&(PREFIX as u32).to_le_bytes());
            base[0x14..0x18].copy_from_slice(&(request_cap as u32).to_le_bytes());
            base[0x18..0x1c].copy_from_slice(&((PREFIX + request_cap) as u32).to_le_bytes());
            base[0x1c..0x20].copy_from_slice(&(response_cap as u32).to_le_bytes());
            libc::pwrite(file.as_raw_fd(), base.as_ptr().cast(), PREFIX, 0);
        }
        let (map, resp_map) = unsafe { (memmap2::MmapMut::map_mut(&file)?, memmap2::MmapMut::map_mut(&file)?) };
        let other = file.try_clone()?;
        unsafe {
            let mk = || crate::syscompat::eventfd(
                0,
                crate::syscompat::EFD_CLOEXEC | crate::syscompat::EFD_NONBLOCK,
            );
            let e1 = mk();
            let e2 = mk();
            let e3 = mk();
            if e1 < 0 || e2 < 0 || e3 < 0 {
                return Err(io::Error::last_os_error());
            }
            Ok(Self {
                request: RingSide { file, map: std::cell::UnsafeCell::new(map), cap: request_cap },
                response: RingSide { file: other, map: std::cell::UnsafeCell::new(resp_map), cap: response_cap },
                request_eventfd: OwnedFd::from_raw_fd(e1),
                response_eventfd: OwnedFd::from_raw_fd(e2),
                extra_eventfd: OwnedFd::from_raw_fd(e3),
            })
        }
    }

    fn map(side: &RingSide) -> &mut [u8] {
        unsafe { &mut *side.map.get() }
    }

    fn atom<'a>(side: &'a RingSide, off: usize) -> &'a AtomicU64 {
        unsafe { &*Self::map(side).as_ptr().add(off).cast::<AtomicU64>() }
    }

    pub fn push_request(&self, seq: u32, kind: u16, payload: &[u8]) -> io::Result<()> {
        let ring = self.request.cap;
        let mask = (ring - 1) as u64;
        let frame_len = ((payload.len() + FRAME_HEADER + 7) & !7) as u64;
        if payload.len() > MAX_FRAME || frame_len as usize > ring {
            return Err(io::Error::new(io::ErrorKind::InvalidInput, "ring frame too large"));
        }
        let head_at = Self::atom(&self.request, OFF_HEAD);
        let tail_at = Self::atom(&self.request, OFF_TAIL);
        let head = head_at.load(Ordering::Acquire);
        let tail = tail_at.load(Ordering::Acquire);
        if head.wrapping_sub(tail) + frame_len > ring as u64 {
            Self::atom(&self.request, OFF_OVERFLOW).fetch_add(1, Ordering::Relaxed);
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
        let bytes = unsafe {
            std::slice::from_raw_parts((&hdr as *const FrameHeader).cast::<u8>(), FRAME_HEADER)
        };
        let mut crc_input = Vec::with_capacity(0x14 + payload.len());
        crc_input.extend_from_slice(&bytes[..0x14]);
        crc_input.extend_from_slice(payload);
        hdr.crc32c = crc32c(&crc_input);
        let bytes = unsafe {
            std::slice::from_raw_parts((&hdr as *const FrameHeader).cast::<u8>(), FRAME_HEADER)
        };
        let pos = head & mask;
        let map = Self::map(&self.request);
        for (i, b) in bytes.iter().enumerate() {
            map[PREFIX + ((pos as usize + i) & (ring - 1))] = *b;
        }
        for (i, b) in payload.iter().enumerate() {
            map[PREFIX + ((pos as usize + FRAME_HEADER + i) & (ring - 1))] = *b;
        }
        for i in 0..(frame_len as usize - FRAME_HEADER - payload.len()) {
            map[PREFIX + ((pos as usize + FRAME_HEADER + payload.len() + i) & (ring - 1))] = 0;
        }
        head_at.store(head.wrapping_add(frame_len), Ordering::Release);
        Self::atom(&self.request, OFF_PUSHED).fetch_add(1, Ordering::Relaxed);
        Self::atom(&self.request, OFF_BYTES).fetch_add(payload.len() as u64, Ordering::Relaxed);
        notify(&self.request_eventfd);
        Ok(())
    }

    pub fn drain_responses(&self, max: usize) -> io::Result<Vec<RingFrame>> {
        let ring = self.response.cap;
        let base = PREFIX + self.request.cap;
        let head_at = Self::atom(&self.response, OFF_RESP_HEAD);
        let tail_at = Self::atom(&self.response, OFF_RESP_TAIL);
        let tail = tail_at.load(Ordering::Acquire);
        let head = head_at.load(Ordering::Acquire);
        let available = head.wrapping_sub(tail) as usize;
        let map = Self::map(&self.response);
        let mut out = Vec::new();
        let mut pos = tail;
        while (pos.wrapping_sub(tail) as usize) + FRAME_HEADER <= available && out.len() < max {
            let mut hdr = [0u8; FRAME_HEADER];
            for (i, b) in hdr.iter_mut().enumerate() {
                *b = map[base + ((pos as usize + i) & (ring - 1))];
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
                *b = map[base + ((pos as usize + FRAME_HEADER + i) & (ring - 1))];
            }
            let mut crc_input = Vec::with_capacity(0x14 + len);
            crc_input.extend_from_slice(&hdr[..0x14]);
            crc_input.extend_from_slice(&payload);
            if crc32c(&crc_input) != crc {
                break;
            }
            pos = pos.wrapping_add(((len + FRAME_HEADER + 7) & !7) as u64);
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

    pub fn fds(&self) -> [i32; 5] {
        [
            self.request.file.as_raw_fd(),
            self.request.file.as_raw_fd(),
            self.request_eventfd.as_raw_fd(),
            self.response_eventfd.as_raw_fd(),
            self.extra_eventfd.as_raw_fd(),
        ]
    }
}

impl ShmOwner {
    pub fn create(request_bytes: usize, response_bytes: usize) -> io::Result<Self> {
        let owner = ShmRingOwner::create(request_bytes, response_bytes)?;
        Ok(Self {
            request: owner.request.file.into(),
            response: owner.response.file.into(),
        })
    }
}

pub fn ring_header_bytes() -> usize {
    PREFIX
}
