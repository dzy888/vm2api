//! Reconstructed `craggemini_core::body` — request/response body channel.
#![allow(dead_code, unused)]

use bytes::Bytes;
use tokio::sync::mpsc;

pub enum Body {
    Empty,
    Bytes(Bytes),
    Channel(Chan),
}

pub struct Chan {
    pub rx: mpsc::Receiver<Result<Bytes, crate::protocol::Failure>>,
}

impl Body {
    pub fn empty() -> Self {
        Body::Empty
    }
    pub fn from_bytes(bytes: impl Into<Bytes>) -> Self {
        Body::Bytes(bytes.into())
    }
    pub fn channel(capacity: usize) -> (Chan, mpsc::Sender<Result<Bytes, crate::protocol::Failure>>) {
        let (tx, rx) = mpsc::channel(capacity);
        (Chan { rx }, tx)
    }
}
