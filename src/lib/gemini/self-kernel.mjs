import fs from 'node:fs'
import path from 'node:path'

/**
 * A reconstructed ("self") kernel is installed when the payload carries the
 * `unpack-note.md` member that `kernel-self/install` writes with its build
 * identity. The official signed release does not ship one.
 */
let cached = { key: null, present: false, at: 0 }

export function isSelfKernel(projectRoot) {
  if (!projectRoot) return false
  const marker = path.join(projectRoot, 'share', 'gemini', 'current', 'unpack-note.md')
  const now = Date.now()
  if (cached.key === marker && now - cached.at < 1000) return cached.present
  let present = false
  try {
    present = fs.statSync(marker).isFile()
  } catch {
    present = false
  }
  cached = { key: marker, present, at: now }
  return present
}

/**
 * Effective payload mode for seat accounting. A self kernel keeps the official
 * package format, so the host still reports `crag_subscription`; it must not
 * auto-bind a CRAG seat though, hence the separate `self_kernel` mode.
 */
export function effectivePayloadMode(view, projectRoot) {
  if (view?.payload_mode === 'crag_subscription') {
    return isSelfKernel(projectRoot) ? 'self_kernel' : 'crag_subscription'
  }
  return 'legacy_release'
}
