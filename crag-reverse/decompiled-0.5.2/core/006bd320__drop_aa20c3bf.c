// 006bd320 drop

/* WARNING: Switch with 1 destination removed at 0x006bd3aa */
/* <hyper[c4782d5b5c5e3493]::body::chan::Receiver as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
    */

ulonglong __rustcall
<hyper[c4782d5b5c5e3493]::body::chan::Receiver_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
          (longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  ulonglong uVar10;
  bool bVar11;
  uint *local_40;
  byte local_38;
  uint **local_30;
  code *local_28;
  
  lVar5 = *param_1;
  puVar1 = (uint *)(lVar5 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar5 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar5 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar8 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar4 = *(char *)(lVar5 + 0x14);
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
    cVar4 = *(char *)(lVar5 + 0x14);
  }
  if (cVar4 != '\0') {
    local_30 = &local_40;
    local_28 = <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<hyper[c4782d5b5c5e3493]::body::chan::State>>as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_40 = puVar1;
    (*(code *)PTR_panic_fmt_007991a8)
              (cVar4,&PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792c60);
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  *(undefined1 *)(lVar5 + 0xa9) = 0;
  cVar4 = *(char *)(lVar5 + 0xa8);
  if (((local_38 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(lVar5 + 0x14) = 1;
  }
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = 0;
  uVar10 = (ulonglong)uVar2;
  UNLOCK();
  if (uVar2 == 2) {
    uVar10 = (*(code *)PTR_wake_00799010)();
  }
  if (cVar4 == '\0') {
    return uVar10;
  }
  uVar10 = *(ulonglong *)(lVar5 + 0xc0);
  do {
    LOCK();
    uVar3 = *(ulonglong *)(lVar5 + 0xc0);
    bVar11 = uVar10 == uVar3;
    if (bVar11) {
      *(ulonglong *)(lVar5 + 0xc0) = uVar10 | 2;
    }
    else {
      uVar10 = uVar3;
    }
    UNLOCK();
  } while (!bVar11);
  if (uVar10 == 0) {
    lVar6 = *(longlong *)(lVar5 + 0xb0);
    uVar10 = *(ulonglong *)(lVar5 + 0xb8);
    *(longlong *)(lVar5 + 0xb0) = 0;
    LOCK();
    *(ulonglong *)(lVar5 + 0xc0) = *(ulonglong *)(lVar5 + 0xc0) & 0xfffffffffffffffd;
    UNLOCK();
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006bfae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(lVar6 + 8))();
      return uVar10;
    }
  }
  return uVar10;
}


