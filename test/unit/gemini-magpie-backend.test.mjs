import assert from 'node:assert/strict'
import { Readable } from 'node:stream'
import test from 'node:test'
import { createGeminiSlotPrefs } from '../../src/lib/gemini/slot-prefs.mjs'
import { createGeminiScheduler } from '../../src/lib/gemini/scheduler.mjs'
import { createMockSchedulerRuntime } from '../helpers/mock-scheduler-runtime.mjs'

function sseResponse(frame) {
  const stream = new Readable({ read() {} })
  stream.statusCode = 200
  stream.headers = { 'content-type': 'text/event-stream' }
  queueMicrotask(() => {
    stream.push(frame)
    stream.push(null)
  })
  return stream
}

test('Gemini slot stores a Magpie backend/model route and resets to native', () => {
  const prefs = createGeminiSlotPrefs()
  assert.equal(prefs.resolved('env-a').inference_backend, 'native')

  prefs.patch('env-a', {
    inference_backend: 'agy-cli',
    magpie_model: 'agy-cli/gemini-4-flash',
  })
  assert.equal(prefs.resolved('env-a').inference_backend, 'agy-cli')
  assert.equal(prefs.resolved('env-a').magpie_model, 'agy-cli/gemini-4-flash')

  prefs.patch('env-a', {
    inference_backend: 'claude',
    magpie_model: 'claude/claude-sonnet-5-5',
  })
  assert.equal(prefs.resolved('env-a').inference_backend, 'claude')
  assert.equal(prefs.resolved('env-a').magpie_model, 'claude/claude-sonnet-5-5')

  prefs.patch('env-a', { inference_backend: 'native', magpie_model: null })
  assert.equal(prefs.resolved('env-a').inference_backend, 'native')
  assert.equal(prefs.resolved('env-a').magpie_model, null)
})

test('Gemini slot rejects a model from another Magpie provider', () => {
  const prefs = createGeminiSlotPrefs()
  assert.throws(
    () => prefs.patch('env-a', { inference_backend: 'claude', magpie_model: 'agy-cli/gemini-4-flash' }),
    { code: 'gemini_invalid_magpie_model', status: 400 },
  )
})

test('Gemini scheduler forwards each slot Magpie backend/model to the host', async () => {
  const slotPrefs = createGeminiSlotPrefs()
  slotPrefs.patch('env-magpie', {
    inference_backend: 'claude',
    magpie_model: 'claude/claude-sonnet-5-5',
  })
  let inferenceRequest = null
  const scheduler = createGeminiScheduler({
    schedulerRuntime: createMockSchedulerRuntime(),
    slotPrefs,
    callHost: async (operation) => {
      if (operation === 'list') {
        return {
          payload_state: 'installed',
          environments: [
            {
              id: 'env-magpie',
              proxy_id: 'proxy-1',
              auth_state: 'authorized',
              auth_method: 'oauth',
              models_discovered: true,
              models: ['gemini-3-flash'],
              capabilities: ['streaming', 'native_tui'],
            },
          ],
        }
      }
      if (operation === 'get') return { id: 'env-magpie', proxy_id: 'proxy-1', auth_method: 'oauth' }
      throw new Error(`unexpected operation ${operation}`)
    },
    callHostStream: async (_operation, payload) => {
      inferenceRequest = payload
      return sseResponse(
        `data: ${JSON.stringify({
          candidates: [{ content: { role: 'model', parts: [{ text: 'routed' }] }, finishReason: 'STOP' }],
          usageMetadata: { promptTokenCount: 1, candidatesTokenCount: 1, totalTokenCount: 2 },
        })}\n\n`,
      )
    },
    resolveProxy: () => 'socks5h://127.0.0.1:1080',
  })

  const result = await scheduler.stream({
    model: 'gemini-3-flash',
    geminiBody: { contents: [{ role: 'user', parts: [{ text: 'hello' }] }] },
    apiKeyRecord: { id: 'key-magpie', group_type: 'gemini' },
  })
  assert.equal(result.text, 'routed')
  assert.equal(inferenceRequest.id, 'env-magpie')
  assert.equal(inferenceRequest.magpie_backend, 'claude')
  assert.equal(inferenceRequest.magpie_model, 'claude/claude-sonnet-5-5')
})
