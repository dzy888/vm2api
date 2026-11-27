// 002e55f0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0}::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_::_closure_0_>>
          (char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != '\0') {
    if (param_1[0x3be0] == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::handle::_closure_0_>(param_1 + 0x108);
      plVar1 = *(longlong **)(param_1 + 0x100);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
        drop_slow(param_1 + 0x100);
        return;
      }
    }
    else if (param_1[0x3be0] == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x100);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
        drop_slow(param_1 + 0x100);
      }
      <http[56314f485c23ccf6]::request::Request<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
                (param_1 + 8);
      return;
    }
  }
  return;
}


