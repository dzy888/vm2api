// 003d2830 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::{closure#0}>

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
    goto switchD_003d285b_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x4c8) == '\x03') {
      if (0 < *(longlong *)(param_1 + 0x4a0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d285b::switchdataD_00192ee0,1);
      }
      if (0 < *(longlong *)(param_1 + 0x488)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < *(longlong *)(param_1 + 0x470)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    goto LAB_003d2d64;
  case 4:
    if (4 < *(byte *)(param_1 + 0x4b2) - 3) goto switchD_003d2896_default;
    switch((uint)*(byte *)(param_1 + 0x4b2)) {
    case 3:
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                  (param_1 + 0x530);
        *(undefined1 *)(param_1 + 0x5a9) = 0;
      }
      else if (*(char *)(param_1 + 0x5a8) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x4c8);
      }
      break;
    case 4:
      if (*(char *)(param_1 + 0x5a8) == '\x03') {
        <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                  (param_1 + 0x530);
        *(undefined1 *)(param_1 + 0x5a9) = 0;
      }
      else if (*(char *)(param_1 + 0x5a8) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x4c8);
      }
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x5b0);
      *(undefined1 *)(param_1 + 0x4b0) = 0;
      break;
    case 5:
      if (*(char *)(param_1 + 0x588) == '\x03') {
        if (0 < *(longlong *)(param_1 + 0x560)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d2896::switchdataD_00192f00,1);
        }
        if (0 < *(longlong *)(param_1 + 0x548)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (0 < *(longlong *)(param_1 + 0x530)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x590);
      break;
    case 6:
      if (*(char *)(param_1 + 0x5a8) != '\0') {
        if (*(char *)(param_1 + 0x5a8) == '\x03') {
          <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                    (param_1 + 0x530);
          *(undefined1 *)(param_1 + 0x5a9) = 0;
        }
        goto switchD_003d2896_default;
      }
      lVar4 = 0x4c8;
      goto LAB_003d2c81;
    case 7:
      lVar4 = 0x590;
      if (*(char *)(param_1 + 0x588) == '\x03') {
        if (0 < *(longlong *)(param_1 + 0x560)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d2896::switchdataD_00192f00,1);
        }
        if (0 < *(longlong *)(param_1 + 0x548)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (0 < *(longlong *)(param_1 + 0x530)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
LAB_003d2c81:
      <serde_json[dc3825464c436029]::value::Value>(lVar4 + param_1);
      goto switchD_003d2896_default;
    }
    if (*(char *)(param_1 + 0x4b1) != '\0') {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x3f8);
    }
    *(undefined1 *)(param_1 + 0x4b1) = 0;
    goto switchD_003d2896_default;
  case 5:
    cVar2 = *(char *)(param_1 + 0x4c9);
    if (cVar2 != '\x05') {
      if (cVar2 == '\x04') {
        if (*(char *)(param_1 + 0x648) == '\x03') {
          if (*(char *)(param_1 + 0x640) == '\x03') {
            <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                      (param_1 + 0x5c8);
            *(undefined1 *)(param_1 + 0x641) = 0;
          }
          else if (*(char *)(param_1 + 0x640) == '\0') {
            <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x560);
          }
        }
        if (*(longlong *)(param_1 + 0x4d0) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0x4c8) = 0;
        goto LAB_003d2d1e;
      }
      if (cVar2 == '\x03') {
        if (*(char *)(param_1 + 0x630) == '\x03') {
          if (*(char *)(param_1 + 0x628) == '\x03') {
            <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                      (param_1 + 0x5b0);
            goto LAB_003d2da4;
          }
          if (*(char *)(param_1 + 0x628) == '\0') {
            <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x548);
          }
        }
        goto LAB_003d2d1e;
      }
      goto LAB_003d2ac9;
    }
    if (*(char *)(param_1 + 0x630) == '\x03') {
      if (*(char *)(param_1 + 0x628) != '\x03') {
        if (*(char *)(param_1 + 0x628) == '\0') {
          <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x548);
        }
        goto LAB_003d2d1e;
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                (param_1 + 0x5b0);
LAB_003d2da4:
      *(undefined1 *)(param_1 + 0x629) = 0;
      <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>(param_1 + 0x408);
      cVar2 = *(char *)(param_1 + 0x3f4);
    }
    else {
LAB_003d2d1e:
      <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>(param_1 + 0x408);
      cVar2 = *(char *)(param_1 + 0x3f4);
    }
    goto joined_r0x003d2d31;
  case 6:
    if (*(char *)(param_1 + 0x4d0) == '\x03') {
      if (0 < *(longlong *)(param_1 + 0x4a8)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d285b::switchdataD_00192ee0,1);
      }
      if (0 < *(longlong *)(param_1 + 0x490)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < *(longlong *)(param_1 + 0x478)) {
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
LAB_003d2ac9:
  cVar2 = *(char *)(param_1 + 0x3f4);
joined_r0x003d2d31:
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x3b8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x3f4) = 0;
switchD_003d2896_default:
  <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x3a0);
LAB_003d2d64:
  if (*(char *)(param_1 + 0x3f5) != '\0') {
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 0x1d8);
  }
  *(undefined1 *)(param_1 + 0x3f5) = 0;
switchD_003d285b_caseD_1:
  return;
}


