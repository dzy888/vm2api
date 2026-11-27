// 0054ed80 from

/* WARNING: Switch with 1 destination removed at 0x0054eec5 */
/* <craggemini_core[66f3c71560d70857]::license::GrantMetadata as
   core[c0acaeba6ab4c2e0]::convert::From<craggemini_core[66f3c71560d70857]::license::Claims>>::from
    */

void __rustcall
<craggemini_core[66f3c71560d70857]::license::GrantMetadata_as_core[c0acaeba6ab4c2e0]::convert::From<craggemini_core[66f3c71560d70857]::license::Claims>>
::from(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  param_1[6] = param_2[5];
  lVar1 = param_2[4];
  param_1[4] = param_2[3];
  param_1[5] = lVar1;
  lVar4 = param_2[0x21];
  lVar1 = param_2[0x20];
  param_1[9] = param_2[0x11];
  lVar5 = param_2[0x10];
  param_1[7] = param_2[0xf];
  param_1[8] = lVar5;
  param_1[0xe] = &DAT_0019b571;
  param_1[0xf] = 6;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(char *)(param_1 + 0x10) = (char)lVar4;
  *param_1 = 1;
  uVar6 = (undefined4)param_2[0x1e];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xf4);
  lVar5 = param_2[0x1f];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xfc);
  *(undefined4 *)(param_1 + 1) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(int *)(param_1 + 2) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  param_1[3] = lVar1;
  param_1[10] = 0xffffffffffffffff;
  if (*param_2 != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar1,1);
  }
  if (param_2[6] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[9] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[0xc] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[0x12] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[0x15] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[0x18] != 0) {
    uVar6 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
  }
  if (param_2[0x1b] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(uVar6,1);
  return;
}


