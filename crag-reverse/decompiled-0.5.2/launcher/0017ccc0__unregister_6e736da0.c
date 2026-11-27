// 0017ccc0 unregister

/* WARNING: Switch with 1 destination removed at 0x0017ce6c */
/* <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::unregister */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::unregister
          (undefined4 param_1,longlong *param_2,int *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  undefined7 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  int *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  LOCK();
  iVar3 = *param_3;
  if (iVar3 == 0) {
    *param_3 = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    param_1 = (*(code *)PTR_lock_contended_00219d70)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00219d08;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = (char)param_3[1];
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar7 = bVar7 ^ 1;
    cVar8 = (char)param_3[1];
    param_1 = extraout_XMM0_Da;
  }
  if (cVar8 == '\0') {
    lVar9 = *(longlong *)(param_3 + 4);
    uVar15 = *(ulonglong *)(param_3 + 6);
    uVar13 = 0xffffffffffffffff;
    lVar14 = 0;
    lVar12 = 0;
    lVar11 = lVar9;
    do {
      if (uVar15 * 0x18 == lVar12) goto LAB_0017cdb3;
      lVar12 = lVar12 + 0x18;
      uVar13 = uVar13 + 1;
      plVar1 = (longlong *)(lVar11 + 8);
      lVar11 = lVar11 + 0x18;
    } while (*plVar1 != param_4);
    if (uVar13 < uVar15) {
      lVar14 = *(longlong *)(lVar9 + -0x18 + lVar12);
      puVar2 = (undefined8 *)(lVar9 + -0x10 + lVar12);
      local_58 = (int *)*puVar2;
      uStack_50 = *(undefined4 *)(puVar2 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
      param_1 = (*(code *)PTR_memmove_00219fb0)(lVar9,uVar15 * 0x18 - lVar12);
      uVar15 = uVar15 - 1;
      *(ulonglong *)(param_3 + 6) = uVar15;
      if (lVar14 != 0) {
        uStack_40 = CONCAT44(uStack_4c,uStack_50);
        local_48 = local_58;
LAB_0017cdb3:
        if (uVar15 == 0) {
          bVar16 = *(longlong *)(param_3 + 0xc) == 0;
          uVar10 = (undefined7)((ulonglong)lVar9 >> 8);
        }
        else {
          bVar16 = false;
          uVar10 = 0;
        }
        LOCK();
        iVar3 = param_3[0xe];
        *(bool *)(param_3 + 0xe) = bVar16;
        UNLOCK();
        *param_2 = lVar14;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_48;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_48._4_4_;
        *(undefined4 *)(param_2 + 2) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x14) = uStack_40._4_4_;
        if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
           (cVar8 = (*(code *)PTR_is_zero_slow_path_00219d18)(CONCAT71(uVar10,(char)iVar3)),
           cVar8 == '\0')) {
          *(undefined1 *)(param_3 + 1) = 1;
        }
        LOCK();
        iVar3 = *param_3;
        *param_3 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_syscall_0021a0a0)(1,0x81);
          return;
        }
        return;
      }
    }
    (*(code *)PTR_assert_failed_00219ff0)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215930);
  }
  else {
    uVar5 = (uint)uStack_50 >> 8;
    uStack_50 = CONCAT31((int3)uVar5,bVar7);
    local_58 = param_3;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>>>_002158f8
               ,&local_58,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215960);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


