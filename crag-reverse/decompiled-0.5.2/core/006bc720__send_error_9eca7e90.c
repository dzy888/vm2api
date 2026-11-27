// 006bc720 send_error

/* WARNING: Switch with 1 destination removed at 0x006bc880 */
/* <hyper[c4782d5b5c5e3493]::body::chan::Sender>::send_error */

void __rustcall
<hyper[c4782d5b5c5e3493]::body::chan::Sender>::send_error(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 *puVar8;
  bool bVar9;
  int *local_48;
  byte local_40;
  undefined1 *local_38;
  code *local_30;
  
  lVar3 = *param_1;
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
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  else {
    local_40 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_40 = local_40 ^ 1;
    cVar7 = *(char *)(lVar3 + 0x14);
  }
  if (cVar7 != '\0') {
    local_30 = <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<hyper[c4782d5b5c5e3493]::body::chan::State>>as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_48 = piVar1;
    local_38 = (undefined1 *)&local_48;
    (*(code *)PTR_panic_fmt_007991a8)
              (cVar7,&PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792ba0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (*(char *)(lVar3 + 0xa9) == '\0') {
    if (((local_40 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
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
    if (*param_2 == 0) goto LAB_006bc867;
    puVar8 = (undefined8 *)param_2[1];
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0x18) == 0) {
      *(undefined8 *)(lVar3 + 0x18) = 1;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(longlong **)(lVar3 + 0x28) = param_2;
      bVar5 = false;
      bVar9 = false;
    }
    else {
      bVar5 = true;
      bVar9 = true;
      if (*(longlong *)(lVar3 + 0xa0) == 0) {
        *(longlong **)(lVar3 + 0xa0) = param_2;
        bVar5 = false;
        bVar9 = false;
      }
    }
    if (((local_40 == 0) && (bVar9 = bVar5, (*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
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
    (*(code *)PTR_wake_0079a4f8)();
    if (!bVar9) {
      return;
    }
    if (*param_2 == 0) goto LAB_006bc867;
    puVar8 = (undefined8 *)param_2[1];
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  if (puVar8[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_006bc867:
  (*(code *)PTR_free_0079adc8)();
  return;
}


