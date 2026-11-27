# kernel.json / account config (reconstructed)

`Config` has 37 serde fields. Visible subset (order as embedded):

```
first_byte_timeout_ms idle_timeout_ms max_queue vm_id license_dir
shm_request_bytes shm_response_bytes mcp_tool_timeout_ms mcp_config_path
resume_conversation_id agy_bin bridge_so verify_agy_sha256 strict_unique_proxy
require_proxy_calibration auto_calibrate_on_start max_concurrency
session_idle_ttl_secs system_prompt_mode max_accounts sticky_enabled
sticky_ttl_secs require_shm circuit_failure_threshold circuit_open_ms
```

Preceding/adjacent keys seen in the blob include `run_dir`, `internal_token`, `session_id`,
`model`, `agy_sha256`, `timeout_ms`, `queue_timeout_ms`, `runnable_slots`, `prewarm`,
`min_warm_slots`, `netns`, `oauth_proxy_required`, `allow_loopback_proxy`,
`calibration_target`, `enabled`.

`AccountBindingConfig` (23) includes `account_id`, `env_id`, `proxy_url`, `proxy_sha256`,
`netns_transparent_egress`, `min_warm_slots`, `netns`, `oauth_proxy_required`,
`allow_loopback_proxy`, `calibration_target`, `enabled`, `runnable_slots`, `prewarm`,
`idle_ttl_secs`, plus `agy_home`, `work_dir`, `run_dir`, `proxy_id`.

`PolicyPatch` / `PoolSchedulingPolicy` drive runtime tuning; `/internal/v1/policy` and
`apply_policy` hot-apply it. `system_prompt_mode` is `protocol::SystemPromptMode`.

Defaults and examples live in the package's `kernel.json` producer (vm2api control plane);
the launcher's own `kernel.json.example` confirms `transport`, `delivery_mode`,
`slots_per_worker`, `session_slots`, `prewarm_enabled`, `max_queue`, timeouts,
`thinking_display`, `model_effort`, `persona_preset`, `system_layout`, `cch_enabled`,
`cc_entrypoint`, `auto_compact_window`, `proxy_url`, `telemetry`.
