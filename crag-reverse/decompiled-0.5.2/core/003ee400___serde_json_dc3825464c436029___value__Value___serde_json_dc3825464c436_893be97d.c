// 003ee400 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
          (undefined **param_1,undefined **param_2,undefined **param_3,undefined **param_4,
          ulonglong param_5,longlong param_6,ulonglong param_7)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  ulonglong uVar27;
  undefined **ppuVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined **ppuVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 uVar34;
  undefined4 extraout_XMM0_Da_12;
  undefined **ppuStack_148;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined **local_a8;
  uint local_9c;
  undefined **local_98;
  undefined **local_90;
  undefined **local_88;
  longlong local_80;
  undefined **local_78;
  undefined **local_70;
  undefined **local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = param_6;
  if (param_2 <= &DAT_00000020) {
LAB_003eec6a:
    pcStack_d0 = (code *)0x3eec80;
    shared::smallsort::small_sort_general_with_scratch::
    <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  uVar17 = param_5 & 0xffffffff;
  local_78 = param_3 + -4;
  local_98 = param_3;
  local_70 = param_4;
LAB_003ee447:
  local_68 = param_1 + 4;
  param_4 = local_70;
  local_b0 = param_1;
  local_a8 = param_2;
  do {
    ppuVar28 = local_b0;
    if ((int)uVar17 == 0) {
      pcStack_d0 = (code *)0x3eec63;
      drift::sort::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                (local_b0,local_a8,param_3,param_4,1,param_7);
      return;
    }
    uVar14 = (ulonglong)local_a8 >> 3;
    ppuVar21 = local_b0 + uVar14 * 0x10;
    ppuVar15 = local_b0 + uVar14 * 0x1c;
    if (&DAT_0000003f < local_a8) {
      pcStack_d0 = (code *)0x3ee4f6;
      param_5 = param_7;
      ppuVar31 = (undefined **)
                 shared::pivot::median3_rec::
                 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                           (local_b0,ppuVar21,ppuVar15);
    }
    else {
      pcStack_d0 = (code *)0x3ee4b1;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar14,ppuVar21);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if (*pcVar10 == '\x02') {
        if (*(longlong *)(pcVar10 + 8) == 0) {
          local_b8 = *(undefined ***)(pcVar10 + 0x10);
        }
        else {
          local_b8 = (undefined **)0x0;
        }
      }
      else {
        local_b8 = (undefined **)0x0;
      }
      pcStack_d0 = (code *)0x3ee545;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,local_b0);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        local_b8 = (undefined **)
                   CONCAT44(local_b8._4_4_,
                            (int)CONCAT71((int7)((ulonglong)pcVar10 >> 8),
                                          local_b8 < *(ulonglong *)(pcVar10 + 0x10)));
      }
      else {
        local_b8 = (undefined **)((ulonglong)local_b8._4_4_ << 0x20);
      }
      pcStack_d0 = (code *)0x3ee581;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,ppuVar15);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar14 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar14 = 0;
      }
      pcStack_d0 = (code *)0x3ee5b7;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,local_b0);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      ppuVar28 = local_b0;
      ppuVar31 = local_b0;
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        if (uVar14 < *(ulonglong *)(pcVar10 + 0x10) == (bool)(char)local_b8) goto LAB_003ee5e6;
      }
      else if ((char)local_b8 == '\0') {
LAB_003ee5e6:
        pcStack_d0 = (code *)0x3ee5fb;
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(local_b0,ppuVar15);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar14 = *(ulonglong *)(pcVar10 + 0x10);
        }
        else {
          uVar14 = 0;
        }
        pcStack_d0 = (code *)0x3ee62f;
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_02,ppuVar21);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          local_b8 = (undefined **)
                     CONCAT44(local_b8._4_4_,
                              CONCAT31((int3)((ulonglong)local_b8 >> 8),
                                       (byte)local_b8 ^ uVar14 < *(ulonglong *)(pcVar10 + 0x10)));
        }
        if ((char)local_b8 != '\0') {
          ppuVar21 = ppuVar15;
        }
        ppuVar28 = local_b0;
        ppuVar31 = ppuVar21;
      }
    }
    local_9c = (int)uVar17 - 1;
    local_88 = (undefined **)((ulonglong)((longlong)ppuVar31 - (longlong)ppuVar28) >> 5);
    local_58 = *(undefined4 *)ppuVar31;
    uStack_54 = *(undefined4 *)((longlong)ppuVar31 + 4);
    uStack_50 = *(undefined4 *)(ppuVar31 + 1);
    uStack_4c = *(undefined4 *)((longlong)ppuVar31 + 0xc);
    local_48 = *(undefined4 *)(ppuVar31 + 2);
    uStack_44 = *(undefined4 *)((longlong)ppuVar31 + 0x14);
    uStack_40 = *(undefined4 *)(ppuVar31 + 3);
    uStack_3c = *(undefined4 *)((longlong)ppuVar31 + 0x1c);
    if (local_80 != 0) {
      pcStack_d0 = (code *)0x3ee6b4;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(local_58,ppuVar31);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar17 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar17 = 0;
      }
      pcStack_d0 = (code *)0x3ee6e9;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_03,local_80);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 != '\x02') || (*(longlong *)(pcVar10 + 8) != 0)) break;
      ppuVar28 = local_b0;
      if (*(ulonglong *)(pcVar10 + 0x10) <= uVar17) break;
    }
    if (param_4 < local_a8) goto LAB_003eeca2;
    local_60 = (longlong)local_a8 * 0x20;
    ppuVar21 = param_3 + (longlong)local_a8 * 4;
    param_2 = (undefined **)0x0;
    ppuVar15 = ppuVar28;
    local_b8 = local_88;
    local_90 = ppuVar21;
    while( true ) {
      ppuVar16 = ppuVar15 + (longlong)local_b8 * 4;
      while( true ) {
        param_3 = local_98;
        ppuVar25 = local_a8;
        if (ppuVar16 <= ppuVar28) break;
        pcStack_d0 = (code *)0x3ee7a7;
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(ppuVar15,ppuVar31);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar17 = *(ulonglong *)(pcVar10 + 0x10);
        }
        else {
          uVar17 = 0;
        }
        pcStack_d0 = (code *)0x3ee7d7;
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,ppuVar28);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar14 = (ulonglong)(uVar17 < *(ulonglong *)(pcVar10 + 0x10));
          ppuVar25 = ppuVar21 + -4;
          if (uVar17 < *(ulonglong *)(pcVar10 + 0x10)) {
            ppuVar25 = local_98;
          }
        }
        else {
          uVar14 = 0;
          ppuVar25 = ppuVar21 + -4;
        }
        ppuVar21 = ppuVar21 + -4;
        ppuVar15 = (undefined **)(uVar14 + (longlong)param_2);
        uVar34 = *(undefined4 *)ppuVar28;
        uVar5 = *(undefined4 *)((longlong)ppuVar28 + 4);
        uVar6 = *(undefined4 *)(ppuVar28 + 1);
        uVar7 = *(undefined4 *)((longlong)ppuVar28 + 0xc);
        puVar32 = ppuVar28[3];
        ppuVar25[(longlong)param_2 * 4 + 2] = ppuVar28[2];
        (ppuVar25 + (longlong)param_2 * 4 + 2)[1] = puVar32;
        ppuVar25 = ppuVar25 + (longlong)param_2 * 4;
        *(undefined4 *)ppuVar25 = uVar34;
        *(undefined4 *)((longlong)ppuVar25 + 4) = uVar5;
        *(undefined4 *)(ppuVar25 + 1) = uVar6;
        *(undefined4 *)((longlong)ppuVar25 + 0xc) = uVar7;
        ppuVar28 = ppuVar28 + 4;
        param_2 = ppuVar15;
      }
      if (local_b8 == local_a8) break;
      uVar34 = *(undefined4 *)ppuVar28;
      uVar5 = *(undefined4 *)((longlong)ppuVar28 + 4);
      uVar6 = *(undefined4 *)(ppuVar28 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar28 + 0xc);
      puVar32 = ppuVar28[3];
      ppuVar21[(longlong)param_2 * 4 + -2] = ppuVar28[2];
      (ppuVar21 + (longlong)param_2 * 4 + -2)[1] = puVar32;
      ppuVar15 = ppuVar21 + (longlong)param_2 * 4 + -4;
      *(undefined4 *)ppuVar15 = uVar34;
      *(undefined4 *)((longlong)ppuVar15 + 4) = uVar5;
      *(undefined4 *)(ppuVar15 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar15 + 0xc) = uVar7;
      ppuVar21 = ppuVar21 + -4;
      ppuVar28 = ppuVar28 + 4;
      ppuVar15 = local_b0;
      local_b8 = local_a8;
    }
    ppuVar28 = (undefined **)((longlong)param_2 * 0x20);
    pcStack_d0 = (code *)0x3ee87d;
    (*(code *)PTR_memcpy_00799008)(ppuVar15,ppuVar28);
    param_4 = local_70;
    uVar14 = (longlong)ppuVar25 - (longlong)param_2;
    uVar17 = (ulonglong)local_9c;
    if (uVar14 != 0) {
      if (local_a8 == (undefined **)((longlong)param_2 + 1)) {
        uVar11 = 0;
      }
      else {
        ppuVar21 = local_68 + (longlong)param_2 * 4;
        puVar30 = (undefined8 *)(local_60 + (longlong)local_78);
        param_5 = 0x7fffffffffffffe;
        uVar27 = 0;
        do {
          puVar32 = (undefined *)*puVar30;
          puVar3 = (undefined *)puVar30[1];
          puVar24 = (undefined *)puVar30[3];
          ppuVar21[-2] = (undefined *)puVar30[2];
          ppuVar21[-1] = puVar24;
          ppuVar21[-4] = puVar32;
          ppuVar21[-3] = puVar3;
          uVar11 = uVar27 + 2;
          ppuVar15 = local_90 + (uVar27 ^ 0x7fffffffffffffe) * 4;
          uVar34 = *(undefined4 *)((longlong)ppuVar15 + 4);
          uVar5 = *(undefined4 *)(ppuVar15 + 1);
          uVar6 = *(undefined4 *)((longlong)ppuVar15 + 0xc);
          puVar32 = local_90[(uVar27 ^ 0x7fffffffffffffe) * 4 + 2];
          puVar3 = (local_90 + (uVar27 ^ 0x7fffffffffffffe) * 4 + 2)[1];
          *(undefined4 *)ppuVar21 = *(undefined4 *)ppuVar15;
          *(undefined4 *)((longlong)ppuVar21 + 4) = uVar34;
          *(undefined4 *)(ppuVar21 + 1) = uVar5;
          *(undefined4 *)((longlong)ppuVar21 + 0xc) = uVar6;
          ppuVar21[2] = puVar32;
          ppuVar21[3] = puVar3;
          ppuVar21 = ppuVar21 + 8;
          puVar30 = puVar30 + -8;
          uVar27 = uVar11;
        } while ((uVar14 & 0xfffffffffffffffe) != uVar11);
        if ((uVar14 & 1) == 0) goto LAB_003ee94e;
      }
      ppuVar15 = local_b0 + (longlong)param_2 * 4;
      ppuVar21 = local_90 + ~uVar11 * 4;
      uVar34 = *(undefined4 *)ppuVar21;
      uVar5 = *(undefined4 *)((longlong)ppuVar21 + 4);
      uVar6 = *(undefined4 *)(ppuVar21 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar21 + 0xc);
      puVar32 = (local_90 + ~uVar11 * 4 + 2)[1];
      ppuVar15[uVar11 * 4 + 2] = local_90[~uVar11 * 4 + 2];
      (ppuVar15 + uVar11 * 4 + 2)[1] = puVar32;
      ppuVar15 = ppuVar15 + uVar11 * 4;
      *(undefined4 *)ppuVar15 = uVar34;
      *(undefined4 *)((longlong)ppuVar15 + 4) = uVar5;
      *(undefined4 *)(ppuVar15 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar15 + 0xc) = uVar7;
    }
LAB_003ee94e:
    if (param_2 == (undefined **)0x0) break;
    if (local_a8 < param_2) {
      ppuVar21 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00788008;
      pcStack_d0 = (code *)0x3eecbd;
      ppuStack_148 = local_90;
      (*(code *)PTR_panic_fmt_007991a8)();
      ppuStack_d8 = param_4;
      goto LAB_003eecbd;
    }
    local_c8 = param_7;
    param_5 = (ulonglong)local_9c;
    pcStack_d0 = (code *)0x3ee98c;
    <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
              ((undefined **)((longlong)ppuVar28 + (longlong)local_b0),uVar14,param_3,local_70,
               param_5,&local_58);
    local_a8 = param_2;
    if (param_2 < &DAT_00000021) {
      param_1 = local_b0;
      goto LAB_003eec6a;
    }
  } while( true );
  if (param_4 < local_a8) {
LAB_003eeca2:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_90 = (undefined **)((longlong)local_a8 * 0x20);
  ppuVar21 = param_3 + (longlong)local_a8 * 4;
  ppuVar28 = (undefined **)0x0;
  ppuVar15 = local_b0;
  local_b8 = ppuVar21;
  while( true ) {
    ppuVar25 = local_b0 + (longlong)local_88 * 4;
    ppuVar16 = local_b0;
    while( true ) {
      param_3 = local_98;
      ppuVar1 = local_a8;
      ppuVar12 = local_b0;
      if (ppuVar25 <= ppuVar15) break;
      pcStack_d0 = (code *)0x3eea7d;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(ppuVar16,ppuVar15);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar17 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar17 = 0;
      }
      pcStack_d0 = (code *)0x3eeaad;
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_05,ppuVar31);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar14 = (ulonglong)(*(ulonglong *)(pcVar10 + 0x10) <= uVar17);
        ppuVar12 = ppuVar21 + -4;
        if (*(ulonglong *)(pcVar10 + 0x10) <= uVar17) {
          ppuVar12 = local_98;
        }
      }
      else {
        uVar14 = 1;
        ppuVar12 = local_98;
      }
      ppuVar21 = ppuVar21 + -4;
      ppuVar16 = (undefined **)(uVar14 + (longlong)ppuVar28);
      uVar34 = *(undefined4 *)ppuVar15;
      uVar5 = *(undefined4 *)((longlong)ppuVar15 + 4);
      uVar6 = *(undefined4 *)(ppuVar15 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar15 + 0xc);
      puVar32 = ppuVar15[3];
      ppuVar12[(longlong)ppuVar28 * 4 + 2] = ppuVar15[2];
      (ppuVar12 + (longlong)ppuVar28 * 4 + 2)[1] = puVar32;
      ppuVar12 = ppuVar12 + (longlong)ppuVar28 * 4;
      *(undefined4 *)ppuVar12 = uVar34;
      *(undefined4 *)((longlong)ppuVar12 + 4) = uVar5;
      *(undefined4 *)(ppuVar12 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar12 + 0xc) = uVar7;
      ppuVar15 = ppuVar15 + 4;
      ppuVar28 = ppuVar16;
    }
    if (local_88 == local_a8) break;
    ppuVar21 = ppuVar21 + -4;
    uVar34 = *(undefined4 *)ppuVar15;
    uVar5 = *(undefined4 *)((longlong)ppuVar15 + 4);
    uVar6 = *(undefined4 *)(ppuVar15 + 1);
    uVar7 = *(undefined4 *)((longlong)ppuVar15 + 0xc);
    puVar32 = ppuVar15[3];
    local_98[(longlong)ppuVar28 * 4 + 2] = ppuVar15[2];
    (local_98 + (longlong)ppuVar28 * 4 + 2)[1] = puVar32;
    ppuVar16 = local_98 + (longlong)ppuVar28 * 4;
    *(undefined4 *)ppuVar16 = uVar34;
    *(undefined4 *)((longlong)ppuVar16 + 4) = uVar5;
    *(undefined4 *)(ppuVar16 + 1) = uVar6;
    *(undefined4 *)((longlong)ppuVar16 + 0xc) = uVar7;
    ppuVar28 = (undefined **)((longlong)ppuVar28 + 1);
    ppuVar15 = ppuVar15 + 4;
    local_88 = local_a8;
  }
  ppuVar31 = (undefined **)((longlong)ppuVar28 * 0x20);
  pcStack_d0 = (code *)0x3eeb50;
  (*(code *)PTR_memcpy_00799008)(ppuVar16,ppuVar31);
  param_2 = (undefined **)((longlong)ppuVar1 - (longlong)ppuVar28);
  param_4 = local_70;
  if (param_2 == (undefined **)0x0) {
    param_1 = (undefined **)((longlong)ppuVar12 + (longlong)local_90);
    param_2 = (undefined **)0x0;
    goto LAB_003eec6a;
  }
  param_1 = ppuVar12 + (longlong)ppuVar28 * 4;
  if (ppuVar1 == (undefined **)((longlong)ppuVar28 + 1)) {
    uVar14 = 0;
  }
  else {
    ppuVar21 = ppuVar12 + (longlong)ppuVar28 * 4 + 4;
    puVar30 = (undefined8 *)((longlong)local_90 + (longlong)local_78);
    param_5 = 0x7fffffffffffffe;
    uVar17 = 0;
    do {
      puVar32 = (undefined *)*puVar30;
      puVar3 = (undefined *)puVar30[1];
      puVar24 = (undefined *)puVar30[3];
      ppuVar21[-2] = (undefined *)puVar30[2];
      ppuVar21[-1] = puVar24;
      ppuVar21[-4] = puVar32;
      ppuVar21[-3] = puVar3;
      uVar14 = uVar17 + 2;
      ppuVar15 = local_b8 + (uVar17 ^ 0x7fffffffffffffe) * 4;
      uVar34 = *(undefined4 *)((longlong)ppuVar15 + 4);
      uVar5 = *(undefined4 *)(ppuVar15 + 1);
      uVar6 = *(undefined4 *)((longlong)ppuVar15 + 0xc);
      puVar32 = local_b8[(uVar17 ^ 0x7fffffffffffffe) * 4 + 2];
      puVar3 = (local_b8 + (uVar17 ^ 0x7fffffffffffffe) * 4 + 2)[1];
      *(undefined4 *)ppuVar21 = *(undefined4 *)ppuVar15;
      *(undefined4 *)((longlong)ppuVar21 + 4) = uVar34;
      *(undefined4 *)(ppuVar21 + 1) = uVar5;
      *(undefined4 *)((longlong)ppuVar21 + 0xc) = uVar6;
      ppuVar21[2] = puVar32;
      ppuVar21[3] = puVar3;
      ppuVar21 = ppuVar21 + 8;
      puVar30 = puVar30 + -8;
      uVar17 = uVar14;
    } while (((ulonglong)param_2 & 0xfffffffffffffffe) != uVar14);
    if (((ulonglong)param_2 & 1) == 0) goto LAB_003eec19;
  }
  ppuVar21 = local_b8 + ~uVar14 * 4;
  uVar34 = *(undefined4 *)ppuVar21;
  uVar5 = *(undefined4 *)((longlong)ppuVar21 + 4);
  uVar6 = *(undefined4 *)(ppuVar21 + 1);
  uVar7 = *(undefined4 *)((longlong)ppuVar21 + 0xc);
  puVar32 = (local_b8 + ~uVar14 * 4 + 2)[1];
  param_1[uVar14 * 4 + 2] = local_b8[~uVar14 * 4 + 2];
  (param_1 + uVar14 * 4 + 2)[1] = puVar32;
  ppuVar21 = param_1 + uVar14 * 4;
  *(undefined4 *)ppuVar21 = uVar34;
  *(undefined4 *)((longlong)ppuVar21 + 4) = uVar5;
  *(undefined4 *)(ppuVar21 + 1) = uVar6;
  *(undefined4 *)((longlong)ppuVar21 + 0xc) = uVar7;
LAB_003eec19:
  uVar17 = (ulonglong)local_9c;
  ppuVar21 = local_a8;
  ppuStack_148 = local_70;
  ppuStack_d8 = local_70;
  if (local_a8 < ppuVar28) {
LAB_003eecbd:
    ppuVar16 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00788020;
    pcStack_d0 = 
    <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
    ;
    ppuVar15 = ppuVar21;
    (*(code *)PTR_slice_index_fail_007993c8)();
    ppuStack_f8 = ppuVar28;
    ppuStack_f0 = param_3;
    ppuStack_e8 = param_2;
    ppuStack_e0 = ppuVar31;
    pcStack_d0 = (code *)uVar17;
    if (ppuVar21 < &DAT_00000021) goto LAB_003eecfa;
    param_5 = param_5 & 0xffffffff;
    goto LAB_003eed2b;
  }
  local_80 = 0;
  if (param_2 < &DAT_00000021) goto LAB_003eec6a;
  goto LAB_003ee447;
LAB_003eed2b:
  ppuVar31 = ppuVar21;
  do {
    puVar32 = PTR_memcmp_00799528;
    if ((int)param_5 == 0) {
      drift::sort::
      <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (ppuVar28,ppuVar31,ppuVar15,ppuVar16,1,uStack_c0);
      return;
    }
    uVar17 = (ulonglong)ppuVar31 >> 3;
    ppuVar21 = ppuVar28 + uVar17 * 0x18;
    ppuVar25 = ppuVar28 + uVar17 * 0x2a;
    if (&DAT_0000003f < ppuVar31) {
      ppuVar12 = (undefined **)
                 shared::pivot::median3_rec::
                 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                           (ppuVar28,ppuVar21,ppuVar25,uVar17,uStack_c0);
    }
    else {
      puVar3 = ppuVar28[2];
      puVar24 = ppuVar21[2];
      puVar26 = puVar24;
      if (puVar3 < puVar24) {
        puVar26 = puVar3;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(uVar17,puVar26);
      uVar17 = (longlong)puVar3 - (longlong)puVar24;
      if (iVar8 != 0) {
        uVar17 = (longlong)iVar8;
      }
      uVar34 = extraout_XMM0_Da_06;
      if (uVar17 == 0) {
        puVar26 = ppuVar28[5];
        puVar23 = ppuVar21[5];
        puVar22 = puVar23;
        if (puVar26 < puVar23) {
          puVar22 = puVar26;
        }
        iVar8 = (*(code *)puVar32)(extraout_XMM0_Da_06,puVar22);
        uVar17 = (longlong)puVar26 - (longlong)puVar23;
        uVar34 = extraout_XMM0_Da_07;
        if (iVar8 != 0) {
          uVar17 = (longlong)iVar8;
        }
      }
      puVar26 = ppuVar25[2];
      puVar23 = puVar3;
      if (puVar26 <= puVar3) {
        puVar23 = puVar26;
      }
      iVar8 = (*(code *)puVar32)(uVar34,puVar23);
      uVar14 = (longlong)puVar3 - (longlong)puVar26;
      if (iVar8 != 0) {
        uVar14 = (longlong)iVar8;
      }
      uVar34 = extraout_XMM0_Da_08;
      if (uVar14 == 0) {
        puVar32 = ppuVar28[5];
        puVar3 = ppuVar25[5];
        puVar23 = puVar3;
        if (puVar32 < puVar3) {
          puVar23 = puVar32;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(ppuVar25,puVar23);
        uVar14 = (longlong)puVar32 - (longlong)puVar3;
        uVar34 = extraout_XMM0_Da_09;
        if (iVar8 != 0) {
          uVar14 = (longlong)iVar8;
        }
      }
      ppuVar12 = ppuVar28;
      if (-1 < (longlong)(uVar14 ^ uVar17)) {
        puVar32 = puVar26;
        if (puVar24 < puVar26) {
          puVar32 = puVar24;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(uVar34,puVar32);
        uVar14 = (longlong)puVar24 - (longlong)puVar26;
        if (iVar8 != 0) {
          uVar14 = (longlong)iVar8;
        }
        if (uVar14 == 0) {
          puVar32 = ppuVar21[5];
          puVar3 = ppuVar25[5];
          puVar24 = puVar3;
          if (puVar32 < puVar3) {
            puVar24 = puVar32;
          }
          iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_10,puVar24);
          uVar14 = (longlong)puVar32 - (longlong)puVar3;
          if (iVar8 != 0) {
            uVar14 = (longlong)iVar8;
          }
        }
        ppuVar12 = ppuVar21;
        if ((longlong)(uVar14 ^ uVar17) < 0) {
          ppuVar12 = ppuVar25;
        }
      }
    }
    puVar32 = PTR_memcmp_00799528;
    uVar2 = (int)param_5 - 1;
    ppuVar25 = (undefined **)
               (((ulonglong)((longlong)ppuVar12 - (longlong)ppuVar28) >> 4) * -0x5555555555555555);
    uStack_130 = *(undefined4 *)ppuVar12;
    uStack_12c = *(undefined4 *)((longlong)ppuVar12 + 4);
    uStack_128 = *(undefined4 *)(ppuVar12 + 1);
    uStack_124 = *(undefined4 *)((longlong)ppuVar12 + 0xc);
    uStack_120 = *(undefined4 *)(ppuVar12 + 2);
    uStack_11c = *(undefined4 *)((longlong)ppuVar12 + 0x14);
    uStack_118 = *(undefined4 *)(ppuVar12 + 3);
    uStack_114 = *(undefined4 *)((longlong)ppuVar12 + 0x1c);
    uStack_110 = *(undefined4 *)(ppuVar12 + 4);
    uStack_10c = *(undefined4 *)((longlong)ppuVar12 + 0x24);
    uStack_108 = *(undefined4 *)(ppuVar12 + 5);
    uStack_104 = *(undefined4 *)((longlong)ppuVar12 + 0x2c);
    if (ppuStack_148 != (undefined **)0x0) {
      puVar3 = ppuStack_148[2];
      puVar24 = ppuVar12[2];
      puVar26 = puVar24;
      if (puVar3 < puVar24) {
        puVar26 = puVar3;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(0xaaaaaaaaaaaaaaab,puVar26);
      lVar29 = (longlong)puVar3 - (longlong)puVar24;
      if (iVar8 != 0) {
        lVar29 = (longlong)iVar8;
      }
      uVar9 = (uint)((ulonglong)lVar29 >> 0x3f);
      if (lVar29 == 0) {
        uVar9 = 2;
      }
      if ((char)uVar9 == '\x02') {
        puVar3 = ppuStack_148[5];
        puVar24 = ppuVar12[5];
        puVar26 = puVar24;
        if (puVar3 < puVar24) {
          puVar26 = puVar3;
        }
        iVar8 = (*(code *)puVar32)(2,puVar26);
        lVar29 = (longlong)puVar3 - (longlong)puVar24;
        if (iVar8 != 0) {
          lVar29 = (longlong)iVar8;
        }
        if (-1 < lVar29) break;
      }
      else if (uVar9 == 0) break;
    }
    if (ppuVar16 < ppuVar31) goto LAB_003ef55e;
    ppuVar1 = ppuVar15 + (longlong)ppuVar31 * 6;
    ppuVar21 = (undefined **)0x0;
    ppuVar18 = ppuVar25;
    ppuVar33 = ppuVar1;
    ppuVar20 = ppuVar28;
    while( true ) {
      ppuVar19 = ppuVar18;
      for (; ppuVar20 < ppuVar28 + (longlong)ppuVar18 * 6; ppuVar20 = ppuVar20 + 6) {
        puVar32 = ppuVar20[2];
        puVar3 = ppuVar12[2];
        puVar24 = puVar3;
        if (puVar32 < puVar3) {
          puVar24 = puVar32;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(ppuVar19,puVar24);
        lVar29 = (longlong)puVar32 - (longlong)puVar3;
        if (iVar8 != 0) {
          lVar29 = (longlong)iVar8;
        }
        if (lVar29 == 0) {
          puVar32 = ppuVar20[5];
          puVar3 = ppuVar12[5];
          puVar24 = puVar3;
          if (puVar32 < puVar3) {
            puVar24 = puVar32;
          }
          iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_11,puVar24);
          lVar29 = (longlong)puVar32 - (longlong)puVar3;
          if (iVar8 != 0) {
            lVar29 = (longlong)iVar8;
          }
        }
        ppuVar33 = ppuVar33 + -6;
        ppuVar13 = ppuVar33;
        if (lVar29 < 0) {
          ppuVar13 = ppuVar15;
        }
        ppuVar19 = (undefined **)((longlong)ppuVar21 * 0x30);
        uVar34 = *(undefined4 *)ppuVar20;
        uVar5 = *(undefined4 *)((longlong)ppuVar20 + 4);
        uVar6 = *(undefined4 *)(ppuVar20 + 1);
        uVar7 = *(undefined4 *)((longlong)ppuVar20 + 0xc);
        puVar32 = ppuVar20[2];
        puVar3 = ppuVar20[3];
        puVar24 = ppuVar20[5];
        (ppuVar13 + 4)[(longlong)ppuVar21 * 6] = ppuVar20[4];
        (ppuVar13 + 4 + (longlong)ppuVar21 * 6)[1] = puVar24;
        (ppuVar13 + 2)[(longlong)ppuVar21 * 6] = puVar32;
        (ppuVar13 + 2 + (longlong)ppuVar21 * 6)[1] = puVar3;
        ppuVar13 = ppuVar13 + (longlong)ppuVar21 * 6;
        *(undefined4 *)ppuVar13 = uVar34;
        *(undefined4 *)((longlong)ppuVar13 + 4) = uVar5;
        *(undefined4 *)(ppuVar13 + 1) = uVar6;
        *(undefined4 *)((longlong)ppuVar13 + 0xc) = uVar7;
        ppuVar21 = (undefined **)((longlong)ppuVar21 - (lVar29 >> 0x3f));
      }
      if (ppuVar18 == ppuVar31) break;
      uVar34 = *(undefined4 *)ppuVar20;
      uVar5 = *(undefined4 *)((longlong)ppuVar20 + 4);
      uVar6 = *(undefined4 *)(ppuVar20 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar20 + 0xc);
      puVar32 = ppuVar20[2];
      puVar3 = ppuVar20[3];
      puVar24 = ppuVar20[5];
      ppuVar33[(longlong)ppuVar21 * 6 + -2] = ppuVar20[4];
      (ppuVar33 + (longlong)ppuVar21 * 6 + -2)[1] = puVar24;
      ppuVar33[(longlong)ppuVar21 * 6 + -4] = puVar32;
      (ppuVar33 + (longlong)ppuVar21 * 6 + -4)[1] = puVar3;
      ppuVar18 = ppuVar33 + (longlong)ppuVar21 * 6 + -6;
      *(undefined4 *)ppuVar18 = uVar34;
      *(undefined4 *)((longlong)ppuVar18 + 4) = uVar5;
      *(undefined4 *)(ppuVar18 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar18 + 0xc) = uVar7;
      ppuVar33 = ppuVar33 + -6;
      ppuVar20 = ppuVar20 + 6;
      ppuVar18 = ppuVar31;
    }
    uVar34 = (*(code *)PTR_memcpy_00799008)();
    uVar17 = (longlong)ppuVar31 - (longlong)ppuVar21;
    if (uVar17 != 0) {
      ppuVar18 = ppuVar28 + (longlong)ppuVar21 * 6;
      if (ppuVar31 == (undefined **)((longlong)ppuVar21 + 1)) {
        uVar27 = 0;
      }
      else {
        ppuVar20 = ppuVar15 + (longlong)ppuVar31 * 6 + -6;
        uVar14 = 0;
        ppuVar33 = ppuVar18;
        do {
          puVar32 = *ppuVar20;
          puVar3 = ppuVar20[1];
          puVar24 = ppuVar20[2];
          puVar26 = ppuVar20[3];
          puVar23 = ppuVar20[5];
          ppuVar33[4] = ppuVar20[4];
          ppuVar33[5] = puVar23;
          ppuVar33[2] = puVar24;
          ppuVar33[3] = puVar26;
          *ppuVar33 = puVar32;
          ppuVar33[1] = puVar3;
          uVar27 = uVar14 + 2;
          uVar14 = uVar14 ^ 0xffffffffffffffe;
          ppuVar19 = ppuVar1 + uVar14 * 6;
          uVar34 = *(undefined4 *)ppuVar19;
          uVar5 = *(undefined4 *)((longlong)ppuVar19 + 4);
          uVar6 = *(undefined4 *)(ppuVar19 + 1);
          uVar7 = *(undefined4 *)((longlong)ppuVar19 + 0xc);
          puVar32 = ppuVar1[uVar14 * 6 + 2];
          puVar3 = (ppuVar1 + uVar14 * 6 + 2)[1];
          puVar24 = ppuVar1[uVar14 * 6 + 4];
          puVar26 = (ppuVar1 + uVar14 * 6 + 4)[1];
          *(undefined4 *)(ppuVar33 + 6) = uVar34;
          *(undefined4 *)((longlong)ppuVar33 + 0x34) = uVar5;
          *(undefined4 *)(ppuVar33 + 7) = uVar6;
          *(undefined4 *)((longlong)ppuVar33 + 0x3c) = uVar7;
          ppuVar33[8] = puVar32;
          ppuVar33[9] = puVar3;
          ppuVar33[10] = puVar24;
          ppuVar33[0xb] = puVar26;
          ppuVar33 = ppuVar33 + 0xc;
          ppuVar20 = ppuVar20 + -0xc;
          uVar14 = uVar27;
        } while ((uVar17 & 0xfffffffffffffffe) != uVar27);
        if ((uVar17 & 1) == 0) goto LAB_003ef23d;
      }
      uVar14 = ~uVar27;
      ppuVar33 = ppuVar1 + uVar14 * 6;
      uVar34 = *(undefined4 *)ppuVar33;
      uVar5 = *(undefined4 *)((longlong)ppuVar33 + 4);
      uVar6 = *(undefined4 *)(ppuVar33 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar33 + 0xc);
      puVar32 = ppuVar1[uVar14 * 6 + 2];
      puVar3 = (ppuVar1 + uVar14 * 6 + 2)[1];
      puVar24 = (ppuVar1 + uVar14 * 6 + 4)[1];
      ppuVar18[uVar27 * 6 + 4] = ppuVar1[uVar14 * 6 + 4];
      (ppuVar18 + uVar27 * 6 + 4)[1] = puVar24;
      ppuVar18[uVar27 * 6 + 2] = puVar32;
      (ppuVar18 + uVar27 * 6 + 2)[1] = puVar3;
      ppuVar18 = ppuVar18 + uVar27 * 6;
      *(undefined4 *)ppuVar18 = uVar34;
      *(undefined4 *)((longlong)ppuVar18 + 4) = uVar5;
      *(undefined4 *)(ppuVar18 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar18 + 0xc) = uVar7;
    }
LAB_003ef23d:
    if (ppuVar21 == (undefined **)0x0) break;
    if (ppuVar31 < ppuVar21) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar34,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003ef579;
    }
    param_5 = (ulonglong)uVar2;
    <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (ppuVar28 + (longlong)ppuVar21 * 6,uVar17,ppuVar15,ppuVar16,uVar2,&uStack_130,
               uStack_c0);
    ppuVar31 = ppuVar21;
    if (ppuVar21 < &DAT_00000021) goto LAB_003eecfa;
  } while( true );
  if (ppuVar16 < ppuVar31) {
LAB_003ef55e:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  ppuVar1 = ppuVar15 + (longlong)ppuVar31 * 6;
  ppuVar33 = (undefined **)0x0;
  ppuVar21 = ppuVar1;
  ppuVar18 = ppuVar28;
  while( true ) {
    ppuVar20 = ppuVar25;
    for (; ppuVar18 < ppuVar28 + (longlong)ppuVar25 * 6; ppuVar18 = ppuVar18 + 6) {
      puVar32 = ppuVar12[2];
      puVar3 = ppuVar18[2];
      puVar24 = puVar3;
      if (puVar32 < puVar3) {
        puVar24 = puVar32;
      }
      iVar8 = (*(code *)PTR_memcmp_00799528)(ppuVar20,puVar24);
      lVar29 = (longlong)puVar32 - (longlong)puVar3;
      if (iVar8 != 0) {
        lVar29 = (longlong)iVar8;
      }
      if (lVar29 == 0) {
        puVar32 = ppuVar12[5];
        puVar3 = ppuVar18[5];
        puVar24 = puVar3;
        if (puVar32 < puVar3) {
          puVar24 = puVar32;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_12,puVar24);
        lVar29 = (longlong)puVar32 - (longlong)puVar3;
        if (iVar8 != 0) {
          lVar29 = (longlong)iVar8;
        }
      }
      ppuVar21 = ppuVar21 + -6;
      ppuVar20 = ppuVar21;
      if (-1 < lVar29) {
        ppuVar20 = ppuVar15;
      }
      uVar34 = *(undefined4 *)ppuVar18;
      uVar5 = *(undefined4 *)((longlong)ppuVar18 + 4);
      uVar6 = *(undefined4 *)(ppuVar18 + 1);
      uVar7 = *(undefined4 *)((longlong)ppuVar18 + 0xc);
      puVar32 = ppuVar18[2];
      puVar3 = ppuVar18[3];
      puVar24 = ppuVar18[5];
      ppuVar20[(longlong)ppuVar33 * 6 + 4] = ppuVar18[4];
      (ppuVar20 + (longlong)ppuVar33 * 6 + 4)[1] = puVar24;
      ppuVar20[(longlong)ppuVar33 * 6 + 2] = puVar32;
      (ppuVar20 + (longlong)ppuVar33 * 6 + 2)[1] = puVar3;
      ppuVar19 = ppuVar20 + (longlong)ppuVar33 * 6;
      *(undefined4 *)ppuVar19 = uVar34;
      *(undefined4 *)((longlong)ppuVar19 + 4) = uVar5;
      *(undefined4 *)(ppuVar19 + 1) = uVar6;
      *(undefined4 *)((longlong)ppuVar19 + 0xc) = uVar7;
      ppuVar33 = (undefined **)((longlong)ppuVar33 + (ulonglong)(-1 < lVar29));
    }
    if (ppuVar25 == ppuVar31) break;
    ppuVar21 = ppuVar21 + -6;
    uVar34 = *(undefined4 *)ppuVar18;
    uVar5 = *(undefined4 *)((longlong)ppuVar18 + 4);
    uVar6 = *(undefined4 *)(ppuVar18 + 1);
    uVar7 = *(undefined4 *)((longlong)ppuVar18 + 0xc);
    puVar32 = ppuVar18[2];
    puVar3 = ppuVar18[3];
    puVar24 = ppuVar18[5];
    ppuVar15[(longlong)ppuVar33 * 6 + 4] = ppuVar18[4];
    (ppuVar15 + (longlong)ppuVar33 * 6 + 4)[1] = puVar24;
    ppuVar15[(longlong)ppuVar33 * 6 + 2] = puVar32;
    (ppuVar15 + (longlong)ppuVar33 * 6 + 2)[1] = puVar3;
    ppuVar25 = ppuVar15 + (longlong)ppuVar33 * 6;
    *(undefined4 *)ppuVar25 = uVar34;
    *(undefined4 *)((longlong)ppuVar25 + 4) = uVar5;
    *(undefined4 *)(ppuVar25 + 1) = uVar6;
    *(undefined4 *)((longlong)ppuVar25 + 0xc) = uVar7;
    ppuVar33 = (undefined **)((longlong)ppuVar33 + 1);
    ppuVar18 = ppuVar18 + 6;
    ppuVar25 = ppuVar31;
  }
  (*(code *)PTR_memcpy_00799008)(ppuVar31,(longlong)ppuVar33 * 0x30);
  ppuVar21 = (undefined **)((longlong)ppuVar31 - (longlong)ppuVar33);
  if (ppuVar21 == (undefined **)0x0) {
    ppuVar28 = ppuVar28 + (longlong)ppuVar31 * 6;
    ppuVar21 = (undefined **)0x0;
    goto LAB_003eecfa;
  }
  ppuVar28 = ppuVar28 + (longlong)ppuVar33 * 6;
  if (ppuVar31 == (undefined **)((longlong)ppuVar33 + 1)) {
    uVar14 = 0;
  }
  else {
    ppuVar12 = ppuVar15 + (longlong)ppuVar31 * 6 + -6;
    uVar17 = 0;
    ppuVar25 = ppuVar28;
    do {
      puVar32 = *ppuVar12;
      puVar3 = ppuVar12[1];
      puVar24 = ppuVar12[2];
      puVar26 = ppuVar12[3];
      puVar23 = ppuVar12[5];
      ppuVar25[4] = ppuVar12[4];
      ppuVar25[5] = puVar23;
      ppuVar25[2] = puVar24;
      ppuVar25[3] = puVar26;
      *ppuVar25 = puVar32;
      ppuVar25[1] = puVar3;
      uVar14 = uVar17 + 2;
      uVar17 = uVar17 ^ 0xffffffffffffffe;
      ppuVar18 = ppuVar1 + uVar17 * 6;
      uVar34 = *(undefined4 *)((longlong)ppuVar18 + 4);
      uVar5 = *(undefined4 *)(ppuVar18 + 1);
      uVar6 = *(undefined4 *)((longlong)ppuVar18 + 0xc);
      puVar32 = ppuVar1[uVar17 * 6 + 2];
      puVar3 = (ppuVar1 + uVar17 * 6 + 2)[1];
      puVar24 = ppuVar1[uVar17 * 6 + 4];
      puVar26 = (ppuVar1 + uVar17 * 6 + 4)[1];
      *(undefined4 *)(ppuVar25 + 6) = *(undefined4 *)ppuVar18;
      *(undefined4 *)((longlong)ppuVar25 + 0x34) = uVar34;
      *(undefined4 *)(ppuVar25 + 7) = uVar5;
      *(undefined4 *)((longlong)ppuVar25 + 0x3c) = uVar6;
      ppuVar25[8] = puVar32;
      ppuVar25[9] = puVar3;
      ppuVar25[10] = puVar24;
      ppuVar25[0xb] = puVar26;
      ppuVar25 = ppuVar25 + 0xc;
      ppuVar12 = ppuVar12 + -0xc;
      uVar17 = uVar14;
    } while (((ulonglong)ppuVar21 & 0xfffffffffffffffe) != uVar14);
    if (((ulonglong)ppuVar21 & 1) == 0) goto LAB_003ef503;
  }
  uVar17 = ~uVar14;
  ppuVar25 = ppuVar1 + uVar17 * 6;
  uVar34 = *(undefined4 *)ppuVar25;
  uVar5 = *(undefined4 *)((longlong)ppuVar25 + 4);
  uVar6 = *(undefined4 *)(ppuVar25 + 1);
  uVar7 = *(undefined4 *)((longlong)ppuVar25 + 0xc);
  puVar32 = ppuVar1[uVar17 * 6 + 2];
  puVar3 = (ppuVar1 + uVar17 * 6 + 2)[1];
  puVar24 = (ppuVar1 + uVar17 * 6 + 4)[1];
  ppuVar28[uVar14 * 6 + 4] = ppuVar1[uVar17 * 6 + 4];
  (ppuVar28 + uVar14 * 6 + 4)[1] = puVar24;
  ppuVar28[uVar14 * 6 + 2] = puVar32;
  (ppuVar28 + uVar14 * 6 + 2)[1] = puVar3;
  ppuVar25 = ppuVar28 + uVar14 * 6;
  *(undefined4 *)ppuVar25 = uVar34;
  *(undefined4 *)((longlong)ppuVar25 + 4) = uVar5;
  *(undefined4 *)(ppuVar25 + 1) = uVar6;
  *(undefined4 *)((longlong)ppuVar25 + 0xc) = uVar7;
LAB_003ef503:
  param_5 = (ulonglong)uVar2;
  if (ppuVar31 < ppuVar33) {
LAB_003ef579:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ppuStack_148 = (undefined **)0x0;
  if (ppuVar21 <= &DAT_00000020) {
LAB_003eecfa:
    shared::smallsort::small_sort_general_with_scratch::
    <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
              (ppuVar28,ppuVar21,ppuVar15,ppuVar16,uStack_c0);
    return;
  }
  goto LAB_003eed2b;
}


