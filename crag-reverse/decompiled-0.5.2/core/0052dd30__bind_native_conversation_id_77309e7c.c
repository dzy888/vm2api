// 0052dd30 bind_native_conversation_id

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::bind_native_conversation_id */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::bind_native_conversation_id
          (undefined4 param_1,longlong param_2,ulonglong param_3,longlong param_4,undefined8 param_5
          ,ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar21;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  undefined1 local_3c [12];
  
  uVar20 = param_6 == 0;
  uVar10 = param_5;
  lVar8 = param_4;
  if (-1 < (longlong)param_6) goto LAB_0052dd55;
  lVar11 = 0;
  do {
    param_2 = lVar11;
    uVar20 = 1;
    param_1 = (*(code *)PTR_handle_error_00798ff0)();
    uVar10 = param_5;
    lVar8 = param_4;
    param_3 = param_6;
LAB_0052dd55:
    if ((bool)uVar20) {
      lVar7 = 1;
      uVar16 = *(ulonglong *)(param_2 + 0x90);
      goto joined_r0x0052ddbf;
    }
    param_5 = uVar10;
    param_4 = lVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = (*(code *)PTR___rust_alloc_00799000)();
    lVar11 = 1;
  } while (lVar7 == 0);
  param_1 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_6);
  uVar16 = *(ulonglong *)(param_2 + 0x90);
joined_r0x0052ddbf:
  local_58 = uVar10;
  if ((uVar16 != 0xffffffffffffffff) && (uVar16 != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  *(ulonglong *)(param_2 + 0x90) = param_6;
  *(longlong *)(param_2 + 0x98) = lVar7;
  *(ulonglong *)(param_2 + 0xa0) = param_6;
  local_60 = param_2;
  local_50 = param_6;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar11 = *(longlong *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar11;
    do {
      if (((*(longlong *)(lVar11 + 0x10) == lVar8) &&
          (iVar6 = (*(code *)PTR_bcmp_00799020)(lVar11,lVar8), uVar16 = param_3,
          uVar21 = extraout_XMM0_Da_00, param_1 = extraout_XMM0_Da_00, iVar6 == 0)) ||
         ((*(longlong *)(lVar11 + 0x128) != -1 &&
          ((*(longlong *)(lVar11 + 0x138) == lVar8 &&
           (iVar6 = (*(code *)PTR_bcmp_00799020)(param_1,lVar8), uVar16 = param_3,
           uVar21 = extraout_XMM0_Da_01, param_1 = extraout_XMM0_Da_01, iVar6 == 0)))))) {
LAB_0052dfaa:
        uVar16 = local_50;
        if (local_50 == 0) {
          lVar7 = 1;
          lVar8 = *(longlong *)(lVar11 + 0x128);
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar7 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar7 == 0) {
            (*(code *)PTR_handle_error_00798ff0)();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar21 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,uVar16);
          lVar8 = *(longlong *)(lVar11 + 0x128);
        }
        if ((lVar8 != -1) && (lVar8 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
        }
        *(ulonglong *)(lVar11 + 0x128) = uVar16;
        *(longlong *)(lVar11 + 0x130) = lVar7;
        *(ulonglong *)(lVar11 + 0x138) = uVar16;
        (*(code *)PTR_now_00799478)();
        uVar21 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                 ::to_rfc3339(&local_78,local_3c);
        if (*(longlong *)(lVar11 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
        }
        *(undefined8 *)(lVar11 + 0x70) = local_68;
        *(uint *)(lVar11 + 0x60) = local_78;
        *(uint *)(lVar11 + 100) = uStack_74;
        *(undefined4 *)(lVar11 + 0x68) = (undefined4)uStack_70;
        *(undefined4 *)(lVar11 + 0x6c) = uStack_70._4_4_;
        (*(code *)PTR_now_00799478)();
        iVar14 = (int)local_78 >> 0xd;
        iVar6 = iVar14 + -1;
        iVar9 = 0;
        if (iVar14 < 1) {
          iVar9 = (1U - iVar14) / 400 + 1;
          iVar6 = iVar6 + iVar9 * 400;
          iVar9 = iVar9 * -0x23ab1;
        }
        uVar15 = iVar6 / 100 >> 2;
        uVar16 = (ulonglong)uVar15;
        lVar7 = (uStack_70 & 0xffffffff) / 1000000 +
                ((longlong)
                 (int)((((local_78 >> 4 & 0x1ff) + iVar9) - iVar6 / 100) + (iVar6 * 0x5b5 >> 2) +
                       uVar15 + -0xaf93b) * 0x15180 + (ulonglong)uStack_74) * 1000;
        lVar8 = 0;
        if (0 < lVar7) {
          lVar8 = lVar7;
        }
        *(longlong *)(lVar11 + 0x260) = lVar8;
        break;
      }
      uVar1 = *(ulonglong *)(lVar11 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar11 + 0xe8);
        uVar3 = *(ulonglong *)(lVar11 + 0xd8);
        uVar16 = uVar3;
        if (uVar2 < uVar3) {
          uVar16 = 0;
        }
        uVar17 = uVar2 - uVar16;
        uVar12 = uVar3 - uVar17;
        lVar7 = (uVar1 - uVar12) * 0x18;
        if (uVar1 <= uVar12) {
          lVar7 = 0;
        }
        lVar4 = *(longlong *)(lVar11 + 0xe0);
        uVar18 = uVar17 + uVar1;
        if (uVar12 < uVar1) {
          uVar18 = uVar3;
        }
        if (uVar17 != uVar18) {
          lVar13 = uVar16 * -0x18;
          if (uVar1 < uVar12) {
            uVar12 = uVar1;
          }
          lVar19 = 0;
          uVar16 = uVar16 * 0x18;
          do {
            if ((*(longlong *)(lVar4 + uVar2 * 0x18 + lVar13 + 0x10 + lVar19) == lVar8) &&
               (iVar6 = (*(code *)PTR_bcmp_00799020)(param_1,lVar8), uVar16 = param_3,
               uVar21 = extraout_XMM0_Da_03, param_1 = extraout_XMM0_Da_03, iVar6 == 0))
            goto LAB_0052dfaa;
            lVar19 = lVar19 + 0x18;
          } while (uVar12 * 0x18 != lVar19);
        }
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if ((*(longlong *)(lVar4 + 0x10 + lVar13) == lVar8) &&
               (iVar6 = (*(code *)PTR_bcmp_00799020)(param_1,lVar8), uVar16 = param_3,
               param_1 = extraout_XMM0_Da_02, uVar21 = extraout_XMM0_Da_02, iVar6 == 0))
            goto LAB_0052dfaa;
            lVar13 = lVar13 + 0x18;
          } while (lVar7 != lVar13);
        }
      }
      lVar11 = lVar11 + 0x280;
    } while (lVar11 != local_48);
  }
  uStack_70 = persist(local_60,uVar16);
  if (((uStack_70 != 0) && (1 < ((uint)uStack_70 & 3) - 2)) && ((uStack_70 & 3) != 0)) {
    uStack_70 = uStack_70 - 1;
    local_78 = CONCAT31(local_78._1_3_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


