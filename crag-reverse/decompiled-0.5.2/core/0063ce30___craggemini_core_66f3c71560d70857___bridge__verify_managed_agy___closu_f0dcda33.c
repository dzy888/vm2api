// 0063ce30 <craggemini_core[66f3c71560d70857]::bridge::verify_managed_agy::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063cedd */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::verify_managed_agy::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::verify_managed_agy::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = *(char *)((longlong)param_1 + 0x3d);
  if (cVar2 == '\x04') {
    <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 8);
LAB_0063cee3:
    lVar1 = param_1[3];
  }
  else {
    if (cVar2 == '\x03') {
      if ((char)param_1[0x12] == '\x03') {
        if ((char)param_1[0x11] == '\x03') {
          cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
          if (cVar2 != '\0') {
            (*(code *)PTR_drop_join_handle_slow_00799088)();
          }
        }
        else if (((char)param_1[0x11] == '\0') && (param_1[0xd] != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
      }
      if (param_1[8] == 0) goto LAB_0063cee3;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      param_1 = param_1 + 3;
    }
    else if (cVar2 != '\0') {
      return;
    }
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


