// 0025cea0 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  undefined *puVar2;
  
  switch(*(undefined1 *)(param_1 + 0xd44)) {
  case 0:
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1);
    return;
  default:
    goto switchD_0025cecb_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x13f8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x1010);
    }
    else if (*(char *)(param_1 + 0x13f8) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xf10);
    }
    puVar2 = PTR_close_00799030;
    if (*(int *)(param_1 + 0xe08) != -1) {
      (*(code *)PTR_close_00799030)();
      (*(code *)puVar2)();
    }
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0xe00) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0xe00) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_0025d1cc;
  case 5:
    if (*(char *)(param_1 + 0x1240) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe58);
    }
    else if (*(char *)(param_1 + 0x1240) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xd58);
    }
  case 4:
    cVar1 = *(char *)(param_1 + 0xd46);
    goto joined_r0x0025d0eb;
  case 7:
    if (*(char *)(param_1 + 0x1240) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0xe58);
    }
    else if (*(char *)(param_1 + 0x1240) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0xd58);
    }
  case 6:
    cVar1 = *(char *)(param_1 + 0xd45);
    goto joined_r0x0025d09c;
  case 8:
    if (*(char *)(param_1 + 0xe48) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                (param_1 + 0xdd0);
      *(undefined1 *)(param_1 + 0xe49) = 0;
    }
    else if (*(char *)(param_1 + 0xe48) == '\0') {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xd68);
    }
    goto LAB_0025d074;
  case 9:
    if (*(char *)(param_1 + 0xe28) == '\x03') {
      if ((*(longlong *)(param_1 + 0xe00) != -1) && (*(longlong *)(param_1 + 0xe00) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0025cecb::switchdataD_001822f4,1);
      }
      if ((*(longlong *)(param_1 + 0xde8) != -1) && (*(longlong *)(param_1 + 0xde8) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0xdd0) != -1) && (*(longlong *)(param_1 + 0xdd0) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    break;
  case 10:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0xd58);
    if ((*(longlong *)(param_1 + 0xd00) != -1) && (*(longlong *)(param_1 + 0xd00) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xd18) != -1) && (*(longlong *)(param_1 + 0xd18) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (*(undefined8 *)(param_1 + 0xd30));
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xce0);
LAB_0025d074:
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(param_1 + 0x700);
  *(undefined4 *)(param_1 + 0xd50) = 0;
  *(undefined8 *)(param_1 + 0xd49) = 0;
  cVar1 = *(char *)(param_1 + 0xd45);
joined_r0x0025d09c:
  if (cVar1 != '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x680);
    if (*(int *)(param_1 + 0x698) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x680);
  }
  *(undefined1 *)(param_1 + 0xd45) = 0;
  cVar1 = *(char *)(param_1 + 0xd46);
joined_r0x0025d0eb:
  if (((cVar1 != '\0') && (*(int *)(param_1 + 0x580) != -1)) &&
     (*(char *)(param_1 + 0xd48) == '\x01')) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x580);
  }
  *(undefined1 *)(param_1 + 0xd46) = 0;
  *(undefined1 *)(param_1 + 0xd48) = 0;
  if (*(char *)(param_1 + 0xd47) != '\0') {
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x4d8);
  }
LAB_0025d1cc:
  *(undefined1 *)(param_1 + 0xd47) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x408);
  if (*(int *)(param_1 + 0x300) != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x300);
    puVar2 = PTR_close_00799030;
    (*(code *)PTR_close_00799030)();
    (*(code *)puVar2)();
  }
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1 + 0x180);
switchD_0025cecb_caseD_1:
  return;
}


