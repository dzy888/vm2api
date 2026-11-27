import assert from 'node:assert/strict'
import test from 'node:test'

import { parseGpsoauthResponse, parseProxy } from '../../src/lib/gemini/auto-oauth.mjs'

test('proxy URLs map to HTTP/SOCKS descriptors', () => {
  assert.deepEqual(parseProxy('socks5h://user:p%40ss@127.0.0.1:1080'), {
    scheme: 'socks5h',
    host: '127.0.0.1',
    port: 1080,
    username: 'user',
    password: 'p@ss',
  })
  assert.deepEqual(parseProxy('http://1.2.3.4:3128'), {
    scheme: 'http',
    host: '1.2.3.4',
    port: 3128,
    username: '',
    password: '',
  })
  assert.equal(parseProxy(''), null)
  assert.throws(() => parseProxy('ftp://1.2.3.4:1'), /代理/)
  assert.throws(() => parseProxy('socks5h://1.2.3.4'), /代理/)
})

test('gpsoauth response parsing keeps Auth/Expiry and surfaces Error', () => {
  const ok = parseGpsoauthResponse('Auth=ya29.token\nExpiry=1795780000000\nEmail=user@example.com\n')
  assert.equal(ok.get('Auth'), 'ya29.token')
  assert.equal(ok.get('Expiry'), '1795780000000')
  const bad = parseGpsoauthResponse('Error=BadAuthentication\n')
  assert.equal(bad.get('Error'), 'BadAuthentication')
})
