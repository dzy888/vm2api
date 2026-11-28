package main

import (
	"bytes"
	"context"
	"crypto/sha256"
	"crypto/subtle"
	"encoding/json"
	"errors"
	"fmt"
	"io"
	"log"
	"net"
	"net/http"
	"net/url"
	"os"
	"path/filepath"
	"regexp"
	"strings"
	"sync"
	"time"
)

const maxRequestBytes = 32 << 20

var slotIDPattern = regexp.MustCompile(`^[A-Za-z0-9][A-Za-z0-9_-]{0,63}$`)

type Config struct {
	Socket                 string          `json:"socket"`
	InternalTokenFile      string          `json:"internal_token_file"`
	MagpieBaseURL          string          `json:"magpie_base_url"`
	MagpieAPIKeyFile       string          `json:"magpie_api_key_file"`
	MagpieAPIKeyFiles      map[string]string `json:"magpie_api_key_files,omitempty"`
	FirstByteTimeoutSecond int             `json:"first_byte_timeout_seconds"`
	StreamIdleTimeoutSecond int            `json:"stream_idle_timeout_seconds"`
	QueueWaitSecond        int             `json:"queue_wait_seconds"`
	DefaultMaxConcurrency  int             `json:"default_max_concurrency"`
	DefaultMaxRPM          int             `json:"default_max_rpm"`
	DefaultQueueLimit      int             `json:"default_queue_limit"`
	AllowDynamicSlots      bool            `json:"allow_dynamic_slots"`
	DefaultAllowedBackends []string        `json:"default_allowed_backends,omitempty"`
	Slots                  map[string]Slot `json:"slots"`
}

type Slot struct {
	Backend         string   `json:"backend"`
	Model           string   `json:"model"`
	AllowedBackends []string `json:"allowed_backends,omitempty"`
	MagpieAccount   string   `json:"magpie_account,omitempty"`
	MagpieKeyID     string   `json:"magpie_key_id,omitempty"`
	MaxConcurrency  int      `json:"max_concurrency,omitempty"`
	MaxRPM          int      `json:"max_rpm,omitempty"`
	QueueLimit      int      `json:"queue_limit,omitempty"`
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
	transport *http.Transport
	baseURL *url.URL
	limiterMu sync.Mutex
	limiters map[string]*upstreamLimiter
}

type upstreamLimiter struct {
	sem chan struct{}
	mu sync.Mutex
	requests []time.Time
	waiters int
}

type limiterSettings struct {
	maxConcurrency int
	maxRPM int
	queueLimit int
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
	if config.DefaultMaxConcurrency == 0 { config.DefaultMaxConcurrency = 2 }
	if config.DefaultMaxRPM == 0 { config.DefaultMaxRPM = 30 }
	if config.DefaultQueueLimit == 0 { config.DefaultQueueLimit = 16 }
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
	if config.FirstByteTimeoutSecond < 1 || config.FirstByteTimeoutSecond > 600 || config.StreamIdleTimeoutSecond < 1 || config.StreamIdleTimeoutSecond > 3600 || config.QueueWaitSecond < 1 || config.QueueWaitSecond > 3600 { return errors.New("first-byte, stream-idle and queue-wait timeouts must be configured within supported bounds") }
	if config.DefaultMaxConcurrency < 1 || config.DefaultMaxConcurrency > 1000 || config.DefaultMaxRPM < 1 || config.DefaultMaxRPM > 10000 || config.DefaultQueueLimit < 1 || config.DefaultQueueLimit > 10000 { return errors.New("default concurrency, RPM and queue limits must be positive and bounded") }
	if len(config.Slots) == 0 && !config.AllowDynamicSlots {
		return errors.New("at least one slot backend must be configured")
	}
	for _, backend := range config.DefaultAllowedBackends {
		if backend != "agy-cli" && backend != "claude" {
			return fmt.Errorf("unsupported default allowed backend %q", backend)
		}
	}
	for keyID, secretPath := range config.MagpieAPIKeyFiles {
		if !slotIDPattern.MatchString(keyID) || !filepath.IsAbs(secretPath) {
			return fmt.Errorf("invalid Magpie key mapping %q", keyID)
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
		if slot.MaxConcurrency < 0 || slot.MaxConcurrency > 1000 || slot.MaxRPM < 0 || slot.MaxRPM > 10000 || slot.QueueLimit < 0 || slot.QueueLimit > 10000 { return fmt.Errorf("slot %s has invalid limiter settings", id) }
	}
	return nil
}

func validSlotRoute(backend, model string) bool {
	prefix := backend + "/"
	if (backend != "agy-cli" && backend != "claude") || !strings.HasPrefix(model, prefix) || len(model) <= len(prefix) || len(model) > 140 {
		return false
	}
	for _, segment := range strings.Split(strings.TrimPrefix(model, prefix), "/") {
		if segment == "" || segment == "." || segment == ".." { return false }
	}
	return true
}

func newKernel(config Config, token, apiKey []byte) (*Kernel, error) {
	baseURL, err := url.Parse(config.MagpieBaseURL)
	if err != nil {
		return nil, err
	}
	transport := &http.Transport{ResponseHeaderTimeout: time.Duration(config.FirstByteTimeoutSecond) * time.Second}
	return &Kernel{
		config:  config,
		token:   token,
		apiKey:  apiKey,
		baseURL: baseURL,
		transport: transport,
		client:  &http.Client{Transport: transport},
		limiters: make(map[string]*upstreamLimiter),
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
	if account := r.Header.Get("x-magpie-account"); account != "" { slot.MagpieAccount = account }
	if keyID := r.Header.Get("x-magpie-key-id"); keyID != "" {
		if !slotIDPattern.MatchString(keyID) || k.config.MagpieAPIKeyFiles[keyID] == "" {
			writeError(w, http.StatusForbidden, "magpie_key_not_allowed", "Magpie gateway key ID is not configured")
			return
		}
		slot.MagpieKeyID = keyID
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
	ctx, cancel := context.WithCancel(r.Context())
	defer cancel()
	limiterKey := "slot:" + slotID
	if slot.MagpieAccount != "" { limiterKey = "account:" + strings.ToLower(slot.MagpieAccount) }
	if slot.MagpieKeyID != "" { limiterKey = "key:" + slot.MagpieKeyID } else { limiterKey += "|default-key" }
	settings := k.slotLimiterSettings(slot)
	if err := k.acquireUpstream(ctx, limiterKey, settings); err != nil {
		status, code := http.StatusServiceUnavailable, "magpie_queue_timeout"
		if errors.Is(err, errQueueFull) { status, code = http.StatusTooManyRequests, "magpie_queue_full" }
		writeError(w, status, code, "Magpie upstream account is at its configured concurrency/RPM limit")
		return
	}
	defer k.releaseUpstream(limiterKey)
	started := time.Now()
	upstream, err := http.NewRequestWithContext(ctx, http.MethodPost, upstreamURL.String(), bytes.NewReader(encoded))
	if err != nil {
		writeError(w, http.StatusBadGateway, "magpie_request_failed", "could not construct Magpie request")
		return
	}
	upstream.Header.Set("Content-Type", "application/json")
	upstream.Header.Set("Accept", "text/event-stream, application/json")
	magpieKey := k.apiKey
	if slot.MagpieKeyID != "" {
		magpieKey, err = readSecret(k.config.MagpieAPIKeyFiles[slot.MagpieKeyID])
		if err != nil || len(magpieKey) == 0 {
			writeError(w, http.StatusServiceUnavailable, "magpie_key_unavailable", "Magpie gateway key could not be read")
			return
		}
	}
	upstream.Header.Set("X-Goog-Api-Key", string(magpieKey))
	if slot.MagpieAccount != "" {
		upstream.Header.Set("X-Magpie-Account", slot.MagpieAccount)
	}
	upstream.Header.Set("X-Magpie-Session", sessionFromBody(body, envelope.RequestID))
	upstream.Header.Set("X-Magpie-Request-ID", envelope.RequestID)
	if envelope.RequestID != "" { upstream.Header.Set("X-Request-Id", envelope.RequestID) }
	response, err := k.client.Do(upstream)
	if err != nil {
		k.logTurn(envelope.RequestID, slotID, slot, 0, "magpie_unavailable", time.Since(started))
		writeError(w, http.StatusBadGateway, "magpie_unavailable", "Magpie gateway request failed")
		return
	}
	defer response.Body.Close()
	for _, name := range []string{"Content-Type", "Cache-Control", "X-Request-Id", "Retry-After"} {
		if value := response.Header.Get(name); value != "" {
			w.Header().Set(name, value)
		}
	}
	if provider := response.Header.Get("X-Magpie-Provider"); provider != "" { w.Header().Set("X-Magpie-Provider", provider) }
	if servedModel := response.Header.Get("X-Magpie-Model"); servedModel != "" { w.Header().Set("X-Magpie-Model", servedModel) }
	if !envelope.Stream {
		payload, readErr := io.ReadAll(io.LimitReader(response.Body, maxRequestBytes+1))
		if readErr != nil || len(payload) > maxRequestBytes {
			k.logTurn(envelope.RequestID, slotID, slot, http.StatusBadGateway, "magpie_response_invalid", time.Since(started))
			writeError(w, http.StatusBadGateway, "magpie_response_invalid", "Magpie returned an incomplete or oversized response")
			return
		}
		k.logTurn(envelope.RequestID, slotID, slot, response.StatusCode, responseErrorCode(payload), time.Since(started))
		w.WriteHeader(response.StatusCode)
		_, _ = w.Write(payload)
		return
	}
	w.WriteHeader(response.StatusCode)
	flusher, canFlush := w.(http.Flusher)
	buf := make([]byte, 32*1024)
	pending := make([]byte, 0, 64*1024)
	sawFinish := false
	sawError := false
	idle := time.Duration(k.config.StreamIdleTimeoutSecond) * time.Second
	idleTimer := time.AfterFunc(idle, cancel)
	defer idleTimer.Stop()
	firstByteTimer := time.AfterFunc(time.Duration(k.config.FirstByteTimeoutSecond)*time.Second, cancel)
	firstByte := true
	for {
		n, readErr := response.Body.Read(buf)
		if n > 0 {
			idleTimer.Reset(idle)
			if firstByte { firstByte = false; firstByteTimer.Stop() }
			pending = append(pending, buf[:n]...)
			for {
				frame, rest, ok := takeSSEFrame(pending)
				if !ok { break }
				pending = rest
				sawFinish = sawFinish || sseFrameHasFinish(frame)
				sawError = sawError || sseFrameIsError(frame)
			}
			if _, writeErr := w.Write(buf[:n]); writeErr != nil {
				return
			}
			if envelope.Stream && canFlush {
				flusher.Flush()
			}
		}
		if readErr != nil {
			if !errors.Is(readErr, io.EOF) {
				if ctx.Err() != nil && r.Context().Err() == nil && !sawError {
					frame := []byte("event: error\ndata: {\"status\":504,\"error\":{\"code\":\"gemini_inference_timeout\",\"message\":\"Magpie stream exceeded first-byte or idle timeout\"}}\n\n")
					_, _ = w.Write(frame)
					if canFlush { flusher.Flush() }
				}
				k.logTurn(envelope.RequestID, slotID, slot, http.StatusBadGateway, "magpie_stream_read_error", time.Since(started))
				return
			}
			if !sawFinish && !sawError {
				frame := []byte("event: error\ndata: {\"status\":502,\"error\":{\"code\":\"gemini_inference_invalid_output\",\"message\":\"Magpie stream ended before finishReason\"}}\n\n")
				_, _ = w.Write(frame)
				if canFlush { flusher.Flush() }
				k.logTurn(envelope.RequestID, slotID, slot, http.StatusBadGateway, "gemini_inference_invalid_output", time.Since(started))
			} else {
				k.logTurn(envelope.RequestID, slotID, slot, response.StatusCode, "", time.Since(started))
			}
			return
		}
	}
}

func (k *Kernel) logTurn(requestID, slotID string, slot Slot, status int, code string, elapsed time.Duration) {
	accountHash := ""
	if slot.MagpieAccount != "" {
		hash := sha256.Sum256([]byte(strings.ToLower(slot.MagpieAccount)))
		accountHash = fmt.Sprintf("%x", hash[:8])
	}
	log.Printf("magpie_turn request_id=%q slot=%q backend=%q model=%q account_hash=%q status=%d error=%q duration_ms=%d", requestID, slotID, slot.Backend, slot.Model, accountHash, status, code, elapsed.Milliseconds())
}

func responseErrorCode(payload []byte) string {
	var value struct { Error struct { Code string `json:"code"` } `json:"error"` }
	if json.Unmarshal(payload, &value) == nil { return value.Error.Code }
	return ""
}

var errQueueFull = errors.New("Magpie upstream queue is full")

func (k *Kernel) slotLimiterSettings(slot Slot) limiterSettings {
	settings := limiterSettings{maxConcurrency: k.config.DefaultMaxConcurrency, maxRPM: k.config.DefaultMaxRPM, queueLimit: k.config.DefaultQueueLimit}
	if slot.MaxConcurrency > 0 { settings.maxConcurrency = slot.MaxConcurrency }
	if slot.MaxRPM > 0 { settings.maxRPM = slot.MaxRPM }
	if slot.QueueLimit > 0 { settings.queueLimit = slot.QueueLimit }
	return settings
}

func (k *Kernel) getLimiter(key string, settings limiterSettings) *upstreamLimiter {
	k.limiterMu.Lock()
	defer k.limiterMu.Unlock()
	limiter := k.limiters[key]
	if limiter == nil || cap(limiter.sem) != settings.maxConcurrency {
		limiter = &upstreamLimiter{sem: make(chan struct{}, settings.maxConcurrency)}
		k.limiters[key] = limiter
	}
	return limiter
}

func (k *Kernel) acquireUpstream(ctx context.Context, key string, settings limiterSettings) error {
	limiter := k.getLimiter(key, settings)
	select {
	case limiter.sem <- struct{}{}:
	default:
		limiter.mu.Lock()
		if limiter.waiters >= settings.queueLimit {
			limiter.mu.Unlock()
			return errQueueFull
		}
		limiter.waiters++
		limiter.mu.Unlock()
		timer := time.NewTimer(time.Duration(k.config.QueueWaitSecond) * time.Second)
		defer timer.Stop()
		select {
		case limiter.sem <- struct{}{}:
			limiter.mu.Lock(); limiter.waiters--; limiter.mu.Unlock()
		case <-ctx.Done():
			limiter.mu.Lock(); limiter.waiters--; limiter.mu.Unlock()
			return ctx.Err()
		case <-timer.C:
			limiter.mu.Lock(); limiter.waiters--; limiter.mu.Unlock()
			return context.DeadlineExceeded
		}
	}
	if settings.maxRPM > 0 {
		for {
			limiter.mu.Lock()
			now := time.Now()
			cutoff := now.Add(-time.Minute)
			firstValid := 0
			for firstValid < len(limiter.requests) && !limiter.requests[firstValid].After(cutoff) { firstValid++ }
			limiter.requests = append(limiter.requests[:0], limiter.requests[firstValid:]...)
			if len(limiter.requests) < settings.maxRPM {
				limiter.requests = append(limiter.requests, now)
				limiter.mu.Unlock()
				return nil
			}
			wait := time.Until(limiter.requests[0].Add(time.Minute))
			limiter.mu.Unlock()
			timer := time.NewTimer(wait)
			select {
			case <-ctx.Done(): timer.Stop(); k.releaseUpstream(key); return ctx.Err()
			case <-timer.C:
			}
		}
	}
	return nil
}

func (k *Kernel) releaseUpstream(key string) {
	k.limiterMu.Lock(); limiter := k.limiters[key]; k.limiterMu.Unlock()
	if limiter == nil { return }
	select { case <-limiter.sem: default: }
}

func sessionFromBody(body map[string]json.RawMessage, fallback string) string {
	for _, key := range []string{"conversation_id", "conversationId"} {
		var id string
		if json.Unmarshal(body[key], &id) == nil && strings.TrimSpace(id) != "" {
			if len(id) > 128 { return id[:128] }
			return id
		}
	}
	if fallback == "" { return "vm2api-magpie-default" }
	if len(fallback) > 128 { return fallback[:128] }
	return fallback
}

func takeSSEFrame(pending []byte) ([]byte, []byte, bool) {
	lf := bytes.Index(pending, []byte("\n\n"))
	crlf := bytes.Index(pending, []byte("\r\n\r\n"))
	if crlf >= 0 && (lf < 0 || crlf < lf) { return pending[:crlf+4], pending[crlf+4:], true }
	if lf >= 0 { return pending[:lf+2], pending[lf+2:], true }
	return nil, pending, false
}

func sseFrameHasFinish(frame []byte) bool {
	var payload []byte
	for _, line := range bytes.Split(frame, []byte("\n")) {
		line = bytes.TrimSuffix(line, []byte("\r"))
		if bytes.HasPrefix(line, []byte("data:")) {
			value := bytes.TrimSpace(bytes.TrimPrefix(line, []byte("data:")))
			if bytes.Equal(value, []byte("[DONE]")) { return true }
			payload = append(payload, value...)
		}
	}
	var decoded map[string]json.RawMessage
	if json.Unmarshal(payload, &decoded) != nil { return false }
	var response map[string]json.RawMessage
	if raw := decoded["response"]; len(raw) > 0 { _ = json.Unmarshal(raw, &response) } else { response = decoded }
	var candidates []struct { FinishReason string `json:"finishReason"` }
	if json.Unmarshal(response["candidates"], &candidates) != nil { return false }
	for _, candidate := range candidates { if candidate.FinishReason != "" && candidate.FinishReason != "FINISH_REASON_UNSPECIFIED" { return true } }
	return false
}

func sseFrameIsError(frame []byte) bool {
	return bytes.Contains(frame, []byte("event: error"))
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
