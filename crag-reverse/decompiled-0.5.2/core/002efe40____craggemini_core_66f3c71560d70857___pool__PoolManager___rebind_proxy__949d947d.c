// 002efe40 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::rebind_proxy::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002efebb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::rebind_proxy::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::rebind_proxy::_closure_0_>
          (longlong *param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)((longlong)param_1 + 0x79)) {
  case 0:
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002efe63::switchdataD_0018f15c,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[6] == -1) {
      return;
    }
    if (param_1[6] == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  default:
    goto switchD_002efe63_caseD_1;
  case 3:
    if (*(char *)((longlong)param_1 + 0xf61) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
                (param_1 + 0x70);
      *(undefined1 *)(param_1 + 0x1ec) = 0;
    }
    break;
  case 4:
    <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::rebind_proxy::_closure_0_>
              (param_1 + 0x10);
    break;
  case 5:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
              (param_1 + 0x12);
    plVar1 = (longlong *)param_1[0x11];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x11);
    }
    plVar1 = (longlong *)param_1[0x10];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x10);
    }
  }
  if (((*(char *)((longlong)param_1 + 0x7b) != '\0') && (param_1[0x16] != -1)) &&
     (param_1[0x16] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x7b) = 0;
  if ((*(char *)((longlong)param_1 + 0x7c) != '\0') && (param_1[0x13] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  if ((*(char *)((longlong)param_1 + 0x7d) != '\0') && (param_1[0x10] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x7d) = 0;
switchD_002efe63_caseD_1:
  return;
}


