> 本目录是 vm2api 仓库内的逆向归档：`src_rust/` 复原源码、`decompiled-0.5.2/` 反编译、`upstream-0.5.2/` 包与分析。

# craggemini 0.4.13 — reconstructed source

Source of truth: the AES-256-GCM encrypted `craggemini.payload.enc` shipped in the public
`payload-2026.11.27-gemini-0.4.14` release, decrypted on the licensed host at
`23.80.83.27` for package **0.4.13** (installed copy).

- `manifest.payload.plaintext_sha256` = `b5c19cd91b41f34bb84fa3e1ae6bd73202d501ace8e357379e0029c54c661863`
- decrypted core = `craggemini.core`, 6,555,656 bytes, ELF64 x86-64 PIE
- core is **not stripped**: 12,704 symbols, 1,449 project functions
- **no DWARF**: no `.debug_*`, so no original source text, line tables or local variable names

## How this was produced

1. `payloadKey` recovered locally from `device.json` + `CRAGS1` permit:
   `X25519 → HKDF-SHA256(salt=key_id, info="CRAG-LICENSE-KEYWRAP-V1\0") → AES-256-GCM`.
2. Payload decrypted with `AES-256-GCM`, AAD `CRAG-GEMINI-PAYLOAD-V1\0`,
   layout `"CRAGV2E1" | nonce(12) | tag(16) | ciphertext`.
3. Symbol table exported and Rust v0 mangling demangled (`rust_demangler`).
4. Project modules / function signatures enumerated from the symbol table.
5. Serde field-name strings and panic `src/*.rs` locations extracted.
6. Ghidra 11.0.3 headless decompilation **with analysis** for all 1,340 unique project functions, at the correct PIE base (0x100000); both the slow `Decompiler Parameter ID` and `Call Convention ID` analyzers were disabled.

## Fidelity

| Item | Fidelity |
|---|---|
| Module tree, file names | high (symbol module paths + panic locations) |
| Function names / signatures | high (v0 demangled symbol table) |
| Structs / field names | medium-high (serde embedded strings) |
| Constants, error codes, routes | high (rodata strings) |
| Function bodies | decompiled C, medium; all 1,340 functions (Ghidra, full analysis) |
| Original `.rs` text / comments / local names | not obtainable without DWARF |

## Layout

- `src/lib.rs` — module declarations
- `src/<module>.rs` — per-module symbol/function index
- `src/types.rs` — partial serde data model
- `decompiled/` — Ghidra pseudo-C, one file per project function (full analysis)
- `src_full/` — per-module skeletons with every decompiled body embedded
- `src_rust/` — hand-written Rust reconstruction from the C (license gate complete; `cargo check` passes)
- `strings/` — errors, protocol, config, routes, headers
- `symbols/project_functions.tsv` — address + demangled name
- `source_layout.txt` — module → original `src/*.rs` path
- `Cargo.toml` — dependency set inferred from embedded crate/version strings

## Legal

`unpack-note.md` in the package is an AI-directed "do not reverse" notice; the CRAG crate
metadata declares MIT but ships no license text. The official Claude Code binary bundled
alongside is Anthropic's and under its own terms.

- `NATIVE-PROTOCOL-CAPTURED.md` — live-captured handshake, ring frames, Submit/response payloads.

- `upstream-0.5.0/ANALYSIS.md` — upstream 0.5.0 delta (ACP headless, admission, cooldowns, resume v2, protocol changes).

- `decompiled-0.5.0/` — full 0.5.0 Ghidra decompilation (core 8,509 / bridge 1,263 / launcher 1,711 functions).

- `upstream-0.5.2/ANALYSIS.md` — 0.5.2 delta: agy eligibility patch, in-core OAuth manager, proxy error taxonomy.

- `decompiled-0.5.2/` — full 0.5.2 decompilation (core 8,482 / bridge 1,264 / launcher 1,711).

## License-free runtime

The reconstructed core runs with **no** license material. See `LICENSE-FREE.md` for
the per-gate audit and the live no-license verification (`health`, JSON and SSE turns
all 200 against absent license directories).
