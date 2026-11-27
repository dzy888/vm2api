// 001805a0 disconnect

/* WARNING: Switch with 1 destination removed at 0x0018071a */
/* <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect */

void __rustcall <std[6c98fd8553dbae28]::sync::mpmc::waker::SyncWaker>::disconnect(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  bool bVar10;
  int *local_40;
  byte local_38;
  
  LOCK();
  iVar3 = *param_1;
  if (iVar3 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar3 != 0) {
    (*(code *)PTR_lock_contended_00219d70)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = (char)param_1[1];
    pcVar6 = (code *)PTR_futex_wake_00219fe8;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar7 = bVar7 ^ 1;
    cVar8 = (char)param_1[1];
    pcVar6 = (code *)PTR_futex_wake_00219fe8;
  }
  PTR_futex_wake_00219fe8 = pcVar6;
  if (cVar8 != '\0') {
    local_40 = param_1;
    local_38 = bVar7;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>>>_00215a50
               ,&local_40,&PTR_s__rustc_48a229ceaefd4985c50990b14_00215aa0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  lVar4 = *(longlong *)(param_1 + 6);
  if (lVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 4);
    lVar9 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(lVar5 + lVar9) + 0x18);
      LOCK();
      bVar10 = *plVar1 == 0;
      if (bVar10) {
        *plVar1 = 2;
      }
      UNLOCK();
      if (bVar10) {
        LOCK();
        piVar2 = (int *)(*(longlong *)(*(longlong *)(lVar5 + lVar9) + 0x10) + 0x28);
        iVar3 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        if (iVar3 == -1) {
          (*pcVar6)();
        }
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar4 * 0x18 != lVar9);
  }
  <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(param_1 + 2);
  if (*(longlong *)(param_1 + 6) == 0) {
    LOCK();
    *(bool *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xc) == 0;
    UNLOCK();
  }
  else {
    LOCK();
    *(undefined1 *)(param_1 + 0xe) = 0;
    UNLOCK();
  }
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar3 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    return;
  }
  return;
}


