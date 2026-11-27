# 0.5.2 runtime notes

## agy eligibility patch
`scripts/gemini_agy_patch.py` patches the 4-byte `hasValidAuth` branch in
`handleAuthResult` (x64/arm64) with signature matching, pre/post SHA-256 checks and
atomic rollback. The package manifest pins the patched digest
`bca88dab4d2b921d95e1228326631837ff468efef505088d9ab5dbb057f26157`.
Install/maintenance runs it automatically; the self-kernel installer must patch
`share/gemini/self/agy` (or a copied `current/agy`) before verification.

## In-core OAuth manager
`craggemini_core::oauth` now owns OAuth attempts: spawn agy in a PTY through the
bound proxy, capture/validate the official PKCE URL, accept the callback code,
verify the written `antigravity-oauth-token`, with per-account exclusivity,
10-minute expiry, proxy-digest binding, reaping and mass shutdown.

## Proxy errors
Manual CONNECT/SOCKS5 with explicit taxonomy (auth greeting, credentials length,
CONNECT reply code, header size, early close) so the panel can surface the exact
proxy failure instead of a generic timeout.
