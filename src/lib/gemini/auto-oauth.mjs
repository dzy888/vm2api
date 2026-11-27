/**
 * Pure-HTTP Google OAuth for the Antigravity CLI (`agy`) — no browser.
 *
 * Uses the Android `gpsoauth` endpoint with the account's Google **app
 * password**, optionally through an HTTP/SOCKS5 proxy, and returns a
 * short-lived access token that is installed as an access-only credential.
 */

import { randomBytes } from 'node:crypto'
import net from 'node:net'
import tls from 'node:tls'

export const ANTIGRAVITY_SCOPES = [
  'https://www.googleapis.com/auth/cloud-platform',
  'https://www.googleapis.com/auth/userinfo.email',
  'https://www.googleapis.com/auth/userinfo.profile',
  'https://www.googleapis.com/auth/cclog',
  'https://www.googleapis.com/auth/experimentsandconfigs',
  'https://www.googleapis.com/auth/aicode',
  'openid',
].join(' ')

const GPSOAUTH_URL = 'https://android.clients.google.com/auth'
const GPSOAUTH_HOST = 'android.clients.google.com'
const GPSOAUTH_PATH = '/auth'
const MAX_RESPONSE_BYTES = 64 * 1024
const GPSOAUTH_UA = 'GoogleAuth/1.4 (Linux; U; Android 9; en_US)'
const CONNECT_TIMEOUT_MS = 20_000

export function autoOAuthError(code, message) {
  return Object.assign(new Error(message || code), { code })
}

/** Parse `socks5h://user:pass@host:port` / `http://...` into a proxy descriptor. */
export function parseProxy(proxyUrl) {
  if (!proxyUrl) return null
  let url
  try {
    url = new URL(proxyUrl)
  } catch {
    throw autoOAuthError('gemini_auto_oauth_proxy_invalid', '代理地址无效')
  }
  const scheme = url.protocol.replace(':', '')
  if (!['socks5h', 'socks5', 'http'].includes(scheme))
    throw autoOAuthError('gemini_auto_oauth_proxy_invalid', '仅支持 socks5h / socks5 / http 代理')
  const port = Number(url.port)
  if (!url.hostname || !Number.isInteger(port) || port <= 0 || port > 65535)
    throw autoOAuthError('gemini_auto_oauth_proxy_invalid', '代理地址缺少端口')
  return {
    scheme,
    host: url.hostname,
    port,
    username: url.username ? decodeURIComponent(url.username) : '',
    password: url.password ? decodeURIComponent(url.password) : '',
  }
}

/** Open a TCP tunnel to host:port through the given proxy. */
async function openTunnel(proxy, host, port) {
  const socket = await new Promise((resolve, reject) => {
    const s = net.connect({ host: proxy.host, port: proxy.port })
    const timer = setTimeout(() => {
      s.destroy()
      reject(autoOAuthError('gemini_auto_oauth_proxy_timeout', '连接代理超时'))
    }, CONNECT_TIMEOUT_MS)
    s.once('connect', () => {
      clearTimeout(timer)
      resolve(s)
    })
    s.once('error', (error) => {
      clearTimeout(timer)
      reject(autoOAuthError('gemini_auto_oauth_proxy_error', `连接代理失败：${error.message}`))
    })
  })

  if (proxy.scheme === 'http') {
    const auth =
      proxy.username || proxy.password
        ? `Proxy-Authorization: Basic ${Buffer.from(`${proxy.username}:${proxy.password}`).toString('base64')}\r\n`
        : ''
    socket.write(`CONNECT ${host}:${port} HTTP/1.1\r\nHost: ${host}:${port}\r\n${auth}\r\n`)
    const read = socketReader(socket)
    let head = ''
    while (!head.includes('\r\n\r\n')) {
      const chunk = await read(1)
      head += chunk.toString('latin1')
      if (head.length > 8192) throw autoOAuthError('gemini_auto_oauth_proxy_error', 'HTTP 代理响应过大')
    }
    if (!/^HTTP\/1\.[01] 200/.test(head))
      throw autoOAuthError('gemini_auto_oauth_proxy_error', 'HTTP 代理 CONNECT 失败')
    return socket
  }

  // SOCKS5 handshake (RFC 1928), user/pass auth (RFC 1929) when configured.
  const useAuth = Boolean(proxy.username || proxy.password)
  socket.write(Buffer.from(useAuth ? [5, 2, 0, 2] : [5, 1, 0]))
  const read = socketReader(socket)
  const greeting = await read(2)
  if (greeting[0] !== 5 || greeting[1] === 0xff)
    throw autoOAuthError('gemini_auto_oauth_proxy_error', 'SOCKS5 代理拒绝认证方式')
  if (greeting[1] === 2) {
    const user = Buffer.from(proxy.username)
    const pass = Buffer.from(proxy.password)
    socket.write(Buffer.concat([Buffer.from([1, user.length]), user, Buffer.from([pass.length]), pass]))
    const reply = await read(2)
    if (reply[1] !== 0) throw autoOAuthError('gemini_auto_oauth_proxy_error', 'SOCKS5 用户名密码错误')
  }
  const hostBytes = Buffer.from(host)
  socket.write(
    Buffer.concat([
      Buffer.from([5, 1, 0, 3, hostBytes.length]),
      hostBytes,
      Buffer.from([(port >> 8) & 0xff, port & 0xff]),
    ]),
  )
  const head = await read(4)
  if (head[1] !== 0) throw autoOAuthError('gemini_auto_oauth_proxy_error', `SOCKS5 连接失败：${head[1]}`)
  const addrLen = head[3] === 1 ? 4 : head[3] === 4 ? 16 : (await read(1))[0]
  await read(addrLen + 2)
  return socket
}

function socketReader(socket, timeoutMs = CONNECT_TIMEOUT_MS) {
  let buffer = Buffer.alloc(0)
  let ended = false
  let error = null
  socket.on('data', (chunk) => {
    buffer = Buffer.concat([buffer, chunk])
  })
  socket.on('end', () => {
    ended = true
  })
  socket.on('error', (err) => {
    error = err
    ended = true
  })
  return async (size) => {
    const deadline = Date.now() + timeoutMs
    while (buffer.length < size) {
      if (error) throw autoOAuthError('gemini_auto_oauth_proxy_error', error.message)
      if (ended) throw autoOAuthError('gemini_auto_oauth_proxy_error', '代理提前关闭连接')
      if (Date.now() > deadline) throw autoOAuthError('gemini_auto_oauth_proxy_timeout', '代理响应超时')
      await new Promise((resolve) => setTimeout(resolve, 5))
    }
    const out = buffer.subarray(0, size)
    buffer = buffer.subarray(size)
    return out
  }
}

/** POST the gpsoauth form and return the raw `Key=Value` body. */
async function postForm(body, proxy) {
  const payload = body.toString()
  const request = [
    `POST ${GPSOAUTH_PATH} HTTP/1.1`,
    `Host: ${GPSOAUTH_HOST}`,
    'Content-Type: application/x-www-form-urlencoded',
    `User-Agent: ${GPSOAUTH_UA}`,
    `Content-Length: ${Buffer.byteLength(payload)}`,
    'Connection: close',
    '',
    payload,
  ].join('\r\n')

  if (!proxy) {
    const response = await fetch(GPSOAUTH_URL, {
      method: 'POST',
      headers: {
        'content-type': 'application/x-www-form-urlencoded',
        'user-agent': GPSOAUTH_UA,
      },
      body,
      signal: AbortSignal.timeout(CONNECT_TIMEOUT_MS),
    })
    const text = await response.text()
    // gpsoauth reports bad credentials as HTTP 403 with `Error=...` in the body.
    if (!response.ok && response.status !== 403)
      throw autoOAuthError('gemini_auto_oauth_failed', `gpsoauth HTTP ${response.status}`)
    return text
  }

  const socket = await openTunnel(proxy, GPSOAUTH_HOST, 443)
  const secure = tls.connect({ socket, servername: GPSOAUTH_HOST, rejectUnauthorized: true })
  await new Promise((resolve, reject) => {
    secure.once('secureConnect', resolve)
    secure.once('error', (error) => reject(autoOAuthError('gemini_auto_oauth_proxy_error', error.message)))
    setTimeout(() => reject(autoOAuthError('gemini_auto_oauth_proxy_timeout', 'TLS 握手超时')), CONNECT_TIMEOUT_MS)
  })
  secure.write(request)
  const chunks = []
  let total = 0
  await new Promise((resolve, reject) => {
    secure.on('data', (chunk) => {
      total += chunk.length
      if (total > MAX_RESPONSE_BYTES) {
        secure.destroy()
        reject(autoOAuthError('gemini_auto_oauth_failed', 'gpsoauth 响应过大'))
        return
      }
      chunks.push(chunk)
    })
    secure.once('end', resolve)
    secure.once('error', (error) => reject(autoOAuthError('gemini_auto_oauth_proxy_error', error.message)))
  })
  const raw = Buffer.concat(chunks).toString('latin1')
  const split = raw.indexOf('\r\n\r\n')
  const head = split >= 0 ? raw.slice(0, split) : raw
  const status = /^HTTP\/1\.[01] (\d+)/.exec(head)
  const code = status ? Number(status[1]) : 0
  if (code !== 200 && code !== 403)
    throw autoOAuthError('gemini_auto_oauth_failed', `gpsoauth HTTP 状态异常`)
  return split >= 0 ? raw.slice(split + 4) : ''
}

export function parseGpsoauthResponse(text) {
  const fields = new Map()
  for (const line of String(text).split('\n')) {
    const index = line.indexOf('=')
    if (index > 0) fields.set(line.slice(0, index), line.slice(index + 1).replace(/\r$/, ''))
  }
  return fields
}

/**
 * Sign in with a Google app password. Returns `{ access_token, expiry_timestamp }`.
 */
export async function gpsoauthLogin({
  email,
  appPassword,
  scopes = ANTIGRAVITY_SCOPES,
  androidId = randomBytes(8).toString('hex'),
  proxyUrl = '',
}) {
  if (typeof email !== 'string' || !email.includes('@'))
    throw autoOAuthError('gemini_auto_oauth_bad_input', '邮箱无效')
  if (typeof appPassword !== 'string' || !appPassword.trim())
    throw autoOAuthError('gemini_auto_oauth_bad_input', '应用专用密码为空')
  const proxy = parseProxy(proxyUrl)
  const body = new URLSearchParams({
    Email: email,
    Passwd: appPassword.replace(/\s+/g, ''),
    service: `oauth2:${scopes}`,
    app: 'com.google.android.gms',
    client_sig: '38918a453d0719930b50bf76b62b3deafa5e5a25',
    sdk_version: '28',
    device_country: 'us',
    operatorCountry: 'us',
    lang: 'en',
    androidId,
  })
  const fields = parseGpsoauthResponse(await postForm(body, proxy))
  const error = fields.get('Error')
  if (error) {
    const code =
      error === 'BadAuthentication'
        ? 'gemini_auto_oauth_password_rejected'
        : 'gemini_auto_oauth_failed'
    throw autoOAuthError(code, `Google 拒绝应用专用密码登录：${error}`)
  }
  const token = fields.get('Auth')
  if (!token) throw autoOAuthError('gemini_auto_oauth_exchange_failed', 'gpsoauth 未返回访问令牌')
  const expiryRaw = Number(fields.get('Expiry'))
  const expiry =
    Number.isFinite(expiryRaw) && expiryRaw > 0
      ? Math.floor(expiryRaw > 10_000_000_000 ? expiryRaw / 1000 : expiryRaw)
      : Math.floor(Date.now() / 1000) + 3600
  return { access_token: token, expiry_timestamp: expiry }
}
