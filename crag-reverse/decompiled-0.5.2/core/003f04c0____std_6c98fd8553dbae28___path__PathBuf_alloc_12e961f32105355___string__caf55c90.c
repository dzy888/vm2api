// 003f04c0 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  bool bVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  bool bVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_2 < 0x21) {
LAB_003f04e7:
    shared::smallsort::small_sort_general_with_scratch::
    <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  local_88 = param_6;
LAB_003f050a:
  uVar38 = param_2;
  do {
    if (param_5 == 0) {
      drift::sort::
      <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                (param_1,uVar38,param_3,param_4,1,param_7);
      return;
    }
    puVar30 = param_1 + (uVar38 >> 3) * 0x24;
    puVar27 = param_1 + (uVar38 >> 3) * 0x3f;
    if (uVar38 < 0x40) {
      lVar29 = param_1[6];
      lVar28 = puVar30[6];
      bVar25 = lVar29 < lVar28;
      if (lVar29 == lVar28) {
        bVar25 = *(uint *)(param_1 + 7) < *(uint *)(puVar30 + 7);
      }
      lVar32 = puVar27[6];
      bVar36 = lVar29 < lVar32;
      if (lVar29 == lVar32) {
        bVar36 = *(uint *)(param_1 + 7) < *(uint *)(puVar27 + 7);
      }
      puVar26 = param_1;
      if (bVar25 == bVar36) {
        bVar36 = lVar28 < lVar32;
        if (lVar28 == lVar32) {
          bVar36 = *(uint *)(puVar30 + 7) < *(uint *)(puVar27 + 7);
        }
        puVar26 = puVar30;
        if (bVar25 != bVar36) {
          puVar26 = puVar27;
        }
      }
    }
    else {
      puVar26 = (undefined8 *)
                shared::pivot::median3_rec::
                <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                          (param_1);
    }
    param_5 = param_5 + -1;
    uVar37 = ((ulonglong)((longlong)puVar26 - (longlong)param_1) >> 3) * -0x71c71c71c71c71c7;
    local_38 = puVar26[8];
    local_78 = *(undefined4 *)puVar26;
    uStack_74 = *(undefined4 *)((longlong)puVar26 + 4);
    uStack_70 = *(undefined4 *)(puVar26 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar26 + 0xc);
    local_68 = *(undefined4 *)(puVar26 + 2);
    uStack_64 = *(undefined4 *)((longlong)puVar26 + 0x14);
    uStack_60 = *(undefined4 *)(puVar26 + 3);
    uStack_5c = *(undefined4 *)((longlong)puVar26 + 0x1c);
    local_58 = *(undefined4 *)(puVar26 + 4);
    uStack_54 = *(undefined4 *)((longlong)puVar26 + 0x24);
    uStack_50 = *(undefined4 *)(puVar26 + 5);
    uStack_4c = *(undefined4 *)((longlong)puVar26 + 0x2c);
    local_48 = *(undefined4 *)(puVar26 + 6);
    uStack_44 = *(undefined4 *)((longlong)puVar26 + 0x34);
    uStack_40 = *(undefined4 *)(puVar26 + 7);
    uStack_3c = *(undefined4 *)((longlong)puVar26 + 0x3c);
    if (local_88 != 0) {
      bVar25 = *(longlong *)(local_88 + 0x30) < (longlong)puVar26[6];
      if (*(longlong *)(local_88 + 0x30) == puVar26[6]) {
        bVar25 = *(uint *)(local_88 + 0x38) < *(uint *)(puVar26 + 7);
      }
      if (!bVar25) break;
    }
    if (param_4 < uVar38) goto LAB_003f0b82;
    lVar29 = param_3 + uVar38 * 0x48;
    param_2 = 0;
    puVar27 = param_1;
    lVar28 = lVar29;
    uVar31 = uVar37;
    while( true ) {
      for (; puVar27 < param_1 + uVar31 * 9; puVar27 = puVar27 + 9) {
        bVar25 = (longlong)puVar27[6] < (longlong)puVar26[6];
        if (puVar27[6] == puVar26[6]) {
          bVar25 = *(uint *)(puVar27 + 7) < *(uint *)(puVar26 + 7);
        }
        lVar28 = lVar28 + -0x48;
        lVar32 = lVar28;
        if (bVar25 != false) {
          lVar32 = param_3;
        }
        *(undefined8 *)(lVar32 + 0x40 + param_2 * 0x48) = puVar27[8];
        uVar39 = *(undefined4 *)puVar27;
        uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
        uVar5 = *(undefined4 *)(puVar27 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
        uVar7 = *(undefined4 *)(puVar27 + 2);
        uVar8 = *(undefined4 *)((longlong)puVar27 + 0x14);
        uVar9 = *(undefined4 *)(puVar27 + 3);
        uVar10 = *(undefined4 *)((longlong)puVar27 + 0x1c);
        uVar11 = *(undefined4 *)(puVar27 + 4);
        uVar12 = *(undefined4 *)((longlong)puVar27 + 0x24);
        uVar13 = *(undefined4 *)(puVar27 + 5);
        uVar14 = *(undefined4 *)((longlong)puVar27 + 0x2c);
        uVar15 = *(undefined4 *)((longlong)puVar27 + 0x34);
        uVar16 = *(undefined4 *)(puVar27 + 7);
        uVar17 = *(undefined4 *)((longlong)puVar27 + 0x3c);
        puVar1 = (undefined4 *)(lVar32 + 0x30 + param_2 * 0x48);
        *puVar1 = *(undefined4 *)(puVar27 + 6);
        puVar1[1] = uVar15;
        puVar1[2] = uVar16;
        puVar1[3] = uVar17;
        puVar1 = (undefined4 *)(lVar32 + 0x20 + param_2 * 0x48);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        puVar1[2] = uVar13;
        puVar1[3] = uVar14;
        puVar1 = (undefined4 *)(lVar32 + 0x10 + param_2 * 0x48);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        puVar1[2] = uVar9;
        puVar1[3] = uVar10;
        puVar1 = (undefined4 *)(lVar32 + param_2 * 0x48);
        *puVar1 = uVar39;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        param_2 = bVar25 + param_2;
      }
      if (uVar31 == uVar38) break;
      *(undefined8 *)(lVar28 + -8 + param_2 * 0x48) = puVar27[8];
      uVar39 = *(undefined4 *)puVar27;
      uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
      uVar5 = *(undefined4 *)(puVar27 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
      uVar7 = *(undefined4 *)(puVar27 + 2);
      uVar8 = *(undefined4 *)((longlong)puVar27 + 0x14);
      uVar9 = *(undefined4 *)(puVar27 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar27 + 0x1c);
      uVar11 = *(undefined4 *)(puVar27 + 4);
      uVar12 = *(undefined4 *)((longlong)puVar27 + 0x24);
      uVar13 = *(undefined4 *)(puVar27 + 5);
      uVar14 = *(undefined4 *)((longlong)puVar27 + 0x2c);
      uVar15 = *(undefined4 *)((longlong)puVar27 + 0x34);
      uVar16 = *(undefined4 *)(puVar27 + 7);
      uVar17 = *(undefined4 *)((longlong)puVar27 + 0x3c);
      puVar1 = (undefined4 *)(lVar28 + -0x18 + param_2 * 0x48);
      *puVar1 = *(undefined4 *)(puVar27 + 6);
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)(lVar28 + -0x28 + param_2 * 0x48);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      puVar1[2] = uVar13;
      puVar1[3] = uVar14;
      puVar1 = (undefined4 *)(lVar28 + -0x38 + param_2 * 0x48);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(lVar28 + -0x48 + param_2 * 0x48);
      *puVar1 = uVar39;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar28 = lVar28 + -0x48;
      puVar27 = puVar27 + 9;
      uVar31 = uVar38;
    }
    uVar39 = (*(code *)PTR_memcpy_00799008)(lVar28,param_2 * 0x48);
    uVar31 = uVar38 - param_2;
    if (uVar31 != 0) {
      puVar27 = param_1 + param_2 * 9;
      if (uVar38 == param_2 + 1) {
        uVar34 = 0;
      }
      else {
        puVar30 = (undefined8 *)(param_3 + -0x48 + uVar38 * 0x48);
        puVar33 = puVar27;
        uVar35 = 0;
        do {
          puVar33[8] = puVar30[8];
          uVar18 = *puVar30;
          uVar19 = puVar30[1];
          uVar20 = puVar30[2];
          uVar21 = puVar30[3];
          uVar22 = puVar30[4];
          uVar23 = puVar30[5];
          uVar24 = puVar30[7];
          puVar33[6] = puVar30[6];
          puVar33[7] = uVar24;
          puVar33[4] = uVar22;
          puVar33[5] = uVar23;
          puVar33[2] = uVar20;
          puVar33[3] = uVar21;
          *puVar33 = uVar18;
          puVar33[1] = uVar19;
          uVar34 = uVar35 + 2;
          uVar35 = uVar35 ^ 0x1ffffffffffffffe;
          puVar1 = (undefined4 *)(lVar29 + uVar35 * 0x48);
          uVar39 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar2 = (undefined8 *)(lVar29 + 0x10 + uVar35 * 0x48);
          uVar18 = *puVar2;
          uVar19 = puVar2[1];
          puVar2 = (undefined8 *)(lVar29 + 0x20 + uVar35 * 0x48);
          uVar20 = *puVar2;
          uVar21 = puVar2[1];
          puVar2 = (undefined8 *)(lVar29 + 0x30 + uVar35 * 0x48);
          uVar22 = *puVar2;
          uVar23 = puVar2[1];
          *(undefined4 *)(puVar33 + 9) = uVar39;
          *(undefined4 *)((longlong)puVar33 + 0x4c) = uVar4;
          *(undefined4 *)(puVar33 + 10) = uVar5;
          *(undefined4 *)((longlong)puVar33 + 0x54) = uVar6;
          puVar33[0xb] = uVar18;
          puVar33[0xc] = uVar19;
          puVar33[0xd] = uVar20;
          puVar33[0xe] = uVar21;
          puVar33[0xf] = uVar22;
          puVar33[0x10] = uVar23;
          puVar33[0x11] = *(undefined8 *)(lVar29 + 0x40 + uVar35 * 0x48);
          puVar33 = puVar33 + 0x12;
          puVar30 = puVar30 + -0x12;
          uVar35 = uVar34;
        } while ((uVar31 & 0xfffffffffffffffe) != uVar34);
        if ((uVar31 & 1) == 0) goto LAB_003f088d;
      }
      uVar35 = ~uVar34;
      puVar27[uVar34 * 9 + 8] = *(undefined8 *)(lVar29 + 0x40 + uVar35 * 0x48);
      puVar1 = (undefined4 *)(lVar29 + uVar35 * 0x48);
      uVar39 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar30 = (undefined8 *)(lVar29 + 0x10 + uVar35 * 0x48);
      uVar18 = *puVar30;
      uVar19 = puVar30[1];
      puVar30 = (undefined8 *)(lVar29 + 0x20 + uVar35 * 0x48);
      uVar20 = *puVar30;
      uVar21 = puVar30[1];
      puVar30 = (undefined8 *)(lVar29 + 0x30 + uVar35 * 0x48);
      uVar22 = puVar30[1];
      puVar27[uVar34 * 9 + 6] = *puVar30;
      (puVar27 + uVar34 * 9 + 6)[1] = uVar22;
      puVar27[uVar34 * 9 + 4] = uVar20;
      (puVar27 + uVar34 * 9 + 4)[1] = uVar21;
      puVar27[uVar34 * 9 + 2] = uVar18;
      (puVar27 + uVar34 * 9 + 2)[1] = uVar19;
      puVar27 = puVar27 + uVar34 * 9;
      *(undefined4 *)puVar27 = uVar39;
      *(undefined4 *)((longlong)puVar27 + 4) = uVar4;
      *(undefined4 *)(puVar27 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar27 + 0xc) = uVar6;
    }
LAB_003f088d:
    if (param_2 == 0) break;
    if (uVar38 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar39,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003f0b9d;
    }
    <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
              (param_1 + param_2 * 9,uVar31,param_3,param_4,param_5,&local_78,param_7);
    uVar38 = param_2;
    if (param_2 < 0x21) goto LAB_003f04e7;
  } while( true );
  if (param_4 < uVar38) {
LAB_003f0b82:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar29 = param_3 + uVar38 * 0x48;
  uVar31 = 0;
  puVar27 = param_1;
  while( true ) {
    for (; puVar27 < param_1 + uVar37 * 9; puVar27 = puVar27 + 9) {
      bVar25 = (longlong)puVar27[6] <= (longlong)puVar26[6];
      if (puVar26[6] == puVar27[6]) {
        bVar25 = *(uint *)(puVar27 + 7) <= *(uint *)(puVar26 + 7);
      }
      lVar29 = lVar29 + -0x48;
      lVar28 = lVar29;
      if (bVar25 != false) {
        lVar28 = param_3;
      }
      *(undefined8 *)(lVar28 + 0x40 + uVar31 * 0x48) = puVar27[8];
      uVar39 = *(undefined4 *)puVar27;
      uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
      uVar5 = *(undefined4 *)(puVar27 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
      uVar18 = puVar27[2];
      uVar19 = puVar27[3];
      uVar20 = puVar27[4];
      uVar21 = puVar27[5];
      uVar22 = puVar27[7];
      puVar30 = (undefined8 *)(lVar28 + 0x30 + uVar31 * 0x48);
      *puVar30 = puVar27[6];
      puVar30[1] = uVar22;
      puVar30 = (undefined8 *)(lVar28 + 0x20 + uVar31 * 0x48);
      *puVar30 = uVar20;
      puVar30[1] = uVar21;
      puVar30 = (undefined8 *)(lVar28 + 0x10 + uVar31 * 0x48);
      *puVar30 = uVar18;
      puVar30[1] = uVar19;
      puVar1 = (undefined4 *)(lVar28 + uVar31 * 0x48);
      *puVar1 = uVar39;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar31 = bVar25 + uVar31;
    }
    if (uVar37 == uVar38) break;
    lVar29 = lVar29 + -0x48;
    *(undefined8 *)(param_3 + 0x40 + uVar31 * 0x48) = puVar27[8];
    uVar39 = *(undefined4 *)puVar27;
    uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
    uVar5 = *(undefined4 *)(puVar27 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uVar18 = puVar27[2];
    uVar19 = puVar27[3];
    uVar20 = puVar27[4];
    uVar21 = puVar27[5];
    uVar22 = puVar27[7];
    puVar30 = (undefined8 *)(param_3 + 0x30 + uVar31 * 0x48);
    *puVar30 = puVar27[6];
    puVar30[1] = uVar22;
    puVar30 = (undefined8 *)(param_3 + 0x20 + uVar31 * 0x48);
    *puVar30 = uVar20;
    puVar30[1] = uVar21;
    puVar30 = (undefined8 *)(param_3 + 0x10 + uVar31 * 0x48);
    *puVar30 = uVar18;
    puVar30[1] = uVar19;
    puVar1 = (undefined4 *)(param_3 + uVar31 * 0x48);
    *puVar1 = uVar39;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar31 = uVar31 + 1;
    puVar27 = puVar27 + 9;
    uVar37 = uVar38;
  }
  (*(code *)PTR_memcpy_00799008)(lVar29,uVar31 * 0x48);
  param_2 = uVar38 - uVar31;
  if (param_2 == 0) {
    param_1 = param_1 + uVar38 * 9;
    param_2 = 0;
    goto LAB_003f04e7;
  }
  param_1 = param_1 + uVar31 * 9;
  lVar29 = param_3 + uVar38 * 0x48;
  if (uVar38 == uVar31 + 1) {
    uVar35 = 0;
  }
  else {
    puVar27 = (undefined8 *)(param_3 + -0x48 + uVar38 * 0x48);
    puVar30 = param_1;
    uVar37 = 0;
    do {
      puVar30[8] = puVar27[8];
      uVar18 = *puVar27;
      uVar19 = puVar27[1];
      uVar20 = puVar27[2];
      uVar21 = puVar27[3];
      uVar22 = puVar27[4];
      uVar23 = puVar27[5];
      uVar24 = puVar27[7];
      puVar30[6] = puVar27[6];
      puVar30[7] = uVar24;
      puVar30[4] = uVar22;
      puVar30[5] = uVar23;
      puVar30[2] = uVar20;
      puVar30[3] = uVar21;
      *puVar30 = uVar18;
      puVar30[1] = uVar19;
      uVar35 = uVar37 + 2;
      uVar37 = uVar37 ^ 0x1ffffffffffffffe;
      puVar1 = (undefined4 *)(lVar29 + uVar37 * 0x48);
      uVar39 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar26 = (undefined8 *)(lVar29 + 0x10 + uVar37 * 0x48);
      uVar18 = *puVar26;
      uVar19 = puVar26[1];
      puVar26 = (undefined8 *)(lVar29 + 0x20 + uVar37 * 0x48);
      uVar20 = *puVar26;
      uVar21 = puVar26[1];
      puVar26 = (undefined8 *)(lVar29 + 0x30 + uVar37 * 0x48);
      uVar22 = *puVar26;
      uVar23 = puVar26[1];
      *(undefined4 *)(puVar30 + 9) = *puVar1;
      *(undefined4 *)((longlong)puVar30 + 0x4c) = uVar39;
      *(undefined4 *)(puVar30 + 10) = uVar4;
      *(undefined4 *)((longlong)puVar30 + 0x54) = uVar5;
      puVar30[0xb] = uVar18;
      puVar30[0xc] = uVar19;
      puVar30[0xd] = uVar20;
      puVar30[0xe] = uVar21;
      puVar30[0xf] = uVar22;
      puVar30[0x10] = uVar23;
      puVar30[0x11] = *(undefined8 *)(lVar29 + 0x40 + uVar37 * 0x48);
      puVar30 = puVar30 + 0x12;
      puVar27 = puVar27 + -0x12;
      uVar37 = uVar35;
    } while ((param_2 & 0xfffffffffffffffe) != uVar35);
    if ((param_2 & 1) == 0) goto LAB_003f0b1f;
  }
  uVar37 = ~uVar35;
  param_1[uVar35 * 9 + 8] = *(undefined8 *)(lVar29 + 0x40 + uVar37 * 0x48);
  puVar1 = (undefined4 *)(lVar29 + uVar37 * 0x48);
  uVar39 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar27 = (undefined8 *)(lVar29 + 0x10 + uVar37 * 0x48);
  uVar18 = *puVar27;
  uVar19 = puVar27[1];
  puVar27 = (undefined8 *)(lVar29 + 0x20 + uVar37 * 0x48);
  uVar20 = *puVar27;
  uVar21 = puVar27[1];
  puVar27 = (undefined8 *)(lVar29 + 0x30 + uVar37 * 0x48);
  uVar22 = puVar27[1];
  param_1[uVar35 * 9 + 6] = *puVar27;
  (param_1 + uVar35 * 9 + 6)[1] = uVar22;
  param_1[uVar35 * 9 + 4] = uVar20;
  (param_1 + uVar35 * 9 + 4)[1] = uVar21;
  param_1[uVar35 * 9 + 2] = uVar18;
  (param_1 + uVar35 * 9 + 2)[1] = uVar19;
  puVar27 = param_1 + uVar35 * 9;
  *(undefined4 *)puVar27 = uVar39;
  *(undefined4 *)((longlong)puVar27 + 4) = uVar4;
  *(undefined4 *)(puVar27 + 1) = uVar5;
  *(undefined4 *)((longlong)puVar27 + 0xc) = uVar6;
LAB_003f0b1f:
  if (uVar38 < uVar31) {
LAB_003f0b9d:
    (*(code *)PTR_slice_index_fail_007993c8)
              (&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020,uVar38);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_88 = 0;
  if (param_2 < 0x21) goto LAB_003f04e7;
  goto LAB_003f050a;
}


