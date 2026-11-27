// 005f94f0 <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>

/* WARNING: Switch with 1 destination removed at 0x005f9718 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(longlong *)(param_1 + 0x10) != -1) && (*(longlong *)(param_1 + 0x10) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x28) != -1) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x40) != -1) && (*(longlong *)(param_1 + 0x40) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x58) != -1) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x70) != -1) && (*(longlong *)(param_1 + 0x70) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x88) != -1) && (*(longlong *)(param_1 + 0x88) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0xa0) != -1) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0xb8) != -1) && (*(longlong *)(param_1 + 0xb8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0xd0) != -1) && (*(longlong *)(param_1 + 0xd0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0xe8) != -1) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x100);
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x118) != -1) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    for (lVar2 = *(longlong *)(param_1 + 0x128) + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
      <serde_json[dc3825464c436029]::value::Value>(lVar1);
      lVar1 = lVar1 + 0x20;
    }
    lVar1 = 0;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x118) << 5;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
  }
  if (*(char *)(param_1 + 0x150) != -1) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x150,lVar1);
  }
  if ((*(longlong *)(param_1 + 0x130) != -1) && (*(longlong *)(param_1 + 0x130) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


