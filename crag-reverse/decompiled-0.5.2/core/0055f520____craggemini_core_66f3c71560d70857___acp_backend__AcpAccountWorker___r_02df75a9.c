// 0055f520 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x10);
    return;
  }
  if (*(char *)(param_1 + 0xf0) == '\x03') {
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
              (param_1 + 0xe8);
    if (*(longlong *)(param_1 + 0x78) != 2) {
      if (*(longlong *)(param_1 + 0x78) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x80);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x88);
    }
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  return;
}


