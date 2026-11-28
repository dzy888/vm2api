package main

import (
	"context"
	"crypto/subtle"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"net"
	"net/http"
	"net/url"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"time"
)

const maxRequestBytes = 32 << 20

var slotIDPattern = regexp.MustCompile(`^[A-Za-z0-9][A-Za-z0-9_-]{0,63}$`)

type Config struct {
	Socket                 string          `json:"socket"`
	InternalTokenFile      string          `json:"internal_token_file"`
	MagpieBaseURL          string          `json:"magpie_base_url"`
	MagpieAPIKeyFile       string          `json:"magpie_api_key_file"`
	RequestTimeoutSecond   int             `json:"request_timeout_seconds"`
	AllowDynamicSlots      bool            `json:"allow_dynamic_slots"`
	DefaultAllowedBackends []string        `json:"default_allowed_backends,omitempty"`
	Slots                  map[string]Slot `json:"slots"`
}

type Slot struct {
	Backend         string   `json:"backend"`
	Model           string   `json:"model"`
	AllowedBackends []string `json:"allowed_backends,omitempty"`
	MagpieAccount   string   `json:"magpie_account,omitempty"`
}

type Envelope struct {
	RequestID string          `json:"request_id"`
	Stream    bool            `json:"stream"`
	Body      json.RawMessage `json:"body"`
}

type Kernel struct {
	config  Config
	token   []byte
	apiKey  []byte
	client  *http.Client
	baseURL *url.URL
}

func loadConfig(path string) (Config, []byte, []byte, error) {
	var config Config
	raw, err := os.ReadFile(path)
	if err != nil {
		return config, nil, nil, err
	}
	if err := json.Unmarshal(raw, &config); err != nil {
		return config, nil, nil, fmt.Errorf("decode config: %w", err)
	}
	token, err := readSecret(config.InternalTokenFile)
	if err != nil {
		return config, nil, nil, fmt.Errorf("read internal token: %w", err)
	}
	apiKey, err := readSecret(config.MagpieAPIKeyFile)
	if err != nil {
		return config, nil, nil, fmt.Errorf("read Magpie key: %w", err)
	}
	if err := validateConfig(config, token, apiKey); err != nil {
		return config, nil, nil, err
	}
	return config, token, apiKey, nil
}

func readSecret(path string) ([]byte, error) {
	if path == "" {
		return nil, errors.New("secret file path is required")
	}
	value, err := os.ReadFile(path)
	if err != nil {
		return nil, err
	}
	return []byte(strings.TrimSpace(string(value))), nil
}

func validateConfig(config Config, token, apiKey []byte) error {
	if config.Socket == "" || !filepath.IsAbs(config.Socket) {
		return errors.New("socket must be an absolute path")
	}
	if len(token) < 24 {
		return errors.New("internal token must contain at least 24 characters")
	}
	if len(apiKey) == 0 {
		return errors.New("Magpie API key is empty")
	}
	base, err := url.Parse(config.MagpieBaseURL)
	if err != nil || base.Host == "" || (base.Scheme != "http" && base.Scheme != "https") || base.User != nil {
		return errors.New("magpie_base_url must be an http(s) URL without credentials")
	}
	if config.RequestTimeoutSecond < 1 || config.RequestTimeoutSecond > 3600 {
		return errors.New("request_timeout_seconds must be between 1 and 3600")
	}
	if len(config.Slots) == 0 && !config.AllowDynamicSlots {
		return errors.New("at least one slot backend must be configured")
	}
	for _, backend := range config.DefaultAllowedBackends {
		if backend != "agy-cli" && backend != "claude" {
			return fmt.Errorf("unsupported default allowed backend %q", backend)
		}
	}
	if config.AllowDynamicSlots && len(config.DefaultAllowedBackends) == 0 {
		return errors.New("dynamic slots require default_allowed_backends")
	}
	for id, slot := range config.Slots {
		if !slotIDPattern.MatchString(id) {
			return fmt.Errorf("invalid slot id %q", id)
		}
		if !validSlotRoute(slot.Backend, slot.Model) {
			return fmt.Errorf("slot %s must use a %s/<model> Magpie model", id, slot.Backend)
		}
		for _, backend := range slot.AllowedBackends {
			if backend != "agy-cli" && backend != "claude" {
				return fmt.Errorf("slot %s has unsupported allowed backend %q", id, backend)
			}
		}
	}
	return nil
}

func validSlotRoute(backend, model string) bool {
	prefix := backend + "/"
	return (backend == "agy-cli" || backend == "claude") && strings.HasPrefix(model, prefix) && len(model) > len(prefix)
}

func newKernel(config Config, token, apiKey []byte) (*Kernel, error) {
	baseURL, err := url.Parse(config.MagpieBaseURL)
	if err != nil {
		return nil, err
	}
	return &Kernel{
		config:  config,
		token:   token,
		apiKey:  apiKey,
		baseURL: baseURL,
		client:  &http.Client{Timeout: time.Duration(config.RequestTimeoutSecond) * time.Second},
	}, nil
}

func (k *Kernel) ServeHTTP(w http.ResponseWriter, r *http.Request) {
	if r.URL.Path == "/internal/health" && r.Method == http.MethodGet {
		if !k.authorized(r) {
			writeError(w, http.StatusUnauthorized, "unauthorized", "invalid internal token")
			return
		}
		writeJSON(w, http.StatusOK, map[string]any{"ok": true, "ready": true, "backend": "magpie", "slots": len(k.config.Slots)})
		return
	}
	if r.Method != http.MethodPost || !k.authorized(r) {
		status := http.StatusUnauthorized
		code := "unauthorized"
		if r.Method != http.MethodPost {
			status, code = http.StatusMethodNotAllowed, "method_not_allowed"
		}
		writeError(w, status, code, "request rejected")
		return
	}
	slotID := r.Header.Get("x-craggemini-account")
	pathSlotID := accountSlotFromPath(r.URL.Path)
	if slotID == "" {
		slotID = pathSlotID
	}
	if pathSlotID != "" && pathSlotID != slotID {
		writeError(w, http.StatusBadRequest, "slot_mismatch", "account header and route slot do not match")
		return
	}
	if !slotIDPattern.MatchString(slotID) {
		writeError(w, http.StatusBadRequest, "slot_required", "a valid x-craggemini-account slot id is required")
		return
	}
	slot, ok := k.config.Slots[slotID]
	if !ok {
		if !k.config.AllowDynamicSlots {
			writeError(w, http.StatusNotFound, "magpie_slot_not_configured", "no Magpie backend is configured for this slot")
			return
		}
		slot = Slot{AllowedBackends: k.config.DefaultAllowedBackends}
	}
	if r.URL.Path != "/internal/v1/messages" && pathSlotID != slotID {
		writeError(w, http.StatusNotFound, "not_found", "route not found")
		return
	}
	if requestedBackend := r.Header.Get("x-magpie-backend"); requestedBackend != "" {
		if !backendAllowed(slot, requestedBackend) {
			writeError(w, http.StatusForbidden, "magpie_backend_not_allowed", "requested backend is not allowed for this slot")
			return
		}
		requestedModel := r.Header.Get("x-magpie-model")
		if !validSlotRoute(requestedBackend, requestedModel) {
			writeError(w, http.StatusBadRequest, "magpie_model_invalid", "requested model must match its Magpie backend")
			return
		}
		slot.Backend = requestedBackend
		slot.Model = requestedModel
	}
	k.proxyTurn(w, r, slotID, slot)
}

func backendAllowed(slot Slot, backend string) bool {
	if len(slot.AllowedBackends) == 0 {
		return backend == slot.Backend
	}
	for _, allowed := range slot.AllowedBackends {
		if allowed == backend {
			return true
		}
	}
	return false
}

func accountSlotFromPath(path string) string {
	const prefix = "/internal/v1/accounts/"
	if !strings.HasPrefix(path, prefix) || !strings.HasSuffix(path, "/messages") {
		return ""
	}
	return strings.TrimSuffix(strings.TrimPrefix(path, prefix), "/messages")
}

func (k *Kernel) authorized(r *http.Request) bool {
	supplied := r.Header.Get("x-kin-internal-token")
	if len(supplied) != len(k.token) {
		return false
	}
	return subtle.ConstantTimeCompare([]byte(supplied), k.token) == 1
}

func (k *Kernel) proxyTurn(w http.ResponseWriter, r *http.Request, slotID string, slot Slot) {
	r.Body = http.MaxBytesReader(w, r.Body, maxRequestBytes)
	var envelope Envelope
	decoder := json.NewDecoder(r.Body)
	if err := decoder.Decode(&envelope); err != nil || len(envelope.Body) == 0 || !json.Valid(envelope.Body) {
		writeError(w, http.StatusBadRequest, "invalid_envelope", "request envelope is invalid")
		return
	}
	var body map[string]json.RawMessage
	if err := json.Unmarshal(envelope.Body, &body); err != nil {
		writeError(w, http.StatusBadRequest, "invalid_envelope", "Gemini request body must be an object")
		return
	}
	modelJSON, _ := json.Marshal(slot.Model)
	body["model"] = modelJSON
	encoded, err := json.Marshal(body)
	if err != nil {
		writeError(w, http.StatusBadRequest, "invalid_envelope", "Gemini request could not be encoded")
		return
	}
	operation := "generateContent"
	if envelope.Stream {
		operation = "streamGenerateContent"
	}
	upstreamURL := *k.baseURL
	upstreamURL.Path = strings.TrimRight(upstreamURL.Path, "/") + "/v1beta/models/" + slot.Model + ":" + operation
	query := upstreamURL.Query()
	if envelope.Stream {
		query.Set("alt", "sse")
	}
	upstreamURL.RawQuery = query.Encode()
	ctx, cancel := context.WithTimeout(r.Context(), time.Duration(k.config.RequestTimeoutSecond)*time.Second)
	defer cancel()
	upstream, err := http.NewRequestWithContext(ctx, http.MethodPost, upstreamURL.String(), strings.NewReader(string(encoded)))
	if err != nil {
		writeError(w, http.StatusBadGateway, "magpie_request_failed", "could not construct Magpie request")
		return
	}
	upstream.Header.Set("Content-Type", "application/json")
	upstream.Header.Set("Accept", "text/event-stream, application/json")
	upstream.Header.Set("X-Goog-Api-Key", string(k.apiKey))
	if slot.MagpieAccount != "" {
		upstream.Header.Set("X-Magpie-Account", slot.MagpieAccount)
	}
	response, err := k.client.Do(upstream)
	if err != nil {
		writeError(w, http.StatusBadGateway, "magpie_unavailable", "Magpie gateway request failed")
		return
	}
	defer response.Body.Close()
	for _, name := range []string{"Content-Type", "Cache-Control", "X-Request-Id", "Retry-After"} {
		if value := response.Header.Get(name); value != "" {
			w.Header().Set(name, value)
		}
	}
	w.WriteHeader(response.StatusCode)
	flusher, canFlush := w.(http.Flusher)
	buf := make([]byte, 32*1024)
	for {
		n, readErr := response.Body.Read(buf)
		if n > 0 {
			if _, writeErr := w.Write(buf[:n]); writeErr != nil {
				return
			}
			if envelope.Stream && canFlush {
				flusher.Flush()
			}
		}
		if readErr != nil {
			if !errors.Is(readErr, io.EOF) {
				return
			}
			return
		}
	}
}

func writeJSON(w http.ResponseWriter, status int, body any) {
	w.Header().Set("Content-Type", "application/json")
	w.WriteHeader(status)
	_ = json.NewEncoder(w).Encode(body)
}

func writeError(w http.ResponseWriter, status int, code, message string) {
	writeJSON(w, status, map[string]any{"type": "error", "error": map[string]string{"type": code, "code": code, "message": message}})
}

func listen(config Config) (net.Listener, error) {
	if err := os.MkdirAll(filepath.Dir(config.Socket), 0o750); err != nil {
		return nil, err
	}
	if info, err := os.Lstat(config.Socket); err == nil {
		if info.Mode()&os.ModeSocket == 0 {
			return nil, errors.New("refusing to remove non-socket path")
		}
		if err := os.Remove(config.Socket); err != nil {
			return nil, err
		}
	} else if !os.IsNotExist(err) {
		return nil, err
	}
	listener, err := net.Listen("unix", config.Socket)
	if err != nil {
		return nil, err
	}
	if err := os.Chmod(config.Socket, 0o660); err != nil {
		listener.Close()
		return nil, err
	}
	return listener, nil
}
