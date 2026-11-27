// 002f6ff0 <craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>

/* WARNING: Switch with 1 destination removed at 0x002f7106 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::ImageGenConfig>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
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
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 0x38;
    do {
      if (*(longlong *)(lVar2 + -0x38) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -0x20) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if ((*(longlong *)(lVar2 + -8) != -1) && (*(longlong *)(lVar2 + -8) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


