// 00524290 clear_resume_cut

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::clear_resume_cut */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::clear_resume_cut
          (undefined4 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar18;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a4 [12];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar10;
    do {
      if (((*(longlong *)(lVar10 + 0x10) == param_4) &&
          (iVar7 = (*(code *)PTR_bcmp_00799020)(lVar10,param_4), param_1 = extraout_XMM0_Da,
          iVar7 == 0)) ||
         ((*(longlong *)(lVar10 + 0x128) != -1 &&
          ((*(longlong *)(lVar10 + 0x138) == param_4 &&
           (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_00,
           iVar7 == 0)))))) {
LAB_00524467:
        local_38 = *(undefined8 *)(lVar10 + 0x1b8);
        local_48 = *(undefined8 *)(lVar10 + 0x1a8);
        uStack_40 = *(undefined8 *)(lVar10 + 0x1b0);
        local_58 = *(undefined8 *)(lVar10 + 0x198);
        uStack_50 = *(undefined8 *)(lVar10 + 0x1a0);
        local_98 = *(undefined4 *)(lVar10 + 0x158);
        uStack_94 = *(undefined4 *)(lVar10 + 0x15c);
        uVar3 = *(ulonglong *)(lVar10 + 0x158);
        uStack_90 = *(undefined4 *)(lVar10 + 0x160);
        uStack_8c = *(undefined4 *)(lVar10 + 0x164);
        local_88 = *(undefined4 *)(lVar10 + 0x168);
        uStack_84 = *(undefined4 *)(lVar10 + 0x16c);
        uStack_80 = *(undefined4 *)(lVar10 + 0x170);
        uStack_7c = *(undefined4 *)(lVar10 + 0x174);
        local_78 = *(undefined4 *)(lVar10 + 0x178);
        uStack_74 = *(undefined4 *)(lVar10 + 0x17c);
        uStack_70 = *(undefined4 *)(lVar10 + 0x180);
        uStack_6c = *(undefined4 *)(lVar10 + 0x184);
        local_68 = *(undefined4 *)(lVar10 + 0x188);
        uStack_64 = *(undefined4 *)(lVar10 + 0x18c);
        uStack_60 = *(undefined4 *)(lVar10 + 400);
        uStack_5c = *(undefined4 *)(lVar10 + 0x194);
        *(undefined8 *)(lVar10 + 0x158) = 0xffffffffffffffff;
        if (uVar3 != 0xffffffffffffffff) {
          (*(code *)PTR_now_00799478)();
          uVar18 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                   ::to_rfc3339(&local_110,local_a4);
          if (*(longlong *)(lVar10 + 0x60) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
          }
          *(ulonglong *)(lVar10 + 0x70) = CONCAT44(uStack_fc,local_100);
          *(uint *)(lVar10 + 0x60) = (uint)local_110;
          *(undefined4 *)(lVar10 + 100) = local_110._4_4_;
          *(undefined4 *)(lVar10 + 0x68) = (undefined4)uStack_108;
          *(undefined4 *)(lVar10 + 0x6c) = uStack_108._4_4_;
          (*(code *)PTR_now_00799478)();
          iVar13 = (int)(uint)local_110 >> 0xd;
          iVar7 = iVar13 + -1;
          iVar9 = 0;
          if (iVar13 < 1) {
            iVar9 = (1U - iVar13) / 400 + 1;
            iVar7 = iVar7 + iVar9 * 400;
            iVar9 = iVar9 * -0x23ab1;
          }
          lVar12 = (uStack_108 & 0xffffffff) / 1000000 +
                   ((longlong)
                    (int)(((((uint)local_110 >> 4 & 0x1ff) + iVar9) - iVar7 / 100) +
                          (iVar7 * 0x5b5 >> 2) + (iVar7 / 100 >> 2) + -0xaf93b) * 0x15180 +
                   (local_110 >> 0x20)) * 1000;
          lVar8 = 0;
          if (0 < lVar12) {
            lVar8 = lVar12;
          }
          *(longlong *)(lVar10 + 0x260) = lVar8;
          local_b8 = uStack_40;
          uStack_b0 = local_38;
          local_c8 = uStack_50;
          uStack_c0 = local_48;
          local_d8 = uStack_60;
          uStack_d4 = uStack_5c;
          uStack_d0 = (undefined4)local_58;
          uStack_cc = local_58._4_4_;
          uStack_e8 = uStack_70;
          uStack_e4 = uStack_6c;
          uStack_e0 = local_68;
          uStack_dc = uStack_64;
          uStack_f8 = uStack_80;
          uStack_f4 = uStack_7c;
          uStack_f0 = local_78;
          uStack_ec = uStack_74;
          uStack_108 = CONCAT44(uStack_8c,uStack_90);
          local_100 = local_88;
          uStack_fc = uStack_84;
          lVar10 = *(longlong *)(param_2 + 0x58);
          local_110 = uVar3;
          if (lVar10 == *(longlong *)(param_2 + 0x48)) {
            <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>>
            ::grow_one(param_2 + 0x48);
          }
          lVar8 = *(longlong *)(param_2 + 0x50);
          lVar12 = lVar10 * 0x68;
          *(undefined8 *)(lVar8 + 0x60 + lVar12) = uStack_b0;
          puVar2 = (undefined8 *)(lVar8 + 0x50 + lVar12);
          *puVar2 = uStack_c0;
          puVar2[1] = local_b8;
          puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar12);
          *puVar2 = CONCAT44(uStack_cc,uStack_d0);
          puVar2[1] = local_c8;
          puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar12);
          *puVar2 = CONCAT44(uStack_dc,uStack_e0);
          puVar2[1] = CONCAT44(uStack_d4,local_d8);
          puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar12);
          *puVar2 = CONCAT44(uStack_ec,uStack_f0);
          puVar2[1] = CONCAT44(uStack_e4,uStack_e8);
          puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar12);
          *puVar2 = CONCAT44(uStack_fc,local_100);
          puVar2[1] = CONCAT44(uStack_f4,uStack_f8);
          puVar1 = (undefined4 *)(lVar8 + lVar12);
          *puVar1 = (uint)local_110;
          puVar1[1] = local_110._4_4_;
          puVar1[2] = (undefined4)uStack_108;
          puVar1[3] = uStack_108._4_4_;
          *(longlong *)(param_2 + 0x58) = lVar10 + 1;
        }
        break;
      }
      uVar3 = *(ulonglong *)(lVar10 + 0xf0);
      if (uVar3 != 0) {
        uVar4 = *(ulonglong *)(lVar10 + 0xe8);
        uVar5 = *(ulonglong *)(lVar10 + 0xd8);
        uVar14 = uVar5;
        if (uVar4 < uVar5) {
          uVar14 = 0;
        }
        uVar15 = uVar4 - uVar14;
        uVar11 = uVar5 - uVar15;
        lVar12 = (uVar3 - uVar11) * 0x18;
        if (uVar3 <= uVar11) {
          lVar12 = 0;
        }
        lVar6 = *(longlong *)(lVar10 + 0xe0);
        uVar16 = uVar15 + uVar3;
        if (uVar11 < uVar3) {
          uVar16 = uVar5;
        }
        if (uVar15 != uVar16) {
          if (uVar3 < uVar11) {
            uVar11 = uVar3;
          }
          lVar17 = 0;
          do {
            if ((*(longlong *)(uVar4 * 0x18 + uVar14 * -0x18 + lVar6 + 0x10 + lVar17) == param_4) &&
               (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_02
               , iVar7 == 0)) goto LAB_00524467;
            lVar17 = lVar17 + 0x18;
          } while (uVar11 * 0x18 != lVar17);
        }
        if (lVar12 != 0) {
          lVar17 = 0;
          do {
            if ((*(longlong *)(lVar6 + 0x10 + lVar17) == param_4) &&
               (iVar7 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_01
               , iVar7 == 0)) goto LAB_00524467;
            lVar17 = lVar17 + 0x18;
          } while (lVar12 != lVar17);
        }
      }
      lVar10 = lVar10 + 0x280;
    } while (lVar10 != lVar8);
  }
  uStack_108 = persist(param_2);
  if (((uStack_108 != 0) && (1 < ((uint)uStack_108 & 3) - 2)) && ((uStack_108 & 3) != 0)) {
    uStack_108 = uStack_108 - 1;
    local_110 = CONCAT71(local_110._1_7_,3);
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


