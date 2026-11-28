# Magpie Kernel

Standalone Unix-socket adapter from the vm2api Gemini host contract to a Magpie gateway. It is isolated from the existing Rust reconstruction and does not modify the CRAGGemini implementation.

Each slot has a default Magpie model route and an optional backend allowlist. Magpie's `agy-cli/<model>` provider runs Antigravity CLI (`agy`); `claude/<model>` uses Magpie's Claude subscription bridge, which runs Claude Code. A trusted caller can select one allowed backend per request with `X-Magpie-Backend` and `X-Magpie-Model`. The slot ID still selects the allowlist and optional pinned Magpie account. Magpie's retired built-in `antigravity` provider is not used here.

The Magpie API key and the internal socket token are loaded from secret files. In the Compose setup, make them root-owned, group-readable by the adapter's GID (65532), and unreadable by other users, for example mode `0640`. The Gemini host verifies that the internal token file is root-owned and not world-readable. `X-Magpie-Account` can pin a slot to a specific Magpie account.

## Configuration

Copy `config.example.json` to a root-managed config file and set the socket, Magpie URL, secret file paths, and slot routes. The model namespace must match the slot backend.

In Magpie, add the `@magpie-community/opencode-agy-cli-auth` provider and sign it in for the `agy-cli` route. For Claude slots, add/sign in to a Claude subscription and ensure the Magpie host can run Claude Code. Create a Magpie gateway key for this adapter. Example slot IDs are placeholders and must match the `x-craggemini-account` IDs sent by the host.

The kernel accepts `POST /internal/v1/messages` with `X-Kin-Internal-Token` and a required `X-Craggemini-Account` slot ID. It also accepts account-scoped `/internal/v1/accounts/{slot}/messages`. The incoming request body is Gemini `contents` JSON. The configured Magpie model replaces any model supplied by the caller. `X-Magpie-Backend` and `X-Magpie-Model` are accepted only from this token-authenticated internal interface and must match the slot allowlist.

`GET /internal/health` reports adapter readiness. It does not perform an upstream generation or prove that a selected Magpie provider is signed in.

## Run

```sh
go test ./...
go run . -config ./config.example.json
```

The Compose example runs Magpie and this adapter in one stack. Its `./run` bind-mounted directory contains the Unix socket and must be shared with the Gemini host. Set the Gemini host environment from `gemini-host.env.example`, then install `/etc/vm2api/magpie-kernel.env` and restart `vm2api-gemini.service`. Put the gateway key and internal token in `secrets/gateway-key` and `secrets/internal-token`, set both files to root:65532 mode `0640`, prepare `run/` writable by UID/GID 65532, then copy `config.example.json` to `config.json`. Dynamic slots are enabled in the example. The adapter accepts slot IDs from vm2api and enforces `default_allowed_backends`; static `slots` entries can additionally pin a specific Magpie account. Do not publish the Unix socket or Magpie gateway to an untrusted network.

In the Gemini environment details, choose `CRAGGemini / agy`, `Magpie / agy CLI`, or `Magpie / Claude Code`. For Magpie choices enter the full routed model ID, such as `agy-cli/gemini-4-flash` or `claude/claude-sonnet-5-5`. The public model remains the model selected by the vm2api caller; the configured Magpie model is the executor route for that environment.

This adapter currently supports the Gemini request/response shape. Magpie performs provider selection and protocol translation; vm2api remains responsible for its external authentication, scheduling, and billing.
