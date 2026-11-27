// 002f39e0 <craggemini_core[66f3c71560d70857]::server::handle_account_upsert::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_account_upsert::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_account_upsert::_closure_0_>(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x108);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::upsert_account::_closure_0_>
              (param_1 + 0x2b0);
  }
  *(undefined1 *)(param_1 + 0x101) = 0;
  return;
}


