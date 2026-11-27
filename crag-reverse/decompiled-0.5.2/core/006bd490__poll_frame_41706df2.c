// 006bd490 poll_frame

/* <hyper[c4782d5b5c5e3493]::body::incoming::Incoming as
   http_body[237d564c59cb9271]::Body>::poll_frame */

longlong * __rustcall
<hyper[c4782d5b5c5e3493]::body::incoming::Incoming_as_http_body[237d564c59cb9271]::Body>::poll_frame
          (longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  undefined *puVar16;
  byte bVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  ulonglong uVar21;
  longlong lVar22;
  bool bVar23;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  if ((byte)param_2[2] == 2) {
    *param_1 = -3;
    return param_1;
  }
  uVar21 = param_2[1];
  if (((byte)param_2[2] & 1) == 0) {
    (*(code *)PTR_register_0079a4f0)();
    piVar1 = (int *)(uVar21 + 0x10);
    LOCK();
    bVar23 = *(int *)(uVar21 + 0x10) == 0;
    if (bVar23) {
      *(int *)(uVar21 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar23) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar16 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar17 = 0;
      cVar18 = *(char *)(uVar21 + 0x14);
    }
    else {
      bVar17 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar17 = bVar17 ^ 1;
      cVar18 = *(char *)(uVar21 + 0x14);
    }
    if (cVar18 != '\0') {
      (*(code *)PTR_panic_fmt_007991a8)
                (cVar18,&
                        PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792c00
                );
      goto LAB_006bd8d7;
    }
    cVar18 = *(char *)(uVar21 + 0xaa);
    if (cVar18 == '\0') {
      *(undefined1 *)(uVar21 + 0xaa) = 1;
    }
    lVar22 = *(longlong *)(uVar21 + 0x18);
    *(undefined8 *)(uVar21 + 0x18) = 0;
    if (lVar22 == 1) {
      lVar6 = *(longlong *)(uVar21 + 0x20);
      lVar22 = *(longlong *)(uVar21 + 0x28);
      lVar3 = *(longlong *)(uVar21 + 0x30);
      lVar5 = *(longlong *)(uVar21 + 0x38);
      if (((bVar17 == 0) && ((*(ulonglong *)puVar16 & 0x7fffffffffffffff) != 0)) &&
         (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
        *(undefined1 *)(uVar21 + 0x14) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      (*(code *)PTR_wake_0079a4f8)();
      if (lVar6 != 0) {
        if (*param_2 < 0xfffffffffffffffe) {
          *param_2 = *param_2 - lVar3;
        }
        *param_1 = -1;
        param_1[1] = lVar6;
        param_1[2] = lVar22;
        param_1[3] = lVar3;
        param_1[4] = lVar5;
        return param_1;
      }
LAB_006bd727:
      *param_1 = -2;
      param_1[1] = lVar22;
      return param_1;
    }
    lVar22 = *(longlong *)(uVar21 + 0xa0);
    *(undefined8 *)(uVar21 + 0xa0) = 0;
    if (lVar22 != 0) {
      if (((bVar17 == 0) && ((*(ulonglong *)puVar16 & 0x7fffffffffffffff) != 0)) &&
         (cVar19 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar19 == '\0')) {
        *(undefined1 *)(uVar21 + 0x14) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (cVar18 == '\0') {
        (*(code *)PTR_wake_0079a4f8)();
      }
      goto LAB_006bd727;
    }
    cVar19 = *(char *)(uVar21 + 0xa8);
    if (((bVar17 == 0) && ((*(ulonglong *)puVar16 & 0x7fffffffffffffff) != 0)) &&
       (cVar20 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar20 == '\0')) {
      *(undefined1 *)(uVar21 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    if (cVar18 == '\0') {
      (*(code *)PTR_wake_0079a4f8)();
    }
    if (cVar19 != '\0') {
      *param_1 = 3;
      return param_1;
    }
    *(undefined1 *)(param_2 + 2) = 1;
    uVar21 = param_2[1];
  }
  LOCK();
  bVar23 = *(int *)(uVar21 + 0x10) == 0;
  if (bVar23) {
    *(int *)(uVar21 + 0x10) = 1;
  }
  UNLOCK();
  if (bVar23) {
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
    goto LAB_006bd7a3;
LAB_006bd4fc:
    bVar17 = 0;
    cVar18 = *(char *)(uVar21 + 0x14);
    puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0)
    goto LAB_006bd4fc;
LAB_006bd7a3:
    puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
    bVar17 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar17 = bVar17 ^ 1;
    cVar18 = *(char *)(uVar21 + 0x14);
  }
  if (cVar18 == '\0') {
    lVar22 = *(longlong *)(uVar21 + 0x40);
    lVar3 = *(longlong *)(uVar21 + 0x98);
    lVar5 = *(longlong *)(uVar21 + 0x88);
    lVar6 = *(longlong *)(uVar21 + 0x90);
    lVar7 = *(longlong *)(uVar21 + 0x78);
    lVar8 = *(longlong *)(uVar21 + 0x80);
    lVar9 = *(longlong *)(uVar21 + 0x68);
    lVar10 = *(longlong *)(uVar21 + 0x70);
    lVar11 = *(longlong *)(uVar21 + 0x58);
    lVar12 = *(longlong *)(uVar21 + 0x60);
    lVar13 = *(longlong *)(uVar21 + 0x48);
    lVar14 = *(longlong *)(uVar21 + 0x50);
    *(undefined8 *)(uVar21 + 0x40) = 0xffffffffffffffff;
    if (((bVar17 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar18 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar18 == '\0')) {
      *(undefined1 *)(uVar21 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *(int *)(uVar21 + 0x10);
    *(int *)(uVar21 + 0x10) = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    if (lVar22 == -1) {
      lVar22 = -3;
    }
    else {
      local_88 = lVar13;
      lStack_80 = lVar14;
      local_78 = lVar11;
      lStack_70 = lVar12;
      local_68 = lVar9;
      lStack_60 = lVar10;
      local_58 = lVar7;
      lStack_50 = lVar8;
      local_48 = lVar5;
      lStack_40 = lVar6;
      local_38 = lVar3;
    }
    *param_1 = lVar22;
    param_1[1] = local_88;
    param_1[2] = lStack_80;
    param_1[3] = local_78;
    param_1[4] = lStack_70;
    param_1[5] = local_68;
    param_1[6] = lStack_60;
    param_1[7] = local_58;
    param_1[8] = lStack_50;
    param_1[9] = local_48;
    param_1[10] = lStack_40;
    param_1[0xb] = local_38;
    return param_1;
  }
  (*(code *)PTR_panic_fmt_007991a8)
            (cVar18,&PTR_anon_8020c0704285a2d1289b183da7bc254f_7_llvm_553902125068371515_00792be8);
LAB_006bd8d7:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


