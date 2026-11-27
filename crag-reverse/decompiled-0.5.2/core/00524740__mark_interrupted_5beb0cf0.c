// 00524740 mark_interrupted

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_interrupted */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_interrupted
          (longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,longlong param_5,
          undefined8 param_6,longlong param_7,char param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_90;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_3c [12];
  
  local_58 = param_5;
  uVar21 = (*(code *)PTR_now_00799478)();
  iVar14 = (int)local_78 >> 0xd;
  iVar12 = iVar14 + -1;
  iVar8 = 0;
  if (iVar14 < 1) {
    iVar8 = (1U - iVar14) / 400 + 1;
    iVar12 = iVar12 + iVar8 * 400;
    iVar8 = iVar8 * -0x23ab1;
  }
  uVar15 = iVar12 / 100 >> 2;
  uVar16 = (ulonglong)uVar15;
  uVar9 = (uStack_70 & 0xffffffff) / 1000000 +
          ((longlong)
           (int)((((local_78 >> 4 & 0x1ff) + iVar8) - iVar12 / 100) + (iVar12 * 0x5b5 >> 2) + uVar15
                + -0xaf93b) * 0x15180 + (ulonglong)uStack_74) * 1000;
  uVar5 = 0;
  if (0 < (longlong)uVar9) {
    uVar5 = uVar9;
  }
  local_60 = param_4;
  local_50 = param_1;
  local_48 = param_6;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    lVar6 = *(longlong *)(param_1 + 0x40) * 0x280 + lVar10;
    do {
      if (((*(longlong *)(lVar10 + 0x10) == param_3) &&
          (iVar12 = (*(code *)PTR_bcmp_00799020)(lVar10,param_3), uVar16 = param_2,
          uVar21 = extraout_XMM0_Da, iVar12 == 0)) ||
         ((*(longlong *)(lVar10 + 0x128) != -1 &&
          ((*(longlong *)(lVar10 + 0x138) == param_3 &&
           (iVar12 = (*(code *)PTR_bcmp_00799020)(uVar21,param_3), uVar16 = param_2,
           uVar21 = extraout_XMM0_Da_00, iVar12 == 0)))))) {
LAB_005249da:
        iVar12 = 1;
        lVar6 = lVar10;
        if (*(longlong *)(lVar10 + 0x1d8) == -1) goto LAB_00524a4e;
        uVar16 = 0;
        if (*(ulonglong *)(lVar10 + 0x208) <= uVar5) {
          uVar16 = uVar5 - *(ulonglong *)(lVar10 + 0x208);
        }
        if (uVar16 < 0x493e1) {
          iVar8 = *(int *)(lVar10 + 0x210) + 1;
          iVar12 = -1;
          if (iVar8 != 0) {
            iVar12 = iVar8;
          }
        }
        *(undefined1 *)(lVar10 + 0x27a) = 3;
        lVar20 = local_58;
        goto joined_r0x00524a38;
      }
      uVar9 = *(ulonglong *)(lVar10 + 0xf0);
      if (uVar9 != 0) {
        uVar1 = *(ulonglong *)(lVar10 + 0xe8);
        uVar2 = *(ulonglong *)(lVar10 + 0xd8);
        uVar16 = uVar2;
        if (uVar1 < uVar2) {
          uVar16 = 0;
        }
        uVar17 = uVar1 - uVar16;
        uVar11 = uVar2 - uVar17;
        lVar20 = (uVar9 - uVar11) * 0x18;
        if (uVar9 <= uVar11) {
          lVar20 = 0;
        }
        lVar3 = *(longlong *)(lVar10 + 0xe0);
        uVar18 = uVar17 + uVar9;
        if (uVar11 < uVar9) {
          uVar18 = uVar2;
        }
        if (uVar17 != uVar18) {
          lVar7 = uVar16 * -0x18;
          if (uVar9 < uVar11) {
            uVar11 = uVar9;
          }
          lVar13 = 0;
          uVar16 = uVar16 * 0x18;
          do {
            if ((*(longlong *)(lVar3 + uVar1 * 0x18 + lVar7 + 0x10 + lVar13) == param_3) &&
               (iVar12 = (*(code *)PTR_bcmp_00799020)(uVar21,param_3), uVar16 = param_2,
               uVar21 = extraout_XMM0_Da_02, iVar12 == 0)) goto LAB_005249da;
            lVar13 = lVar13 + 0x18;
          } while (uVar11 * 0x18 != lVar13);
        }
        if (lVar20 != 0) {
          lVar7 = 0;
          do {
            if ((*(longlong *)(lVar3 + 0x10 + lVar7) == param_3) &&
               (iVar12 = (*(code *)PTR_bcmp_00799020)(uVar21,param_3), uVar16 = param_2,
               uVar21 = extraout_XMM0_Da_01, iVar12 == 0)) goto LAB_005249da;
            lVar7 = lVar7 + 0x18;
          } while (lVar20 != lVar7);
        }
      }
      lVar10 = lVar10 + 0x280;
    } while (lVar10 != lVar6);
  }
  goto LAB_00524c8d;
joined_r0x00524a38:
  local_58 = lVar20;
  if (local_60 == 0) goto LAB_00524a6d;
  if (lVar20 < 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = lVar20;
    if (lVar20 == 0) {
      local_90 = 1;
      goto joined_r0x00524afe;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar6 = 1;
    local_90 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_90 != 0) {
      uVar21 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar20);
      lVar6 = lVar10;
      goto joined_r0x00524afe;
    }
  }
  uVar21 = (*(code *)PTR_handle_error_00798ff0)();
LAB_00524a4e:
  *(undefined1 *)(lVar6 + 0x27a) = 3;
  lVar20 = local_58;
  goto joined_r0x00524a38;
LAB_00524a6d:
  lVar20 = *(longlong *)(lVar6 + 0x1c0);
  local_90 = *(longlong *)(lVar6 + 0x1c8);
  lVar3 = *(longlong *)(lVar6 + 0x1d0);
  *(undefined8 *)(lVar6 + 0x1c0) = 0xffffffffffffffff;
joined_r0x00524afe:
  if (param_7 < 0) {
LAB_00524ae0:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_7 == 0) {
    lVar7 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar7 == 0) goto LAB_00524ae0;
    uVar21 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,param_7);
    lVar6 = lVar10;
  }
  uVar19 = 1;
  if (param_8 == '\0') {
    uVar19 = *(undefined1 *)(lVar6 + 0x279);
  }
  lVar13 = *(longlong *)(lVar6 + 0x1d8);
  if (lVar13 != -1) {
    if ((*(longlong *)(lVar6 + 0x1f0) != -1) && (*(longlong *)(lVar6 + 0x1f0) != 0)) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    lVar6 = lVar10;
    if (lVar13 != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
  }
  *(longlong *)(lVar6 + 0x1d8) = param_7;
  *(longlong *)(lVar6 + 0x1e0) = lVar7;
  *(longlong *)(lVar6 + 0x1e8) = param_7;
  *(longlong *)(lVar6 + 0x1f0) = lVar20;
  *(longlong *)(lVar6 + 0x1f8) = local_90;
  *(longlong *)(lVar6 + 0x200) = lVar3;
  *(ulonglong *)(lVar6 + 0x208) = uVar5;
  *(int *)(lVar6 + 0x210) = iVar12;
  *(undefined1 *)(lVar6 + 0x214) = uVar19;
  if ((*(longlong *)(lVar6 + 0x1c0) != -1) && (*(longlong *)(lVar6 + 0x1c0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
  *(undefined8 *)(lVar6 + 0x1c0) = 0xffffffffffffffff;
  *(undefined2 *)(lVar6 + 0x278) = 0;
  (*(code *)PTR_now_00799478)();
  uVar21 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
           ::to_rfc3339(&local_78,local_3c);
  uVar16 = *(ulonglong *)(lVar6 + 0x60);
  if (uVar16 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
  *(undefined8 *)(lVar6 + 0x70) = local_68;
  *(uint *)(lVar6 + 0x60) = local_78;
  *(uint *)(lVar6 + 100) = uStack_74;
  *(undefined4 *)(lVar6 + 0x68) = (undefined4)uStack_70;
  *(undefined4 *)(lVar6 + 0x6c) = uStack_70._4_4_;
  *(ulonglong *)(lVar6 + 0x260) = uVar5;
LAB_00524c8d:
  uStack_70 = persist(local_50,uVar16);
  if (((uStack_70 != 0) && (1 < ((uint)uStack_70 & 3) - 2)) && ((uStack_70 & 3) != 0)) {
    uStack_70 = uStack_70 - 1;
    local_78 = CONCAT31(local_78._1_3_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


