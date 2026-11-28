package main

import (
	"context"
	"encoding/json"
	"errors"
	"io"
	"net/http"
	"net/http/httptest"
	"net/url"
	"os"
	"path/filepath"
	"strings"
	"testing"
	"time"
)

func testKernel(t *testing.T, upstream http.Handler) *Kernel {
	t.Helper()
	server := httptest.NewServer(upstream)
	t.Cleanup(server.Close)
	base, err := url.Parse(server.URL)
	if err != nil {
		t.Fatal(err)
	}
	config := Config{
		MagpieBaseURL:           server.URL,
		AllowDynamicSlots:       true,
		DefaultAllowedBackends:  []string{"agy-cli", "claude"},
		FirstByteTimeoutSecond:  1,
		StreamIdleTimeoutSecond: 1,
		QueueWaitSecond:         1,
		DefaultMaxConcurrency:   2,
		DefaultMaxRPM:           30,
		DefaultQueueLimit:       16,
		Slots: map[string]Slot{
			"slot-agy":    {Backend: "agy-cli", Model: "agy-cli/gemini-4-flash"},
			"slot-claude": {Backend: "claude", Model: "claude/claude-sonnet-5-5"},
		},
	}
	return &Kernel{config: config, token: []byte("0123456789abcdefghijklmn"), apiKey: []byte("magpie-key"), client: server.Client(), baseURL: base, limiters: make(map[string]*upstreamLimiter)}
}

func TestDynamicSlotCanSelectOnlyConfiguredBackendFamilies(t *testing.T) {
	var gotPath string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotPath = r.URL.Path
		w.Header().Set("Content-Type", "application/json")
		_, _ = io.WriteString(w, `{"candidates":[]}`)
	}))
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r7","stream":false,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "new-slot")
	req.Header.Set("X-Magpie-Backend", "claude")
	req.Header.Set("X-Magpie-Model", "claude/claude-sonnet-5-5")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK || !strings.Contains(gotPath, "/claude/claude-sonnet-5-5:generateContent") {
		t.Fatalf("status=%d path=%q body=%s", res.Code, gotPath, res.Body.String())
	}

	req = httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r8","stream":false,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "new-slot")
	req.Header.Set("X-Magpie-Backend", "other")
	req.Header.Set("X-Magpie-Model", "other/model")
	res = httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusForbidden {
		t.Fatalf("unsupported dynamic backend status=%d body=%s", res.Code, res.Body.String())
	}
}

func TestValidateConfigRequiresModelNamespaceToMatchBackend(t *testing.T) {
	config := Config{
		Socket:                  "/run/kernel.sock",
		FirstByteTimeoutSecond:  30,
		StreamIdleTimeoutSecond: 30,
		QueueWaitSecond:         10,
		DefaultMaxConcurrency:   2,
		DefaultMaxRPM:           30,
		DefaultQueueLimit:       16,
		MagpieBaseURL:           "http://magpie:3425",
		Slots:                   map[string]Slot{"slot-a": {Backend: "claude", Model: "agy-cli/gemini-4-flash"}},
	}
	if err := validateConfig(config, []byte("0123456789abcdefghijklmn"), []byte("key")); err == nil {
		t.Fatal("backend/model mismatch was accepted")
	}
}

func TestSlotSelectsFixedMagpieProviderAndPinsAccount(t *testing.T) {
	var gotPath, gotKey, gotAccount, gotModel, gotSession string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotPath = r.URL.RequestURI()
		gotKey = r.Header.Get("X-Goog-Api-Key")
		gotAccount = r.Header.Get("X-Magpie-Account")
		gotSession = r.Header.Get("X-Magpie-Session")
		var body map[string]json.RawMessage
		if err := json.NewDecoder(r.Body).Decode(&body); err != nil {
			t.Errorf("decode body: %v", err)
		}
		_ = json.Unmarshal(body["model"], &gotModel)
		w.Header().Set("Content-Type", "text/event-stream")
		w.WriteHeader(http.StatusOK)
		_, _ = io.WriteString(w, "data: {\"candidates\":[]}\n\n")
	}))
	kernel.config.Slots["slot-agy"] = Slot{
		Backend: "agy-cli", Model: "agy-cli/gemini-4-flash",
		AllowedBackends: []string{"agy-cli", "claude"}, MagpieAccount: "agy-owner@example.test",
	}
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/accounts/slot-agy/messages", strings.NewReader(`{"request_id":"r1","stream":true,"body":{"model":"client-controlled","conversation_id":"conv-a","contents":[{"role":"user","parts":[{"text":"hello"}]}]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK {
		t.Fatalf("status = %d body=%s", res.Code, res.Body.String())
	}
	if !strings.Contains(gotPath, "/v1beta/models/agy-cli/gemini-4-flash:streamGenerateContent") {
		t.Fatalf("unexpected Magpie path %q", gotPath)
	}
	if gotKey != "magpie-key" || gotAccount != "agy-owner@example.test" || gotModel != "agy-cli/gemini-4-flash" {
		t.Fatalf("key=%q account=%q model=%q", gotKey, gotAccount, gotModel)
	}
	if gotSession != "conv-a" {
		t.Fatalf("session pin = %q", gotSession)
	}
	if !strings.Contains(res.Body.String(), `"candidates":[]`) {
		t.Fatalf("response was not forwarded: %s", res.Body.String())
	}
}

func TestSlotAccountSessionAndKeyIDReachMagpie(t *testing.T) {
	keyPath := filepath.Join(t.TempDir(), "scoped-key")
	if err := os.WriteFile(keyPath, []byte("scoped-key\n"), 0o600); err != nil {
		t.Fatal(err)
	}
	var gotKey, gotAccount, gotSession string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotKey = r.Header.Get("X-Goog-Api-Key")
		gotAccount = r.Header.Get("X-Magpie-Account")
		gotSession = r.Header.Get("X-Magpie-Session")
		w.Header().Set("Content-Type", "application/json")
		_, _ = io.WriteString(w, `{"candidates":[]}`)
	}))
	kernel.config.MagpieAPIKeyFiles = map[string]string{"slot-key": keyPath}
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"req-fallback","stream":false,"body":{"conversation_id":"conversation-7","contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	req.Header.Set("X-Magpie-Account", "agy-user@example.test")
	req.Header.Set("X-Magpie-Key-ID", "slot-key")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK {
		t.Fatalf("status=%d body=%s", res.Code, res.Body.String())
	}
	if gotKey != "scoped-key" || gotAccount != "agy-user@example.test" || gotSession != "conversation-7" {
		t.Fatalf("key=%q account=%q session=%q", gotKey, gotAccount, gotSession)
	}
}

func TestUpstreamLimiterBoundsWaitQueue(t *testing.T) {
	config := testKernel(t, http.NotFoundHandler()).config
	config.QueueWaitSecond = 1
	kernel, err := newKernel(config, []byte("0123456789abcdefghijklmn"), []byte("key"))
	if err != nil {
		t.Fatal(err)
	}
	settings := limiterSettings{maxConcurrency: 1, maxRPM: 10, queueLimit: 1}
	if err := kernel.acquireUpstream(context.Background(), "shared-account", settings); err != nil {
		t.Fatal(err)
	}
	queued := make(chan error, 1)
	go func() { queued <- kernel.acquireUpstream(context.Background(), "shared-account", settings) }()
	time.Sleep(20 * time.Millisecond)
	if err := kernel.acquireUpstream(context.Background(), "shared-account", settings); !errors.Is(err, errQueueFull) {
		t.Fatalf("third caller err=%v, want queue full", err)
	}
	kernel.releaseUpstream("shared-account")
	if err := <-queued; err != nil {
		t.Fatal(err)
	}
	kernel.releaseUpstream("shared-account")
}

func TestSlotPinsMagpieSessionAndPerSlotKey(t *testing.T) {
	keyPath := filepath.Join(t.TempDir(), "gateway-key")
	if err := os.WriteFile(keyPath, []byte("scoped-key\n"), 0o600); err != nil {
		t.Fatal(err)
	}
	var gotKey, gotAccount, gotSession string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotKey = r.Header.Get("X-Goog-Api-Key")
		gotAccount = r.Header.Get("X-Magpie-Account")
		gotSession = r.Header.Get("X-Magpie-Session")
		w.Header().Set("Content-Type", "application/json")
		_, _ = io.WriteString(w, `{"candidates":[]}`)
	}))
	kernel.config.MagpieAPIKeyFiles = map[string]string{"gemini-key": keyPath}
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"request-fallback","stream":false,"body":{"conversation_id":"conversation-9","contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	req.Header.Set("X-Magpie-Account", "agy-owner@example.test")
	req.Header.Set("X-Magpie-Key-ID", "gemini-key")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK {
		t.Fatalf("status=%d body=%s", res.Code, res.Body.String())
	}
	if gotKey != "scoped-key" || gotAccount != "agy-owner@example.test" || gotSession != "conversation-9" {
		t.Fatalf("key=%q account=%q session=%q", gotKey, gotAccount, gotSession)
	}
}

func TestTruncatedSSEIsReportedAsErrorAfterPartialOutput(t *testing.T) {
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, _ *http.Request) {
		w.Header().Set("Content-Type", "text/event-stream")
		_, _ = io.WriteString(w, "data: {\"candidates\":[{\"content\":{\"parts\":[{\"text\":\"partial\"}]}}]}\n\n")
	}))
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"truncated","stream":true,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if !strings.Contains(res.Body.String(), "event: error") || !strings.Contains(res.Body.String(), "gemini_inference_invalid_output") {
		t.Fatalf("truncated stream was not surfaced as an error: %s", res.Body.String())
	}
}

func TestTrustedHostCanSelectAnAllowedBackendForSlot(t *testing.T) {
	var gotModel string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotModel = r.URL.Path
		w.Header().Set("Content-Type", "application/json")
		_, _ = io.WriteString(w, `{"candidates":[]}`)
	}))
	kernel.config.Slots["slot-agy"] = Slot{
		Backend: "agy-cli", Model: "agy-cli/gemini-4-flash",
		AllowedBackends: []string{"agy-cli", "claude"},
	}
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r5","stream":false,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	req.Header.Set("X-Magpie-Backend", "claude")
	req.Header.Set("X-Magpie-Model", "claude/claude-sonnet-5-5")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK {
		t.Fatalf("status = %d body=%s", res.Code, res.Body.String())
	}
	if !strings.Contains(gotModel, "/claude/claude-sonnet-5-5:generateContent") {
		t.Fatalf("slot override was not applied: %q", gotModel)
	}
}

func TestSlotCannotSelectBackendOutsideItsAllowlist(t *testing.T) {
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, _ *http.Request) {
		t.Fatal("disallowed backend reached upstream")
	}))
	slot := kernel.config.Slots["slot-agy"]
	slot.AllowedBackends = []string{"agy-cli"}
	kernel.config.Slots["slot-agy"] = slot
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r6","stream":false,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-agy")
	req.Header.Set("X-Magpie-Backend", "claude")
	req.Header.Set("X-Magpie-Model", "claude/claude-sonnet-5-5")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusForbidden {
		t.Fatalf("status = %d, want %d", res.Code, http.StatusForbidden)
	}
}

func TestDifferentSlotRoutesToClaudeCodeProvider(t *testing.T) {
	var gotPath string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotPath = r.URL.Path
		w.Header().Set("Content-Type", "application/json")
		_, _ = io.WriteString(w, `{"candidates":[{"content":{"parts":[{"text":"ok"}]}}]}`)
	}))
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r2","stream":false,"body":{"contents":[{"role":"user","parts":[{"text":"hello"}]}]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-claude")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusOK {
		t.Fatalf("status = %d body=%s", res.Code, res.Body.String())
	}
	if !strings.Contains(gotPath, "/v1beta/models/claude/claude-sonnet-5-5:generateContent") {
		t.Fatalf("unexpected Magpie path %q", gotPath)
	}
}

func TestInternalRequestRequiresTokenAndConfiguredSlot(t *testing.T) {
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, _ *http.Request) {
		t.Fatal("unauthorized or unconfigured request reached upstream")
	}))
	kernel.config.AllowDynamicSlots = false
	for _, test := range []struct {
		name   string
		token  string
		slot   string
		status int
	}{
		{name: "unauthorized", slot: "slot-agy", status: http.StatusUnauthorized},
		{name: "unknown slot", token: string(kernel.token), slot: "slot-other", status: http.StatusNotFound},
	} {
		t.Run(test.name, func(t *testing.T) {
			req := httptest.NewRequest(http.MethodPost, "/internal/v1/messages", strings.NewReader(`{"request_id":"r3","stream":true,"body":{"contents":[]}}`))
			req.Header.Set("X-Kin-Internal-Token", test.token)
			req.Header.Set("X-Craggemini-Account", test.slot)
			res := httptest.NewRecorder()
			kernel.ServeHTTP(res, req)
			if res.Code != test.status {
				t.Fatalf("status = %d, want %d body=%s", res.Code, test.status, res.Body.String())
			}
		})
	}
}

func TestAccountRouteAndHeaderCannotSelectDifferentSlots(t *testing.T) {
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, _ *http.Request) {
		t.Fatal("mismatched slot request reached upstream")
	}))
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/accounts/slot-agy/messages", strings.NewReader(`{"request_id":"r4","stream":true,"body":{"contents":[]}}`))
	req.Header.Set("X-Kin-Internal-Token", string(kernel.token))
	req.Header.Set("X-Craggemini-Account", "slot-claude")
	res := httptest.NewRecorder()
	kernel.ServeHTTP(res, req)
	if res.Code != http.StatusBadRequest {
		t.Fatalf("status = %d, want %d body=%s", res.Code, http.StatusBadRequest, res.Body.String())
	}
}
