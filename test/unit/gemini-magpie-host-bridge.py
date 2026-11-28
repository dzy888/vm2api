import json
import socketserver
import tempfile
import threading
import time
from importlib.util import module_from_spec, spec_from_file_location
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
spec = spec_from_file_location("gemini_magpie_host", ROOT / "scripts/gemini-host.py")
host_module = module_from_spec(spec)
spec.loader.exec_module(host_module)
native_spec = spec_from_file_location("gemini_magpie_native", ROOT / "scripts/gemini_host_native.py")
native_module = module_from_spec(native_spec)
native_spec.loader.exec_module(native_module)
host_module.native_module = lambda: native_module

SSE = b'data: {"candidates":[{"content":{"parts":[{"text":"through-magpie"}]},"finishReason":"STOP"}]}\n\n'
observed = {}


class UnixServer(socketserver.ThreadingMixIn, socketserver.UnixStreamServer):
    daemon_threads = True


class Handler(socketserver.StreamRequestHandler):
    def handle(self):
        request = self.rfile.readline().decode("ascii").strip()
        headers = {}
        while True:
            line = self.rfile.readline()
            if line in (b"\r\n", b"\n", b""):
                break
            name, _, value = line.decode("ascii").partition(":")
            headers[name.lower()] = value.strip()
        body = self.rfile.read(int(headers["content-length"]))
        observed["request"] = request
        observed["headers"] = headers
        observed["body"] = json.loads(body)
        self.wfile.write(
            b"HTTP/1.1 200 OK\r\n"
            b"Content-Type: text/event-stream\r\n"
            b"Content-Length: "
            + str(len(SSE)).encode("ascii")
            + b"\r\nConnection: close\r\n\r\n"
            + SSE
        )
        self.wfile.flush()


class StreamHandler:
    def __init__(self):
        self.started = False
        self.chunks = []

    def begin_sse(self):
        self.started = True

    def write_sse_chunk(self, chunk):
        self.chunks.append(chunk)


with tempfile.TemporaryDirectory() as temporary:
    socket_path = str(Path(temporary) / "kernel.sock")
    server = UnixServer(socket_path, Handler)
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        host = host_module.Host.__new__(host_module.Host)
        host.magpie_kernel_socket = socket_path
        host.magpie_kernel_token_file = "unused-in-this-fixture"
        host._read_magpie_kernel_token = lambda _path: "0123456789abcdefghijklmn"
        handler = StreamHandler()
        context = {
            "identifier": "slot-17",
            "request_id": "request-123",
            "infer_body": {"contents": [{"role": "user", "parts": [{"text": "hello"}]}]},
            "magpie_backend": "claude",
            "magpie_model": "claude/claude-sonnet-5-5",
            "entry": {},
        }
        state, error = host._stream_magpie_kernel(context, handler)
        assert (state, error) == ("completed", None)
        assert handler.started
        assert b"".join(handler.chunks) == SSE
        assert observed["request"] == "POST /internal/v1/accounts/slot-17/messages HTTP/1.1"
        assert observed["headers"]["x-kin-internal-token"] == "0123456789abcdefghijklmn"
        assert observed["headers"]["x-magpie-backend"] == "claude"
        assert observed["headers"]["x-magpie-model"] == "claude/claude-sonnet-5-5"
        assert observed["body"]["body"] == context["infer_body"]
        assert callable(context["entry"]["cancel_fn"])

        run = host_module.MagpieTestChatRun(
            host,
            {"id": "slot-17"},
            "gemini-3-flash",
            "panel test",
            "claude",
            "claude/claude-sonnet-5-5",
        )
        deadline = time.monotonic() + 3
        result = run.poll()
        while result["state"] == "running" and time.monotonic() < deadline:
            time.sleep(0.01)
            result = run.poll()
        assert result["state"] == "completed", result
        assert result["text"] == "through-magpie", result
        run.close()
    finally:
        server.shutdown()
        server.server_close()
        thread.join(timeout=2)

print("gemini-magpie-host-bridge: PASS")
