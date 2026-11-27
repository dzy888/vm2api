// 002ed6f0 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::rebind_proxy::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002ed796 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::rebind_proxy::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::rebind_proxy::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)((longlong)param_1 + 0x1e01) == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x1e01) == '\x03') {
    if (*(char *)((longlong)param_1 + 0x1df9) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
                (param_1 + 0xbd);
      *(undefined2 *)((longlong)param_1 + 0x1dfa) = 0;
      *(undefined1 *)((longlong)param_1 + 0x1dfc) = 0;
      *(undefined4 *)((longlong)param_1 + 0x1e02) = 0;
      plVar2 = (longlong *)param_1[0xc];
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    else {
      if (*(char *)((longlong)param_1 + 0x1df9) == '\0') {
        <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x41);
      }
      *(undefined4 *)((longlong)param_1 + 0x1e02) = 0;
      plVar2 = (longlong *)param_1[0xc];
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar1 = *plVar2;
      UNLOCK();
    }
    if (lVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0xc);
    }
    *(undefined2 *)((longlong)param_1 + 0x1e06) = 0;
    *(undefined1 *)(param_1 + 0x3c1) = 0;
  }
  return;
}


