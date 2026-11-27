// 00368770 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00368870 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_1 + 0x481);
  if (cVar1 == '\0') {
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1);
    <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x1a0);
    if (*(longlong *)(param_1 + 0x220) == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x5b0) == '\x03') {
      if ((((*(char *)(param_1 + 0x5ae) == '\x03') && (*(short *)(param_1 + 0x588) == -1)) &&
          (1 < ((uint)*(ulonglong *)(param_1 + 0x590) & 3) - 2)) &&
         ((*(ulonglong *)(param_1 + 0x590) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x508);
      *(undefined1 *)(param_1 + 0x5b1) = 0;
      *(undefined1 *)(param_1 + 0x483) = 0;
      lVar3 = *(longlong *)(param_1 + 0x468);
      goto joined_r0x003688de;
    }
    if (*(char *)(param_1 + 0x5b0) == '\0') {
      <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x488);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
              (param_1 + 0x490);
    plVar2 = *(longlong **)(param_1 + 0x488);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 0x488);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x483) = 0;
  lVar3 = *(longlong *)(param_1 + 0x468);
joined_r0x003688de:
  if (lVar3 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x484) = 0;
  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 1000);
  *(undefined1 *)(param_1 + 0x485) = 0;
  <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0x248);
  *(undefined1 *)(param_1 + 0x486) = 0;
  return;
}


