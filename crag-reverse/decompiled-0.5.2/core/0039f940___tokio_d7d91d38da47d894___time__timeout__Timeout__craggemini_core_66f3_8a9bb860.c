// 0039f940 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   &craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>>
          (longlong *param_1)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_1 + 0x609) != '\x03') goto LAB_0039fa86;
  switch(*(undefined1 *)((longlong)param_1 + 0x177)) {
  case 3:
    goto switchD_0039f979_caseD_3;
  case 4:
    if (*(char *)((longlong)param_1 + 0x5dc) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 0x35);
      plVar2 = param_1 + 0x32;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x5dc) != '\0') break;
      plVar2 = param_1 + 0x2f;
    }
    if (*plVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
  case 8:
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0x2f);
    break;
  case 6:
    break;
  case 7:
    if (((((char)param_1[0x41] == '\x03') && ((char)param_1[0x40] == '\x03')) &&
        ((char)param_1[0x3f] == '\x03')) && ((char)param_1[0x3e] == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x39] != 0) {
        (**(code **)(param_1[0x39] + 0x18))();
      }
    }
    break;
  default:
switchD_0039f979_default:
    *(undefined1 *)(param_1 + 0xc1) = 0;
LAB_0039fa86:
    if (*param_1 == 2) {
      return;
    }
    if (*param_1 == 0) {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = (longlong *)param_1[1];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
    return;
  }
  if (((*(char *)((longlong)param_1 + 0x174) != '\0') && (param_1[0x28] != -1)) &&
     (param_1[0x28] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (*(char *)((longlong)param_1 + 0x175) != '\0') {
    lVar3 = param_1[0x27];
    if (lVar3 != 0) {
      lVar4 = param_1[0x26] + 8;
      do {
        if (*(longlong *)(lVar4 + -8) != 0) {
          (*(code *)puVar1)();
        }
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0x25] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x175) = 0;
  if (param_1[0x22] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0x1f] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_0039f979_caseD_3:
  *(undefined1 *)((longlong)param_1 + 0x176) = 0;
  goto switchD_0039f979_default;
}


