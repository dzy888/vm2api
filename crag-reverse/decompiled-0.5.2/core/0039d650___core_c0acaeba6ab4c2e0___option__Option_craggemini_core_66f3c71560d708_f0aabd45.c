// 0039d650 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>

/* WARNING: Switch with 1 destination removed at 0x0039d69c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


