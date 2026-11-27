// 00040670 handle_cancel

/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::handle_cancel */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::handle_cancel
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = *(int *)(param_1 + 0x58) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0x58) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_000c3c80)();
  }
  puVar1 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  else {
    bVar3 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    bVar3 = bVar3 ^ 1;
    cVar2 = *(char *)(param_1 + 0x5c);
  }
  if (cVar2 == '\0') {
    if ((((*(int *)(param_1 + 0x60) != 2) && (*(longlong *)(param_1 + 200) == param_3)) &&
        (iVar4 = (*(code *)PTR_bcmp_000c3b80)(), iVar4 == 0)) &&
       (*(char *)(param_1 + 0x382) == '\0')) {
      *(undefined1 *)(param_1 + 0x382) = 1;
      if (*(char *)(param_1 + 0x37f) == '\x01') {
        *(undefined1 *)(param_1 + 0x387) = *(undefined1 *)(param_1 + 0x380);
        (*(code *)PTR_getpid_000c3ca0)();
        (*(code *)PTR_kill_000c3ca8)();
      }
      else {
        *(undefined1 *)(param_1 + 899) = 1;
        (*(code *)PTR_write_000c3be8)();
      }
    }
    if (((bVar3 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
       (cVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = (*(code *)PTR_<&str>_000c3b30)();
    if (((bVar3 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
       (cVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar2 == '\0')) {
      *(undefined1 *)(param_1 + 0x5c) = 1;
    }
  }
  LOCK();
  iVar4 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = 0;
  UNLOCK();
  if (iVar4 == 2) {
    (*(code *)PTR_wake_000c3ad0)();
  }
  return uVar5;
}


