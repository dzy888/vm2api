// 00252880 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>>

/* WARNING: Switch with 1 destination removed at 0x002529a3 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if ((param_1[3] != -1) && (param_1[3] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[9] != -1) && (param_1[9] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((param_1[0xc] != -1) && (param_1[0xc] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar4 = param_1[1] + 0x38;
      do {
        if (*(longlong *)(lVar4 + -0x38) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        if (*(longlong *)(lVar4 + -0x20) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        if ((*(longlong *)(lVar4 + -8) != -1) && (*(longlong *)(lVar4 + -8) != 0)) {
          (*(code *)puVar2)(param_4,1);
        }
        lVar4 = lVar4 + 0x48;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


