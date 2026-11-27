// 003e7b80 <craggemini_core[66f3c71560d70857]::protocol::Failure>

/* WARNING: Switch with 1 destination removed at 0x003e7d92 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::Failure>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *param_1) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < param_1[3]) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar1 = param_1[6];
  if (lVar1 == 0) {
    return;
  }
  if (0 < *(longlong *)(lVar1 + 0x10)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0x28)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0x40)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0x58)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0x70)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0x88)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0xa0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0xb8)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0xd0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (0 < *(longlong *)(lVar1 + 0xe8)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar2 = *(longlong *)(lVar1 + 0x100);
  if (0 < lVar2) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(lVar1 + 0x118) != -1) {
    lVar2 = *(longlong *)(lVar1 + 0x120);
    for (lVar3 = *(longlong *)(lVar1 + 0x128) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <serde_json[dc3825464c436029]::value::Value>(lVar2);
      lVar2 = lVar2 + 0x20;
    }
    lVar2 = 0;
    if (*(longlong *)(lVar1 + 0x118) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x118) << 5;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  if (*(char *)(lVar1 + 0x150) != -1) {
    <serde_json[dc3825464c436029]::value::Value>(lVar1 + 0x150,lVar2);
  }
  if (0 < *(longlong *)(lVar1 + 0x130)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


