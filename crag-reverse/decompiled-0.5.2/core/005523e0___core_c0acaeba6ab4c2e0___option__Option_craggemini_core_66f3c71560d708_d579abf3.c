// 005523e0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>

/* WARNING: Switch with 1 destination removed at 0x00552543 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != -1) {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 6);
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[10],param_1[0xb]);
    if (param_1[9] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[0xe];
    if (lVar3 != 0) {
      lVar2 = param_1[0xd] + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0xc] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    lVar3 = param_1[0x11];
    if (lVar3 != 0) {
      lVar2 = param_1[0x10] + 8;
      do {
        if (*(longlong *)(lVar2 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (param_1[0xf] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


