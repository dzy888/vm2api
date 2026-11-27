// 00388550 <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(alloc[12e961f32105355]::string::String,
   usize), <[(alloc[12e961f32105355]::string::String,
   usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,
   craggemini_core[66f3c71560d70857]::resume::trim_anchors::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_00388a86;
  uVar24 = param_2 >> 1;
  if (param_2 < 8) {
    uVar9 = *param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar11;
    *param_3 = uVar9;
    param_3[1] = uVar10;
    uVar9 = param_1[uVar24 * 4];
    uVar10 = (param_1 + uVar24 * 4)[1];
    uVar11 = (param_1 + uVar24 * 4 + 2)[1];
    param_3[uVar24 * 4 + 2] = param_1[uVar24 * 4 + 2];
    (param_3 + uVar24 * 4 + 2)[1] = uVar11;
    param_3[uVar24 * 4] = uVar9;
    (param_3 + uVar24 * 4)[1] = uVar10;
    uVar18 = 1;
    uVar23 = param_2 - uVar24;
    if (1 < uVar24) goto LAB_003887d8;
  }
  else {
    uVar23 = (ulonglong)((ulonglong)param_1[3] < (ulonglong)param_1[7]);
    uVar21 = (ulonglong)((ulonglong)param_1[3] >= (ulonglong)param_1[7]);
    puVar16 = param_1 + uVar21 * 4;
    uVar15 = (ulonglong)((ulonglong)param_1[0xb] < (ulonglong)param_1[0xf]);
    puVar12 = param_1 + uVar15 * 4 + 8;
    uVar20 = (ulonglong)(((ulonglong)param_1[0xb] < (ulonglong)param_1[0xf] ^ 3) << 5);
    uVar18 = *(ulonglong *)((longlong)param_1 + uVar20 + 0x18);
    puVar14 = puVar16;
    if ((ulonglong)param_1[uVar21 * 4 + 3] < uVar18) {
      puVar14 = puVar12;
    }
    puVar17 = param_1 + uVar23 * 4;
    if ((ulonglong)param_1[uVar23 * 4 + 3] < (ulonglong)param_1[uVar15 * 4 + 0xb]) {
      puVar17 = puVar12;
      puVar14 = param_1 + uVar23 * 4;
    }
    puVar13 = (undefined8 *)((longlong)param_1 + uVar20);
    if ((ulonglong)param_1[uVar23 * 4 + 3] < (ulonglong)param_1[uVar15 * 4 + 0xb]) {
      puVar12 = puVar16;
    }
    if ((ulonglong)param_1[uVar21 * 4 + 3] < uVar18) {
      puVar12 = puVar13;
    }
    else {
      puVar16 = puVar13;
    }
    puVar13 = puVar12;
    if ((ulonglong)puVar14[3] < (ulonglong)puVar12[3]) {
      puVar13 = puVar14;
      puVar14 = puVar12;
    }
    uVar15 = (ulonglong)((ulonglong)param_1[uVar24 * 4 + 3] < (ulonglong)param_1[uVar24 * 4 + 7]);
    uVar23 = (ulonglong)((ulonglong)param_1[uVar24 * 4 + 3] >= (ulonglong)param_1[uVar24 * 4 + 7]);
    puVar12 = param_1 + uVar24 * 4 + uVar23 * 4;
    uVar20 = (ulonglong)
             ((ulonglong)param_1[uVar24 * 4 + 0xb] < (ulonglong)param_1[uVar24 * 4 + 0xf]);
    puVar26 = param_1 + uVar24 * 4 + uVar20 * 4 + 8;
    uVar22 = (ulonglong)
             (((ulonglong)param_1[uVar24 * 4 + 0xb] < (ulonglong)param_1[uVar24 * 4 + 0xf] ^ 3) << 5
             );
    uVar18 = param_1[uVar24 * 4 + uVar15 * 4 + 3];
    uVar23 = param_1[uVar24 * 4 + uVar23 * 4 + 3];
    uVar21 = *(ulonglong *)((longlong)param_1 + uVar22 + 0x18 + uVar24 * 0x20);
    puVar19 = puVar12;
    if (uVar23 < uVar21) {
      puVar19 = puVar26;
    }
    uVar20 = param_1[uVar24 * 4 + uVar20 * 4 + 0xb];
    uVar9 = *puVar17;
    uVar10 = puVar17[1];
    uVar11 = puVar17[3];
    param_3[2] = puVar17[2];
    param_3[3] = uVar11;
    *param_3 = uVar9;
    param_3[1] = uVar10;
    uVar9 = *puVar14;
    uVar10 = puVar14[1];
    uVar11 = puVar14[3];
    param_3[6] = puVar14[2];
    param_3[7] = uVar11;
    param_3[4] = uVar9;
    param_3[5] = uVar10;
    uVar9 = *puVar13;
    uVar10 = puVar13[1];
    uVar11 = puVar13[3];
    param_3[10] = puVar13[2];
    param_3[0xb] = uVar11;
    param_3[8] = uVar9;
    param_3[9] = uVar10;
    uVar9 = *puVar16;
    uVar10 = puVar16[1];
    puVar14 = param_1 + uVar24 * 4 + uVar15 * 4;
    if (uVar18 < uVar20) {
      puVar14 = puVar26;
      puVar19 = param_1 + uVar24 * 4 + uVar15 * 4;
    }
    puVar17 = (undefined8 *)((longlong)param_1 + uVar22 + uVar24 * 0x20);
    if (uVar18 < uVar20) {
      puVar26 = puVar12;
    }
    if (uVar23 < uVar21) {
      puVar26 = puVar17;
    }
    else {
      puVar12 = puVar17;
    }
    uVar11 = puVar16[3];
    uVar18 = puVar19[3];
    uVar23 = puVar26[3];
    param_3[0xe] = puVar16[2];
    param_3[0xf] = uVar11;
    puVar16 = puVar19;
    if (uVar18 < uVar23) {
      puVar16 = puVar26;
    }
    param_3[0xc] = uVar9;
    param_3[0xd] = uVar10;
    if (uVar18 < uVar23) {
      puVar26 = puVar19;
    }
    uVar9 = *puVar14;
    uVar10 = puVar14[1];
    uVar11 = puVar14[3];
    param_3[uVar24 * 4 + 2] = puVar14[2];
    (param_3 + uVar24 * 4 + 2)[1] = uVar11;
    param_3[uVar24 * 4] = uVar9;
    (param_3 + uVar24 * 4)[1] = uVar10;
    uVar9 = puVar16[1];
    uVar10 = puVar16[2];
    uVar11 = puVar16[3];
    param_3[uVar24 * 4 + 4] = *puVar16;
    (param_3 + uVar24 * 4 + 4)[1] = uVar9;
    param_3[uVar24 * 4 + 6] = uVar10;
    (param_3 + uVar24 * 4 + 6)[1] = uVar11;
    uVar9 = puVar26[1];
    uVar10 = puVar26[2];
    uVar11 = puVar26[3];
    param_3[uVar24 * 4 + 8] = *puVar26;
    (param_3 + uVar24 * 4 + 8)[1] = uVar9;
    param_3[uVar24 * 4 + 10] = uVar10;
    (param_3 + uVar24 * 4 + 10)[1] = uVar11;
    uVar9 = puVar12[1];
    uVar10 = puVar12[2];
    uVar11 = puVar12[3];
    param_3[uVar24 * 4 + 0xc] = *puVar12;
    (param_3 + uVar24 * 4 + 0xc)[1] = uVar9;
    param_3[uVar24 * 4 + 0xe] = uVar10;
    (param_3 + uVar24 * 4 + 0xe)[1] = uVar11;
    uVar18 = 4;
    uVar23 = param_2 - uVar24;
    if (4 < uVar24) {
LAB_003887d8:
      uVar15 = (ulonglong)(uint)((int)uVar18 << 5);
      uVar21 = uVar18;
      do {
        uVar9 = param_1[uVar21 * 4];
        uVar10 = (param_1 + uVar21 * 4)[1];
        uVar11 = (param_1 + uVar21 * 4 + 2)[1];
        param_3[uVar21 * 4 + 2] = param_1[uVar21 * 4 + 2];
        (param_3 + uVar21 * 4 + 2)[1] = uVar11;
        param_3[uVar21 * 4] = uVar9;
        (param_3 + uVar21 * 4)[1] = uVar10;
        uVar20 = param_3[uVar21 * 4 + 3];
        if ((ulonglong)param_3[uVar21 * 4 + -1] < uVar20) {
          puVar16 = param_1 + uVar21 * 4;
          uVar22 = uVar15;
          do {
            uVar25 = uVar22;
            puVar14 = (undefined8 *)((longlong)param_3 + (uVar25 - 0x20));
            uVar9 = *puVar14;
            uVar10 = puVar14[1];
            puVar14 = (undefined8 *)((longlong)param_3 + (uVar25 - 0x10));
            uVar11 = puVar14[1];
            puVar12 = (undefined8 *)((longlong)param_3 + uVar25 + 0x10);
            *puVar12 = *puVar14;
            puVar12[1] = uVar11;
            *(undefined8 *)((longlong)param_3 + uVar25) = uVar9;
            ((undefined8 *)((longlong)param_3 + uVar25))[1] = uVar10;
            if (uVar25 == 0x20) {
              puVar14 = param_3;
              goto LAB_003887f3;
            }
            uVar22 = uVar25 - 0x20;
          } while (*(ulonglong *)((longlong)param_3 + (uVar25 - 0x28)) < uVar20);
          puVar14 = (undefined8 *)((uVar25 - 0x20) + (longlong)param_3);
LAB_003887f3:
          puVar14[2] = puVar16[2];
          uVar9 = puVar16[1];
          *puVar14 = *puVar16;
          puVar14[1] = uVar9;
          *(ulonglong *)((longlong)param_3 + (uVar25 - 8)) = uVar20;
        }
        uVar21 = uVar21 + 1;
        uVar15 = uVar15 + 0x20;
      } while (uVar21 != uVar24);
    }
  }
  puVar16 = param_3 + uVar24 * 4;
  if (uVar18 < uVar23) {
    uVar21 = (ulonglong)(uint)((int)uVar18 << 5);
    do {
      uVar9 = param_1[uVar24 * 4 + uVar18 * 4];
      uVar10 = (param_1 + uVar24 * 4 + uVar18 * 4)[1];
      uVar11 = (param_1 + uVar24 * 4 + uVar18 * 4 + 2)[1];
      puVar16[uVar18 * 4 + 2] = param_1[uVar24 * 4 + uVar18 * 4 + 2];
      (puVar16 + uVar18 * 4 + 2)[1] = uVar11;
      puVar16[uVar18 * 4] = uVar9;
      (puVar16 + uVar18 * 4)[1] = uVar10;
      uVar15 = puVar16[uVar18 * 4 + 3];
      if ((ulonglong)puVar16[uVar18 * 4 + -1] < uVar15) {
        puVar14 = param_1 + uVar24 * 4 + uVar18 * 4;
        uVar20 = uVar21;
        do {
          uVar22 = uVar20;
          puVar12 = (undefined8 *)((longlong)puVar16 + (uVar22 - 0x20));
          uVar9 = *puVar12;
          uVar10 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)puVar16 + (uVar22 - 0x10));
          uVar11 = puVar12[1];
          puVar17 = (undefined8 *)((longlong)puVar16 + uVar22 + 0x10);
          *puVar17 = *puVar12;
          puVar17[1] = uVar11;
          *(undefined8 *)((longlong)puVar16 + uVar22) = uVar9;
          ((undefined8 *)((longlong)puVar16 + uVar22))[1] = uVar10;
          if (uVar22 == 0x20) {
            puVar12 = puVar16;
            goto LAB_003888b3;
          }
          uVar20 = uVar22 - 0x20;
        } while (*(ulonglong *)((longlong)puVar16 + (uVar22 - 0x28)) < uVar15);
        puVar12 = (undefined8 *)((uVar22 - 0x20) + (longlong)puVar16);
LAB_003888b3:
        puVar12[2] = puVar14[2];
        uVar9 = puVar14[1];
        *puVar12 = *puVar14;
        puVar12[1] = uVar9;
        *(ulonglong *)((longlong)puVar16 + (uVar22 - 8)) = uVar15;
      }
      uVar18 = uVar18 + 1;
      uVar21 = uVar21 + 0x20;
    } while (uVar18 != uVar23);
  }
  puVar12 = param_3 + param_2 * 4 + -4;
  puVar14 = puVar16 + -4;
  puVar17 = param_1 + param_2 * 4;
  do {
    puVar19 = param_1;
    bVar27 = (ulonglong)param_3[3] < (ulonglong)puVar16[3];
    puVar13 = puVar16;
    if (!bVar27) {
      puVar13 = param_3;
    }
    uVar9 = *puVar13;
    uVar10 = puVar13[1];
    uVar11 = puVar13[3];
    puVar19[2] = puVar13[2];
    puVar19[3] = uVar11;
    *puVar19 = uVar9;
    puVar19[1] = uVar10;
    uVar18 = puVar14[3];
    uVar23 = puVar12[3];
    puVar13 = puVar14;
    if (uVar18 >= uVar23) {
      puVar13 = puVar12;
    }
    puVar16 = puVar16 + (ulonglong)bVar27 * 4;
    param_3 = param_3 + (ulonglong)!bVar27 * 4;
    uVar2 = *(undefined4 *)puVar13;
    uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
    uVar4 = *(undefined4 *)(puVar13 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x14);
    uVar7 = *(undefined4 *)(puVar13 + 3);
    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x1c);
    *(undefined4 *)(puVar17 + -2) = *(undefined4 *)(puVar13 + 2);
    *(undefined4 *)((longlong)puVar17 + -0xc) = uVar6;
    *(undefined4 *)(puVar17 + -1) = uVar7;
    *(undefined4 *)((longlong)puVar17 + -4) = uVar8;
    *(undefined4 *)(puVar17 + -4) = uVar2;
    *(undefined4 *)((longlong)puVar17 + -0x1c) = uVar3;
    *(undefined4 *)(puVar17 + -3) = uVar4;
    *(undefined4 *)((longlong)puVar17 + -0x14) = uVar5;
    puVar12 = puVar12 + ((ulonglong)(uVar18 < uVar23) - 1) * 4;
    puVar14 = puVar14 + (ulonglong)(uVar18 < uVar23) * -4;
    uVar24 = uVar24 - 1;
    param_1 = puVar19 + 4;
    puVar17 = puVar17 + -4;
  } while (uVar24 != 0);
  if ((param_2 & 1) != 0) {
    bVar27 = param_3 < puVar14 + 4;
    puVar17 = puVar16;
    if (bVar27) {
      puVar17 = param_3;
    }
    uVar2 = *(undefined4 *)puVar17;
    uVar3 = *(undefined4 *)((longlong)puVar17 + 4);
    uVar4 = *(undefined4 *)(puVar17 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar17 + 0xc);
    uVar6 = *(undefined4 *)((longlong)puVar17 + 0x14);
    uVar7 = *(undefined4 *)(puVar17 + 3);
    uVar8 = *(undefined4 *)((longlong)puVar17 + 0x1c);
    *(undefined4 *)(puVar19 + 6) = *(undefined4 *)(puVar17 + 2);
    *(undefined4 *)((longlong)puVar19 + 0x34) = uVar6;
    *(undefined4 *)(puVar19 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar19 + 0x3c) = uVar8;
    *(undefined4 *)(puVar19 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar19 + 0x24) = uVar3;
    *(undefined4 *)(puVar19 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar5;
    param_3 = param_3 + (ulonglong)bVar27 * 4;
    puVar16 = puVar16 + (ulonglong)!bVar27 * 4;
  }
  if ((param_3 == puVar14 + 4) && (puVar16 == puVar12 + 4)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_00388a86:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


