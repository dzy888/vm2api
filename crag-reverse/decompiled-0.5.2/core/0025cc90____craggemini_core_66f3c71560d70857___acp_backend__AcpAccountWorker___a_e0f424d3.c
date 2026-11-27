// 0025cc90 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::apply_session_config::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::apply_session_config::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::apply_session_config::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xd1);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x238) != '\x03') goto LAB_0025cd9c;
    if (*(char *)(param_1 + 0x230) != '\x03') {
      if (*(char *)(param_1 + 0x230) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x150);
      }
      goto LAB_0025cd9c;
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
              (param_1 + 0x1b8);
  }
  else {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x250) == '\x03') {
        if (*(char *)(param_1 + 0x248) == '\x03') {
          <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                    (param_1 + 0x1d0);
          *(undefined1 *)(param_1 + 0x249) = 0;
        }
        else if (*(char *)(param_1 + 0x248) == '\0') {
          <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x168);
        }
      }
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      *(undefined1 *)(param_1 + 0xd0) = 0;
      goto LAB_0025cd9c;
    }
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x238) != '\x03') goto LAB_0025cd9c;
    if (*(char *)(param_1 + 0x230) != '\x03') {
      if (*(char *)(param_1 + 0x230) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x150);
      }
      goto LAB_0025cd9c;
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
              (param_1 + 0x1b8);
  }
  *(undefined1 *)(param_1 + 0x231) = 0;
LAB_0025cd9c:
  <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>(param_1 + 0x10);
  return;
}


