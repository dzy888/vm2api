// 0025b9a0 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::ensure_session::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::ensure_session::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::ensure_session::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  
  switch(*(undefined1 *)(param_1 + 0xba)) {
  case 3:
    if (*(char *)(param_1 + 0x1b0) != '\x03') {
      if (*(char *)(param_1 + 0x1b0) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xd0);
      }
      goto LAB_0025baf6;
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
              (param_1 + 0x138);
    *(undefined1 *)(param_1 + 0x1b1) = 0;
    if (*(char *)(param_1 + 0xb9) == '\0') goto LAB_0025bbb8;
    goto LAB_0025bbb0;
  case 4:
    if (*(char *)(param_1 + 0x1b0) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                (param_1 + 0x138);
      *(undefined1 *)(param_1 + 0x1b1) = 0;
    }
    else if (*(char *)(param_1 + 0x1b0) == '\0') {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xd0);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x1b8);
    *(undefined1 *)(param_1 + 0xb8) = 0;
    cVar1 = *(char *)(param_1 + 0xb9);
    break;
  case 5:
    if (*(char *)(param_1 + 400) == '\x03') {
      if ((*(longlong *)(param_1 + 0x168) != -1) && (*(longlong *)(param_1 + 0x168) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0025b9c9::switchdataD_00182294,1);
      }
      if ((*(longlong *)(param_1 + 0x150) != -1) && (*(longlong *)(param_1 + 0x150) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x138) != -1) && (*(longlong *)(param_1 + 0x138) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x198);
LAB_0025baf6:
    cVar1 = *(char *)(param_1 + 0xb9);
    break;
  case 6:
    if (*(char *)(param_1 + 0x1b0) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                (param_1 + 0x138);
      *(undefined1 *)(param_1 + 0x1b1) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      return;
    }
    param_1 = param_1 + 0xd0;
    goto LAB_0025bb1f;
  case 7:
    if (*(char *)(param_1 + 400) == '\x03') {
      if ((*(longlong *)(param_1 + 0x168) != -1) && (*(longlong *)(param_1 + 0x168) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0025b9c9::switchdataD_00182294,1);
      }
      if ((*(longlong *)(param_1 + 0x150) != -1) && (*(longlong *)(param_1 + 0x150) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x138) != -1) && (*(longlong *)(param_1 + 0x138) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    param_1 = param_1 + 0x198;
LAB_0025bb1f:
    <serde_json[dc3825464c436029]::value::Value>(param_1);
    return;
  default:
    return;
  }
  if (cVar1 != '\0') {
LAB_0025bbb0:
    <serde_json[dc3825464c436029]::value::Value>(param_1);
  }
LAB_0025bbb8:
  *(undefined1 *)(param_1 + 0xb9) = 0;
  return;
}


