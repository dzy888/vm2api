# `src_rust` — Rust reconstruction

Hand-written Rust approximations of the decompiled project functions, grouped by module.
They follow the recovered call structure and constants; they are **not guaranteed to
compile**. Every module header lists the decompiled addresses it was derived from.

Status:
- `license` / `license::host` / `license::files` — detailed (the crypto gate is complete).
- `server`, `protocol`, `shm`, `pool`, `bridge`, `binding`, `guard`, `tools`, `schema`,
  `models`, `resume`, `oauth`, `mcp`, `journal`, `credential` — implemented or stubbed.
- `Config` fields are typed from usage; unknowns are `serde_json::Value` elsewhere.

To compile: fix imports/signatures and the remaining `todo`/stub handlers, then build
against the versions in `Cargo.toml`.
