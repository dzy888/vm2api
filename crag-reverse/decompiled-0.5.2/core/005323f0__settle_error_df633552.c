// 005323f0 settle_error

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::settle_error */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::settle_error
          (undefined4 param_1,longlong param_2,ulonglong param_3,longlong param_4,undefined2 param_5
          ,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da_00;
  uint local_58;
  uint local_54;
  uint local_50;
  
  puVar7 = PTR_bcmp_00799020;
  lVar10 = *(longlong *)(param_2 + 0x28);
  if (lVar10 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x20);
    lVar16 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x10 + lVar16) == param_4) &&
         (iVar8 = (*(code *)puVar7)(param_1,param_4), param_1 = extraout_XMM0_Da, iVar8 == 0)) {
        if (*(char *)(lVar1 + 0xd4 + lVar16) == '\0') {
          *(undefined1 *)(lVar1 + 0xd5 + lVar16) = 2;
          *(undefined2 *)(lVar1 + 0xd0 + lVar16) = 1;
          *(undefined2 *)(lVar1 + 0xd2 + lVar16) = param_5;
          uVar17 = param_7 == 0;
          uVar18 = extraout_XMM0_Da;
          if (-1 < param_7) goto LAB_00532533;
          uVar17 = true;
          goto LAB_00532527;
        }
        *(undefined1 *)(lVar1 + 0xd5 + lVar16) = 3;
        *(undefined4 *)(lVar1 + 0xd0 + lVar16) = 0x1990001;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        uVar6 = _UNK_0019ba34;
        if (puVar9 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(ulonglong *)((longlong)puVar9 + 0xb) =
             CONCAT35(_UNK_0019ba31,CONCAT41(_UNK_0019ba2d,DAT_0019ba2c));
        *(undefined8 *)((longlong)puVar9 + 0x13) = uVar6;
        uVar5 = _UNK_0019ba2d;
        uVar4 = _UNK_0019ba29;
        uVar3 = _UNK_0019ba25;
        uVar18 = _DAT_0019ba21;
        *puVar9 = _DAT_0019ba21;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        lVar10 = *(longlong *)(lVar1 + 0x78 + lVar16);
        if ((lVar10 != -1) && (lVar10 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        }
        *(undefined8 *)(lVar1 + 0x78 + lVar16) = 0x1b;
        param_7 = 0x1b;
        goto LAB_005325a3;
      }
      lVar16 = lVar16 + 0xd8;
    } while (lVar10 * 0xd8 != lVar16);
  }
  goto LAB_00532664;
  while( true ) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar17 = puVar9 == (undefined4 *)0x0;
    if (!(bool)uVar17) break;
LAB_00532527:
    uVar18 = (*(code *)PTR_handle_error_00798ff0)();
LAB_00532533:
    if ((bool)uVar17) {
      puVar9 = (undefined4 *)0x1;
      lVar10 = *(longlong *)(lVar1 + 0x78 + lVar16);
      if (lVar10 == -1) goto LAB_0053259e;
      goto LAB_00532586;
    }
  }
  uVar18 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_7);
  lVar10 = *(longlong *)(lVar1 + 0x78 + lVar16);
  if (lVar10 != -1) {
LAB_00532586:
    if (lVar10 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
    }
  }
LAB_0053259e:
  *(longlong *)(lVar1 + 0x78 + lVar16) = param_7;
LAB_005325a3:
  *(undefined4 **)(lVar1 + 0x80 + lVar16) = puVar9;
  *(longlong *)(lVar1 + 0x88 + lVar16) = param_7;
  (*(code *)PTR_now_00799478)();
  iVar14 = (int)local_58 >> 0xd;
  iVar8 = iVar14 + -1;
  iVar12 = 0;
  if (iVar14 < 1) {
    iVar12 = (1U - iVar14) / 400 + 1;
    iVar8 = iVar8 + iVar12 * 400;
    iVar12 = iVar12 * -0x23ab1;
  }
  uVar15 = iVar8 / 100 >> 2;
  param_3 = (ulonglong)uVar15;
  lVar13 = (ulonglong)local_50 / 1000000 +
           ((longlong)
            (int)((((local_58 >> 4 & 0x1ff) + iVar12) - iVar8 / 100) + (iVar8 * 0x5b5 >> 2) + uVar15
                 + -0xaf93b) * 0x15180 + (ulonglong)local_54) * 1000;
  lVar10 = 0;
  if (0 < lVar13) {
    lVar10 = lVar13;
  }
  *(longlong *)(lVar1 + 200 + lVar16) = lVar10;
LAB_00532664:
  evict_settled_if_needed(param_2,param_3);
  uVar11 = persist(param_2);
  if (((uVar11 != 0) && (1 < ((uint)uVar11 & 3) - 2)) && ((uVar11 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


