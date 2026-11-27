// 002ec390 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*(undefined1 *)(param_1 + 0x365)) {
  case 3:
    if (*(char *)(param_1 + 0x1201) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x620);
      *(undefined1 *)(param_1 + 0x1200) = 0;
      return;
    }
    return;
  case 4:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_8_>>
              (param_1 + 0x368);
    *(undefined2 *)(param_1 + 0x360) = 0;
    if (*(longlong *)(param_1 + 0x318) == 0) goto LAB_002ec472;
    goto LAB_002ec460;
  case 5:
    if (*(longlong *)(param_1 + 0x368) != 2) {
      if (*(longlong *)(param_1 + 0x368) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x370);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x370);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x378);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x850) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x468);
    }
    else if (*(char *)(param_1 + 0x850) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x368);
    }
    break;
  default:
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x200);
  if (lVar2 != -2) {
    if (lVar2 == -1) {
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0x208) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0x208) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    else {
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x218) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x359) = 0;
  *(undefined1 *)(param_1 + 0x35f) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
LAB_002ec460:
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_002ec472:
  if (*(longlong *)(param_1 + 0x300) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x362) = 0;
  plVar1 = *(longlong **)(param_1 + 0x2f8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::io::async_fd::AsyncFd<std[6c98fd8553dbae28]::os::fd::owned::OwnedFd>>>
    ::drop_slow(param_1 + 0x2f8);
  }
  *(undefined1 *)(param_1 + 0x363) = 0;
  <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x364) = 0;
  <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x130);
  *(undefined2 *)(param_1 + 0x35a) = 0;
  if (*(char *)(param_1 + 0x35c) != '\0') {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1);
  }
  *(undefined2 *)(param_1 + 0x35c) = 0;
  *(undefined1 *)(param_1 + 0x35e) = 0;
  return;
}


