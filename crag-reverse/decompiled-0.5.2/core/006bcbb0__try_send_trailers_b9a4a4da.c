// 006bcbb0 try_send_trailers

/* <hyper[c4782d5b5c5e3493]::body::chan::Sender>::try_send_trailers */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::body::chan::Sender>::try_send_trailers
          (undefined4 param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  byte bVar21;
  char cVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  int *local_50;
  byte local_48;
  int **local_40;
  code *local_38;
  
  if ((char)param_3[1] == '\0') {
    *(undefined1 *)(param_3 + 1) = 1;
    lVar3 = *param_3;
    piVar1 = (int *)(lVar3 + 0x10);
    LOCK();
    bVar23 = *(int *)(lVar3 + 0x10) == 0;
    if (bVar23) {
      *(int *)(lVar3 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar23) {
      param_1 = (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar21 = 0;
      cVar22 = *(char *)(lVar3 + 0x14);
    }
    else {
      bVar21 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar21 = bVar21 ^ 1;
      cVar22 = *(char *)(lVar3 + 0x14);
      param_1 = extraout_XMM0_Da;
    }
    if (cVar22 != '\0') {
      local_40 = &local_50;
      local_38 = <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<hyper[c4782d5b5c5e3493]::body::chan::State>>as_core[c0acaeba6ab4c2e0]::fmt::Display>
                 ::fmt;
      local_50 = piVar1;
      local_48 = bVar21;
      (*(code *)PTR_panic_fmt_007991a8)
                (param_1,&
                         PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792bd0
                );
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*(char *)(lVar3 + 0xa9) == '\0') {
      uVar20 = *(undefined8 *)(param_4 + 0x16);
      param_2[10] = *(undefined8 *)(param_4 + 0x14);
      param_2[0xb] = uVar20;
      uVar20 = *(undefined8 *)(param_4 + 0x12);
      param_2[8] = *(undefined8 *)(param_4 + 0x10);
      param_2[9] = uVar20;
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      uVar9 = param_4[4];
      uVar10 = param_4[5];
      uVar11 = param_4[6];
      uVar12 = param_4[7];
      uVar13 = param_4[8];
      uVar14 = param_4[9];
      uVar15 = param_4[10];
      uVar16 = param_4[0xb];
      uVar17 = param_4[0xd];
      uVar18 = param_4[0xe];
      uVar19 = param_4[0xf];
      *(undefined4 *)(param_2 + 6) = param_4[0xc];
      *(undefined4 *)((longlong)param_2 + 0x34) = uVar17;
      *(undefined4 *)(param_2 + 7) = uVar18;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uVar19;
      *(undefined4 *)(param_2 + 4) = uVar13;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar14;
      *(undefined4 *)(param_2 + 5) = uVar15;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar16;
      *(undefined4 *)(param_2 + 2) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
      *(undefined4 *)(param_2 + 3) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar12;
      *(undefined4 *)param_2 = uVar5;
      *(undefined4 *)((longlong)param_2 + 4) = uVar6;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
      if (((bVar21 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar22 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar22 == '\0')) {
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
      if (*(int *)(lVar3 + 0x40) != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
                  ((undefined4 *)(lVar3 + 0x40));
      }
      uVar20 = *(undefined8 *)(param_4 + 0x16);
      *(undefined8 *)(lVar3 + 0x90) = *(undefined8 *)(param_4 + 0x14);
      *(undefined8 *)(lVar3 + 0x98) = uVar20;
      uVar20 = *(undefined8 *)(param_4 + 0x12);
      *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(lVar3 + 0x88) = uVar20;
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      uVar9 = param_4[4];
      uVar10 = param_4[5];
      uVar11 = param_4[6];
      uVar12 = param_4[7];
      uVar13 = param_4[8];
      uVar14 = param_4[9];
      uVar15 = param_4[10];
      uVar16 = param_4[0xb];
      uVar17 = param_4[0xd];
      uVar18 = param_4[0xe];
      uVar19 = param_4[0xf];
      *(undefined4 *)(lVar3 + 0x70) = param_4[0xc];
      *(undefined4 *)(lVar3 + 0x74) = uVar17;
      *(undefined4 *)(lVar3 + 0x78) = uVar18;
      *(undefined4 *)(lVar3 + 0x7c) = uVar19;
      *(undefined4 *)(lVar3 + 0x60) = uVar13;
      *(undefined4 *)(lVar3 + 100) = uVar14;
      *(undefined4 *)(lVar3 + 0x68) = uVar15;
      *(undefined4 *)(lVar3 + 0x6c) = uVar16;
      *(undefined4 *)(lVar3 + 0x50) = uVar9;
      *(undefined4 *)(lVar3 + 0x54) = uVar10;
      *(undefined4 *)(lVar3 + 0x58) = uVar11;
      *(undefined4 *)(lVar3 + 0x5c) = uVar12;
      *(undefined4 *)(lVar3 + 0x40) = uVar5;
      *(undefined4 *)(lVar3 + 0x44) = uVar6;
      *(undefined4 *)(lVar3 + 0x48) = uVar7;
      *(undefined4 *)(lVar3 + 0x4c) = uVar8;
      if (((bVar21 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar22 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar22 == '\0')) {
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
      *param_2 = 0xfffffffffffffffe;
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (param_4);
  }
  return param_2;
}


