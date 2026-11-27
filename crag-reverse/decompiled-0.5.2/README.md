# CRAGGemini 0.5.2 — full Ghidra decompilation

From the decrypted 0.5.2 core (plaintext sha256
`a06aa75c4fd982a672d508d037151337ed7e436dc688ba3b01aa55fb143a8d09`), the
matching bridge and launcher of release `payload-2026.11.27-gemini-0.5.2`.

| target | functions |
|---|---|
| core/ | 8,482 |
| so/ | 1,264 |
| launcher/ | 1,711 |

Each function has a `.c` file (`<addr>__<symbol>_<sha1>.c`), plus `FUNCTIONS.tsv`
and `MODULE-FUNCTIONS.md`. Ghidra 12.2 headless, x86:LE:64, full symbols.

Delta vs 0.5.0: agy eligibility patch, in-core `oauth` manager, SOCKS5/HTTP proxy
error taxonomy, strict multiprotocol renderers. See `../upstream-0.5.2/ANALYSIS.md`.
