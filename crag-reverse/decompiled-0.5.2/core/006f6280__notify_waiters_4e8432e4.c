// 006f6280 notify_waiters

/* <tokio[d7d91d38da47d894]::sync::watch::big_notify::BigNotify>::notify_waiters */

void __rustcall
<tokio[d7d91d38da47d894]::sync::watch::big_notify::BigNotify>::notify_waiters(longlong param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = *(int *)(param_1 + 8) == 0;
  if (bVar3) {
    *(int *)(param_1 + 8) = 1;
  }
  UNLOCK();
  if (!bVar3) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0x28) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x28) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0x48) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x48) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0x68) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x68) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0x88) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0x88) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0xa8) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0xa8) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 200) == 0;
  if (bVar3) {
    *(int *)(param_1 + 200) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  LOCK();
  bVar3 = *(int *)(param_1 + 0xe8) == 0;
  if (bVar3) {
    *(int *)(param_1 + 0xe8) = 1;
  }
  UNLOCK();
  if (bVar3) {
    uVar1 = *(ulonglong *)puVar2;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    uVar1 = *(ulonglong *)puVar2;
  }
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  return;
}


