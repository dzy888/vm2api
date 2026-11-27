// 006d9fe0 is_cancelled

/* <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>::is_cancelled */

undefined1 __rustcall
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::CancellationToken>::is_cancelled
          (longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  int *piStack_30;
  byte bStack_28;
  
  lVar4 = *param_1;
  piVar1 = (int *)(lVar4 + 0x10);
  LOCK();
  bVar8 = *(int *)(lVar4 + 0x10) == 0;
  if (bVar8) {
    *(int *)(lVar4 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bStack_28 = 0;
    cVar7 = *(char *)(lVar4 + 0x14);
  }
  else {
    bStack_28 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bStack_28 = bStack_28 ^ 1;
    cVar7 = *(char *)(lVar4 + 0x14);
  }
  if (cVar7 != '\0') {
    piStack_30 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_ad2f892e54e1b23d293987efc0a65e00_15_llvm_172257243520341577,&piStack_30,
               &anon_ad2f892e54e1b23d293987efc0a65e00_18_llvm_172257243520341577);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = *(undefined1 *)(lVar4 + 0x48);
  if (((bStack_28 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(lVar4 + 0x14) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar3;
}


