// 006ec240 push_remote_task

/* WARNING: Switch with 1 destination removed at 0x006ec339 */
/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::push_remote_task
          (int *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = (char)param_1[6];
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = (char)param_1[6];
  }
  if (cVar7 == '\0') {
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 4) == 0) {
      *(ulonglong **)(param_1 + 2) = param_2;
    }
    else {
      *(ulonglong **)(*(longlong *)(param_1 + 4) + 8) = param_2;
    }
    *(ulonglong **)(param_1 + 4) = param_2;
    *(longlong *)(param_1 + 8) = lVar3 + 1;
  }
  else {
    LOCK();
    uVar2 = *param_2;
    *param_2 = *param_2 - 0x40;
    UNLOCK();
    if (uVar2 >> 6 == 1) {
      (**(code **)(param_2[2] + 0x10))();
    }
    else if (uVar2 >> 6 == 0) {
      (*(code *)PTR_panic_00799338)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


