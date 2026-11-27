# Inferred route table (`server::handle`)

Recovered from route literals adjacent to the dispatch chain in `server::handle`
(`/v1/*`, `/internal/*`). Method binding is inferred from the surrounding
`GET`/`POST` literals and handler names; server is axum/hyper.

## Public (upstream-compatible)

| Route | Notes |
|---|---|
| `POST /v1/messages` | Anthropic Messages |
| `POST /v1/responses` | OpenAI Responses (native) |
| `POST /v1/chat/completions` | OpenAI Chat (native) |
| `POST /v1/images/generations` | native image generation |
| `POST /v1/images/edits` | native image edit |
| `GET  /v1/models` | model list |
| `POST /v1/cancel` | cancel by target |
| `POST /v1/control` | live control |
| `POST /v1/conversations/resume` | resume delta |
| `POST /v1/subagents[/...]` | subagent actions |
| `POST /v1/accounts/...` | account upsert |
| `GET  /v1/health` | health |
| `POST /v1beta/models/<model>:generateContent` | Gemini JSON |
| `POST /v1beta/models/<model>:streamGenerateContent` | Gemini SSE |
| `GET  /healthz` | liveness |

## Internal (control-plane only)

Bearer/internal-token gated (`X-Kin-Internal-Token`, `Bearer realm="craggemini"`).

| Route | Notes |
|---|---|
| `POST /internal/v1/messages` | envelope submission |
| `GET  /internal/health` | health |
| `POST /internal/v1/accounts/...` | account upsert |
| `POST /internal/v1/conversations/resume` | resume |
| `POST /internal/v1/cancel` | cancel |
| `POST /internal/v1/policy` | runtime policy patch |
| `POST /internal/v1/tools` | tool result submission |
| `POST /internal/v1/subagents/...` | subagent |
| `POST /internal/v1/images/...` | image |
| `GET  /internal/mcp/tools?defer_ack=1` | MCP tool list |
| `POST /internal/mcp/listed` | MCP listed result |
| `POST /internal/mcp/call` | MCP call |
| `POST /internal/mcp/cancel` | MCP cancel |
| `GET  /internal/mcp/events?since=` | MCP event stream |

Every MCP request carries `X-Craggemini-Slot-Id`.
