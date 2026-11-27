// 0049fd50 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong *param_1,ulonglong param_2,longlong *param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  bool bVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar23;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  longlong *local_40;
  undefined8 local_38;
  
  local_38 = param_5;
  if (0x20 < param_2) {
    do {
      puVar6 = PTR_memcmp_00799528;
      if (param_4 == 0) {
        heapsort::heapsort::<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (param_1,param_2);
        return;
      }
      uVar10 = param_2 >> 3;
      plVar21 = param_1 + uVar10 * 8;
      plVar16 = param_1 + uVar10 * 0xe;
      local_58 = param_1;
      local_48 = param_2;
      local_40 = param_3;
      if (param_2 < 0x40) {
        uVar15 = param_1[1];
        uVar14 = plVar21[1];
        uVar17 = uVar14;
        if (uVar15 < uVar14) {
          uVar17 = uVar15;
        }
        iVar7 = (*(code *)PTR_memcmp_00799528)(uVar10,uVar17);
        uVar10 = uVar15 - uVar14;
        if (iVar7 != 0) {
          uVar10 = (longlong)iVar7;
        }
        local_50 = *plVar16;
        uVar17 = plVar16[1];
        uVar13 = uVar15;
        if (uVar17 <= uVar15) {
          uVar13 = uVar17;
        }
        iVar7 = (*(code *)puVar6)(puVar6,uVar13);
        uVar15 = uVar15 - uVar17;
        if (iVar7 != 0) {
          uVar15 = (longlong)iVar7;
        }
        param_1 = local_58;
        plVar8 = local_58;
        uVar23 = extraout_XMM0_Da;
        if (-1 < (longlong)(uVar15 ^ uVar10)) {
          uVar15 = uVar17;
          if (uVar14 < uVar17) {
            uVar15 = uVar14;
          }
          iVar7 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da,uVar15);
          uVar15 = uVar14 - uVar17;
          if (iVar7 != 0) {
            uVar15 = (longlong)iVar7;
          }
          plVar8 = plVar21;
          if ((longlong)(uVar15 ^ uVar10) < 0) {
            plVar8 = plVar16;
          }
          param_1 = local_58;
          uVar23 = extraout_XMM0_Da_00;
        }
      }
      else {
        plVar8 = (longlong *)
                 shared::pivot::median3_rec::
                 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                           (param_1,plVar21,plVar16);
        uVar23 = extraout_XMM0_Da_01;
      }
      param_4 = param_4 + -1;
      lVar20 = (longlong)plVar8 - (longlong)param_1;
      if (local_40 == (longlong *)0x0) {
LAB_004a0030:
        lVar12 = *param_1;
        lVar18 = param_1[1];
        lVar5 = ((longlong *)((longlong)param_1 + lVar20))[1];
        *param_1 = *(longlong *)((longlong)param_1 + lVar20);
        param_1[1] = lVar5;
        *(longlong *)((longlong)param_1 + lVar20) = lVar12;
        ((longlong *)((longlong)param_1 + lVar20))[1] = lVar18;
        plVar21 = param_1 + 2;
        uVar23 = (undefined4)param_1[2];
        local_68 = param_1[2];
        uStack_60 = param_1[3];
        lVar18 = local_48 * 0x10;
        lVar12 = local_48 * 2;
        plVar16 = param_1 + 4;
        lVar20 = *param_1;
        uVar10 = param_1[1];
        if (plVar16 < param_1 + lVar12 + -2) {
          uVar15 = 0;
          local_50 = lVar18;
          do {
            plVar8 = plVar16;
            puVar6 = PTR_memcmp_00799528;
            uVar14 = plVar8[1];
            uVar17 = uVar14;
            if (uVar10 <= uVar14) {
              uVar17 = uVar10;
            }
            iVar7 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar17);
            lVar18 = uVar14 - uVar10;
            if (iVar7 != 0) {
              lVar18 = (longlong)iVar7;
            }
            lVar19 = uVar15 - (lVar18 >> 0x3f);
            lVar18 = (plVar21 + uVar15 * 2)[1];
            plVar8[-2] = plVar21[uVar15 * 2];
            plVar8[-1] = lVar18;
            lVar18 = *plVar8;
            uVar23 = *(undefined4 *)((longlong)plVar8 + 4);
            lVar5 = plVar8[1];
            uVar2 = *(undefined4 *)((longlong)plVar8 + 0xc);
            plVar16 = plVar21 + uVar15 * 2;
            *(int *)plVar16 = (int)lVar18;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar23;
            *(int *)(plVar16 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
            uVar15 = plVar8[3];
            uVar14 = uVar15;
            if (uVar10 <= uVar15) {
              uVar14 = uVar10;
            }
            iVar7 = (*(code *)puVar6)((int)lVar18,uVar14);
            lVar18 = uVar15 - uVar10;
            if (iVar7 != 0) {
              lVar18 = (longlong)iVar7;
            }
            lVar5 = (plVar21 + lVar19 * 2)[1];
            *plVar8 = plVar21[lVar19 * 2];
            plVar8[1] = lVar5;
            uVar23 = (undefined4)plVar8[2];
            uVar2 = *(undefined4 *)((longlong)plVar8 + 0x14);
            lVar5 = plVar8[3];
            uVar3 = *(undefined4 *)((longlong)plVar8 + 0x1c);
            plVar16 = plVar21 + lVar19 * 2;
            *(undefined4 *)plVar16 = uVar23;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar2;
            *(int *)(plVar16 + 1) = (int)lVar5;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar3;
            uVar15 = lVar19 - (lVar18 >> 0x3f);
            plVar16 = plVar8 + 4;
          } while (plVar16 < param_1 + lVar12 + -2);
          plVar8 = plVar8 + 2;
          lVar18 = local_50;
        }
        else {
          uVar15 = 0;
          plVar8 = plVar21;
        }
        plVar11 = (longlong *)(lVar18 + (longlong)local_58);
        do {
          puVar9 = (ulonglong *)(plVar16 + 1);
          plVar4 = plVar16;
          if (plVar16 == plVar11) {
            puVar9 = &uStack_60;
            plVar4 = &local_68;
          }
          uVar14 = *puVar9;
          uVar17 = uVar14;
          if (uVar10 <= uVar14) {
            uVar17 = uVar10;
          }
          iVar7 = (*(code *)PTR_memcmp_00799528)(plVar11,uVar17);
          lVar12 = uVar14 - uVar10;
          if (iVar7 != 0) {
            lVar12 = (longlong)iVar7;
          }
          uVar14 = uVar15 - (lVar12 >> 0x3f);
          lVar12 = (plVar21 + uVar15 * 2)[1];
          *plVar8 = plVar21[uVar15 * 2];
          plVar8[1] = lVar12;
          uVar23 = *(undefined4 *)((longlong)plVar4 + 4);
          lVar12 = plVar4[1];
          uVar2 = *(undefined4 *)((longlong)plVar4 + 0xc);
          plVar8 = plVar21 + uVar15 * 2;
          *(int *)plVar8 = (int)*plVar4;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar23;
          *(int *)(plVar8 + 1) = (int)lVar12;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          bVar22 = plVar16 != plVar11;
          plVar8 = plVar16;
          uVar15 = uVar14;
          plVar16 = plVar16 + 2;
        } while (bVar22);
        if (local_48 <= uVar14) {
LAB_004a0340:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        param_3 = local_58 + uVar14 * 2;
        lVar12 = *local_58;
        uVar10 = local_58[1];
        lVar18 = (local_58 + uVar14 * 2)[1];
        *local_58 = local_58[uVar14 * 2];
        local_58[1] = lVar18;
        local_68._0_4_ = (undefined4)lVar12;
        local_68._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_60._4_4_ = (undefined4)(uVar10 >> 0x20);
        plVar21 = local_58 + uVar14 * 2;
        *(undefined4 *)plVar21 = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar21 + 4) = local_68._4_4_;
        *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_60._4_4_;
        param_1 = local_58 + uVar14 * 2 + 2;
        param_2 = local_48 + ~uVar14;
        local_68 = lVar12;
        uStack_60 = uVar10;
        <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (local_58,uVar14,local_40,param_4,local_38,param_6,lVar20);
      }
      else {
        uVar10 = local_40[1];
        uVar15 = *(ulonglong *)((longlong)param_1 + lVar20 + 8);
        uVar14 = uVar15;
        if (uVar10 < uVar15) {
          uVar14 = uVar10;
        }
        iVar7 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar14);
        lVar12 = uVar10 - uVar15;
        if (iVar7 != 0) {
          lVar12 = (longlong)iVar7;
        }
        if (lVar12 < 0) goto LAB_004a0030;
        plVar21 = (longlong *)(lVar20 + (longlong)param_1);
        lVar20 = *param_1;
        lVar12 = param_1[1];
        lVar18 = plVar21[1];
        *param_1 = *plVar21;
        param_1[1] = lVar18;
        *plVar21 = lVar20;
        plVar21[1] = lVar12;
        plVar21 = param_1 + 2;
        uVar23 = (undefined4)param_1[2];
        local_68 = param_1[2];
        uStack_60 = param_1[3];
        lVar20 = local_48 * 0x10;
        plVar16 = param_1 + 4;
        uVar10 = param_1[1];
        if (plVar16 < param_1 + local_48 * 2 + -2) {
          uVar15 = 0;
          local_50 = lVar20;
          local_40 = param_1 + local_48 * 2 + -2;
          do {
            plVar8 = plVar16;
            puVar6 = PTR_memcmp_00799528;
            uVar14 = plVar8[1];
            uVar17 = uVar10 - uVar14;
            if (uVar10 < uVar14) {
              uVar14 = uVar10;
            }
            iVar7 = (*(code *)PTR_memcmp_00799528)(uVar23,uVar14);
            if (iVar7 != 0) {
              uVar17 = (longlong)iVar7;
            }
            lVar18 = uVar15 - ((longlong)~uVar17 >> 0x3f);
            lVar20 = (plVar21 + uVar15 * 2)[1];
            plVar8[-2] = plVar21[uVar15 * 2];
            plVar8[-1] = lVar20;
            lVar20 = *plVar8;
            uVar23 = *(undefined4 *)((longlong)plVar8 + 4);
            lVar12 = plVar8[1];
            uVar2 = *(undefined4 *)((longlong)plVar8 + 0xc);
            plVar16 = plVar21 + uVar15 * 2;
            *(int *)plVar16 = (int)lVar20;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar23;
            *(int *)(plVar16 + 1) = (int)lVar12;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar2;
            uVar15 = plVar8[3];
            uVar14 = uVar10 - uVar15;
            if (uVar10 < uVar15) {
              uVar15 = uVar10;
            }
            iVar7 = (*(code *)puVar6)((int)lVar20,uVar15);
            if (iVar7 != 0) {
              uVar14 = (longlong)iVar7;
            }
            lVar20 = (plVar21 + lVar18 * 2)[1];
            *plVar8 = plVar21[lVar18 * 2];
            plVar8[1] = lVar20;
            uVar23 = (undefined4)plVar8[2];
            uVar2 = *(undefined4 *)((longlong)plVar8 + 0x14);
            lVar20 = plVar8[3];
            uVar3 = *(undefined4 *)((longlong)plVar8 + 0x1c);
            plVar16 = plVar21 + lVar18 * 2;
            *(undefined4 *)plVar16 = uVar23;
            *(undefined4 *)((longlong)plVar16 + 4) = uVar2;
            *(int *)(plVar16 + 1) = (int)lVar20;
            *(undefined4 *)((longlong)plVar16 + 0xc) = uVar3;
            uVar15 = lVar18 - ((longlong)~uVar14 >> 0x3f);
            plVar16 = plVar8 + 4;
          } while (plVar16 < local_40);
          lVar20 = local_50;
          plVar8 = plVar8 + 2;
        }
        else {
          uVar15 = 0;
          plVar8 = plVar21;
        }
        plVar11 = (longlong *)(lVar20 + (longlong)local_58);
        do {
          puVar9 = (ulonglong *)(plVar16 + 1);
          plVar4 = plVar16;
          if (plVar16 == plVar11) {
            puVar9 = &uStack_60;
            plVar4 = &local_68;
          }
          uVar14 = *puVar9;
          uVar17 = uVar10 - uVar14;
          if (uVar10 < uVar14) {
            uVar14 = uVar10;
          }
          iVar7 = (*(code *)PTR_memcmp_00799528)(plVar11,uVar14);
          if (iVar7 != 0) {
            uVar17 = (longlong)iVar7;
          }
          uVar14 = uVar15 - ((longlong)~uVar17 >> 0x3f);
          lVar20 = (plVar21 + uVar15 * 2)[1];
          *plVar8 = plVar21[uVar15 * 2];
          plVar8[1] = lVar20;
          uVar23 = *(undefined4 *)((longlong)plVar4 + 4);
          lVar20 = plVar4[1];
          uVar2 = *(undefined4 *)((longlong)plVar4 + 0xc);
          plVar8 = plVar21 + uVar15 * 2;
          *(int *)plVar8 = (int)*plVar4;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar23;
          *(int *)(plVar8 + 1) = (int)lVar20;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          bVar22 = plVar16 != plVar11;
          plVar8 = plVar16;
          uVar15 = uVar14;
          plVar16 = plVar16 + 2;
        } while (bVar22);
        if (local_48 <= uVar14) goto LAB_004a0340;
        lVar20 = *local_58;
        uVar10 = local_58[1];
        lVar12 = (local_58 + uVar14 * 2)[1];
        *local_58 = local_58[uVar14 * 2];
        local_58[1] = lVar12;
        local_68._0_4_ = (undefined4)lVar20;
        local_68._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_60._4_4_ = (undefined4)(uVar10 >> 0x20);
        plVar21 = local_58 + uVar14 * 2;
        *(undefined4 *)plVar21 = (undefined4)local_68;
        *(undefined4 *)((longlong)plVar21 + 4) = local_68._4_4_;
        *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_60._4_4_;
        param_2 = local_48 - (uVar14 + 1);
        param_1 = local_58 + (uVar14 + 1) * 2;
        param_3 = (longlong *)0x0;
        local_68 = lVar20;
        uStack_60 = uVar10;
      }
    } while (0x20 < param_2);
  }
  shared::smallsort::small_sort_general::
  <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>(param_1,param_2,local_38);
  return;
}


