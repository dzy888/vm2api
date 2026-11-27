// 00389d10 <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>), <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  bool bVar22;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_0038a20f;
  uVar16 = param_2 >> 1;
  if (param_2 < 8) {
    param_3[2] = param_1[2];
    uVar2 = param_1[1];
    *param_3 = *param_1;
    param_3[1] = uVar2;
    param_3[uVar16 * 3 + 2] = param_1[uVar16 * 3 + 2];
    uVar2 = (param_1 + uVar16 * 3)[1];
    param_3[uVar16 * 3] = param_1[uVar16 * 3];
    (param_3 + uVar16 * 3)[1] = uVar2;
    uVar14 = 1;
    uVar18 = param_2 - uVar16;
    if (1 < uVar16) goto LAB_00389f43;
  }
  else {
    uVar14 = (ulonglong)((ulonglong)param_1[4] >= (ulonglong)param_1[1]);
    uVar18 = (ulonglong)((ulonglong)param_1[4] < (ulonglong)param_1[1]);
    puVar12 = param_1 + 6;
    if ((ulonglong)param_1[10] < (ulonglong)param_1[7]) {
      puVar12 = param_1 + 9;
    }
    puVar20 = param_1 + uVar14 * 3;
    puVar10 = param_1 + 9;
    if ((ulonglong)param_1[10] < (ulonglong)param_1[7]) {
      puVar10 = param_1 + 6;
    }
    puVar11 = puVar20;
    if ((ulonglong)puVar10[1] < (ulonglong)param_1[uVar14 * 3 + 1]) {
      puVar11 = puVar12;
    }
    puVar13 = puVar12;
    puVar15 = param_1 + uVar18 * 3;
    if ((ulonglong)puVar12[1] < (ulonglong)param_1[uVar18 * 3 + 1]) {
      puVar13 = puVar20;
      puVar15 = puVar12;
      puVar11 = param_1 + uVar18 * 3;
    }
    if ((ulonglong)puVar10[1] < (ulonglong)param_1[uVar14 * 3 + 1]) {
      puVar13 = puVar10;
    }
    else {
      puVar20 = puVar10;
    }
    puVar12 = puVar13;
    if ((ulonglong)puVar13[1] < (ulonglong)puVar11[1]) {
      puVar12 = puVar11;
      puVar11 = puVar13;
    }
    param_3[2] = puVar15[2];
    uVar2 = puVar15[1];
    *param_3 = *puVar15;
    param_3[1] = uVar2;
    param_3[5] = puVar11[2];
    uVar2 = puVar11[1];
    param_3[3] = *puVar11;
    param_3[4] = uVar2;
    param_3[8] = puVar12[2];
    uVar2 = puVar12[1];
    param_3[6] = *puVar12;
    param_3[7] = uVar2;
    uVar14 = (ulonglong)((ulonglong)param_1[uVar16 * 3 + 4] >= (ulonglong)param_1[uVar16 * 3 + 1]);
    uVar18 = (ulonglong)((ulonglong)param_1[uVar16 * 3 + 4] < (ulonglong)param_1[uVar16 * 3 + 1]);
    puVar12 = param_1 + uVar16 * 3 + uVar14 * 3;
    puVar11 = param_1 + uVar16 * 3 + 9;
    puVar10 = param_1 + uVar16 * 3 + 6;
    if ((ulonglong)param_1[uVar16 * 3 + 10] < (ulonglong)param_1[uVar16 * 3 + 7]) {
      puVar11 = param_1 + uVar16 * 3 + 6;
      puVar10 = param_1 + uVar16 * 3 + 9;
    }
    puVar15 = puVar12;
    if ((ulonglong)puVar11[1] < (ulonglong)param_1[uVar16 * 3 + uVar14 * 3 + 1]) {
      puVar15 = puVar10;
    }
    puVar13 = param_1 + uVar16 * 3 + uVar18 * 3;
    if ((ulonglong)puVar10[1] < (ulonglong)param_1[uVar16 * 3 + uVar18 * 3 + 1]) {
      puVar13 = puVar10;
      puVar15 = param_1 + uVar16 * 3 + uVar18 * 3;
    }
    if ((ulonglong)puVar10[1] < (ulonglong)param_1[uVar16 * 3 + uVar18 * 3 + 1]) {
      puVar10 = puVar12;
    }
    if ((ulonglong)puVar11[1] < (ulonglong)param_1[uVar16 * 3 + uVar14 * 3 + 1]) {
      puVar10 = puVar11;
    }
    else {
      puVar12 = puVar11;
    }
    param_3[0xb] = puVar20[2];
    uVar14 = puVar10[1];
    uVar18 = puVar15[1];
    uVar2 = puVar20[1];
    puVar11 = puVar15;
    if (uVar14 < uVar18) {
      puVar11 = puVar10;
    }
    param_3[9] = *puVar20;
    param_3[10] = uVar2;
    if (uVar14 < uVar18) {
      puVar10 = puVar15;
    }
    param_3[uVar16 * 3 + 2] = puVar13[2];
    uVar2 = puVar13[1];
    param_3[uVar16 * 3] = *puVar13;
    (param_3 + uVar16 * 3)[1] = uVar2;
    uVar2 = puVar11[1];
    param_3[uVar16 * 3 + 3] = *puVar11;
    (param_3 + uVar16 * 3 + 3)[1] = uVar2;
    param_3[uVar16 * 3 + 5] = puVar11[2];
    uVar2 = puVar10[1];
    param_3[uVar16 * 3 + 6] = *puVar10;
    (param_3 + uVar16 * 3 + 6)[1] = uVar2;
    param_3[uVar16 * 3 + 8] = puVar10[2];
    uVar2 = puVar12[1];
    param_3[uVar16 * 3 + 9] = *puVar12;
    (param_3 + uVar16 * 3 + 9)[1] = uVar2;
    param_3[uVar16 * 3 + 0xb] = puVar12[2];
    uVar14 = 4;
    uVar18 = param_2 - uVar16;
    if (4 < uVar16) {
LAB_00389f43:
      lVar17 = (ulonglong)(uint)((int)uVar14 * 8) * 3;
      uVar19 = uVar14;
      do {
        uVar2 = (param_1 + uVar19 * 3)[1];
        param_3[uVar19 * 3] = param_1[uVar19 * 3];
        (param_3 + uVar19 * 3)[1] = uVar2;
        param_3[uVar19 * 3 + 2] = param_1[uVar19 * 3 + 2];
        uVar1 = param_3[uVar19 * 3 + 1];
        if (uVar1 < (ulonglong)param_3[uVar19 * 3 + -2]) {
          uVar2 = param_3[uVar19 * 3];
          uVar3 = (param_3 + uVar19 * 3)[2];
          lVar9 = lVar17;
          do {
            lVar21 = lVar9;
            *(undefined8 *)((longlong)param_3 + lVar21 + 0x10) =
                 *(undefined8 *)((longlong)param_3 + lVar21 + -8);
            puVar12 = (undefined8 *)((longlong)param_3 + lVar21 + -0x18);
            uVar8 = puVar12[1];
            *(undefined8 *)((longlong)param_3 + lVar21) = *puVar12;
            ((undefined8 *)((longlong)param_3 + lVar21))[1] = uVar8;
            if (lVar21 == 0x18) {
              puVar12 = param_3;
              goto LAB_00389f63;
            }
            lVar9 = lVar21 + -0x18;
          } while (uVar1 < *(ulonglong *)((longlong)param_3 + lVar21 + -0x28));
          puVar12 = (undefined8 *)(lVar21 + -0x18 + (longlong)param_3);
LAB_00389f63:
          *puVar12 = uVar2;
          *(ulonglong *)((longlong)param_3 + lVar21 + -0x10) = uVar1;
          *(undefined8 *)((longlong)param_3 + lVar21 + -8) = uVar3;
        }
        uVar19 = uVar19 + 1;
        lVar17 = lVar17 + 0x18;
      } while (uVar19 != uVar16);
    }
  }
  puVar12 = param_3 + uVar16 * 3;
  if (uVar14 < uVar18) {
    lVar17 = (ulonglong)(uint)((int)uVar14 * 8) * 3;
    do {
      uVar2 = (param_1 + uVar16 * 3 + uVar14 * 3)[1];
      puVar12[uVar14 * 3] = param_1[uVar16 * 3 + uVar14 * 3];
      (puVar12 + uVar14 * 3)[1] = uVar2;
      puVar12[uVar14 * 3 + 2] = param_1[uVar16 * 3 + uVar14 * 3 + 2];
      uVar19 = puVar12[uVar14 * 3 + 1];
      if (uVar19 < (ulonglong)puVar12[uVar14 * 3 + -2]) {
        uVar2 = puVar12[uVar14 * 3];
        uVar3 = (puVar12 + uVar14 * 3)[2];
        lVar9 = lVar17;
        do {
          lVar21 = lVar9;
          *(undefined8 *)((longlong)puVar12 + lVar21 + 0x10) =
               *(undefined8 *)((longlong)puVar12 + lVar21 + -8);
          puVar20 = (undefined8 *)((longlong)puVar12 + lVar21 + -0x18);
          uVar8 = puVar20[1];
          *(undefined8 *)((longlong)puVar12 + lVar21) = *puVar20;
          ((undefined8 *)((longlong)puVar12 + lVar21))[1] = uVar8;
          if (lVar21 == 0x18) {
            puVar20 = puVar12;
            goto LAB_0038a023;
          }
          lVar9 = lVar21 + -0x18;
        } while (uVar19 < *(ulonglong *)((longlong)puVar12 + lVar21 + -0x28));
        puVar20 = (undefined8 *)(lVar21 + -0x18 + (longlong)puVar12);
LAB_0038a023:
        *puVar20 = uVar2;
        *(ulonglong *)((longlong)puVar12 + lVar21 + -0x10) = uVar19;
        *(undefined8 *)((longlong)puVar12 + lVar21 + -8) = uVar3;
      }
      uVar14 = uVar14 + 1;
      lVar17 = lVar17 + 0x18;
    } while (uVar14 != uVar18);
  }
  puVar10 = param_3 + param_2 * 3 + -3;
  puVar20 = puVar12 + -3;
  puVar11 = param_1 + param_2 * 3;
  do {
    puVar13 = param_1;
    bVar22 = (ulonglong)puVar12[1] < (ulonglong)param_3[1];
    puVar15 = puVar12;
    if (!bVar22) {
      puVar15 = param_3;
    }
    puVar13[2] = puVar15[2];
    uVar2 = puVar15[1];
    *puVar13 = *puVar15;
    puVar13[1] = uVar2;
    uVar14 = puVar10[1];
    uVar18 = puVar20[1];
    puVar15 = puVar20;
    if (uVar14 >= uVar18) {
      puVar15 = puVar10;
    }
    puVar12 = puVar12 + (ulonglong)bVar22 * 3;
    param_3 = param_3 + (ulonglong)!bVar22 * 3;
    puVar11[-1] = puVar15[2];
    uVar5 = *(undefined4 *)((longlong)puVar15 + 4);
    uVar6 = *(undefined4 *)(puVar15 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar15 + 0xc);
    *(undefined4 *)(puVar11 + -3) = *(undefined4 *)puVar15;
    *(undefined4 *)((longlong)puVar11 + -0x14) = uVar5;
    *(undefined4 *)(puVar11 + -2) = uVar6;
    *(undefined4 *)((longlong)puVar11 + -0xc) = uVar7;
    puVar10 = puVar10 + ((ulonglong)(uVar14 < uVar18) - 1) * 3;
    puVar20 = puVar20 + (ulonglong)(uVar14 < uVar18) * -3;
    uVar16 = uVar16 - 1;
    param_1 = puVar13 + 3;
    puVar11 = puVar11 + -3;
  } while (uVar16 != 0);
  if ((param_2 & 1) != 0) {
    bVar22 = param_3 < puVar20 + 3;
    puVar11 = puVar12;
    if (bVar22) {
      puVar11 = param_3;
    }
    puVar13[5] = puVar11[2];
    uVar5 = *(undefined4 *)((longlong)puVar11 + 4);
    uVar6 = *(undefined4 *)(puVar11 + 1);
    uVar7 = *(undefined4 *)((longlong)puVar11 + 0xc);
    *(undefined4 *)(puVar13 + 3) = *(undefined4 *)puVar11;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
    *(undefined4 *)(puVar13 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar7;
    param_3 = param_3 + (ulonglong)bVar22 * 3;
    puVar12 = puVar12 + (ulonglong)!bVar22 * 3;
  }
  if ((param_3 == puVar20 + 3) && (puVar12 == puVar10 + 3)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_0038a20f:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


