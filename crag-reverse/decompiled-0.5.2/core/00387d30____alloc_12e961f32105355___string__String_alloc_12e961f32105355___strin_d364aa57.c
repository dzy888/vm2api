// 00387d30 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 *puVar34;
  bool bVar35;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined8 local_a0;
  ulonglong local_90;
  longlong local_80;
  ulonglong local_50;
  
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_50 = param_2 >> 1;
    puVar30 = param_1 + local_50 * 6;
    puVar34 = param_3 + local_50 * 6;
    if (param_2 < 8) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar16 = param_1[3];
      uVar17 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = uVar17;
      param_3[2] = uVar3;
      param_3[3] = uVar16;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      uVar36 = *(undefined4 *)puVar30;
      uVar5 = *(undefined4 *)((longlong)puVar30 + 4);
      uVar6 = *(undefined4 *)(puVar30 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar30 + 0xc);
      uVar1 = puVar30[2];
      uVar2 = puVar30[3];
      uVar3 = puVar30[5];
      puVar34[4] = puVar30[4];
      puVar34[5] = uVar3;
      puVar34[2] = uVar1;
      puVar34[3] = uVar2;
      *(undefined4 *)puVar34 = uVar36;
      *(undefined4 *)((longlong)puVar34 + 4) = uVar5;
      *(undefined4 *)(puVar34 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar34 + 0xc) = uVar7;
      uVar22 = 1;
    }
    else {
      sort4_stable::
      <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,param_3);
      uVar36 = sort4_stable::
               <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                         (puVar30,puVar34);
      uVar22 = 4;
    }
    if (uVar22 < local_50) {
      local_80 = (ulonglong)(uint)((int)uVar22 * 0x30) - 0x30;
      uVar33 = uVar22;
      do {
        lVar31 = uVar33 * 0x30;
        puVar26 = param_1 + uVar33 * 6;
        uVar36 = *(undefined4 *)puVar26;
        uVar5 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar6 = *(undefined4 *)(puVar26 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = param_1 + uVar33 * 6 + 2;
        uVar8 = *(undefined4 *)puVar26;
        uVar9 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar10 = *(undefined4 *)(puVar26 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = param_1 + uVar33 * 6 + 4;
        uVar12 = *(undefined4 *)puVar26;
        uVar13 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar14 = *(undefined4 *)(puVar26 + 1);
        uVar15 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = param_3 + uVar33 * 6;
        *(undefined4 *)puVar26 = uVar36;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar5;
        *(undefined4 *)(puVar26 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar7;
        puVar26 = param_3 + uVar33 * 6 + 2;
        *(undefined4 *)puVar26 = uVar8;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar9;
        *(undefined4 *)(puVar26 + 1) = uVar10;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar11;
        puVar26 = param_3 + uVar33 * 6 + 4;
        *(undefined4 *)puVar26 = uVar12;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar13;
        *(undefined4 *)(puVar26 + 1) = uVar14;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar15;
        uVar1 = param_3[uVar33 * 6 + 1];
        uVar25 = param_3[uVar33 * 6 + 2];
        uVar32 = param_3[uVar33 * 6 + -4];
        uVar23 = uVar32;
        if (uVar25 < uVar32) {
          uVar23 = uVar25;
        }
        iVar19 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar23);
        lVar28 = uVar25 - uVar32;
        if (iVar19 != 0) {
          lVar28 = (longlong)iVar19;
        }
        uVar20 = (uint)((ulonglong)lVar28 >> 0x3f);
        if (lVar28 == 0) {
          uVar20 = 2;
        }
        uVar36 = extraout_XMM0_Da;
        if (uVar20 != 0) {
          puVar26 = param_3 + uVar33 * 6;
          if (uVar20 == 2) {
            local_a0 = puVar26[4];
            local_90 = puVar26[5];
            uVar32 = puVar26[-1];
            uVar23 = uVar32;
            if (local_90 < uVar32) {
              uVar23 = local_90;
            }
            iVar19 = (*(code *)PTR_memcmp_00799528)(2,uVar23);
            lVar28 = local_90 - uVar32;
            if (iVar19 != 0) {
              lVar28 = (longlong)iVar19;
            }
            uVar36 = extraout_XMM0_Da_00;
            if (-1 < lVar28) goto LAB_00387e64;
          }
          else {
            local_a0 = puVar26[4];
            local_90 = puVar26[5];
          }
          puVar29 = param_3 + uVar33 * 6 + -6;
          uVar2 = *puVar26;
          uVar3 = puVar26[3];
          uVar36 = *(undefined4 *)puVar29;
          uVar5 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x2c);
          uVar6 = *(undefined4 *)(param_3 + uVar33 * 6 + -5);
          uVar7 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x24);
          uVar8 = *(undefined4 *)(param_3 + uVar33 * 6 + -4);
          uVar9 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x1c);
          uVar10 = *(undefined4 *)(param_3 + uVar33 * 6 + -3);
          uVar11 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x14);
          uVar12 = *(undefined4 *)(param_3 + uVar33 * 6 + -2);
          uVar13 = *(undefined4 *)((longlong)param_3 + lVar31 + -0xc);
          uVar14 = *(undefined4 *)(param_3 + uVar33 * 6 + -1);
          uVar15 = *(undefined4 *)((longlong)param_3 + lVar31 + -4);
          *(undefined4 *)puVar26 = uVar36;
          *(undefined4 *)((longlong)puVar26 + 4) = uVar5;
          *(undefined4 *)(puVar26 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar26 + 0xc) = uVar7;
          *(undefined4 *)(puVar26 + 2) = uVar8;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar9;
          *(undefined4 *)(puVar26 + 3) = uVar10;
          *(undefined4 *)((longlong)puVar26 + 0x1c) = uVar11;
          *(undefined4 *)(puVar26 + 4) = uVar12;
          *(undefined4 *)((longlong)puVar26 + 0x24) = uVar13;
          *(undefined4 *)(puVar26 + 5) = uVar14;
          *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar15;
          if (uVar33 != 1) {
            lVar31 = local_80;
            do {
              uVar32 = *(ulonglong *)((longlong)param_3 + lVar31 + -0x20);
              uVar23 = uVar32;
              if (uVar25 < uVar32) {
                uVar23 = uVar25;
              }
              iVar19 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar23);
              lVar28 = uVar25 - uVar32;
              if (iVar19 != 0) {
                lVar28 = (longlong)iVar19;
              }
              uVar20 = 2;
              if (lVar28 != 0) {
                uVar20 = (uint)((ulonglong)lVar28 >> 0x3f);
              }
              puVar26 = (undefined8 *)((longlong)param_3 + lVar31);
              if ((char)uVar20 == '\x02') {
                uVar32 = *(ulonglong *)((longlong)param_3 + lVar31 + -8);
                uVar23 = uVar32;
                if (local_90 < uVar32) {
                  uVar23 = local_90;
                }
                iVar19 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_02,uVar23);
                lVar28 = local_90 - uVar32;
                if (iVar19 != 0) {
                  lVar28 = (longlong)iVar19;
                }
                uVar36 = extraout_XMM0_Da_01;
                if (-1 < lVar28) goto LAB_00388064;
              }
              else if (uVar20 == 0) {
                puVar26 = puVar29;
                uVar36 = extraout_XMM0_Da_02;
                goto LAB_00388064;
              }
              puVar29 = puVar29 + -6;
              uVar36 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x30);
              uVar5 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x2c);
              uVar6 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x28);
              uVar7 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x24);
              uVar8 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x20);
              uVar9 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x1c);
              uVar10 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x18);
              uVar11 = *(undefined4 *)((longlong)param_3 + lVar31 + -0x14);
              uVar12 = *(undefined4 *)((longlong)param_3 + lVar31 + -0xc);
              uVar13 = *(undefined4 *)((longlong)param_3 + lVar31 + -8);
              uVar14 = *(undefined4 *)((longlong)param_3 + lVar31 + -4);
              *(undefined4 *)(puVar26 + 4) = *(undefined4 *)((longlong)param_3 + lVar31 + -0x10);
              *(undefined4 *)((longlong)puVar26 + 0x24) = uVar12;
              *(undefined4 *)(puVar26 + 5) = uVar13;
              *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar14;
              *(undefined4 *)(puVar26 + 2) = uVar8;
              *(undefined4 *)((longlong)puVar26 + 0x14) = uVar9;
              *(undefined4 *)(puVar26 + 3) = uVar10;
              *(undefined4 *)((longlong)puVar26 + 0x1c) = uVar11;
              *(undefined4 *)puVar26 = uVar36;
              *(undefined4 *)((longlong)puVar26 + 4) = uVar5;
              *(undefined4 *)(puVar26 + 1) = uVar6;
              *(undefined4 *)((longlong)puVar26 + 0xc) = uVar7;
              lVar31 = lVar31 + -0x30;
            } while (lVar31 != 0);
            puVar26 = param_3;
LAB_00388064:
            puVar29 = puVar26;
          }
          *puVar29 = uVar2;
          puVar29[1] = uVar1;
          puVar29[2] = uVar25;
          puVar29[3] = uVar3;
          puVar29[4] = local_a0;
          puVar29[5] = local_90;
        }
LAB_00387e64:
        uVar33 = uVar33 + 1;
        local_80 = local_80 + 0x30;
      } while (uVar33 != local_50);
    }
    if (uVar22 < param_2 - local_50) {
      local_90 = (ulonglong)(uint)((int)uVar22 * 0x30) - 0x30;
      do {
        lVar31 = uVar22 * 0x30;
        puVar26 = puVar30 + uVar22 * 6;
        uVar36 = *(undefined4 *)puVar26;
        uVar5 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar6 = *(undefined4 *)(puVar26 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = puVar30 + uVar22 * 6 + 2;
        uVar8 = *(undefined4 *)puVar26;
        uVar9 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar10 = *(undefined4 *)(puVar26 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = puVar30 + uVar22 * 6 + 4;
        uVar12 = *(undefined4 *)puVar26;
        uVar13 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar14 = *(undefined4 *)(puVar26 + 1);
        uVar15 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = puVar34 + uVar22 * 6;
        *(undefined4 *)puVar26 = uVar36;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar5;
        *(undefined4 *)(puVar26 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar7;
        puVar26 = puVar34 + uVar22 * 6 + 2;
        *(undefined4 *)puVar26 = uVar8;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar9;
        *(undefined4 *)(puVar26 + 1) = uVar10;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar11;
        puVar26 = puVar34 + uVar22 * 6 + 4;
        *(undefined4 *)puVar26 = uVar12;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar13;
        *(undefined4 *)(puVar26 + 1) = uVar14;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar15;
        uVar1 = puVar34[uVar22 * 6 + 1];
        uVar33 = puVar34[uVar22 * 6 + 2];
        uVar25 = puVar34[uVar22 * 6 + -4];
        uVar32 = uVar25;
        if (uVar33 < uVar25) {
          uVar32 = uVar33;
        }
        iVar19 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar32);
        lVar28 = uVar33 - uVar25;
        if (iVar19 != 0) {
          lVar28 = (longlong)iVar19;
        }
        uVar20 = (uint)((ulonglong)lVar28 >> 0x3f);
        if (lVar28 == 0) {
          uVar20 = 2;
        }
        uVar36 = extraout_XMM0_Da_03;
        if (uVar20 != 0) {
          puVar26 = puVar34 + uVar22 * 6;
          if (uVar20 == 2) {
            local_a0 = puVar26[4];
            uVar25 = puVar26[5];
            uVar32 = puVar26[-1];
            uVar23 = uVar32;
            if (uVar25 < uVar32) {
              uVar23 = uVar25;
            }
            iVar19 = (*(code *)PTR_memcmp_00799528)(2,uVar23);
            lVar28 = uVar25 - uVar32;
            if (iVar19 != 0) {
              lVar28 = (longlong)iVar19;
            }
            uVar36 = extraout_XMM0_Da_04;
            if (-1 < lVar28) goto LAB_003880cf;
          }
          else {
            local_a0 = puVar26[4];
            uVar25 = puVar26[5];
          }
          puVar29 = puVar34 + uVar22 * 6 + -6;
          uVar2 = *puVar26;
          uVar3 = puVar26[3];
          uVar36 = *(undefined4 *)puVar29;
          uVar5 = *(undefined4 *)((longlong)puVar34 + lVar31 + -0x2c);
          uVar6 = *(undefined4 *)(puVar34 + uVar22 * 6 + -5);
          uVar7 = *(undefined4 *)((longlong)puVar34 + lVar31 + -0x24);
          uVar8 = *(undefined4 *)(puVar34 + uVar22 * 6 + -4);
          uVar9 = *(undefined4 *)((longlong)puVar34 + lVar31 + -0x1c);
          uVar10 = *(undefined4 *)(puVar34 + uVar22 * 6 + -3);
          uVar11 = *(undefined4 *)((longlong)puVar34 + lVar31 + -0x14);
          uVar12 = *(undefined4 *)(puVar34 + uVar22 * 6 + -2);
          uVar13 = *(undefined4 *)((longlong)puVar34 + lVar31 + -0xc);
          uVar14 = *(undefined4 *)(puVar34 + uVar22 * 6 + -1);
          uVar15 = *(undefined4 *)((longlong)puVar34 + lVar31 + -4);
          *(undefined4 *)puVar26 = uVar36;
          *(undefined4 *)((longlong)puVar26 + 4) = uVar5;
          *(undefined4 *)(puVar26 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar26 + 0xc) = uVar7;
          *(undefined4 *)(puVar26 + 2) = uVar8;
          *(undefined4 *)((longlong)puVar26 + 0x14) = uVar9;
          *(undefined4 *)(puVar26 + 3) = uVar10;
          *(undefined4 *)((longlong)puVar26 + 0x1c) = uVar11;
          *(undefined4 *)(puVar26 + 4) = uVar12;
          *(undefined4 *)((longlong)puVar26 + 0x24) = uVar13;
          *(undefined4 *)(puVar26 + 5) = uVar14;
          *(undefined4 *)((longlong)puVar26 + 0x2c) = uVar15;
          if (uVar22 != 1) {
            uVar32 = local_90;
            puVar26 = puVar29;
            do {
              uVar23 = *(ulonglong *)((longlong)puVar34 + uVar32 + -0x20);
              uVar24 = uVar23;
              if (uVar33 < uVar23) {
                uVar24 = uVar33;
              }
              iVar19 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar24);
              lVar31 = uVar33 - uVar23;
              if (iVar19 != 0) {
                lVar31 = (longlong)iVar19;
              }
              uVar20 = 2;
              if (lVar31 != 0) {
                uVar20 = (uint)((ulonglong)lVar31 >> 0x3f);
              }
              puVar29 = (undefined8 *)((longlong)puVar34 + uVar32);
              if ((char)uVar20 == '\x02') {
                uVar23 = *(ulonglong *)((longlong)puVar34 + uVar32 + -8);
                uVar24 = uVar23;
                if (uVar25 < uVar23) {
                  uVar24 = uVar25;
                }
                iVar19 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_06,uVar24);
                lVar31 = uVar25 - uVar23;
                if (iVar19 != 0) {
                  lVar31 = (longlong)iVar19;
                }
                uVar36 = extraout_XMM0_Da_05;
                if (-1 < lVar31) goto LAB_003880a3;
              }
              else if (uVar20 == 0) {
                puVar29 = puVar26;
                uVar36 = extraout_XMM0_Da_06;
                goto LAB_003880a3;
              }
              puVar26 = puVar26 + -6;
              uVar36 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x30);
              uVar5 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x2c);
              uVar6 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x28);
              uVar7 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x24);
              uVar8 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x20);
              uVar9 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x1c);
              uVar10 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x18);
              uVar11 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x14);
              uVar12 = *(undefined4 *)((longlong)puVar34 + uVar32 + -0xc);
              uVar13 = *(undefined4 *)((longlong)puVar34 + uVar32 + -8);
              uVar14 = *(undefined4 *)((longlong)puVar34 + uVar32 + -4);
              *(undefined4 *)(puVar29 + 4) = *(undefined4 *)((longlong)puVar34 + uVar32 + -0x10);
              *(undefined4 *)((longlong)puVar29 + 0x24) = uVar12;
              *(undefined4 *)(puVar29 + 5) = uVar13;
              *(undefined4 *)((longlong)puVar29 + 0x2c) = uVar14;
              *(undefined4 *)(puVar29 + 2) = uVar8;
              *(undefined4 *)((longlong)puVar29 + 0x14) = uVar9;
              *(undefined4 *)(puVar29 + 3) = uVar10;
              *(undefined4 *)((longlong)puVar29 + 0x1c) = uVar11;
              *(undefined4 *)puVar29 = uVar36;
              *(undefined4 *)((longlong)puVar29 + 4) = uVar5;
              *(undefined4 *)(puVar29 + 1) = uVar6;
              *(undefined4 *)((longlong)puVar29 + 0xc) = uVar7;
              uVar32 = uVar32 + -0x30;
            } while (uVar32 != 0);
            puVar29 = puVar34;
          }
LAB_003880a3:
          *puVar29 = uVar2;
          puVar29[1] = uVar1;
          puVar29[2] = uVar33;
          puVar29[3] = uVar3;
          puVar29[4] = local_a0;
          puVar29[5] = uVar25;
        }
LAB_003880cf:
        uVar22 = uVar22 + 1;
        local_90 = local_90 + 0x30;
      } while (uVar22 != param_2 - local_50);
    }
    puVar29 = param_3 + param_2 * 6 + -6;
    puVar30 = puVar34 + -6;
    puVar26 = param_1 + param_2 * 6;
    do {
      puVar27 = param_1;
      puVar18 = PTR_memcmp_00799528;
      uVar22 = puVar34[2];
      uVar33 = param_3[2];
      uVar25 = uVar33;
      if (uVar22 < uVar33) {
        uVar25 = uVar22;
      }
      iVar19 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar25);
      lVar31 = uVar22 - uVar33;
      if (iVar19 != 0) {
        lVar31 = (longlong)iVar19;
      }
      if (lVar31 == 0) {
        uVar22 = puVar34[5];
        uVar33 = param_3[5];
        uVar25 = uVar33;
        if (uVar22 < uVar33) {
          uVar25 = uVar22;
        }
        iVar19 = (*(code *)puVar18)(extraout_XMM0_Da_07,uVar25);
        lVar31 = uVar22 - uVar33;
        if (iVar19 != 0) {
          lVar31 = (longlong)iVar19;
        }
      }
      puVar21 = puVar34;
      if (-1 < lVar31) {
        puVar21 = param_3;
      }
      uVar36 = *(undefined4 *)puVar21;
      uVar5 = *(undefined4 *)((longlong)puVar21 + 4);
      uVar6 = *(undefined4 *)(puVar21 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar21 + 0xc);
      uVar8 = *(undefined4 *)(puVar21 + 2);
      uVar9 = *(undefined4 *)((longlong)puVar21 + 0x14);
      uVar10 = *(undefined4 *)(puVar21 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar21 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)puVar21 + 0x24);
      uVar13 = *(undefined4 *)(puVar21 + 5);
      uVar14 = *(undefined4 *)((longlong)puVar21 + 0x2c);
      *(undefined4 *)(puVar27 + 4) = *(undefined4 *)(puVar21 + 4);
      *(undefined4 *)((longlong)puVar27 + 0x24) = uVar12;
      *(undefined4 *)(puVar27 + 5) = uVar13;
      *(undefined4 *)((longlong)puVar27 + 0x2c) = uVar14;
      *(undefined4 *)(puVar27 + 2) = uVar8;
      *(undefined4 *)((longlong)puVar27 + 0x14) = uVar9;
      *(undefined4 *)(puVar27 + 3) = uVar10;
      *(undefined4 *)((longlong)puVar27 + 0x1c) = uVar11;
      *(undefined4 *)puVar27 = uVar36;
      *(undefined4 *)((longlong)puVar27 + 4) = uVar5;
      *(undefined4 *)(puVar27 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar27 + 0xc) = uVar7;
      uVar22 = puVar29[2];
      uVar33 = puVar30[2];
      uVar25 = uVar33;
      if (uVar22 < uVar33) {
        uVar25 = uVar22;
      }
      iVar19 = (*(code *)puVar18)(puVar30,uVar25);
      lVar28 = uVar22 - uVar33;
      if (iVar19 != 0) {
        lVar28 = (longlong)iVar19;
      }
      if (lVar28 == 0) {
        uVar22 = puVar29[5];
        uVar33 = puVar30[5];
        uVar25 = uVar33;
        if (uVar22 < uVar33) {
          uVar25 = uVar22;
        }
        iVar19 = (*(code *)PTR_memcmp_00799528)(puVar30,uVar25);
        lVar28 = uVar22 - uVar33;
        if (iVar19 != 0) {
          lVar28 = (longlong)iVar19;
        }
      }
      puVar34 = (undefined8 *)((longlong)puVar34 + (ulonglong)(uint)((int)(lVar31 >> 0x3f) * -0x30))
      ;
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)((uint)(-1 < lVar31) * 0x30));
      puVar21 = puVar30;
      if (-1 < lVar28) {
        puVar21 = puVar29;
      }
      uVar36 = *(undefined4 *)puVar21;
      uVar5 = *(undefined4 *)((longlong)puVar21 + 4);
      uVar6 = *(undefined4 *)(puVar21 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar21 + 0xc);
      uVar8 = *(undefined4 *)(puVar21 + 2);
      uVar9 = *(undefined4 *)((longlong)puVar21 + 0x14);
      uVar10 = *(undefined4 *)(puVar21 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar21 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)puVar21 + 0x24);
      uVar13 = *(undefined4 *)(puVar21 + 5);
      uVar14 = *(undefined4 *)((longlong)puVar21 + 0x2c);
      *(undefined4 *)(puVar26 + -2) = *(undefined4 *)(puVar21 + 4);
      *(undefined4 *)((longlong)puVar26 + -0xc) = uVar12;
      *(undefined4 *)(puVar26 + -1) = uVar13;
      *(undefined4 *)((longlong)puVar26 + -4) = uVar14;
      *(undefined4 *)(puVar26 + -4) = uVar8;
      *(undefined4 *)((longlong)puVar26 + -0x1c) = uVar9;
      *(undefined4 *)(puVar26 + -3) = uVar10;
      *(undefined4 *)((longlong)puVar26 + -0x14) = uVar11;
      *(undefined4 *)(puVar26 + -6) = uVar36;
      *(undefined4 *)((longlong)puVar26 + -0x2c) = uVar5;
      *(undefined4 *)(puVar26 + -5) = uVar6;
      *(undefined4 *)((longlong)puVar26 + -0x24) = uVar7;
      puVar29 = puVar29 + (ulonglong)(-1 < lVar28) * -6;
      puVar30 = puVar30 + (lVar28 >> 0x3f) * 6;
      local_50 = local_50 - 1;
      param_1 = puVar27 + 6;
      puVar26 = puVar26 + -6;
    } while (local_50 != 0);
    if ((param_2 & 1) != 0) {
      bVar35 = param_3 < puVar30 + 6;
      puVar26 = puVar34;
      if (bVar35) {
        puVar26 = param_3;
      }
      uVar36 = *(undefined4 *)puVar26;
      uVar5 = *(undefined4 *)((longlong)puVar26 + 4);
      uVar6 = *(undefined4 *)(puVar26 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar26 + 0xc);
      uVar8 = *(undefined4 *)(puVar26 + 2);
      uVar9 = *(undefined4 *)((longlong)puVar26 + 0x14);
      uVar10 = *(undefined4 *)(puVar26 + 3);
      uVar11 = *(undefined4 *)((longlong)puVar26 + 0x1c);
      uVar12 = *(undefined4 *)((longlong)puVar26 + 0x24);
      uVar13 = *(undefined4 *)(puVar26 + 5);
      uVar14 = *(undefined4 *)((longlong)puVar26 + 0x2c);
      *(undefined4 *)(puVar27 + 10) = *(undefined4 *)(puVar26 + 4);
      *(undefined4 *)((longlong)puVar27 + 0x54) = uVar12;
      *(undefined4 *)(puVar27 + 0xb) = uVar13;
      *(undefined4 *)((longlong)puVar27 + 0x5c) = uVar14;
      *(undefined4 *)(puVar27 + 8) = uVar8;
      *(undefined4 *)((longlong)puVar27 + 0x44) = uVar9;
      *(undefined4 *)(puVar27 + 9) = uVar10;
      *(undefined4 *)((longlong)puVar27 + 0x4c) = uVar11;
      *(undefined4 *)(puVar27 + 6) = uVar36;
      *(undefined4 *)((longlong)puVar27 + 0x34) = uVar5;
      *(undefined4 *)(puVar27 + 7) = uVar6;
      *(undefined4 *)((longlong)puVar27 + 0x3c) = uVar7;
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)((uint)bVar35 * 0x30));
      puVar34 = (undefined8 *)((longlong)puVar34 + (ulonglong)((uint)!bVar35 * 0x30));
    }
    if ((param_3 == puVar30 + 6) && (puVar34 == puVar29 + 6)) {
      return;
    }
    (*(code *)PTR_panic_on_ord_violation_007996f0)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


