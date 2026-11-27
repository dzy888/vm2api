// 002e5ad0 <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>>

/* WARNING: Switch with 1 destination removed at 0x002e5b97 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::subagents::SubagentConfig>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  lVar1 = *param_1;
  if (lVar1 != -1) {
    lVar3 = param_1[2];
    if (lVar3 != 0) {
      lVar4 = param_1[1] + 8;
      do {
        if (*(longlong *)(lVar4 + -8) != 0) {
          (*(code *)puVar2)(param_4,1);
        }
        lVar4 = lVar4 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (lVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    if ((param_1[6] != -1) && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 3);
    if (param_1[3] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


