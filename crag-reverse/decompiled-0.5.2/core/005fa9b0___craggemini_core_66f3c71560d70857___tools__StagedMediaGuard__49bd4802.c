// 005fa9b0 <craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>

/* WARNING: Switch with 1 destination removed at 0x005faa86 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>
          (longlong *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1[3];
  if (lVar4 != -1) {
    uVar2 = (*(code *)PTR_remove_dir_all_00799038)();
    if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    if (lVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    lVar3 = param_1[1] + 8;
    do {
      if (*(longlong *)(lVar3 + -8) != 0) {
        (*(code *)puVar1)();
      }
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


