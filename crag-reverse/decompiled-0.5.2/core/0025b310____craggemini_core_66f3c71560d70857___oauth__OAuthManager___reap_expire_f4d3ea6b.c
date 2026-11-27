// 0025b310 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::reap_expired::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0xea1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x2c0);
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    *(undefined1 *)(param_1 + 0xea0) = 0;
  }
  return;
}


