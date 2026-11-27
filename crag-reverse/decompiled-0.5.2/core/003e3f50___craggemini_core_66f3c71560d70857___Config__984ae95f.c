// 003e3f50 <craggemini_core[66f3c71560d70857]::Config>

/* WARNING: Switch with 1 destination removed at 0x003e41d3 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::Config> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::Config>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x220)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x238)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x250)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x268)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x280)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(param_1 + 0x298)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f8) + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  lVar3 = *(longlong *)(param_1 + 0x210);
  for (lVar2 = *(longlong *)(param_1 + 0x218) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar3);
    lVar3 = lVar3 + 0x1a0;
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


