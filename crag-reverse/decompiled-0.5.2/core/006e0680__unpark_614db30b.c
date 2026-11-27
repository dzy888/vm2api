// 006e0680 unpark

/* WARNING: Switch with 1 destination removed at 0x006e06f8 */
/* <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  
  LOCK();
  lVar1 = *(longlong *)param_1;
  *(longlong *)param_1 = 2;
  UNLOCK();
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 == 1) {
    LOCK();
    bVar5 = (int)*(longlong *)((longlong)param_1 + 8) == 0;
    if (bVar5) {
      *(int *)((longlong)param_1 + 8) = 1;
    }
    UNLOCK();
    if (!bVar5) goto LAB_006e0717;
  }
  else {
    if (lVar1 == 2) {
      return;
    }
    param_1 = "inconsis";
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_c4f639d01efbe85961be48d14333fbdc_54_llvm_17218896934804705305);
LAB_006e0717:
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    uVar2 = *(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  }
  else {
    cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar4 == '\0') goto LAB_006e06df;
    uVar2 = *(ulonglong *)puVar3;
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar4 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
LAB_006e06df:
  LOCK();
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  *(int *)((longlong)param_1 + 8) = 0;
  UNLOCK();
  if ((int)lVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  LOCK();
  *(int *)((longlong)param_1 + 0x10) = (int)*(longlong *)((longlong)param_1 + 0x10) + 1;
  UNLOCK();
  (*(code *)PTR_syscall_00799e60)(1,0x81);
  return;
}


