// 005687e0 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x1b);
  if (cVar1 == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x20);
    *(undefined1 *)(param_1 + 0x19) = 0;
LAB_0056887f:
    *(undefined1 *)(param_1 + 0x1a) = 0;
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0xec0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x2e8);
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<tokio[d7d91d38da47d894]::sync::mutex::Mutex<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x28);
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  else if (cVar1 == '\x05') {
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
    goto LAB_0056887f;
  }
  return;
}


