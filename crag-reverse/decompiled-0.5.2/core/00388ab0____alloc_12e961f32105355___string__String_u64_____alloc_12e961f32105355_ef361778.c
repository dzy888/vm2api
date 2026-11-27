// 00388ab0 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>
   core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
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
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  bool bVar26;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_00388fc6;
  uVar18 = param_2 >> 1;
  if (param_2 < 8) {
    uVar9 = *param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar11;
    *param_3 = uVar9;
    param_3[1] = uVar10;
    uVar9 = param_1[uVar18 * 4];
    uVar10 = (param_1 + uVar18 * 4)[1];
    uVar11 = (param_1 + uVar18 * 4 + 2)[1];
    param_3[uVar18 * 4 + 2] = param_1[uVar18 * 4 + 2];
    (param_3 + uVar18 * 4 + 2)[1] = uVar11;
    param_3[uVar18 * 4] = uVar9;
    (param_3 + uVar18 * 4)[1] = uVar10;
    uVar17 = 1;
    uVar22 = param_2 - uVar18;
    if (1 < uVar18) goto LAB_00388cf8;
  }
  else {
    uVar22 = (ulonglong)((ulonglong)param_1[7] < (ulonglong)param_1[3]);
    uVar20 = (ulonglong)((ulonglong)param_1[7] >= (ulonglong)param_1[3]);
    puVar14 = param_1 + uVar20 * 4;
    uVar15 = (ulonglong)((ulonglong)param_1[0xf] < (ulonglong)param_1[0xb]);
    puVar12 = param_1 + uVar15 * 4 + 8;
    uVar19 = (ulonglong)(((ulonglong)param_1[0xf] < (ulonglong)param_1[0xb] ^ 3) << 5);
    uVar17 = *(ulonglong *)((longlong)param_1 + uVar19 + 0x18);
    puVar23 = puVar14;
    if (uVar17 < (ulonglong)param_1[uVar20 * 4 + 3]) {
      puVar23 = puVar12;
    }
    puVar16 = param_1 + uVar22 * 4;
    if ((ulonglong)param_1[uVar15 * 4 + 0xb] < (ulonglong)param_1[uVar22 * 4 + 3]) {
      puVar16 = puVar12;
      puVar23 = param_1 + uVar22 * 4;
    }
    puVar13 = (undefined8 *)((longlong)param_1 + uVar19);
    if ((ulonglong)param_1[uVar15 * 4 + 0xb] < (ulonglong)param_1[uVar22 * 4 + 3]) {
      puVar12 = puVar14;
    }
    if (uVar17 < (ulonglong)param_1[uVar20 * 4 + 3]) {
      puVar12 = puVar13;
    }
    else {
      puVar14 = puVar13;
    }
    puVar13 = puVar12;
    if ((ulonglong)puVar12[3] < (ulonglong)puVar23[3]) {
      puVar13 = puVar23;
      puVar23 = puVar12;
    }
    uVar9 = *puVar16;
    uVar10 = puVar16[1];
    uVar11 = puVar16[3];
    param_3[2] = puVar16[2];
    param_3[3] = uVar11;
    *param_3 = uVar9;
    param_3[1] = uVar10;
    uVar9 = *puVar23;
    uVar10 = puVar23[1];
    uVar11 = puVar23[3];
    param_3[6] = puVar23[2];
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
    uVar9 = *puVar14;
    uVar10 = puVar14[1];
    uVar22 = (ulonglong)((ulonglong)param_1[uVar18 * 4 + 7] < (ulonglong)param_1[uVar18 * 4 + 3]);
    uVar20 = (ulonglong)((ulonglong)param_1[uVar18 * 4 + 7] >= (ulonglong)param_1[uVar18 * 4 + 3]);
    puVar23 = param_1 + uVar18 * 4 + uVar20 * 4;
    uVar15 = (ulonglong)
             ((ulonglong)param_1[uVar18 * 4 + 0xf] < (ulonglong)param_1[uVar18 * 4 + 0xb]);
    puVar16 = param_1 + uVar18 * 4 + uVar15 * 4 + 8;
    uVar19 = (ulonglong)
             (((ulonglong)param_1[uVar18 * 4 + 0xf] < (ulonglong)param_1[uVar18 * 4 + 0xb] ^ 3) << 5
             );
    uVar17 = *(ulonglong *)((longlong)param_1 + uVar19 + 0x18 + uVar18 * 0x20);
    puVar12 = puVar23;
    if (uVar17 < (ulonglong)param_1[uVar18 * 4 + uVar20 * 4 + 3]) {
      puVar12 = puVar16;
    }
    puVar13 = param_1 + uVar18 * 4 + uVar22 * 4;
    if ((ulonglong)param_1[uVar18 * 4 + uVar15 * 4 + 0xb] <
        (ulonglong)param_1[uVar18 * 4 + uVar22 * 4 + 3]) {
      puVar13 = puVar16;
      puVar12 = param_1 + uVar18 * 4 + uVar22 * 4;
    }
    puVar21 = (undefined8 *)((longlong)param_1 + uVar19 + uVar18 * 0x20);
    if ((ulonglong)param_1[uVar18 * 4 + uVar15 * 4 + 0xb] <
        (ulonglong)param_1[uVar18 * 4 + uVar22 * 4 + 3]) {
      puVar16 = puVar23;
    }
    if (uVar17 < (ulonglong)param_1[uVar18 * 4 + uVar20 * 4 + 3]) {
      puVar16 = puVar21;
    }
    else {
      puVar23 = puVar21;
    }
    uVar11 = puVar14[3];
    uVar17 = puVar16[3];
    uVar22 = puVar12[3];
    param_3[0xe] = puVar14[2];
    param_3[0xf] = uVar11;
    puVar14 = puVar12;
    if (uVar17 < uVar22) {
      puVar14 = puVar16;
    }
    param_3[0xc] = uVar9;
    param_3[0xd] = uVar10;
    if (uVar17 < uVar22) {
      puVar16 = puVar12;
    }
    uVar9 = *puVar13;
    uVar10 = puVar13[1];
    uVar11 = puVar13[3];
    param_3[uVar18 * 4 + 2] = puVar13[2];
    (param_3 + uVar18 * 4 + 2)[1] = uVar11;
    param_3[uVar18 * 4] = uVar9;
    (param_3 + uVar18 * 4)[1] = uVar10;
    uVar9 = puVar14[1];
    uVar10 = puVar14[2];
    uVar11 = puVar14[3];
    param_3[uVar18 * 4 + 4] = *puVar14;
    (param_3 + uVar18 * 4 + 4)[1] = uVar9;
    param_3[uVar18 * 4 + 6] = uVar10;
    (param_3 + uVar18 * 4 + 6)[1] = uVar11;
    uVar9 = puVar16[1];
    uVar10 = puVar16[2];
    uVar11 = puVar16[3];
    param_3[uVar18 * 4 + 8] = *puVar16;
    (param_3 + uVar18 * 4 + 8)[1] = uVar9;
    param_3[uVar18 * 4 + 10] = uVar10;
    (param_3 + uVar18 * 4 + 10)[1] = uVar11;
    uVar9 = puVar23[1];
    uVar10 = puVar23[2];
    uVar11 = puVar23[3];
    param_3[uVar18 * 4 + 0xc] = *puVar23;
    (param_3 + uVar18 * 4 + 0xc)[1] = uVar9;
    param_3[uVar18 * 4 + 0xe] = uVar10;
    (param_3 + uVar18 * 4 + 0xe)[1] = uVar11;
    uVar17 = 4;
    uVar22 = param_2 - uVar18;
    if (4 < uVar18) {
LAB_00388cf8:
      uVar15 = (ulonglong)(uint)((int)uVar17 << 5);
      uVar20 = uVar17;
      do {
        uVar9 = param_1[uVar20 * 4];
        uVar10 = (param_1 + uVar20 * 4)[1];
        uVar11 = (param_1 + uVar20 * 4 + 2)[1];
        param_3[uVar20 * 4 + 2] = param_1[uVar20 * 4 + 2];
        (param_3 + uVar20 * 4 + 2)[1] = uVar11;
        param_3[uVar20 * 4] = uVar9;
        (param_3 + uVar20 * 4)[1] = uVar10;
        uVar19 = param_3[uVar20 * 4 + 3];
        if (uVar19 < (ulonglong)param_3[uVar20 * 4 + -1]) {
          puVar14 = param_1 + uVar20 * 4;
          uVar25 = uVar15;
          do {
            uVar24 = uVar25;
            puVar23 = (undefined8 *)((longlong)param_3 + (uVar24 - 0x20));
            uVar9 = *puVar23;
            uVar10 = puVar23[1];
            puVar23 = (undefined8 *)((longlong)param_3 + (uVar24 - 0x10));
            uVar11 = puVar23[1];
            puVar12 = (undefined8 *)((longlong)param_3 + uVar24 + 0x10);
            *puVar12 = *puVar23;
            puVar12[1] = uVar11;
            *(undefined8 *)((longlong)param_3 + uVar24) = uVar9;
            ((undefined8 *)((longlong)param_3 + uVar24))[1] = uVar10;
            if (uVar24 == 0x20) {
              puVar23 = param_3;
              goto LAB_00388d13;
            }
            uVar25 = uVar24 - 0x20;
          } while (uVar19 < *(ulonglong *)((longlong)param_3 + (uVar24 - 0x28)));
          puVar23 = (undefined8 *)((uVar24 - 0x20) + (longlong)param_3);
LAB_00388d13:
          puVar23[2] = puVar14[2];
          uVar9 = puVar14[1];
          *puVar23 = *puVar14;
          puVar23[1] = uVar9;
          *(ulonglong *)((longlong)param_3 + (uVar24 - 8)) = uVar19;
        }
        uVar20 = uVar20 + 1;
        uVar15 = uVar15 + 0x20;
      } while (uVar20 != uVar18);
    }
  }
  puVar14 = param_3 + uVar18 * 4;
  if (uVar17 < uVar22) {
    uVar20 = (ulonglong)(uint)((int)uVar17 << 5);
    do {
      uVar9 = param_1[uVar18 * 4 + uVar17 * 4];
      uVar10 = (param_1 + uVar18 * 4 + uVar17 * 4)[1];
      uVar11 = (param_1 + uVar18 * 4 + uVar17 * 4 + 2)[1];
      puVar14[uVar17 * 4 + 2] = param_1[uVar18 * 4 + uVar17 * 4 + 2];
      (puVar14 + uVar17 * 4 + 2)[1] = uVar11;
      puVar14[uVar17 * 4] = uVar9;
      (puVar14 + uVar17 * 4)[1] = uVar10;
      uVar15 = puVar14[uVar17 * 4 + 3];
      if (uVar15 < (ulonglong)puVar14[uVar17 * 4 + -1]) {
        puVar23 = param_1 + uVar18 * 4 + uVar17 * 4;
        uVar19 = uVar20;
        do {
          uVar25 = uVar19;
          puVar12 = (undefined8 *)((longlong)puVar14 + (uVar25 - 0x20));
          uVar9 = *puVar12;
          uVar10 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)puVar14 + (uVar25 - 0x10));
          uVar11 = puVar12[1];
          puVar16 = (undefined8 *)((longlong)puVar14 + uVar25 + 0x10);
          *puVar16 = *puVar12;
          puVar16[1] = uVar11;
          *(undefined8 *)((longlong)puVar14 + uVar25) = uVar9;
          ((undefined8 *)((longlong)puVar14 + uVar25))[1] = uVar10;
          if (uVar25 == 0x20) {
            puVar12 = puVar14;
            goto LAB_00388dd3;
          }
          uVar19 = uVar25 - 0x20;
        } while (uVar15 < *(ulonglong *)((longlong)puVar14 + (uVar25 - 0x28)));
        puVar12 = (undefined8 *)((uVar25 - 0x20) + (longlong)puVar14);
LAB_00388dd3:
        puVar12[2] = puVar23[2];
        uVar9 = puVar23[1];
        *puVar12 = *puVar23;
        puVar12[1] = uVar9;
        *(ulonglong *)((longlong)puVar14 + (uVar25 - 8)) = uVar15;
      }
      uVar17 = uVar17 + 1;
      uVar20 = uVar20 + 0x20;
    } while (uVar17 != uVar22);
  }
  puVar12 = param_3 + param_2 * 4 + -4;
  puVar23 = puVar14 + -4;
  puVar16 = param_1 + param_2 * 4;
  do {
    puVar21 = param_1;
    bVar26 = (ulonglong)puVar14[3] < (ulonglong)param_3[3];
    puVar13 = puVar14;
    if (!bVar26) {
      puVar13 = param_3;
    }
    uVar9 = *puVar13;
    uVar10 = puVar13[1];
    uVar11 = puVar13[3];
    puVar21[2] = puVar13[2];
    puVar21[3] = uVar11;
    *puVar21 = uVar9;
    puVar21[1] = uVar10;
    uVar17 = puVar12[3];
    uVar22 = puVar23[3];
    puVar13 = puVar23;
    if (uVar17 >= uVar22) {
      puVar13 = puVar12;
    }
    puVar14 = puVar14 + (ulonglong)bVar26 * 4;
    param_3 = param_3 + (ulonglong)!bVar26 * 4;
    uVar2 = *(undefined4 *)puVar13;
    uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
    uVar4 = *(undefined4 *)(puVar13 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
    uVar6 = *(undefined4 *)((longlong)puVar13 + 0x14);
    uVar7 = *(undefined4 *)(puVar13 + 3);
    uVar8 = *(undefined4 *)((longlong)puVar13 + 0x1c);
    *(undefined4 *)(puVar16 + -2) = *(undefined4 *)(puVar13 + 2);
    *(undefined4 *)((longlong)puVar16 + -0xc) = uVar6;
    *(undefined4 *)(puVar16 + -1) = uVar7;
    *(undefined4 *)((longlong)puVar16 + -4) = uVar8;
    *(undefined4 *)(puVar16 + -4) = uVar2;
    *(undefined4 *)((longlong)puVar16 + -0x1c) = uVar3;
    *(undefined4 *)(puVar16 + -3) = uVar4;
    *(undefined4 *)((longlong)puVar16 + -0x14) = uVar5;
    puVar12 = puVar12 + ((ulonglong)(uVar17 < uVar22) - 1) * 4;
    puVar23 = puVar23 + (ulonglong)(uVar17 < uVar22) * -4;
    uVar18 = uVar18 - 1;
    param_1 = puVar21 + 4;
    puVar16 = puVar16 + -4;
  } while (uVar18 != 0);
  if ((param_2 & 1) != 0) {
    bVar26 = param_3 < puVar23 + 4;
    puVar16 = puVar14;
    if (bVar26) {
      puVar16 = param_3;
    }
    uVar2 = *(undefined4 *)puVar16;
    uVar3 = *(undefined4 *)((longlong)puVar16 + 4);
    uVar4 = *(undefined4 *)(puVar16 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar16 + 0xc);
    uVar6 = *(undefined4 *)((longlong)puVar16 + 0x14);
    uVar7 = *(undefined4 *)(puVar16 + 3);
    uVar8 = *(undefined4 *)((longlong)puVar16 + 0x1c);
    *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(puVar16 + 2);
    *(undefined4 *)((longlong)puVar21 + 0x34) = uVar6;
    *(undefined4 *)(puVar21 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar21 + 0x3c) = uVar8;
    *(undefined4 *)(puVar21 + 4) = uVar2;
    *(undefined4 *)((longlong)puVar21 + 0x24) = uVar3;
    *(undefined4 *)(puVar21 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar5;
    param_3 = param_3 + (ulonglong)bVar26 * 4;
    puVar14 = puVar14 + (ulonglong)!bVar26 * 4;
  }
  if ((param_3 == puVar23 + 4) && (puVar14 == puVar12 + 4)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_00388fc6:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


