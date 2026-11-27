// 003a5960 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0x1b);
  if (cVar1 == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)(param_1 + 0x1a) = 0;
    return;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x05') {
      return;
    }
    if (*(longlong *)(param_1 + 0x20) != 2) {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x28);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x28);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x30);
    }
    <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x18) = 0;
    goto LAB_003a5aab;
  }
  if (*(char *)(param_1 + 0xec0) != '\x03') goto LAB_003a5aab;
  cVar1 = *(char *)(param_1 + 0x7c8);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0xcb8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x8d0);
    }
    else if (*(char *)(param_1 + 0xcb8) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 2000);
    }
    *(undefined1 *)(param_1 + 0x7c9) = 0;
LAB_003a5a96:
    lVar3 = param_1 + 0x558;
LAB_003a5a9d:
    <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(lVar3);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(longlong *)(param_1 + 2000) != 2) {
        if (*(longlong *)(param_1 + 2000) == 0) {
          plVar2 = *(longlong **)(param_1 + 0x7d8);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x7d8);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x7e0);
      }
      goto LAB_003a5a96;
    }
    if (cVar1 == '\0') {
      lVar3 = param_1 + 0x2e8;
      goto LAB_003a5a9d;
    }
  }
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x28);
LAB_003a5aab:
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}


