// 00527200 mark_suspended_tools

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_suspended_tools */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_suspended_tools
          (undefined4 param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong *param_5,
          longlong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_03;
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined1 local_3c [12];
  
  bVar5 = true;
  uVar15 = param_3;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar11 = *(longlong *)(param_2 + 0x38);
    local_48 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar11;
    local_50 = param_5;
    do {
      if (((*(longlong *)(lVar11 + 0x10) == param_4) &&
          (iVar7 = (*(code *)PTR_bcmp_00799020)(lVar11,param_4), uVar15 = param_3,
          param_1 = extraout_XMM0_Da, iVar7 == 0)) ||
         ((*(longlong *)(lVar11 + 0x128) != -1 &&
          ((*(longlong *)(lVar11 + 0x138) == param_4 &&
           (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar15 = param_3,
           param_1 = extraout_XMM0_Da_00, iVar7 == 0)))))) {
LAB_005273da:
        param_5 = local_50;
        uVar20 = craggemini_core[66f3c71560d70857]::resume::store_digests_bounded(lVar11,local_50);
        *(undefined1 *)(lVar11 + 0x27a) = 2;
        puVar6 = PTR___rust_dealloc_00798fc8;
        lVar10 = *(longlong *)(lVar11 + 0xd0);
        if (lVar10 != 0) {
          lVar19 = *(longlong *)(lVar11 + 200) + 0x38;
          do {
            if (*(longlong *)(lVar19 + -0x38) != 0) {
              uVar20 = (*(code *)puVar6)(uVar20,1);
            }
            if (*(longlong *)(lVar19 + -0x20) != 0) {
              uVar20 = (*(code *)puVar6)(uVar20,1);
            }
            if (*(longlong *)(lVar19 + -8) != 0) {
              uVar20 = (*(code *)puVar6)(uVar20,1);
            }
            lVar19 = lVar19 + 0x48;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (*(longlong *)(lVar11 + 0xc0) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
        }
        *(longlong *)(lVar11 + 0xd0) = param_6[2];
        uVar20 = *(undefined4 *)((longlong)param_6 + 4);
        lVar10 = param_6[1];
        uVar4 = *(undefined4 *)((longlong)param_6 + 0xc);
        *(int *)(lVar11 + 0xc0) = (int)*param_6;
        *(undefined4 *)(lVar11 + 0xc4) = uVar20;
        *(int *)(lVar11 + 200) = (int)lVar10;
        *(undefined4 *)(lVar11 + 0xcc) = uVar4;
        (*(code *)PTR_now_00799478)();
        uVar20 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                 ::to_rfc3339(&local_68,local_3c);
        if (*(longlong *)(lVar11 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
        }
        *(undefined8 *)(lVar11 + 0x70) = local_58;
        *(uint *)(lVar11 + 0x60) = local_68;
        *(uint *)(lVar11 + 100) = uStack_64;
        *(undefined4 *)(lVar11 + 0x68) = (undefined4)uStack_60;
        *(undefined4 *)(lVar11 + 0x6c) = uStack_60._4_4_;
        (*(code *)PTR_now_00799478)();
        iVar13 = (int)local_68 >> 0xd;
        iVar7 = iVar13 + -1;
        iVar8 = 0;
        if (iVar13 < 1) {
          iVar8 = (1U - iVar13) / 400 + 1;
          iVar7 = iVar7 + iVar8 * 400;
          iVar8 = iVar8 * -0x23ab1;
        }
        uVar14 = iVar7 / 100 >> 2;
        uVar15 = (ulonglong)uVar14;
        lVar10 = (uStack_60 & 0xffffffff) / 1000000 +
                 ((longlong)
                  (int)((((local_68 >> 4 & 0x1ff) + iVar8) - iVar7 / 100) + (iVar7 * 0x5b5 >> 2) +
                        uVar14 + -0xaf93b) * 0x15180 + (ulonglong)uStack_64) * 1000;
        bVar5 = false;
        if (lVar10 < 1) {
          lVar10 = 0;
        }
        *(longlong *)(lVar11 + 0x260) = lVar10;
        goto LAB_005275b3;
      }
      uVar1 = *(ulonglong *)(lVar11 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar11 + 0xe8);
        uVar3 = *(ulonglong *)(lVar11 + 0xd8);
        uVar15 = uVar3;
        if (uVar2 < uVar3) {
          uVar15 = 0;
        }
        uVar16 = uVar2 - uVar15;
        uVar9 = uVar3 - uVar16;
        lVar10 = (uVar1 - uVar9) * 0x18;
        if (uVar1 <= uVar9) {
          lVar10 = 0;
        }
        lVar19 = *(longlong *)(lVar11 + 0xe0);
        uVar17 = uVar16 + uVar1;
        if (uVar9 < uVar1) {
          uVar17 = uVar3;
        }
        if (uVar16 != uVar17) {
          lVar18 = uVar15 * -0x18;
          if (uVar1 < uVar9) {
            uVar9 = uVar1;
          }
          lVar12 = 0;
          uVar15 = uVar15 * 0x18;
          do {
            if ((*(longlong *)(lVar19 + uVar2 * 0x18 + lVar18 + 0x10 + lVar12) == param_4) &&
               (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar15 = param_3,
               param_1 = extraout_XMM0_Da_02, iVar7 == 0)) goto LAB_005273da;
            lVar12 = lVar12 + 0x18;
          } while (uVar9 * 0x18 != lVar12);
        }
        if (lVar10 != 0) {
          lVar18 = 0;
          do {
            if ((*(longlong *)(lVar19 + 0x10 + lVar18) == param_4) &&
               (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), uVar15 = param_3,
               param_1 = extraout_XMM0_Da_01, iVar7 == 0)) goto LAB_005273da;
            lVar18 = lVar18 + 0x18;
          } while (lVar10 != lVar18);
        }
      }
      lVar11 = lVar11 + 0x280;
    } while (lVar11 != local_48);
    bVar5 = true;
    param_5 = local_50;
  }
LAB_005275b3:
  uVar15 = persist(param_2,uVar15);
  uVar20 = extraout_XMM0_Da_03;
  if (((uVar15 != 0) && (1 < ((uint)uVar15 & 3) - 2)) && ((uVar15 & 3) != 0)) {
    uStack_60 = uVar15 - 1;
    local_68 = CONCAT31(local_68._1_3_,3);
    uVar20 = (*(code *)PTR_drop_00799040)();
  }
  puVar6 = PTR___rust_dealloc_00798fc8;
  if (bVar5) {
    lVar11 = param_6[2];
    if (lVar11 != 0) {
      lVar10 = param_6[1] + 0x38;
      do {
        if (*(longlong *)(lVar10 + -0x38) != 0) {
          uVar20 = (*(code *)puVar6)(uVar20,1);
        }
        if (*(longlong *)(lVar10 + -0x20) != 0) {
          uVar20 = (*(code *)puVar6)(uVar20,1);
        }
        if (*(longlong *)(lVar10 + -8) != 0) {
          uVar20 = (*(code *)puVar6)(uVar20,1);
        }
        lVar10 = lVar10 + 0x48;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*param_6 != 0) {
      uVar20 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
    }
    puVar6 = PTR___rust_dealloc_00798fc8;
    lVar11 = param_5[2];
    if (lVar11 != 0) {
      lVar10 = param_5[1] + 8;
      do {
        if (*(longlong *)(lVar10 + -8) != 0) {
          uVar20 = (*(code *)puVar6)(uVar20,1);
        }
        lVar10 = lVar10 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*param_5 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,8);
    }
  }
  return;
}


