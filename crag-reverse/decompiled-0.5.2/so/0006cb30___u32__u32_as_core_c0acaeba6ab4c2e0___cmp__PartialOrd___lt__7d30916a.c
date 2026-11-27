// 0006cb30 <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::<u32, <u32 as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::quicksort::quicksort::
<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (uint *param_1,ulonglong param_2,uint *param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  bool bVar26;
  uint local_b0 [32];
  
  if (0x20 < param_2) {
    do {
      if (param_4 == 0) {
        heapsort::heapsort::<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (param_1,param_2,param_5);
        return;
      }
      if (param_2 < 0x40) {
        uVar10 = *param_1;
        uVar11 = param_1[(param_2 >> 3) * 4];
        uVar18 = param_1[(param_2 >> 3) * 7];
        puVar5 = param_1 + (param_2 >> 3) * 4;
        if (uVar11 < uVar18 != uVar10 < uVar11) {
          puVar5 = param_1 + (param_2 >> 3) * 7;
        }
        if (uVar10 < uVar18 != uVar10 < uVar11) {
          puVar5 = param_1;
        }
        lVar6 = (longlong)puVar5 - (longlong)param_1;
        if (param_3 == (uint *)0x0) goto LAB_0006d219;
LAB_0006d174:
        uVar10 = *(uint *)((longlong)param_1 + lVar6);
        uVar11 = *param_1;
        if (*param_3 < uVar10) goto LAB_0006d220;
        *param_1 = uVar10;
        *(uint *)((longlong)param_1 + lVar6) = uVar11;
        puVar5 = param_1 + 1;
        uVar10 = *param_1;
        uVar11 = param_1[1];
        puVar12 = param_1 + 2;
        if (puVar12 < param_1 + (param_2 - 1)) {
          lVar6 = 0;
          do {
            puVar4 = puVar12;
            uVar18 = *puVar4;
            puVar4[-1] = puVar5[lVar6];
            puVar5[lVar6] = uVar18;
            lVar6 = (lVar6 + 1) - (ulonglong)(uVar10 < uVar18);
            uVar18 = puVar4[1];
            *puVar4 = puVar5[lVar6];
            puVar5[lVar6] = uVar18;
            lVar6 = (lVar6 + 1) - (ulonglong)(uVar10 < uVar18);
            puVar12 = puVar4 + 2;
          } while (puVar12 < param_1 + (param_2 - 1));
          puVar4 = puVar4 + 1;
          if (puVar12 != param_1 + param_2) goto LAB_0006d340;
        }
        else {
          lVar6 = 0;
          puVar4 = puVar5;
          if (puVar12 != param_1 + param_2) {
LAB_0006d340:
            do {
              puVar15 = puVar12;
              uVar18 = *puVar15;
              *puVar4 = puVar5[lVar6];
              puVar5[lVar6] = uVar18;
              lVar6 = (lVar6 + 1) - (ulonglong)(uVar10 < uVar18);
              puVar12 = puVar15 + 1;
              puVar4 = puVar15;
            } while (puVar15 + 1 != param_1 + param_2);
          }
        }
        *puVar4 = puVar5[lVar6];
        puVar5[lVar6] = uVar11;
        uVar17 = (lVar6 + 1) - (ulonglong)(uVar10 < uVar11);
        if (param_2 <= uVar17) goto LAB_0006d4c6;
        uVar10 = *param_1;
        *param_1 = param_1[uVar17];
        param_1[uVar17] = uVar10;
        uVar25 = -(uVar17 + 1);
        puVar5 = (uint *)0x0;
      }
      else {
        lVar6 = shared::pivot::median3_rec::
                <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>(param_1);
        lVar6 = lVar6 - (longlong)param_1;
        if (param_3 != (uint *)0x0) goto LAB_0006d174;
LAB_0006d219:
        uVar11 = *param_1;
        uVar10 = *(uint *)((longlong)param_1 + lVar6);
LAB_0006d220:
        *param_1 = uVar10;
        *(uint *)((longlong)param_1 + lVar6) = uVar11;
        puVar5 = param_1 + 1;
        uVar10 = *param_1;
        uVar11 = param_1[1];
        puVar12 = param_1 + 2;
        if (puVar12 < param_1 + (param_2 - 1)) {
          lVar6 = 0;
          do {
            puVar4 = puVar12;
            uVar17 = (ulonglong)(*puVar4 < uVar10);
            puVar4[-1] = puVar5[lVar6];
            puVar5[lVar6] = *puVar4;
            lVar1 = lVar6 + uVar17;
            uVar18 = puVar4[1];
            *puVar4 = puVar5[lVar1];
            puVar5[lVar1] = uVar18;
            lVar6 = lVar6 + uVar17 + (ulonglong)(uVar18 < uVar10);
            puVar12 = puVar4 + 2;
          } while (puVar12 < param_1 + (param_2 - 1));
          puVar4 = puVar4 + 1;
          if (puVar12 != param_1 + param_2) goto LAB_0006d2b0;
        }
        else {
          lVar6 = 0;
          puVar4 = puVar5;
          if (puVar12 != param_1 + param_2) {
LAB_0006d2b0:
            do {
              puVar15 = puVar12;
              uVar18 = *puVar15;
              *puVar4 = puVar5[lVar6];
              puVar5[lVar6] = uVar18;
              lVar6 = lVar6 + (ulonglong)(uVar18 < uVar10);
              puVar12 = puVar15 + 1;
              puVar4 = puVar15;
            } while (puVar15 + 1 != param_1 + param_2);
          }
        }
        *puVar4 = puVar5[lVar6];
        puVar5[lVar6] = uVar11;
        uVar17 = lVar6 + (ulonglong)(uVar11 < uVar10);
        if (param_2 <= uVar17) goto LAB_0006d4c6;
        puVar5 = param_1 + uVar17;
        uVar10 = *param_1;
        *param_1 = param_1[uVar17];
        param_1[uVar17] = uVar10;
        uVar25 = ~uVar17;
        <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (param_1,uVar17,param_3,param_4 + -1,param_5);
      }
      param_4 = param_4 + -1;
      param_2 = param_2 + uVar25;
      param_1 = param_1 + uVar17 + 1;
      param_3 = puVar5;
    } while (0x20 < param_2);
  }
  if (1 < param_2) {
    uVar25 = param_2 >> 1;
    uVar17 = uVar25;
    if (param_2 < 0x12) {
      uVar17 = param_2;
    }
    puVar5 = param_1 + uVar25;
    puVar12 = param_1;
    do {
      if (uVar17 < 0xd) {
        uVar9 = 1;
        if (8 < uVar17) {
          uVar10 = puVar12[3];
          uVar11 = *puVar12;
          uVar18 = puVar12[1];
          uVar7 = uVar11;
          if (uVar11 < uVar10) {
            uVar7 = uVar10;
          }
          if (uVar10 < uVar11) {
            uVar11 = uVar10;
          }
          uVar10 = puVar12[7];
          uVar24 = uVar18;
          if (uVar18 < uVar10) {
            uVar24 = uVar10;
          }
          if (uVar10 < uVar18) {
            uVar18 = uVar10;
          }
          uVar10 = puVar12[5];
          uVar20 = puVar12[2];
          uVar13 = uVar20;
          if (uVar20 < uVar10) {
            uVar13 = uVar10;
          }
          if (uVar10 < uVar20) {
            uVar20 = uVar10;
          }
          uVar10 = puVar12[8];
          uVar19 = puVar12[4];
          uVar14 = uVar19;
          if (uVar19 < uVar10) {
            uVar14 = uVar10;
          }
          if (uVar10 < uVar19) {
            uVar19 = uVar10;
          }
          uVar10 = uVar11;
          if (uVar11 < uVar24) {
            uVar10 = uVar24;
          }
          if (uVar11 <= uVar24) {
            uVar24 = uVar11;
          }
          uVar11 = uVar20;
          if (uVar20 < uVar19) {
            uVar11 = uVar19;
          }
          if (uVar20 <= uVar19) {
            uVar19 = uVar20;
          }
          uVar20 = uVar7;
          if (uVar7 < uVar14) {
            uVar20 = uVar14;
          }
          if (uVar7 <= uVar14) {
            uVar14 = uVar7;
          }
          uVar7 = puVar12[6];
          uVar8 = uVar13;
          if (uVar13 < uVar7) {
            uVar8 = uVar7;
          }
          if (uVar7 < uVar13) {
            uVar13 = uVar7;
          }
          uVar7 = uVar24;
          if (uVar24 < uVar19) {
            uVar7 = uVar19;
          }
          if (uVar24 <= uVar19) {
            uVar19 = uVar24;
          }
          uVar24 = uVar18;
          if (uVar18 < uVar14) {
            uVar24 = uVar14;
          }
          if (uVar18 <= uVar14) {
            uVar14 = uVar18;
          }
          uVar18 = uVar11;
          if (uVar11 < uVar13) {
            uVar18 = uVar13;
          }
          if (uVar11 <= uVar13) {
            uVar13 = uVar11;
          }
          uVar11 = uVar10;
          if (uVar10 < uVar20) {
            uVar11 = uVar20;
          }
          if (uVar10 <= uVar20) {
            uVar20 = uVar10;
          }
          uVar10 = uVar14;
          if (uVar14 < uVar13) {
            uVar10 = uVar13;
          }
          if (uVar14 <= uVar13) {
            uVar13 = uVar14;
          }
          uVar14 = uVar24;
          if (uVar24 < uVar8) {
            uVar14 = uVar8;
          }
          if (uVar8 < uVar24) {
            uVar24 = uVar8;
          }
          uVar8 = uVar18;
          if (uVar18 < uVar20) {
            uVar8 = uVar20;
          }
          if (uVar18 <= uVar20) {
            uVar20 = uVar18;
          }
          uVar18 = uVar19;
          if (uVar19 < uVar13) {
            uVar18 = uVar13;
          }
          if (uVar19 <= uVar13) {
            uVar13 = uVar19;
          }
          uVar19 = uVar7;
          if (uVar7 < uVar10) {
            uVar19 = uVar10;
          }
          if (uVar7 <= uVar10) {
            uVar10 = uVar7;
          }
          uVar7 = uVar24;
          if (uVar24 < uVar20) {
            uVar7 = uVar20;
          }
          if (uVar24 <= uVar20) {
            uVar20 = uVar24;
          }
          uVar24 = uVar14;
          if (uVar14 < uVar11) {
            uVar24 = uVar11;
          }
          if (uVar11 < uVar14) {
            uVar14 = uVar11;
          }
          uVar11 = uVar10;
          if (uVar10 < uVar20) {
            uVar11 = uVar20;
          }
          if (uVar10 <= uVar20) {
            uVar20 = uVar10;
          }
          uVar10 = uVar19;
          if (uVar19 < uVar7) {
            uVar10 = uVar7;
          }
          *puVar12 = uVar13;
          if (uVar19 <= uVar7) {
            uVar7 = uVar19;
          }
          uVar13 = uVar14;
          if (uVar14 < uVar8) {
            uVar13 = uVar8;
          }
          puVar12[8] = uVar24;
          if (uVar8 < uVar14) {
            uVar14 = uVar8;
          }
          uVar24 = uVar18;
          if (uVar18 < uVar20) {
            uVar24 = uVar20;
          }
          puVar12[7] = uVar13;
          if (uVar18 <= uVar20) {
            uVar20 = uVar18;
          }
          uVar18 = uVar11;
          if (uVar11 < uVar7) {
            uVar18 = uVar7;
          }
          puVar12[1] = uVar20;
          if (uVar11 <= uVar7) {
            uVar7 = uVar11;
          }
          uVar11 = uVar10;
          if (uVar10 < uVar14) {
            uVar11 = uVar14;
          }
          puVar12[2] = uVar24;
          puVar12[3] = uVar7;
          if (uVar10 <= uVar14) {
            uVar14 = uVar10;
          }
          puVar12[4] = uVar18;
          puVar12[5] = uVar14;
          puVar12[6] = uVar11;
          uVar9 = 9;
        }
      }
      else {
        uVar10 = puVar12[0xc];
        uVar11 = *puVar12;
        uVar18 = puVar12[1];
        uVar7 = uVar11;
        if (uVar11 < uVar10) {
          uVar7 = uVar10;
        }
        if (uVar10 < uVar11) {
          uVar11 = uVar10;
        }
        uVar10 = puVar12[10];
        uVar24 = uVar18;
        if (uVar18 < uVar10) {
          uVar24 = uVar10;
        }
        if (uVar10 < uVar18) {
          uVar18 = uVar10;
        }
        uVar10 = puVar12[9];
        uVar20 = puVar12[2];
        uVar13 = uVar20;
        if (uVar20 < uVar10) {
          uVar13 = uVar10;
        }
        if (uVar10 < uVar20) {
          uVar20 = uVar10;
        }
        uVar10 = puVar12[7];
        uVar19 = puVar12[3];
        uVar14 = uVar19;
        if (uVar19 < uVar10) {
          uVar14 = uVar10;
        }
        if (uVar10 < uVar19) {
          uVar19 = uVar10;
        }
        uVar10 = puVar12[0xb];
        uVar8 = puVar12[5];
        uVar22 = uVar8;
        if (uVar8 < uVar10) {
          uVar22 = uVar10;
        }
        if (uVar10 < uVar8) {
          uVar8 = uVar10;
        }
        uVar10 = puVar12[8];
        uVar3 = puVar12[6];
        uVar23 = uVar3;
        if (uVar3 < uVar10) {
          uVar23 = uVar10;
        }
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
        }
        uVar10 = uVar18;
        if (uVar18 < uVar3) {
          uVar10 = uVar3;
        }
        if (uVar18 <= uVar3) {
          uVar3 = uVar18;
        }
        uVar18 = uVar20;
        if (uVar20 < uVar19) {
          uVar18 = uVar19;
        }
        if (uVar20 <= uVar19) {
          uVar19 = uVar20;
        }
        uVar20 = puVar12[4];
        uVar21 = uVar20;
        if (uVar20 < uVar22) {
          uVar21 = uVar22;
        }
        if (uVar20 <= uVar22) {
          uVar22 = uVar20;
        }
        uVar20 = uVar14;
        if (uVar14 < uVar13) {
          uVar20 = uVar13;
        }
        if (uVar13 < uVar14) {
          uVar14 = uVar13;
        }
        uVar13 = uVar23;
        if (uVar23 < uVar24) {
          uVar13 = uVar24;
        }
        if (uVar24 < uVar23) {
          uVar23 = uVar24;
        }
        uVar24 = uVar11;
        if (uVar11 < uVar22) {
          uVar24 = uVar22;
        }
        if (uVar11 <= uVar22) {
          uVar22 = uVar11;
        }
        uVar11 = uVar3;
        if (uVar3 < uVar19) {
          uVar11 = uVar19;
        }
        if (uVar3 <= uVar19) {
          uVar19 = uVar3;
        }
        uVar3 = uVar18;
        if (uVar18 < uVar10) {
          uVar3 = uVar10;
        }
        if (uVar10 < uVar18) {
          uVar18 = uVar10;
        }
        uVar10 = uVar14;
        if (uVar14 < uVar23) {
          uVar10 = uVar23;
        }
        if (uVar14 <= uVar23) {
          uVar23 = uVar14;
        }
        uVar14 = uVar20;
        if (uVar20 < uVar13) {
          uVar14 = uVar13;
        }
        if (uVar20 <= uVar13) {
          uVar13 = uVar20;
        }
        uVar20 = uVar21;
        if (uVar21 < uVar7) {
          uVar20 = uVar7;
        }
        if (uVar7 < uVar21) {
          uVar21 = uVar7;
        }
        uVar7 = uVar24;
        if (uVar24 < uVar3) {
          uVar7 = uVar3;
        }
        if (uVar24 <= uVar3) {
          uVar3 = uVar24;
        }
        uVar24 = uVar8;
        if (uVar8 < uVar13) {
          uVar24 = uVar13;
        }
        if (uVar8 <= uVar13) {
          uVar13 = uVar8;
        }
        uVar8 = uVar10;
        if (uVar10 < uVar21) {
          uVar8 = uVar21;
        }
        if (uVar10 <= uVar21) {
          uVar21 = uVar10;
        }
        uVar10 = uVar14;
        if (uVar14 < uVar20) {
          uVar10 = uVar20;
        }
        if (uVar14 <= uVar20) {
          uVar20 = uVar14;
        }
        uVar14 = uVar22;
        if (uVar22 < uVar13) {
          uVar14 = uVar13;
        }
        if (uVar22 <= uVar13) {
          uVar13 = uVar22;
        }
        uVar22 = uVar18;
        if (uVar18 < uVar21) {
          uVar22 = uVar21;
        }
        if (uVar18 <= uVar21) {
          uVar21 = uVar18;
        }
        uVar18 = uVar3;
        if (uVar3 < uVar23) {
          uVar18 = uVar23;
        }
        if (uVar23 < uVar3) {
          uVar3 = uVar23;
        }
        uVar23 = uVar7;
        if (uVar7 < uVar8) {
          uVar23 = uVar8;
        }
        if (uVar7 <= uVar8) {
          uVar8 = uVar7;
        }
        uVar7 = uVar24;
        if (uVar24 < uVar20) {
          uVar7 = uVar20;
        }
        if (uVar24 <= uVar20) {
          uVar20 = uVar24;
        }
        uVar24 = uVar13;
        if (uVar13 < uVar19) {
          uVar24 = uVar19;
        }
        if (uVar19 < uVar13) {
          uVar13 = uVar19;
        }
        uVar19 = uVar11;
        if (uVar11 < uVar14) {
          uVar19 = uVar14;
        }
        if (uVar11 <= uVar14) {
          uVar14 = uVar11;
        }
        uVar11 = uVar8;
        if (uVar8 < uVar20) {
          uVar11 = uVar20;
        }
        if (uVar8 <= uVar20) {
          uVar20 = uVar8;
        }
        uVar8 = uVar18;
        if (uVar18 < uVar22) {
          uVar8 = uVar22;
        }
        if (uVar22 < uVar18) {
          uVar18 = uVar22;
        }
        uVar22 = uVar7;
        if (uVar7 < uVar23) {
          uVar22 = uVar23;
        }
        if (uVar23 < uVar7) {
          uVar7 = uVar23;
        }
        uVar23 = uVar24;
        if (uVar24 < uVar21) {
          uVar23 = uVar21;
        }
        if (uVar21 < uVar24) {
          uVar24 = uVar21;
        }
        uVar21 = uVar14;
        if (uVar14 < uVar3) {
          uVar21 = uVar3;
        }
        if (uVar3 < uVar14) {
          uVar14 = uVar3;
        }
        uVar3 = uVar19;
        if (uVar19 < uVar20) {
          uVar3 = uVar20;
        }
        if (uVar19 <= uVar20) {
          uVar20 = uVar19;
        }
        uVar19 = uVar11;
        if (uVar11 < uVar7) {
          uVar19 = uVar7;
        }
        if (uVar11 <= uVar7) {
          uVar7 = uVar11;
        }
        uVar11 = uVar24;
        if (uVar24 < uVar14) {
          uVar11 = uVar14;
        }
        if (uVar24 <= uVar14) {
          uVar14 = uVar24;
        }
        uVar24 = uVar23;
        if (uVar23 < uVar21) {
          uVar24 = uVar21;
        }
        puVar12[0xc] = uVar10;
        if (uVar23 <= uVar21) {
          uVar21 = uVar23;
        }
        uVar10 = uVar20;
        if (uVar20 < uVar18) {
          uVar10 = uVar18;
        }
        *puVar12 = uVar13;
        if (uVar18 < uVar20) {
          uVar20 = uVar18;
        }
        uVar18 = uVar3;
        if (uVar3 < uVar8) {
          uVar18 = uVar8;
        }
        puVar12[0xb] = uVar22;
        if (uVar8 < uVar3) {
          uVar3 = uVar8;
        }
        uVar13 = uVar11;
        if (uVar11 < uVar21) {
          uVar13 = uVar21;
        }
        puVar12[10] = uVar19;
        if (uVar11 <= uVar21) {
          uVar21 = uVar11;
        }
        uVar11 = uVar24;
        if (uVar24 < uVar20) {
          uVar11 = uVar20;
        }
        puVar12[1] = uVar14;
        if (uVar24 <= uVar20) {
          uVar20 = uVar24;
        }
        uVar24 = uVar3;
        if (uVar3 < uVar10) {
          uVar24 = uVar10;
        }
        puVar12[2] = uVar21;
        if (uVar10 < uVar3) {
          uVar3 = uVar10;
        }
        uVar10 = uVar18;
        if (uVar18 < uVar7) {
          uVar10 = uVar7;
        }
        puVar12[7] = uVar24;
        if (uVar7 < uVar18) {
          uVar18 = uVar7;
        }
        uVar7 = uVar13;
        if (uVar13 < uVar20) {
          uVar7 = uVar20;
        }
        puVar12[8] = uVar18;
        if (uVar13 <= uVar20) {
          uVar20 = uVar13;
        }
        uVar18 = uVar11;
        if (uVar11 < uVar3) {
          uVar18 = uVar3;
        }
        puVar12[9] = uVar10;
        puVar12[3] = uVar20;
        if (uVar11 <= uVar3) {
          uVar3 = uVar11;
        }
        puVar12[4] = uVar7;
        puVar12[5] = uVar3;
        puVar12[6] = uVar18;
        uVar9 = 0xd;
      }
      if (uVar17 <= uVar9 - 1) goto LAB_0006d4c6;
      if (uVar9 != uVar17) {
        uVar9 = (ulonglong)(uint)((int)uVar9 << 2);
        puVar4 = (uint *)((longlong)puVar12 + uVar9);
        do {
          uVar10 = puVar4[-1];
          uVar11 = *puVar4;
          if (uVar11 < uVar10) {
            uVar16 = uVar9;
            do {
              *(uint *)((longlong)puVar12 + uVar16) = uVar10;
              if (uVar16 == 4) {
                puVar15 = puVar12;
                goto LAB_0006d0a3;
              }
              uVar10 = *(uint *)((longlong)puVar12 + (uVar16 - 8));
              uVar16 = uVar16 - 4;
            } while (uVar11 < uVar10);
            puVar15 = (uint *)(uVar16 + (longlong)puVar12);
LAB_0006d0a3:
            *puVar15 = uVar11;
          }
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 + 4;
        } while (puVar4 != puVar12 + uVar17);
      }
      if (param_2 < 0x12) {
        return;
      }
      bVar26 = puVar12 == param_1;
      uVar17 = param_2 - uVar25;
      puVar12 = puVar5;
    } while (bVar26);
    puVar12 = param_1 + (param_2 - 1);
    puVar4 = puVar5 + -1;
    uVar9 = 0;
    uVar17 = param_2;
    do {
      uVar17 = uVar17 - 1;
      bVar26 = *puVar5 < *param_1;
      uVar10 = *param_1;
      if (bVar26) {
        uVar10 = *puVar5;
      }
      uVar11 = *puVar12;
      uVar18 = *puVar4;
      uVar7 = uVar18;
      if (uVar18 < uVar11) {
        uVar7 = uVar11;
      }
      local_b0[uVar9] = uVar10;
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + bVar26;
      param_1 = param_1 + !bVar26;
      local_b0[uVar17] = uVar7;
      puVar12 = puVar12 + ((ulonglong)(uVar11 < uVar18) - 1);
      puVar4 = puVar4 + -(ulonglong)(uVar11 < uVar18);
    } while (uVar25 != uVar9);
    if ((param_2 & 1) != 0) {
      bVar26 = param_1 < puVar4 + 1;
      puVar15 = puVar5;
      if (bVar26) {
        puVar15 = param_1;
      }
      local_b0[uVar9] = *puVar15;
      param_1 = param_1 + bVar26;
      puVar5 = puVar5 + !bVar26;
    }
    if ((param_1 != puVar4 + 1) || (puVar5 != puVar12 + 1)) {
      (*(code *)PTR_panic_on_ord_violation_000c3fb0)();
LAB_0006d4c6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (*(code *)PTR_memcpy_000c3aa8)(uVar9,param_2 << 2);
  }
  return;
}


