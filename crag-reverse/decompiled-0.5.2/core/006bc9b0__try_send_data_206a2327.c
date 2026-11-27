// 006bc9b0 try_send_data

/* <hyper[c4782d5b5c5e3493]::body::chan::Sender>::try_send_data */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::body::chan::Sender>::try_send_data
          (undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  char cVar13;
  bool bVar14;
  int *local_48;
  byte local_40;
  undefined1 *local_38;
  code *local_30;
  
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar14 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar14) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar14) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar12 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
    cVar13 = *(char *)(lVar3 + 0x14);
  }
  else {
    local_40 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_40 = local_40 ^ 1;
    cVar13 = *(char *)(lVar3 + 0x14);
  }
  if (cVar13 != '\0') {
    local_30 = <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<hyper[c4782d5b5c5e3493]::body::chan::State>>as_core[c0acaeba6ab4c2e0]::fmt::Display>
               ::fmt;
    local_48 = piVar1;
    local_38 = (undefined1 *)&local_48;
    (*(code *)PTR_panic_fmt_007991a8)
              (cVar13,&PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792bb8)
    ;
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((((*(char *)(lVar3 + 0xa9) == '\0') || (*(char *)(lVar3 + 0xaa) != '\x01')) ||
      (*(char *)(lVar3 + 0x18) != '\0')) || (*(longlong *)(lVar3 + 0xa0) != 0)) {
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    *(undefined4 *)(param_1 + 2) = param_3[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar9;
    *(undefined4 *)(param_1 + 3) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar11;
    *(undefined4 *)param_1 = uVar5;
    *(undefined4 *)((longlong)param_1 + 4) = uVar6;
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
    if (((local_40 == 0) && ((*(ulonglong *)puVar12 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    *(undefined8 *)(lVar3 + 0x18) = 1;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    *(undefined4 *)(lVar3 + 0x20) = *param_3;
    *(undefined4 *)(lVar3 + 0x24) = uVar5;
    *(undefined4 *)(lVar3 + 0x28) = uVar6;
    *(undefined4 *)(lVar3 + 0x2c) = uVar7;
    *(undefined4 *)(lVar3 + 0x30) = uVar8;
    *(undefined4 *)(lVar3 + 0x34) = uVar9;
    *(undefined4 *)(lVar3 + 0x38) = uVar10;
    *(undefined4 *)(lVar3 + 0x3c) = uVar11;
    if (((local_40 == 0) && ((*(ulonglong *)puVar12 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
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
    *param_1 = 0;
  }
  return param_1;
}


