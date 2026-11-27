// 00388ff0 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong lVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  longlong lVar39;
  undefined8 *puVar40;
  bool bVar41;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_00389955;
  uVar28 = param_2 >> 1;
  if (param_2 < 8) {
    param_3[8] = param_1[8];
    uVar21 = *param_1;
    uVar22 = param_1[1];
    uVar23 = param_1[2];
    uVar24 = param_1[3];
    uVar25 = param_1[4];
    uVar26 = param_1[5];
    uVar27 = param_1[7];
    param_3[6] = param_1[6];
    param_3[7] = uVar27;
    param_3[4] = uVar25;
    param_3[5] = uVar26;
    param_3[2] = uVar23;
    param_3[3] = uVar24;
    *param_3 = uVar21;
    param_3[1] = uVar22;
    param_3[uVar28 * 9 + 8] = param_1[uVar28 * 9 + 8];
    uVar21 = param_1[uVar28 * 9];
    uVar22 = (param_1 + uVar28 * 9)[1];
    uVar23 = param_1[uVar28 * 9 + 2];
    uVar24 = (param_1 + uVar28 * 9 + 2)[1];
    uVar25 = param_1[uVar28 * 9 + 4];
    uVar26 = (param_1 + uVar28 * 9 + 4)[1];
    uVar27 = (param_1 + uVar28 * 9 + 6)[1];
    param_3[uVar28 * 9 + 6] = param_1[uVar28 * 9 + 6];
    (param_3 + uVar28 * 9 + 6)[1] = uVar27;
    param_3[uVar28 * 9 + 4] = uVar25;
    (param_3 + uVar28 * 9 + 4)[1] = uVar26;
    param_3[uVar28 * 9 + 2] = uVar23;
    (param_3 + uVar28 * 9 + 2)[1] = uVar24;
    param_3[uVar28 * 9] = uVar21;
    (param_3 + uVar28 * 9)[1] = uVar22;
    uVar31 = 1;
    uVar36 = param_2 - uVar28;
    if (1 < uVar28) goto LAB_003894b7;
  }
  else {
    bVar41 = (longlong)param_1[0xf] < (longlong)param_1[6];
    if (param_1[0xf] == param_1[6]) {
      bVar41 = *(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 7);
    }
    bVar5 = (longlong)param_1[0x21] < (longlong)param_1[0x18];
    if (param_1[0x21] == param_1[0x18]) {
      bVar5 = *(uint *)(param_1 + 0x22) < *(uint *)(param_1 + 0x19);
    }
    uVar31 = (ulonglong)bVar41;
    uVar36 = (ulonglong)(bVar41 ^ 1);
    puVar32 = param_1 + 0x1b;
    puVar29 = param_1 + 0x12;
    if (bVar5) {
      puVar32 = param_1 + 0x12;
      puVar29 = param_1 + 0x1b;
    }
    bVar41 = (longlong)puVar29[6] < (longlong)param_1[uVar31 * 9 + 6];
    if (puVar29[6] == param_1[uVar31 * 9 + 6]) {
      bVar41 = *(uint *)(puVar29 + 7) < *(uint *)(param_1 + uVar31 * 9 + 7);
    }
    puVar33 = param_1 + uVar36 * 9;
    bVar5 = (longlong)puVar32[6] < (longlong)param_1[uVar36 * 9 + 6];
    if (puVar32[6] == param_1[uVar36 * 9 + 6]) {
      bVar5 = *(uint *)(puVar32 + 7) < *(uint *)(param_1 + uVar36 * 9 + 7);
    }
    puVar37 = puVar33;
    if (bVar5) {
      puVar37 = puVar29;
    }
    puVar30 = puVar29;
    puVar40 = param_1 + uVar31 * 9;
    if (bVar41) {
      puVar30 = puVar33;
      puVar40 = puVar29;
      puVar37 = param_1 + uVar31 * 9;
    }
    if (bVar5) {
      puVar30 = puVar32;
    }
    else {
      puVar33 = puVar32;
    }
    bVar41 = (longlong)puVar30[6] < (longlong)puVar37[6];
    if (puVar30[6] == puVar37[6]) {
      bVar41 = *(uint *)(puVar30 + 7) < *(uint *)(puVar37 + 7);
    }
    puVar29 = puVar30;
    if (bVar41) {
      puVar29 = puVar37;
      puVar37 = puVar30;
    }
    param_3[8] = puVar40[8];
    uVar21 = *puVar40;
    uVar22 = puVar40[1];
    uVar23 = puVar40[2];
    uVar24 = puVar40[3];
    uVar25 = puVar40[4];
    uVar26 = puVar40[5];
    uVar27 = puVar40[7];
    param_3[6] = puVar40[6];
    param_3[7] = uVar27;
    param_3[4] = uVar25;
    param_3[5] = uVar26;
    param_3[2] = uVar23;
    param_3[3] = uVar24;
    *param_3 = uVar21;
    param_3[1] = uVar22;
    param_3[0x11] = puVar37[8];
    uVar21 = *puVar37;
    uVar22 = puVar37[1];
    uVar23 = puVar37[2];
    uVar24 = puVar37[3];
    uVar25 = puVar37[4];
    uVar26 = puVar37[5];
    uVar27 = puVar37[7];
    param_3[0xf] = puVar37[6];
    param_3[0x10] = uVar27;
    param_3[0xd] = uVar25;
    param_3[0xe] = uVar26;
    param_3[0xb] = uVar23;
    param_3[0xc] = uVar24;
    param_3[9] = uVar21;
    param_3[10] = uVar22;
    param_3[0x1a] = puVar29[8];
    uVar21 = *puVar29;
    uVar22 = puVar29[1];
    uVar23 = puVar29[2];
    uVar24 = puVar29[3];
    uVar25 = puVar29[4];
    uVar26 = puVar29[5];
    uVar27 = puVar29[7];
    param_3[0x18] = puVar29[6];
    param_3[0x19] = uVar27;
    param_3[0x16] = uVar25;
    param_3[0x17] = uVar26;
    param_3[0x14] = uVar23;
    param_3[0x15] = uVar24;
    param_3[0x12] = uVar21;
    param_3[0x13] = uVar22;
    uVar21 = puVar33[1];
    uVar22 = puVar33[2];
    uVar23 = puVar33[3];
    uVar24 = puVar33[4];
    uVar25 = puVar33[5];
    uVar26 = puVar33[6];
    uVar27 = puVar33[7];
    param_3[0x1b] = *puVar33;
    param_3[0x1c] = uVar21;
    param_3[0x1d] = uVar22;
    param_3[0x1e] = uVar23;
    bVar41 = (longlong)param_1[uVar28 * 9 + 0xf] < (longlong)param_1[uVar28 * 9 + 6];
    if (param_1[uVar28 * 9 + 0xf] == param_1[uVar28 * 9 + 6]) {
      bVar41 = *(uint *)(param_1 + uVar28 * 9 + 0x10) < *(uint *)(param_1 + uVar28 * 9 + 7);
    }
    bVar5 = (longlong)param_1[uVar28 * 9 + 0x21] < (longlong)param_1[uVar28 * 9 + 0x18];
    if (param_1[uVar28 * 9 + 0x21] == param_1[uVar28 * 9 + 0x18]) {
      bVar5 = *(uint *)(param_1 + uVar28 * 9 + 0x22) < *(uint *)(param_1 + uVar28 * 9 + 0x19);
    }
    uVar31 = (ulonglong)bVar41;
    uVar36 = (ulonglong)(bVar41 ^ 1);
    puVar32 = param_1 + uVar28 * 9 + 0x1b;
    puVar29 = param_1 + uVar28 * 9 + 0x12;
    if (bVar5) {
      puVar32 = param_1 + uVar28 * 9 + 0x12;
      puVar29 = param_1 + uVar28 * 9 + 0x1b;
    }
    bVar41 = (longlong)puVar29[6] < (longlong)param_1[uVar28 * 9 + uVar31 * 9 + 6];
    if (puVar29[6] == param_1[uVar28 * 9 + uVar31 * 9 + 6]) {
      bVar41 = *(uint *)(puVar29 + 7) < *(uint *)(param_1 + uVar28 * 9 + uVar31 * 9 + 7);
    }
    puVar37 = param_1 + uVar28 * 9 + uVar36 * 9;
    bVar5 = (longlong)puVar32[6] < (longlong)param_1[uVar28 * 9 + uVar36 * 9 + 6];
    if (puVar32[6] == param_1[uVar28 * 9 + uVar36 * 9 + 6]) {
      bVar5 = *(uint *)(puVar32 + 7) < *(uint *)(param_1 + uVar28 * 9 + uVar36 * 9 + 7);
    }
    puVar40 = puVar37;
    if (bVar5) {
      puVar40 = puVar29;
    }
    puVar35 = puVar29;
    puVar30 = param_1 + uVar28 * 9 + uVar31 * 9;
    if (bVar41) {
      puVar35 = puVar37;
      puVar30 = puVar29;
      puVar40 = param_1 + uVar28 * 9 + uVar31 * 9;
    }
    param_3[0x1f] = uVar24;
    param_3[0x20] = uVar25;
    if (!bVar5) {
      puVar37 = puVar32;
    }
    param_3[0x21] = uVar26;
    param_3[0x22] = uVar27;
    if (bVar5) {
      puVar35 = puVar32;
    }
    bVar41 = (longlong)puVar35[6] < (longlong)puVar40[6];
    if (puVar35[6] == puVar40[6]) {
      bVar41 = *(uint *)(puVar35 + 7) < *(uint *)(puVar40 + 7);
    }
    puVar29 = puVar40;
    if (bVar41) {
      puVar29 = puVar35;
    }
    param_3[0x23] = puVar33[8];
    if (bVar41) {
      puVar35 = puVar40;
    }
    param_3[uVar28 * 9 + 8] = puVar30[8];
    uVar21 = *puVar30;
    uVar22 = puVar30[1];
    uVar23 = puVar30[2];
    uVar24 = puVar30[3];
    uVar25 = puVar30[4];
    uVar26 = puVar30[5];
    uVar27 = puVar30[7];
    param_3[uVar28 * 9 + 6] = puVar30[6];
    (param_3 + uVar28 * 9 + 6)[1] = uVar27;
    param_3[uVar28 * 9 + 4] = uVar25;
    (param_3 + uVar28 * 9 + 4)[1] = uVar26;
    param_3[uVar28 * 9 + 2] = uVar23;
    (param_3 + uVar28 * 9 + 2)[1] = uVar24;
    param_3[uVar28 * 9] = uVar21;
    (param_3 + uVar28 * 9)[1] = uVar22;
    param_3[uVar28 * 9 + 0x11] = puVar29[8];
    uVar21 = *puVar29;
    uVar22 = puVar29[1];
    uVar23 = puVar29[2];
    uVar24 = puVar29[3];
    uVar25 = puVar29[4];
    uVar26 = puVar29[5];
    uVar27 = puVar29[7];
    param_3[uVar28 * 9 + 0xf] = puVar29[6];
    (param_3 + uVar28 * 9 + 0xf)[1] = uVar27;
    param_3[uVar28 * 9 + 0xd] = uVar25;
    (param_3 + uVar28 * 9 + 0xd)[1] = uVar26;
    param_3[uVar28 * 9 + 0xb] = uVar23;
    (param_3 + uVar28 * 9 + 0xb)[1] = uVar24;
    param_3[uVar28 * 9 + 9] = uVar21;
    (param_3 + uVar28 * 9 + 9)[1] = uVar22;
    param_3[uVar28 * 9 + 0x1a] = puVar35[8];
    uVar21 = *puVar35;
    uVar22 = puVar35[1];
    uVar23 = puVar35[2];
    uVar24 = puVar35[3];
    uVar25 = puVar35[4];
    uVar26 = puVar35[5];
    uVar27 = puVar35[7];
    param_3[uVar28 * 9 + 0x18] = puVar35[6];
    (param_3 + uVar28 * 9 + 0x18)[1] = uVar27;
    param_3[uVar28 * 9 + 0x16] = uVar25;
    (param_3 + uVar28 * 9 + 0x16)[1] = uVar26;
    param_3[uVar28 * 9 + 0x14] = uVar23;
    (param_3 + uVar28 * 9 + 0x14)[1] = uVar24;
    param_3[uVar28 * 9 + 0x12] = uVar21;
    (param_3 + uVar28 * 9 + 0x12)[1] = uVar22;
    uVar21 = puVar37[1];
    uVar22 = puVar37[2];
    uVar23 = puVar37[3];
    uVar24 = puVar37[4];
    uVar25 = puVar37[5];
    uVar26 = puVar37[6];
    uVar27 = puVar37[7];
    param_3[uVar28 * 9 + 0x1b] = *puVar37;
    (param_3 + uVar28 * 9 + 0x1b)[1] = uVar21;
    param_3[uVar28 * 9 + 0x1d] = uVar22;
    (param_3 + uVar28 * 9 + 0x1d)[1] = uVar23;
    param_3[uVar28 * 9 + 0x1f] = uVar24;
    (param_3 + uVar28 * 9 + 0x1f)[1] = uVar25;
    param_3[uVar28 * 9 + 0x21] = uVar26;
    (param_3 + uVar28 * 9 + 0x21)[1] = uVar27;
    param_3[uVar28 * 9 + 0x23] = puVar37[8];
    uVar31 = 4;
    uVar36 = param_2 - uVar28;
    if (4 < uVar28) {
LAB_003894b7:
      lVar39 = (ulonglong)(uint)((int)uVar31 * 8) * 9;
      uVar38 = uVar31;
      do {
        uVar21 = param_1[uVar38 * 9];
        uVar22 = (param_1 + uVar38 * 9)[1];
        uVar23 = param_1[uVar38 * 9 + 2];
        uVar24 = (param_1 + uVar38 * 9 + 2)[1];
        uVar25 = param_1[uVar38 * 9 + 4];
        uVar26 = (param_1 + uVar38 * 9 + 4)[1];
        uVar27 = (param_1 + uVar38 * 9 + 6)[1];
        param_3[uVar38 * 9 + 6] = param_1[uVar38 * 9 + 6];
        (param_3 + uVar38 * 9 + 6)[1] = uVar27;
        param_3[uVar38 * 9 + 8] = param_1[uVar38 * 9 + 8];
        param_3[uVar38 * 9 + 4] = uVar25;
        (param_3 + uVar38 * 9 + 4)[1] = uVar26;
        param_3[uVar38 * 9 + 2] = uVar23;
        (param_3 + uVar38 * 9 + 2)[1] = uVar24;
        param_3[uVar38 * 9] = uVar21;
        (param_3 + uVar38 * 9)[1] = uVar22;
        lVar2 = param_3[uVar38 * 9 + 6];
        uVar1 = *(uint *)(param_3 + uVar38 * 9 + 7);
        bVar41 = lVar2 < (longlong)param_3[uVar38 * 9 + -3];
        if (lVar2 == param_3[uVar38 * 9 + -3]) {
          bVar41 = uVar1 < *(uint *)(param_3 + uVar38 * 9 + -2);
        }
        if (bVar41) {
          puVar29 = param_1 + uVar38 * 9;
          lVar3 = lVar39;
          do {
            lVar34 = lVar3;
            *(undefined8 *)((longlong)param_3 + lVar34 + 0x40) =
                 *(undefined8 *)((longlong)param_3 + lVar34 + -8);
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + -0x48);
            uVar21 = *puVar32;
            uVar22 = puVar32[1];
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + -0x38);
            uVar23 = *puVar32;
            uVar24 = puVar32[1];
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + -0x28);
            uVar25 = *puVar32;
            uVar26 = puVar32[1];
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + -0x18);
            uVar27 = puVar32[1];
            puVar33 = (undefined8 *)((longlong)param_3 + lVar34 + 0x30);
            *puVar33 = *puVar32;
            puVar33[1] = uVar27;
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + 0x20);
            *puVar32 = uVar25;
            puVar32[1] = uVar26;
            puVar32 = (undefined8 *)((longlong)param_3 + lVar34 + 0x10);
            *puVar32 = uVar23;
            puVar32[1] = uVar24;
            *(undefined8 *)((longlong)param_3 + lVar34) = uVar21;
            ((undefined8 *)((longlong)param_3 + lVar34))[1] = uVar22;
            if (lVar34 == 0x48) {
              puVar32 = param_3;
              goto LAB_003894d3;
            }
            lVar3 = *(longlong *)((longlong)param_3 + lVar34 + -0x60);
            bVar41 = lVar2 < lVar3;
            if (lVar2 == lVar3) {
              bVar41 = uVar1 < *(uint *)((longlong)param_3 + lVar34 + -0x58);
            }
            lVar3 = lVar34 + -0x48;
          } while (bVar41);
          puVar32 = (undefined8 *)(lVar34 + -0x48 + (longlong)param_3);
LAB_003894d3:
          uVar21 = *puVar29;
          uVar22 = puVar29[1];
          uVar23 = puVar29[2];
          uVar24 = puVar29[3];
          uVar25 = puVar29[5];
          puVar32[4] = puVar29[4];
          puVar32[5] = uVar25;
          puVar32[2] = uVar23;
          puVar32[3] = uVar24;
          *puVar32 = uVar21;
          puVar32[1] = uVar22;
          *(longlong *)((longlong)param_3 + lVar34 + -0x18) = lVar2;
          *(uint *)((longlong)param_3 + lVar34 + -0x10) = uVar1;
          *(undefined8 *)((longlong)param_3 + lVar34 + -0xc) =
               *(undefined8 *)((longlong)puVar29 + 0x3c);
          *(undefined4 *)((longlong)param_3 + lVar34 + -4) =
               *(undefined4 *)((longlong)puVar29 + 0x44);
        }
        uVar38 = uVar38 + 1;
        lVar39 = lVar39 + 0x48;
      } while (uVar38 != uVar28);
    }
  }
  puVar29 = param_3 + uVar28 * 9;
  if (uVar31 < uVar36) {
    lVar39 = (ulonglong)(uint)((int)uVar31 * 8) * 9;
    do {
      uVar21 = param_1[uVar28 * 9 + uVar31 * 9];
      uVar22 = (param_1 + uVar28 * 9 + uVar31 * 9)[1];
      uVar23 = param_1[uVar28 * 9 + uVar31 * 9 + 2];
      uVar24 = (param_1 + uVar28 * 9 + uVar31 * 9 + 2)[1];
      uVar25 = param_1[uVar28 * 9 + uVar31 * 9 + 4];
      uVar26 = (param_1 + uVar28 * 9 + uVar31 * 9 + 4)[1];
      uVar27 = (param_1 + uVar28 * 9 + uVar31 * 9 + 6)[1];
      puVar29[uVar31 * 9 + 6] = param_1[uVar28 * 9 + uVar31 * 9 + 6];
      (puVar29 + uVar31 * 9 + 6)[1] = uVar27;
      puVar29[uVar31 * 9 + 8] = param_1[uVar28 * 9 + uVar31 * 9 + 8];
      puVar29[uVar31 * 9 + 4] = uVar25;
      (puVar29 + uVar31 * 9 + 4)[1] = uVar26;
      puVar29[uVar31 * 9 + 2] = uVar23;
      (puVar29 + uVar31 * 9 + 2)[1] = uVar24;
      puVar29[uVar31 * 9] = uVar21;
      (puVar29 + uVar31 * 9)[1] = uVar22;
      lVar2 = puVar29[uVar31 * 9 + 6];
      uVar1 = *(uint *)(puVar29 + uVar31 * 9 + 7);
      bVar41 = lVar2 < (longlong)puVar29[uVar31 * 9 + -3];
      if (lVar2 == puVar29[uVar31 * 9 + -3]) {
        bVar41 = uVar1 < *(uint *)(puVar29 + uVar31 * 9 + -2);
      }
      if (bVar41) {
        puVar32 = param_1 + uVar28 * 9 + uVar31 * 9;
        lVar3 = lVar39;
        do {
          lVar34 = lVar3;
          *(undefined8 *)((longlong)puVar29 + lVar34 + 0x40) =
               *(undefined8 *)((longlong)puVar29 + lVar34 + -8);
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + -0x48);
          uVar21 = *puVar33;
          uVar22 = puVar33[1];
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + -0x38);
          uVar23 = *puVar33;
          uVar24 = puVar33[1];
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + -0x28);
          uVar25 = *puVar33;
          uVar26 = puVar33[1];
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + -0x18);
          uVar27 = puVar33[1];
          puVar37 = (undefined8 *)((longlong)puVar29 + lVar34 + 0x30);
          *puVar37 = *puVar33;
          puVar37[1] = uVar27;
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + 0x20);
          *puVar33 = uVar25;
          puVar33[1] = uVar26;
          puVar33 = (undefined8 *)((longlong)puVar29 + lVar34 + 0x10);
          *puVar33 = uVar23;
          puVar33[1] = uVar24;
          *(undefined8 *)((longlong)puVar29 + lVar34) = uVar21;
          ((undefined8 *)((longlong)puVar29 + lVar34))[1] = uVar22;
          if (lVar34 == 0x48) {
            puVar33 = puVar29;
            goto LAB_00389643;
          }
          lVar3 = *(longlong *)((longlong)puVar29 + lVar34 + -0x60);
          bVar41 = lVar2 < lVar3;
          if (lVar2 == lVar3) {
            bVar41 = uVar1 < *(uint *)((longlong)puVar29 + lVar34 + -0x58);
          }
          lVar3 = lVar34 + -0x48;
        } while (bVar41);
        puVar33 = (undefined8 *)(lVar34 + -0x48 + (longlong)puVar29);
LAB_00389643:
        uVar21 = *puVar32;
        uVar22 = puVar32[1];
        uVar23 = puVar32[2];
        uVar24 = puVar32[3];
        uVar25 = puVar32[5];
        puVar33[4] = puVar32[4];
        puVar33[5] = uVar25;
        puVar33[2] = uVar23;
        puVar33[3] = uVar24;
        *puVar33 = uVar21;
        puVar33[1] = uVar22;
        *(longlong *)((longlong)puVar29 + lVar34 + -0x18) = lVar2;
        *(uint *)((longlong)puVar29 + lVar34 + -0x10) = uVar1;
        *(undefined8 *)((longlong)puVar29 + lVar34 + -0xc) =
             *(undefined8 *)((longlong)puVar32 + 0x3c);
        *(undefined4 *)((longlong)puVar29 + lVar34 + -4) = *(undefined4 *)((longlong)puVar32 + 0x44)
        ;
      }
      uVar31 = uVar31 + 1;
      lVar39 = lVar39 + 0x48;
    } while (uVar31 != uVar36);
  }
  puVar33 = param_3 + param_2 * 9 + -9;
  puVar32 = puVar29 + -9;
  puVar37 = param_1 + param_2 * 9;
  do {
    puVar40 = param_1;
    bVar41 = (longlong)puVar29[6] < (longlong)param_3[6];
    if (puVar29[6] == param_3[6]) {
      bVar41 = *(uint *)(puVar29 + 7) < *(uint *)(param_3 + 7);
    }
    puVar30 = puVar29;
    if (bVar41 == false) {
      puVar30 = param_3;
    }
    puVar40[8] = puVar30[8];
    uVar21 = *puVar30;
    uVar22 = puVar30[1];
    uVar23 = puVar30[2];
    uVar24 = puVar30[3];
    uVar25 = puVar30[4];
    uVar26 = puVar30[5];
    uVar27 = puVar30[7];
    puVar40[6] = puVar30[6];
    puVar40[7] = uVar27;
    puVar40[4] = uVar25;
    puVar40[5] = uVar26;
    puVar40[2] = uVar23;
    puVar40[3] = uVar24;
    *puVar40 = uVar21;
    puVar40[1] = uVar22;
    bVar5 = (longlong)puVar33[6] < (longlong)puVar32[6];
    if (puVar33[6] == puVar32[6]) {
      bVar5 = *(uint *)(puVar33 + 7) < *(uint *)(puVar32 + 7);
    }
    puVar30 = puVar32;
    if (bVar5 == false) {
      puVar30 = puVar33;
    }
    puVar29 = puVar29 + (ulonglong)bVar41 * 9;
    param_3 = param_3 + (ulonglong)(bVar41 ^ 1) * 9;
    puVar37[-1] = puVar30[8];
    uVar6 = *(undefined4 *)puVar30;
    uVar7 = *(undefined4 *)((longlong)puVar30 + 4);
    uVar8 = *(undefined4 *)(puVar30 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar30 + 0xc);
    uVar10 = *(undefined4 *)(puVar30 + 2);
    uVar11 = *(undefined4 *)((longlong)puVar30 + 0x14);
    uVar12 = *(undefined4 *)(puVar30 + 3);
    uVar13 = *(undefined4 *)((longlong)puVar30 + 0x1c);
    uVar14 = *(undefined4 *)(puVar30 + 4);
    uVar15 = *(undefined4 *)((longlong)puVar30 + 0x24);
    uVar16 = *(undefined4 *)(puVar30 + 5);
    uVar17 = *(undefined4 *)((longlong)puVar30 + 0x2c);
    uVar18 = *(undefined4 *)((longlong)puVar30 + 0x34);
    uVar19 = *(undefined4 *)(puVar30 + 7);
    uVar20 = *(undefined4 *)((longlong)puVar30 + 0x3c);
    *(undefined4 *)(puVar37 + -3) = *(undefined4 *)(puVar30 + 6);
    *(undefined4 *)((longlong)puVar37 + -0x14) = uVar18;
    *(undefined4 *)(puVar37 + -2) = uVar19;
    *(undefined4 *)((longlong)puVar37 + -0xc) = uVar20;
    *(undefined4 *)(puVar37 + -5) = uVar14;
    *(undefined4 *)((longlong)puVar37 + -0x24) = uVar15;
    *(undefined4 *)(puVar37 + -4) = uVar16;
    *(undefined4 *)((longlong)puVar37 + -0x1c) = uVar17;
    *(undefined4 *)(puVar37 + -7) = uVar10;
    *(undefined4 *)((longlong)puVar37 + -0x34) = uVar11;
    *(undefined4 *)(puVar37 + -6) = uVar12;
    *(undefined4 *)((longlong)puVar37 + -0x2c) = uVar13;
    *(undefined4 *)(puVar37 + -9) = uVar6;
    *(undefined4 *)((longlong)puVar37 + -0x44) = uVar7;
    *(undefined4 *)(puVar37 + -8) = uVar8;
    *(undefined4 *)((longlong)puVar37 + -0x3c) = uVar9;
    puVar30 = puVar33 + (ulonglong)bVar5 * 9;
    puVar33 = puVar30 + -9;
    puVar32 = puVar32 + (ulonglong)bVar5 * -9;
    uVar28 = uVar28 - 1;
    param_1 = puVar40 + 9;
    puVar37 = puVar37 + -9;
  } while (uVar28 != 0);
  if ((param_2 & 1) != 0) {
    bVar41 = param_3 < puVar32 + 9;
    puVar33 = puVar29;
    if (bVar41) {
      puVar33 = param_3;
    }
    puVar40[0x11] = puVar33[8];
    uVar6 = *(undefined4 *)puVar33;
    uVar7 = *(undefined4 *)((longlong)puVar33 + 4);
    uVar8 = *(undefined4 *)(puVar33 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar33 + 0xc);
    uVar10 = *(undefined4 *)(puVar33 + 2);
    uVar11 = *(undefined4 *)((longlong)puVar33 + 0x14);
    uVar12 = *(undefined4 *)(puVar33 + 3);
    uVar13 = *(undefined4 *)((longlong)puVar33 + 0x1c);
    uVar14 = *(undefined4 *)(puVar33 + 4);
    uVar15 = *(undefined4 *)((longlong)puVar33 + 0x24);
    uVar16 = *(undefined4 *)(puVar33 + 5);
    uVar17 = *(undefined4 *)((longlong)puVar33 + 0x2c);
    uVar18 = *(undefined4 *)((longlong)puVar33 + 0x34);
    uVar19 = *(undefined4 *)(puVar33 + 7);
    uVar20 = *(undefined4 *)((longlong)puVar33 + 0x3c);
    *(undefined4 *)(puVar40 + 0xf) = *(undefined4 *)(puVar33 + 6);
    *(undefined4 *)((longlong)puVar40 + 0x7c) = uVar18;
    *(undefined4 *)(puVar40 + 0x10) = uVar19;
    *(undefined4 *)((longlong)puVar40 + 0x84) = uVar20;
    *(undefined4 *)(puVar40 + 0xd) = uVar14;
    *(undefined4 *)((longlong)puVar40 + 0x6c) = uVar15;
    *(undefined4 *)(puVar40 + 0xe) = uVar16;
    *(undefined4 *)((longlong)puVar40 + 0x74) = uVar17;
    *(undefined4 *)(puVar40 + 0xb) = uVar10;
    *(undefined4 *)((longlong)puVar40 + 0x5c) = uVar11;
    *(undefined4 *)(puVar40 + 0xc) = uVar12;
    *(undefined4 *)((longlong)puVar40 + 100) = uVar13;
    *(undefined4 *)(puVar40 + 9) = uVar6;
    *(undefined4 *)((longlong)puVar40 + 0x4c) = uVar7;
    *(undefined4 *)(puVar40 + 10) = uVar8;
    *(undefined4 *)((longlong)puVar40 + 0x54) = uVar9;
    param_3 = param_3 + (ulonglong)bVar41 * 9;
    puVar29 = puVar29 + (ulonglong)!bVar41 * 9;
  }
  if ((param_3 == puVar32 + 9) && (puVar29 == puVar30)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_00389955:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


