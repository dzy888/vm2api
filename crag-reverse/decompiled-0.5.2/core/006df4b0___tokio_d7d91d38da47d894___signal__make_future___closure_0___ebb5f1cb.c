// 006df4b0 <tokio[d7d91d38da47d894]::signal::make_future::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x006df623 */
/* WARNING: Switch with 1 destination removed at 0x006efcba */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::make_future::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::signal::make_future::_closure_0_>
          (longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  if ((char)param_1[0x13] == '\0') {
    lVar2 = *param_1;
    LOCK();
    plVar1 = (longlong *)(lVar2 + 0x138);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      LOCK();
      bVar4 = *(int *)(lVar2 + 0x118) == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x118) = 1;
      }
      UNLOCK();
      if (!bVar4) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar3 = bVar3 ^ 1;
      }
      local_30 = (longlong *)(lVar2 + 0x110);
      local_38 = *(longlong *)(lVar2 + 0x110);
      local_20 = (longlong *)CONCAT71(local_20._1_7_,bVar3);
      local_28 = (longlong *)(lVar2 + 0x118);
      (*(code *)PTR_notify_waiters_0079a750)();
    }
  }
  else {
    if ((char)param_1[0x13] != '\x03') {
      return;
    }
    if (((char)param_1[0x12] == '\x03') && (*(char *)((longlong)param_1 + 0x49) == '\x04')) {
      local_38 = param_1[10];
      local_30 = param_1 + 0x11;
      local_28 = param_1 + 0xb;
      local_20 = param_1 + 0xc;
      <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::drop_notified(&local_38);
      if (param_1[0xe] != 0) {
        (**(code **)(param_1[0xe] + 0x18))();
      }
      *(undefined1 *)(param_1 + 9) = 0;
    }
    lVar2 = param_1[2];
    param_1 = param_1 + 2;
    LOCK();
    plVar1 = (longlong *)(lVar2 + 0x138);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      LOCK();
      bVar4 = *(int *)(lVar2 + 0x118) == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x118) = 1;
      }
      UNLOCK();
      if (!bVar4) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar3 = bVar3 ^ 1;
      }
      local_30 = (longlong *)(lVar2 + 0x110);
      local_38 = *(longlong *)(lVar2 + 0x110);
      local_20 = (longlong *)CONCAT71(local_20._1_7_,bVar3);
      local_28 = (longlong *)(lVar2 + 0x118);
      (*(code *)PTR_notify_waiters_0079a750)();
    }
  }
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


