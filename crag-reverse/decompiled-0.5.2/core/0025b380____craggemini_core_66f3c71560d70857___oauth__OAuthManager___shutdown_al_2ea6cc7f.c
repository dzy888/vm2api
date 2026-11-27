// 0025b380 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::shutdown_all::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::shutdown_all::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::shutdown_all::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0xea0) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
              (param_1 + 0x2c8);
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 8);
    return;
  }
  return;
}


