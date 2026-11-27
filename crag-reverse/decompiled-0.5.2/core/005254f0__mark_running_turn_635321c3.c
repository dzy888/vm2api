// 005254f0 mark_running_turn

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_running_turn */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_running_turn
          (undefined4 param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong param_5,
          longlong param_6,undefined1 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_03;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_3c [12];
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar6;
    local_58 = param_6;
    local_50 = param_5;
    do {
      if (((*(longlong *)(lVar6 + 0x10) == param_4) &&
          (iVar4 = (*(code *)PTR_bcmp_00799020)(lVar6,param_4), uVar15 = extraout_XMM0_Da,
          param_1 = extraout_XMM0_Da, iVar4 == 0)) ||
         ((*(longlong *)(lVar6 + 0x128) != -1 &&
          ((*(longlong *)(lVar6 + 0x138) == param_4 &&
           (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar15 = extraout_XMM0_Da_00,
           param_1 = extraout_XMM0_Da_00, iVar4 == 0)))))) {
LAB_005256ca:
        lVar9 = local_58;
        *(undefined1 *)(lVar6 + 0x27a) = 1;
        if (local_50 != 0) {
          if (-1 < local_58) {
            if (local_58 == 0) {
              lVar9 = 0;
              lVar14 = *(longlong *)(lVar6 + 0x1c0);
              lVar8 = 1;
              goto joined_r0x00525764;
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar8 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar8 != 0) {
              uVar15 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar9);
              lVar14 = *(longlong *)(lVar6 + 0x1c0);
              goto joined_r0x00525764;
            }
          }
          uVar15 = (*(code *)PTR_handle_error_00798ff0)();
        }
        lVar9 = -1;
        lVar14 = *(longlong *)(lVar6 + 0x1c0);
        lVar8 = param_4;
joined_r0x00525764:
        if ((lVar14 != -1) && (lVar14 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        *(longlong *)(lVar6 + 0x1c0) = lVar9;
        *(longlong *)(lVar6 + 0x1c8) = lVar8;
        *(longlong *)(lVar6 + 0x1d0) = lVar9;
        *(undefined1 *)(lVar6 + 0x278) = param_7;
        *(undefined1 *)(lVar6 + 0x279) = 0;
        (*(code *)PTR_now_00799478)();
        uVar15 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                 ::to_rfc3339(&local_70,local_3c);
        if (*(longlong *)(lVar6 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
        }
        *(undefined8 *)(lVar6 + 0x70) = local_60;
        *(uint *)(lVar6 + 0x60) = local_70;
        *(uint *)(lVar6 + 100) = uStack_6c;
        *(uint *)(lVar6 + 0x68) = uStack_68;
        *(undefined4 *)(lVar6 + 0x6c) = uStack_64;
        (*(code *)PTR_now_00799478)();
        iVar10 = (int)local_70 >> 0xd;
        iVar4 = iVar10 + -1;
        iVar5 = 0;
        if (iVar10 < 1) {
          iVar5 = (1U - iVar10) / 400 + 1;
          iVar4 = iVar4 + iVar5 * 400;
          iVar5 = iVar5 * -0x23ab1;
        }
        lVar8 = (ulonglong)uStack_68 / 1000000 +
                ((longlong)
                 (int)((((local_70 >> 4 & 0x1ff) + iVar5) - iVar4 / 100) + (iVar4 * 0x5b5 >> 2) +
                       (iVar4 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)uStack_6c) * 1000;
        lVar9 = 0;
        if (0 < lVar8) {
          lVar9 = lVar8;
        }
        *(longlong *)(lVar6 + 0x260) = lVar9;
        return;
      }
      uVar1 = *(ulonglong *)(lVar6 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar6 + 0xe8);
        uVar3 = *(ulonglong *)(lVar6 + 0xd8);
        uVar11 = uVar3;
        if (uVar2 < uVar3) {
          uVar11 = 0;
        }
        uVar12 = uVar2 - uVar11;
        uVar7 = uVar3 - uVar12;
        lVar9 = (uVar1 - uVar7) * 0x18;
        if (uVar1 <= uVar7) {
          lVar9 = 0;
        }
        lVar8 = *(longlong *)(lVar6 + 0xe0);
        uVar13 = uVar12 + uVar1;
        if (uVar7 < uVar1) {
          uVar13 = uVar3;
        }
        if (uVar12 != uVar13) {
          if (uVar1 < uVar7) {
            uVar7 = uVar1;
          }
          lVar14 = 0;
          do {
            if ((*(longlong *)(uVar2 * 0x18 + uVar11 * -0x18 + lVar8 + 0x10 + lVar14) == param_4) &&
               (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar15 = extraout_XMM0_Da_02,
               param_1 = extraout_XMM0_Da_02, iVar4 == 0)) goto LAB_005256ca;
            lVar14 = lVar14 + 0x18;
          } while (uVar7 * 0x18 != lVar14);
        }
        if (lVar9 != 0) {
          lVar14 = 0;
          do {
            if ((*(longlong *)(lVar8 + 0x10 + lVar14) == param_4) &&
               (iVar4 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_01
               , uVar15 = extraout_XMM0_Da_01, iVar4 == 0)) goto LAB_005256ca;
            lVar14 = lVar14 + 0x18;
          } while (lVar9 != lVar14);
        }
      }
      lVar6 = lVar6 + 0x280;
    } while (lVar6 != local_48);
  }
  return;
}


