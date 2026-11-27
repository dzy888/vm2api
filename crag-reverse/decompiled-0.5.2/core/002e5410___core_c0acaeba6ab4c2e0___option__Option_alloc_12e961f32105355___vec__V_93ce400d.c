// 002e5410 <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>>

/* WARNING: Switch with 1 destination removed at 0x002e547f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar1 = *param_1;
  if (lVar1 != -1) {
    lVar4 = param_1[2];
    if (lVar4 != 0) {
      lVar3 = param_1[1] + 8;
      do {
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        lVar3 = lVar3 + 0x18;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


