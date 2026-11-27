// 00527ba0 register_response_id

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::register_response_id */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::register_response_id
          (undefined4 param_1,longlong param_2,ulonglong param_3,longlong param_4,undefined8 param_5
          ,longlong param_6)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar18;
  uint local_60;
  uint uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_3c [12];
  
  uVar12 = param_3;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar6;
    do {
      if (((*(longlong *)(lVar6 + 0x10) == param_4) &&
          (iVar3 = (*(code *)PTR_bcmp_00799020)(lVar6,param_4), uVar12 = param_3,
          uVar18 = extraout_XMM0_Da, param_1 = extraout_XMM0_Da, iVar3 == 0)) ||
         ((*(longlong *)(lVar6 + 0x128) != -1 &&
          ((*(longlong *)(lVar6 + 0x138) == param_4 &&
           (iVar3 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar12 = param_3,
           uVar18 = extraout_XMM0_Da_00, param_1 = extraout_XMM0_Da_00, iVar3 == 0)))))) {
LAB_00527d76:
        if (param_6 == 0) goto LAB_00527fe0;
        uVar12 = *(ulonglong *)(lVar6 + 0xf0);
        if (uVar12 == 0) goto LAB_00527e31;
        uVar4 = *(ulonglong *)(lVar6 + 0xe8);
        uVar9 = *(ulonglong *)(lVar6 + 0xd8);
        uVar13 = uVar9;
        if (uVar4 < uVar9) {
          uVar13 = 0;
        }
        uVar14 = uVar4 - uVar13;
        uVar7 = uVar9 - uVar14;
        lVar16 = (uVar12 - uVar7) * 0x18;
        if (uVar12 <= uVar7) {
          lVar16 = 0;
        }
        lVar17 = *(longlong *)(lVar6 + 0xe0);
        uVar15 = uVar14 + uVar12;
        if (uVar7 < uVar12) {
          uVar15 = uVar9;
        }
        if (uVar14 == uVar15) goto LAB_00527def;
        if (uVar12 < uVar7) {
          uVar7 = uVar12;
        }
        lVar8 = 0;
        goto LAB_00527fbd;
      }
      uVar4 = *(ulonglong *)(lVar6 + 0xf0);
      if (uVar4 != 0) {
        uVar9 = *(ulonglong *)(lVar6 + 0xe8);
        uVar13 = *(ulonglong *)(lVar6 + 0xd8);
        uVar12 = uVar13;
        if (uVar9 < uVar13) {
          uVar12 = 0;
        }
        uVar14 = uVar9 - uVar12;
        uVar7 = uVar13 - uVar14;
        lVar16 = (uVar4 - uVar7) * 0x18;
        if (uVar4 <= uVar7) {
          lVar16 = 0;
        }
        lVar17 = *(longlong *)(lVar6 + 0xe0);
        uVar15 = uVar14 + uVar4;
        if (uVar7 < uVar4) {
          uVar15 = uVar13;
        }
        if (uVar14 != uVar15) {
          lVar8 = uVar12 * -0x18;
          if (uVar4 < uVar7) {
            uVar7 = uVar4;
          }
          lVar10 = 0;
          uVar12 = uVar12 * 0x18;
          do {
            if ((*(longlong *)(lVar17 + uVar9 * 0x18 + lVar8 + 0x10 + lVar10) == param_4) &&
               (iVar3 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar12 = param_3,
               uVar18 = extraout_XMM0_Da_02, param_1 = extraout_XMM0_Da_02, iVar3 == 0))
            goto LAB_00527d76;
            lVar10 = lVar10 + 0x18;
          } while (uVar7 * 0x18 != lVar10);
        }
        if (lVar16 != 0) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar17 + 0x10 + lVar8) == param_4) &&
               (iVar3 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar12 = param_3,
               param_1 = extraout_XMM0_Da_01, uVar18 = extraout_XMM0_Da_01, iVar3 == 0))
            goto LAB_00527d76;
            lVar8 = lVar8 + 0x18;
          } while (lVar16 != lVar8);
        }
      }
      lVar6 = lVar6 + 0x280;
    } while (lVar6 != local_48);
  }
  lVar17 = 0;
  uStack_58 = persist(param_2,uVar12);
  goto joined_r0x005280fc;
  while (lVar8 = lVar8 + 0x18, uVar7 * 0x18 != lVar8) {
LAB_00527fbd:
    if ((*(longlong *)(uVar4 * 0x18 + uVar13 * -0x18 + lVar17 + 0x10 + lVar8) == param_6) &&
       (iVar3 = (*(code *)PTR_bcmp_00799020)(uVar18,param_6), uVar18 = extraout_XMM0_Da_03,
       iVar3 == 0)) goto LAB_00527fe0;
  }
LAB_00527def:
  if (lVar16 != 0) {
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar17 + 0x10 + lVar8) == param_6) &&
         (iVar3 = (*(code *)PTR_bcmp_00799020)(param_6,param_6), iVar3 == 0)) goto LAB_00527fe0;
      lVar8 = lVar8 + 0x18;
    } while (lVar16 != lVar8);
  }
LAB_00527e31:
  if (-1 < param_6) goto LAB_00527e45;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00527e45:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar16 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar16 == 0);
  (*(code *)PTR_memcpy_00799008)(param_6,param_6);
  uVar12 = *(ulonglong *)(lVar6 + 0xd8);
  uVar4 = *(ulonglong *)(lVar6 + 0xf0);
  if (uVar4 == uVar12) {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
    ::grow(lVar6 + 0xd8,param_5);
    uVar12 = *(ulonglong *)(lVar6 + 0xd8);
    uVar4 = *(ulonglong *)(lVar6 + 0xf0);
  }
  *(ulonglong *)(lVar6 + 0xf0) = uVar4 + 1;
  uVar4 = uVar4 + *(longlong *)(lVar6 + 0xe8);
  uVar9 = 0;
  if (uVar12 <= uVar4) {
    uVar9 = uVar12;
  }
  lVar8 = uVar4 - uVar9;
  lVar17 = *(longlong *)(lVar6 + 0xe0);
  *(longlong *)(lVar17 + lVar8 * 0x18) = param_6;
  *(longlong *)(lVar17 + 8 + lVar8 * 0x18) = lVar16;
  *(longlong *)(lVar17 + 0x10 + lVar8 * 0x18) = param_6;
  puVar2 = PTR___rust_dealloc_00798fc8;
  uVar12 = *(ulonglong *)(lVar6 + 0xf0);
  while (0x20 < uVar12) {
    lVar16 = *(longlong *)(lVar6 + 0xe8);
    uVar4 = *(ulonglong *)(lVar6 + 0xd8);
    if (lVar16 + 1U < uVar4) {
      uVar4 = 0;
    }
    *(ulonglong *)(lVar6 + 0xe8) = (lVar16 - uVar4) + 1;
    uVar12 = uVar12 - 1;
    *(ulonglong *)(lVar6 + 0xf0) = uVar12;
    if (*(longlong *)(*(longlong *)(lVar6 + 0xe0) + lVar16 * 0x18) - 1U < 0xfffffffffffffffe) {
      (*(code *)puVar2)(*(longlong *)(lVar6 + 0xe0),1);
      uVar12 = *(ulonglong *)(lVar6 + 0xf0);
    }
  }
LAB_00527fe0:
  lVar16 = *(longlong *)(lVar6 + 0x268);
  (*(code *)PTR_now_00799478)();
  uVar18 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
           ::to_rfc3339(&local_60,local_3c);
  if (*(longlong *)(lVar6 + 0x60) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
  }
  lVar16 = lVar16 + 1;
  lVar17 = -1;
  if (lVar16 != 0) {
    lVar17 = lVar16;
  }
  *(undefined8 *)(lVar6 + 0x70) = local_50;
  *(uint *)(lVar6 + 0x60) = local_60;
  *(uint *)(lVar6 + 100) = uStack_5c;
  *(undefined4 *)(lVar6 + 0x68) = (undefined4)uStack_58;
  *(undefined4 *)(lVar6 + 0x6c) = uStack_58._4_4_;
  (*(code *)PTR_now_00799478)();
  iVar11 = (int)local_60 >> 0xd;
  iVar3 = iVar11 + -1;
  iVar5 = 0;
  if (iVar11 < 1) {
    iVar5 = (1U - iVar11) / 400 + 1;
    iVar3 = iVar3 + iVar5 * 400;
    iVar5 = iVar5 * -0x23ab1;
  }
  lVar8 = (uStack_58 & 0xffffffff) / 1000000 +
          ((longlong)
           (int)((((local_60 >> 4 & 0x1ff) + iVar5) - iVar3 / 100) + (iVar3 * 0x5b5 >> 2) +
                 (iVar3 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)uStack_5c) * 1000;
  lVar16 = 0;
  if (0 < lVar8) {
    lVar16 = lVar8;
  }
  *(longlong *)(lVar6 + 0x260) = lVar16;
  uStack_58 = persist(param_2);
joined_r0x005280fc:
  if (((uStack_58 != 0) && (1 < ((uint)uStack_58 & 3) - 2)) && ((uStack_58 & 3) != 0)) {
    uStack_58 = uStack_58 - 1;
    uVar1 = local_60 >> 8;
    local_60 = CONCAT31((int3)uVar1,3);
    (*(code *)PTR_drop_00799040)();
  }
  return lVar17;
}


