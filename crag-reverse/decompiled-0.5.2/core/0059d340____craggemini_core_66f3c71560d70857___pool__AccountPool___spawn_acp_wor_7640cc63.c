// 0059d340 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x15e6) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0xd54)) {
  case 0:
    lVar3 = 0x10;
    goto LAB_0059d597;
  default:
    goto switchD_0059d378_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x1408) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x1020);
    }
    else if (*(char *)(param_1 + 0x1408) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xf20);
    }
    puVar2 = PTR_close_00799030;
    if (*(int *)(param_1 + 0xe18) != -1) {
      (*(code *)PTR_close_00799030)();
      (*(code *)puVar2)();
    }
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0xe10) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0xe10) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_0059d550;
  case 4:
    goto switchD_0059d378_caseD_4;
  case 5:
    if (*(char *)(param_1 + 0x1250) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe68);
    }
    else if (*(char *)(param_1 + 0x1250) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xd68);
    }
    goto switchD_0059d378_caseD_4;
  case 6:
    break;
  case 7:
    if (*(char *)(param_1 + 0x1250) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe68);
    }
    else if (*(char *)(param_1 + 0x1250) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xd68);
    }
    break;
  case 8:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rpc_request::_closure_0_>
              (param_1 + 0xd68);
    goto LAB_0059d4ad;
  case 9:
    if (*(char *)(param_1 + 0xe38) == '\x03') {
      if ((*(longlong *)(param_1 + 0xe10) != -1) && (*(longlong *)(param_1 + 0xe10) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0059d378::switchdataD_0019cd38,1);
      }
      if ((*(longlong *)(param_1 + 0xdf8) != -1) && (*(longlong *)(param_1 + 0xdf8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0xde0) != -1) && (*(longlong *)(param_1 + 0xde0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    goto LAB_0059d4a1;
  case 10:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0xd68);
    <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0xd10);
LAB_0059d4a1:
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xcf0);
LAB_0059d4ad:
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(param_1 + 0x710);
    *(undefined4 *)(param_1 + 0xd60) = 0;
    *(undefined8 *)(param_1 + 0xd59) = 0;
  }
  if (*(char *)(param_1 + 0xd55) != '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x690);
    if (*(int *)(param_1 + 0x6a8) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x690);
  }
  *(undefined1 *)(param_1 + 0xd55) = 0;
switchD_0059d378_caseD_4:
  if (((*(char *)(param_1 + 0xd56) != '\0') && (*(int *)(param_1 + 0x590) != -1)) &&
     (*(char *)(param_1 + 0xd58) == '\x01')) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x590);
  }
  *(undefined1 *)(param_1 + 0xd56) = 0;
  *(undefined1 *)(param_1 + 0xd58) = 0;
  if (*(char *)(param_1 + 0xd57) != '\0') {
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x4e8);
  }
LAB_0059d550:
  *(undefined1 *)(param_1 + 0xd57) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x418);
  lVar3 = 400;
  if (*(int *)(param_1 + 0x310) != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x310);
    puVar2 = PTR_close_00799030;
    (*(code *)PTR_close_00799030)();
    (*(code *)puVar2)();
  }
LAB_0059d597:
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(lVar3 + param_1);
switchD_0059d378_caseD_1:
  *(undefined2 *)(param_1 + 0x15e2) = 0;
  *(undefined1 *)(param_1 + 0x15e4) = 0;
  if (*(longlong *)(param_1 + 0x1598) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x1570);
  *(undefined1 *)(param_1 + 0x15e5) = 0;
  plVar1 = *(longlong **)(param_1 + 0x1568);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x1568);
  }
  *(undefined1 *)(param_1 + 0x15e0) = 0;
  if (*(longlong *)(param_1 + 0x1550) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x15e1) = 0;
  if (*(longlong *)(param_1 + 0x1538) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x1520) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x1508) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


