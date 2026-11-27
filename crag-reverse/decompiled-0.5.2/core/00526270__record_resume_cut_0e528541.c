// 00526270 record_resume_cut

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::record_resume_cut */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::record_resume_cut
          (undefined4 param_1,longlong param_2,undefined8 param_3,longlong param_4,longlong *param_5
          )

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar38;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong local_60;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  bVar14 = true;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    lVar29 = *(longlong *)(param_2 + 0x38);
    lVar26 = *(longlong *)(param_2 + 0x40) * 0x280 + lVar29;
    do {
      if (((*(longlong *)(lVar29 + 0x10) == param_4) &&
          (iVar25 = (*(code *)PTR_bcmp_00799020)(lVar29,param_4), param_1 = extraout_XMM0_Da,
          iVar25 == 0)) ||
         ((*(longlong *)(lVar29 + 0x128) != -1 &&
          ((*(longlong *)(lVar29 + 0x138) == param_4 &&
           (iVar25 = (*(code *)PTR_bcmp_00799020)(param_1,param_4), param_1 = extraout_XMM0_Da_00,
           iVar25 == 0)))))) {
LAB_00526447:
        (*(code *)PTR_clone_00798fd0)();
        lVar26 = *(longlong *)(lVar29 + 0x158);
        uVar5 = *(undefined8 *)(lVar29 + 0x160);
        lVar33 = *(longlong *)(lVar29 + 0x170);
        uVar38 = *(undefined4 *)(lVar29 + 0x168);
        uVar39 = *(undefined4 *)(lVar29 + 0x16c);
        uVar40 = *(undefined4 *)(lVar29 + 0x170);
        uVar41 = *(undefined4 *)(lVar29 + 0x174);
        uVar6 = *(undefined8 *)(lVar29 + 0x178);
        lVar31 = *(longlong *)(lVar29 + 0x180);
        lVar32 = *(longlong *)(lVar29 + 0x188);
        uVar7 = *(undefined8 *)(lVar29 + 400);
        local_b8 = *(undefined8 *)(lVar29 + 0x1b8);
        local_c8 = *(undefined8 *)(lVar29 + 0x1a8);
        uStack_c0 = *(undefined8 *)(lVar29 + 0x1b0);
        local_d8 = *(ulonglong *)(lVar29 + 0x198);
        uStack_d0 = *(ulonglong *)(lVar29 + 0x1a0);
        lVar21 = param_5[1];
        lVar15 = param_5[2];
        uVar8 = *(undefined4 *)((longlong)param_5 + 0x14);
        lVar16 = param_5[3];
        uVar9 = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar17 = param_5[4];
        uVar10 = *(undefined4 *)((longlong)param_5 + 0x24);
        lVar18 = param_5[5];
        uVar11 = *(undefined4 *)((longlong)param_5 + 0x2c);
        lVar19 = param_5[6];
        uVar12 = *(undefined4 *)((longlong)param_5 + 0x34);
        lVar20 = param_5[7];
        uVar13 = *(undefined4 *)((longlong)param_5 + 0x3c);
        *(longlong *)(lVar29 + 0x158) = *param_5;
        *(longlong *)(lVar29 + 0x160) = lVar21;
        *(int *)(lVar29 + 0x168) = (int)lVar15;
        *(undefined4 *)(lVar29 + 0x16c) = uVar8;
        *(int *)(lVar29 + 0x170) = (int)lVar16;
        *(undefined4 *)(lVar29 + 0x174) = uVar9;
        *(int *)(lVar29 + 0x178) = (int)lVar17;
        *(undefined4 *)(lVar29 + 0x17c) = uVar10;
        *(int *)(lVar29 + 0x180) = (int)lVar18;
        *(undefined4 *)(lVar29 + 0x184) = uVar11;
        *(int *)(lVar29 + 0x188) = (int)lVar19;
        *(undefined4 *)(lVar29 + 0x18c) = uVar12;
        *(int *)(lVar29 + 400) = (int)lVar20;
        *(undefined4 *)(lVar29 + 0x194) = uVar13;
        lVar21 = param_5[9];
        *(longlong *)(lVar29 + 0x198) = param_5[8];
        *(longlong *)(lVar29 + 0x1a0) = lVar21;
        uVar8 = *(undefined4 *)((longlong)param_5 + 0x54);
        lVar21 = param_5[0xb];
        uVar9 = *(undefined4 *)((longlong)param_5 + 0x5c);
        *(int *)(lVar29 + 0x1a8) = (int)param_5[10];
        *(undefined4 *)(lVar29 + 0x1ac) = uVar8;
        *(int *)(lVar29 + 0x1b0) = (int)lVar21;
        *(undefined4 *)(lVar29 + 0x1b4) = uVar9;
        *(longlong *)(lVar29 + 0x1b8) = param_5[0xc];
        if (lVar26 == -1) {
LAB_00526622:
          lVar26 = -1;
        }
        else {
          if ((lVar31 == local_60) &&
             (local_48 = uVar38, uStack_44 = uVar39, uStack_40 = uVar40, uStack_3c = uVar41,
             iVar25 = (*(code *)PTR_bcmp_00799020)(lVar33,lVar31), uVar38 = local_48,
             uVar39 = uStack_44, uVar40 = uStack_40, uVar41 = uStack_3c, iVar25 == 0)) {
            uVar38 = extraout_XMM0_Da_03;
            if (lVar26 != 0) {
              uVar38 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar33,1);
            }
            if (lVar33 != 0) {
              uVar38 = (*(code *)PTR___rust_dealloc_00798fc8)(lVar33,1);
            }
            if (lVar32 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,1);
            }
            goto LAB_00526622;
          }
          uStack_100 = (uint)local_d8;
          uStack_fc = local_d8._4_4_;
          uStack_f8 = uStack_d0;
          uStack_f0 = local_c8;
          uStack_e8 = uStack_c0;
          local_e0 = local_b8;
          uStack_138 = uVar5;
          uStack_130 = uVar38;
          uStack_12c = uVar39;
          uStack_128 = uVar40;
          uStack_124 = uVar41;
          uStack_120 = uVar6;
          lStack_118 = lVar31;
          uStack_110 = lVar32;
          local_108 = uVar7;
        }
        (*(code *)PTR_now_00799478)();
        uVar38 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
                 ::to_rfc3339(&local_d8,local_54);
        if (*(longlong *)(lVar29 + 0x60) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,1);
        }
        *(undefined8 *)(lVar29 + 0x70) = local_c8;
        *(uint *)(lVar29 + 0x60) = (uint)local_d8;
        *(undefined4 *)(lVar29 + 100) = local_d8._4_4_;
        *(undefined4 *)(lVar29 + 0x68) = (undefined4)uStack_d0;
        *(undefined4 *)(lVar29 + 0x6c) = uStack_d0._4_4_;
        (*(code *)PTR_now_00799478)();
        iVar34 = (int)(uint)local_d8 >> 0xd;
        iVar25 = iVar34 + -1;
        iVar28 = 0;
        if (iVar34 < 1) {
          iVar28 = (1U - iVar34) / 400 + 1;
          iVar25 = iVar25 + iVar28 * 400;
          iVar28 = iVar28 * -0x23ab1;
        }
        lVar31 = (uStack_d0 & 0xffffffff) / 1000000 +
                 ((longlong)
                  (int)(((((uint)local_d8 >> 4 & 0x1ff) + iVar28) - iVar25 / 100) +
                        (iVar25 * 0x5b5 >> 2) + (iVar25 / 100 >> 2) + -0xaf93b) * 0x15180 +
                 (local_d8 >> 0x20)) * 1000;
        lVar33 = 0;
        if (0 < lVar31) {
          lVar33 = lVar31;
        }
        *(longlong *)(lVar29 + 0x260) = lVar33;
        local_88 = uStack_e8;
        uStack_80 = local_e0;
        local_98 = uStack_f8;
        uStack_90 = uStack_f0;
        local_a8 = (undefined4)local_108;
        uStack_a4 = local_108._4_4_;
        uStack_a0 = uStack_100;
        uStack_9c = uStack_fc;
        local_b8 = lStack_118;
        uStack_b0 = (undefined4)uStack_110;
        uStack_ac = uStack_110._4_4_;
        local_c8 = CONCAT44(uStack_124,uStack_128);
        uStack_c0 = uStack_120;
        local_d8 = uStack_138;
        uStack_d0 = CONCAT44(uStack_12c,uStack_130);
        if (local_70 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(lVar31,1);
        }
        uVar24 = uStack_80;
        uVar23 = local_88;
        uVar22 = uStack_90;
        uVar27 = local_98;
        uVar39 = uStack_9c;
        uVar38 = uStack_a0;
        lVar29 = local_b8;
        uVar7 = uStack_c0;
        uVar6 = local_c8;
        uVar5 = uStack_d0;
        if (lVar26 == -1) {
          bVar14 = false;
        }
        else {
          uVar41 = local_d8._4_4_;
          local_108 = CONCAT44(uStack_a4,local_a8);
          uStack_110 = CONCAT44(uStack_ac,uStack_b0);
          uVar40 = (undefined4)local_d8;
          lVar33 = *(longlong *)(param_2 + 0x58);
          if (lVar33 == *(longlong *)(param_2 + 0x48)) {
            <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>>
            ::grow_one(param_2 + 0x48);
          }
          lVar31 = *(longlong *)(param_2 + 0x50);
          lVar32 = lVar33 * 0x68;
          *(undefined8 *)(lVar31 + 0x60 + lVar32) = uVar24;
          puVar2 = (undefined8 *)(lVar31 + 0x50 + lVar32);
          *puVar2 = uVar22;
          puVar2[1] = uVar23;
          puVar2 = (undefined8 *)(lVar31 + 0x40 + lVar32);
          *puVar2 = CONCAT44(uVar39,uVar38);
          puVar2[1] = uVar27;
          local_140 = (undefined4)lVar26;
          uStack_13c = (undefined4)((ulonglong)lVar26 >> 0x20);
          puVar2 = (undefined8 *)(lVar31 + 0x30 + lVar32);
          *puVar2 = uStack_110;
          puVar2[1] = local_108;
          puVar2 = (undefined8 *)(lVar31 + 0x20 + lVar32);
          *puVar2 = uVar7;
          puVar2[1] = lVar29;
          puVar2 = (undefined8 *)(lVar31 + 0x10 + lVar32);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar1 = (undefined4 *)(lVar31 + lVar32);
          *puVar1 = local_140;
          puVar1[1] = uStack_13c;
          puVar1[2] = uVar40;
          puVar1[3] = uVar41;
          *(longlong *)(param_2 + 0x58) = lVar33 + 1;
          bVar14 = false;
        }
        goto LAB_005268b4;
      }
      uVar27 = *(ulonglong *)(lVar29 + 0xf0);
      if (uVar27 != 0) {
        uVar3 = *(ulonglong *)(lVar29 + 0xe8);
        uVar4 = *(ulonglong *)(lVar29 + 0xd8);
        uVar35 = uVar4;
        if (uVar3 < uVar4) {
          uVar35 = 0;
        }
        uVar36 = uVar3 - uVar35;
        uVar30 = uVar4 - uVar36;
        lVar33 = (uVar27 - uVar30) * 0x18;
        if (uVar27 <= uVar30) {
          lVar33 = 0;
        }
        lVar31 = *(longlong *)(lVar29 + 0xe0);
        uVar37 = uVar36 + uVar27;
        if (uVar30 < uVar27) {
          uVar37 = uVar4;
        }
        if (uVar36 != uVar37) {
          if (uVar27 < uVar30) {
            uVar30 = uVar27;
          }
          lVar32 = 0;
          do {
            if ((*(longlong *)(uVar3 * 0x18 + uVar35 * -0x18 + lVar31 + 0x10 + lVar32) == param_4)
               && (iVar25 = (*(code *)PTR_bcmp_00799020)(param_1,param_4),
                  param_1 = extraout_XMM0_Da_02, iVar25 == 0)) goto LAB_00526447;
            lVar32 = lVar32 + 0x18;
          } while (uVar30 * 0x18 != lVar32);
        }
        if (lVar33 != 0) {
          lVar32 = 0;
          do {
            if ((*(longlong *)(lVar31 + 0x10 + lVar32) == param_4) &&
               (iVar25 = (*(code *)PTR_bcmp_00799020)(param_1,param_4),
               param_1 = extraout_XMM0_Da_01, iVar25 == 0)) goto LAB_00526447;
            lVar32 = lVar32 + 0x18;
          } while (lVar33 != lVar32);
        }
      }
      lVar29 = lVar29 + 0x280;
    } while (lVar29 != lVar26);
    bVar14 = true;
  }
LAB_005268b4:
  uVar27 = persist(param_2);
  uVar38 = extraout_XMM0_Da_04;
  if (((uVar27 != 0) && (1 < ((uint)uVar27 & 3) - 2)) && ((uVar27 & 3) != 0)) {
    uVar38 = (*(code *)PTR_drop_00799040)();
  }
  if (bVar14) {
    if (*param_5 != 0) {
      uVar38 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,1);
    }
    if (param_5[3] != 0) {
      uVar38 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,1);
    }
    if (param_5[6] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar38,1);
    }
  }
  return;
}


