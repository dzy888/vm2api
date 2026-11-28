package main

import (
	"encoding/json"
	"io"
	"net/http"
	"net/http/httptest"
	"net/url"
	"strings"
	"testing"
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
		MagpieBaseURL:          server.URL,
		RequestTimeoutSecond:   5,
		AllowDynamicSlots:      true,
		DefaultAllowedBackends: []string{"agy-cli", "claude"},
		Slots: map[string]Slot{
			"slot-agy":    {Backend: "agy-cli", Model: "agy-cli/gemini-4-flash"},
			"slot-claude": {Backend: "claude", Model: "claude/claude-sonnet-5-5"},
		},
	}
	return &Kernel{config: config, token: []byte("0123456789abcdefghijklmn"), apiKey: []byte("magpie-key"), client: server.Client(), baseURL: base}
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
		Socket:               "/run/kernel.sock",
		RequestTimeoutSecond: 30,
		MagpieBaseURL:        "http://magpie:3425",
		Slots:                map[string]Slot{"slot-a": {Backend: "claude", Model: "agy-cli/gemini-4-flash"}},
	}
	if err := validateConfig(config, []byte("0123456789abcdefghijklmn"), []byte("key")); err == nil {
		t.Fatal("backend/model mismatch was accepted")
	}
}

func TestSlotSelectsFixedMagpieProviderAndPinsAccount(t *testing.T) {
	var gotPath, gotKey, gotAccount, gotModel string
	kernel := testKernel(t, http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		gotPath = r.URL.RequestURI()
		gotKey = r.Header.Get("X-Goog-Api-Key")
		gotAccount = r.Header.Get("X-Magpie-Account")
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
	req := httptest.NewRequest(http.MethodPost, "/internal/v1/accounts/slot-agy/messages", strings.NewReader(`{"request_id":"r1","stream":true,"body":{"model":"client-controlled","contents":[{"role":"user","parts":[{"text":"hello"}]}]}}`))
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
	if !strings.Contains(res.Body.String(), `"candidates":[]`) {
		t.Fatalf("response was not forwarded: %s", res.Body.String())
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
