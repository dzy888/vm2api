// 003d4960 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::upsert::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x1bf1) == '\0') {
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1bf1) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x861);
  if (cVar1 == '\x04') {
    <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
              (param_1 + 0x870);
    plVar2 = *(longlong **)(param_1 + 0x868);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 0x868);
      }
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x3e0);
        <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x580);
        if (*(longlong *)(param_1 + 0x600) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      goto LAB_003d4ae3;
    }
    if (*(char *)(param_1 + 0x990) == '\x03') {
      if ((((*(char *)(param_1 + 0x98e) == '\x03') && (*(short *)(param_1 + 0x968) == -1)) &&
          (1 < ((uint)*(ulonglong *)(param_1 + 0x970) & 3) - 2)) &&
         ((*(ulonglong *)(param_1 + 0x970) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x8e8);
      *(undefined1 *)(param_1 + 0x991) = 0;
    }
    else if (*(char *)(param_1 + 0x990) == '\0') {
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x868);
    }
  }
  *(undefined1 *)(param_1 + 0x863) = 0;
  if (*(longlong *)(param_1 + 0x848) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x864) = 0;
  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x7c8);
  *(undefined1 *)(param_1 + 0x865) = 0;
  <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x628);
  *(undefined1 *)(param_1 + 0x866) = 0;
LAB_003d4ae3:
  *(undefined2 *)(param_1 + 0x1bf2) = 0;
  *(undefined1 *)(param_1 + 0x1bf4) = 0;
  return;
}


