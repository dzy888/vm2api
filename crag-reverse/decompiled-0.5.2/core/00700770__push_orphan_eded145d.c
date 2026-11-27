// 00700770 push_orphan

/* WARNING: Switch with 1 destination removed at 0x00700841 */
/* <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>::push_orphan
    */

void __rustcall
<tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
::push_orphan(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  
  LOCK();
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar11 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    lVar14 = *(longlong *)(param_1 + 6);
    if (lVar14 != *(longlong *)(param_1 + 2)) goto LAB_007007b7;
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
    lVar14 = *(longlong *)(param_1 + 6);
    if (lVar14 != *(longlong *)(param_1 + 2)) goto LAB_007007b7;
  }
  (*(code *)PTR_grow_one_0079a7e0)();
LAB_007007b7:
  lVar3 = *(longlong *)(param_1 + 4);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[4];
  uVar9 = param_2[5];
  uVar10 = param_2[6];
  puVar1 = (undefined4 *)(lVar3 + 0xc + lVar14 * 0x1c);
  *puVar1 = param_2[3];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + lVar14 * 0x1c);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(longlong *)(param_1 + 6) = lVar14 + 1;
  if (((bVar12 == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
     (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar2 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


