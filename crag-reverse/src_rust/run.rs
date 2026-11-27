//! Reconstructed `craggemini_core::run` — top-level serve future.
#![allow(dead_code, unused)]

use crate::license::{Device, LicenseGate};
use crate::server::run_with_license;
use crate::Config;

pub async fn run(config: Config, gate: LicenseGate, device: Device) -> Result<(), axum::response::Response> {
    run_with_license(config, gate, device).await
}
