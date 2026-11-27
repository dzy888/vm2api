// 006bc540 poll_ready

/* <hyper[c4782d5b5c5e3493]::body::chan::Sender>::poll_ready */

bool __rustcall <hyper[c4782d5b5c5e3493]::body::chan::Sender>::poll_ready(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  int *local_48;
  byte local_40;
  undefined1 *local_38;
  code *local_30;
  
  lVar3 = *param_1;
  (*(code *)PTR_register_0079a4f0)();
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar9 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar9) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  if (cVar7 != '\0') {
    local_30 = <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<hyper[c4782d5b5c5e3493]::body::chan::State>>as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_48 = piVar1;
    local_40 = bVar6;
    local_38 = (undefined1 *)&local_48;
    (*(code *)PTR_panic_fmt_007991a8)();
LAB_006bc6c1:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (*(char *)(lVar3 + 0xa9) == '\0') {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_006bc6c1;
    }
    *puVar8 = 0;
    *(undefined1 *)(puVar8 + 2) = 5;
    bVar9 = false;
  }
  else {
    bVar9 = true;
    if ((*(char *)(lVar3 + 0xaa) != '\0') && (*(char *)(lVar3 + 0x18) == '\0')) {
      bVar9 = *(longlong *)(lVar3 + 0xa0) != 0;
    }
  }
  if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(lVar3 + 0x14) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return bVar9;
}


