//! Reconstructed `craggemini_core::journal` — append-only turn journal.
//! Addresses: `Journal::open_at` 0x251280, `Journal::append` 0x2509b0.
#![allow(dead_code, unused)]

use std::fs::{File, OpenOptions};
use std::io::Write;
use std::path::{Path, PathBuf};

const JOURNAL_LIMIT: usize = 256;

pub struct Journal {
    path: PathBuf,
    file: File,
    entries: usize,
    digests: Vec<[u8; 32]>,
}

impl Journal {
    /// `Journal::open_at` @ 0x251280: open (append) at a fixed path, capped line size.
    pub fn open_at(path: &Path) -> std::io::Result<Self> {
        let file = OpenOptions::new().create(true).append(true).open(path)?;
        Ok(Self {
            path: path.into(),
            file,
            entries: 0,
            digests: Vec::new(),
        })
    }

    /// `Journal::append` @ 0x2509b0: chain a digest and write one JSON line.
    pub fn append(&mut self, value: &serde_json::Value) -> std::io::Result<()> {
        let mut line = serde_json::to_vec(value)?;
        line.push(b'\n');
        if line.len() > 1024 * 1024 {
            return Err(std::io::Error::new(
                std::io::ErrorKind::InvalidInput,
                "journal capacity exceeded",
            ));
        }
        let prev = self.digests.last().copied().unwrap_or([0u8; 32]);
        let mut h = sha2::Sha256::new();
        use sha2::Digest;
        h.update(prev);
        h.update(&line);
        self.digests.push(h.finalize().into());
        self.entries += 1;
        self.file.write_all(&line)?;
        self.file.sync_data()?;
        if self.entries > JOURNAL_LIMIT {
            self.compact()?;
        }
        Ok(())
    }

    fn compact(&mut self) -> std::io::Result<()> {
        let bytes = std::fs::read(&self.path)?;
        let lines: Vec<&[u8]> = bytes
            .split(|b| *b == b'\n')
            .filter(|l| !l.is_empty())
            .collect();
        let keep = &lines[lines.len().saturating_sub(JOURNAL_LIMIT)..];
        let mut out = Vec::new();
        for l in keep {
            out.extend_from_slice(l);
            out.push(b'\n');
        }
        std::fs::write(&self.path, out)?;
        self.entries = keep.len();
        Ok(())
    }

    pub fn digests(&self) -> &[[u8; 32]] {
        &self.digests
    }
}
