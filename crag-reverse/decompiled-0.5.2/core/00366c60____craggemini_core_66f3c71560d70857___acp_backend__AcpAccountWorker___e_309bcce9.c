// 00366c60 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::_closure_0_>
          (longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  switch(*(undefined1 *)(param_1 + 0x3f0)) {
  case 0:
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1);
    return;
  default:
    goto switchD_00366c8b_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x4c8) == '\x03') {
      if ((*(longlong *)(param_1 + 0x4a0) != -1) && (*(longlong *)(param_1 + 0x4a0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00366c8b::switchdataD_00191e68,1);
      }
      if ((*(longlong *)(param_1 + 0x488) != -1) && (*(longlong *)(param_1 + 0x488) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x470) != -1) && (*(longlong *)(param_1 + 0x470) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    goto LAB_00366f8e;
  case 4:
    if (4 < *(byte *)(param_1 + 0x4b2) - 3) goto switchD_00366cc6_default;
    switch((uint)*(byte *)(param_1 + 0x4b2)) {
    case 3:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                (param_1 + 0x4b8);
      goto LAB_003670bb;
    case 4:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                (param_1 + 0x4b8);
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x5b0);
      *(undefined1 *)(param_1 + 0x4b0) = 0;
      cVar2 = *(char *)(param_1 + 0x4b1);
      goto joined_r0x003670fd;
    case 5:
      if (*(char *)(param_1 + 0x588) == '\x03') {
        if ((*(longlong *)(param_1 + 0x560) != -1) && (*(longlong *)(param_1 + 0x560) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00366cc6::switchdataD_00191e88,1);
        }
        if ((*(longlong *)(param_1 + 0x548) != -1) && (*(longlong *)(param_1 + 0x548) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x530) != -1) && (*(longlong *)(param_1 + 0x530) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x590);
LAB_003670bb:
      cVar2 = *(char *)(param_1 + 0x4b1);
joined_r0x003670fd:
      if (cVar2 != '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x3f8);
      }
      *(undefined1 *)(param_1 + 0x4b1) = 0;
      break;
    case 6:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                (param_1 + 0x4b8);
      break;
    case 7:
      if (*(char *)(param_1 + 0x588) == '\x03') {
        if ((*(longlong *)(param_1 + 0x560) != -1) && (*(longlong *)(param_1 + 0x560) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00366cc6::switchdataD_00191e88,1);
        }
        if ((*(longlong *)(param_1 + 0x548) != -1) && (*(longlong *)(param_1 + 0x548) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x530) != -1) && (*(longlong *)(param_1 + 0x530) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x590);
    }
    goto switchD_00366cc6_default;
  case 5:
    cVar2 = *(char *)(param_1 + 0x4c9);
    if (cVar2 != '\x05') {
      if (cVar2 == '\x04') {
        if (*(char *)(param_1 + 0x648) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                    (param_1 + 0x550);
        }
        if (*(longlong *)(param_1 + 0x4d0) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0x4c8) = 0;
        goto LAB_00366f48;
      }
      if (cVar2 == '\x03') {
        if (*(char *)(param_1 + 0x630) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                    (param_1 + 0x538);
        }
        goto LAB_00366f48;
      }
      goto LAB_00366ee9;
    }
    if (*(char *)(param_1 + 0x630) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
                (param_1 + 0x538);
    }
LAB_00366f48:
    <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>(param_1 + 0x408);
    cVar2 = *(char *)(param_1 + 0x3f4);
    goto joined_r0x00366ef0;
  case 6:
    if (*(char *)(param_1 + 0x4d0) == '\x03') {
      if ((*(longlong *)(param_1 + 0x4a8) != -1) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00366c8b::switchdataD_00191e68,1);
      }
      if ((*(longlong *)(param_1 + 0x490) != -1) && (*(longlong *)(param_1 + 0x490) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x478) != -1) && (*(longlong *)(param_1 + 0x478) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x4f8);
    break;
  case 7:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
              (param_1 + 0x3f8);
    *(undefined1 *)(param_1 + 0x3f6) = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x3e0);
  for (lVar5 = *(longlong *)(param_1 + 1000) + 1; lVar5 != 1; lVar5 = lVar5 + -1) {
    <serde_json[dc3825464c436029]::value::Value>(lVar4);
    lVar4 = lVar4 + 0x20;
  }
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x3d8) << 5;
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(char *)(param_1 + 0x3f3) != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x3f8);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1,lVar4);
    plVar3 = (longlong *)*puVar1;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x3f3) = 0;
  if (*(char *)(param_1 + 0x3f2) != '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x3d0);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar3 = (longlong *)*puVar1;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x3f2) = 0;
LAB_00366ee9:
  cVar2 = *(char *)(param_1 + 0x3f4);
joined_r0x00366ef0:
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x3b8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x3f4) = 0;
switchD_00366cc6_default:
  <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x3a0);
LAB_00366f8e:
  if (*(char *)(param_1 + 0x3f5) != '\0') {
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 0x1d8);
  }
  *(undefined1 *)(param_1 + 0x3f5) = 0;
switchD_00366c8b_caseD_1:
  return;
}


