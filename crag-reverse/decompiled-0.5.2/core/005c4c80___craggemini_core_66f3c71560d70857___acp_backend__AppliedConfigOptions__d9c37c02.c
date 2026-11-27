// 005c4c80 <craggemini_core[66f3c71560d70857]::acp_backend::AppliedConfigOptions>

/* WARNING: Switch with 1 destination removed at 0x005c4cf2 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AppliedConfigOptions>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AppliedConfigOptions>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    lVar2 = param_1[1] + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


