// 003edb70 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
          (undefined4 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_06;
  ulonglong local_a8;
  longlong local_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 < 0x21) {
LAB_003edb9b:
    shared::smallsort::small_sort_general_with_scratch::
    <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  puVar18 = param_1;
  local_80 = param_6;
LAB_003edbcd:
  local_a8 = param_2;
  do {
    if (param_5 == 0) {
      drift::sort::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                (puVar18,local_a8,param_3,param_4,1,param_7);
      return;
    }
    uVar15 = local_a8 >> 3;
    puVar17 = puVar18 + uVar15 * 0x20;
    puVar21 = puVar18 + uVar15 * 0x38;
    if (local_a8 < 0x40) {
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar15,puVar18);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar15 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar15 = 0;
      }
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,puVar17);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        bVar14 = uVar15 < *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        bVar14 = false;
      }
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,puVar18);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar15 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar15 = 0;
      }
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,puVar21);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      puVar11 = puVar18;
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        if (uVar15 < *(ulonglong *)(pcVar10 + 0x10) == bVar14) goto LAB_003edcf9;
      }
      else if (bVar14 == false) {
LAB_003edcf9:
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(puVar18,puVar17);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar15 = *(ulonglong *)(pcVar10 + 0x10);
        }
        else {
          uVar15 = 0;
        }
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_02,puVar21);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          bVar14 = (bool)(bVar14 ^ uVar15 < *(ulonglong *)(pcVar10 + 0x10));
        }
        if (bVar14 != false) {
          puVar17 = puVar21;
        }
        puVar11 = puVar17;
      }
    }
    else {
      puVar11 = (undefined4 *)
                shared::pivot::median3_rec::
                <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                          (puVar18,puVar17,puVar21,uVar15,param_7);
    }
    param_5 = param_5 + -1;
    uVar15 = (ulonglong)((longlong)puVar11 - (longlong)puVar18) >> 5;
    uVar23 = *puVar11;
    uStack_54 = puVar11[1];
    uStack_50 = puVar11[2];
    uStack_4c = puVar11[3];
    local_48 = puVar11[4];
    uStack_44 = puVar11[5];
    uStack_40 = puVar11[6];
    uStack_3c = puVar11[7];
    local_58 = uVar23;
    if (local_80 != 0) {
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,local_80);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar19 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar19 = 0;
      }
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_03,puVar11);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      uVar23 = extraout_XMM0_Da_04;
      if (((*pcVar10 != '\x02') || (*(longlong *)(pcVar10 + 8) != 0)) ||
         (*(ulonglong *)(pcVar10 + 0x10) <= uVar19)) break;
    }
    if (param_4 < local_a8) goto LAB_003ee3c5;
    lVar1 = param_3 + local_a8 * 0x20;
    param_2 = 0;
    puVar17 = puVar18;
    uVar19 = uVar15;
    lVar22 = lVar1;
    while( true ) {
      for (; puVar17 < puVar18 + uVar19 * 8; puVar17 = puVar17 + 8) {
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,puVar17);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar13 = *(ulonglong *)(pcVar10 + 0x10);
        }
        else {
          uVar13 = 0;
        }
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_05,puVar11);
        if (pcVar10 == (char *)0x0) {
          pcVar10 = PTR_NULL_00799530;
        }
        if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
          uVar16 = (ulonglong)(uVar13 < *(ulonglong *)(pcVar10 + 0x10));
          lVar12 = lVar22 + -0x20;
          if (uVar13 < *(ulonglong *)(pcVar10 + 0x10)) {
            lVar12 = param_3;
          }
        }
        else {
          uVar16 = 0;
          lVar12 = lVar22 + -0x20;
        }
        lVar22 = lVar22 + -0x20;
        uVar23 = *puVar17;
        uVar4 = puVar17[1];
        uVar5 = puVar17[2];
        uVar6 = puVar17[3];
        uVar7 = *(undefined8 *)(puVar17 + 6);
        puVar20 = (undefined8 *)(lVar12 + 0x10 + param_2 * 0x20);
        *puVar20 = *(undefined8 *)(puVar17 + 4);
        puVar20[1] = uVar7;
        puVar21 = (undefined4 *)(lVar12 + param_2 * 0x20);
        *puVar21 = uVar23;
        puVar21[1] = uVar4;
        puVar21[2] = uVar5;
        puVar21[3] = uVar6;
        param_2 = uVar16 + param_2;
      }
      if (uVar19 == local_a8) break;
      uVar23 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = *(undefined8 *)(puVar17 + 6);
      puVar20 = (undefined8 *)(lVar22 + -0x10 + param_2 * 0x20);
      *puVar20 = *(undefined8 *)(puVar17 + 4);
      puVar20[1] = uVar7;
      puVar21 = (undefined4 *)(lVar22 + -0x20 + param_2 * 0x20);
      *puVar21 = uVar23;
      puVar21[1] = uVar4;
      puVar21[2] = uVar5;
      puVar21[3] = uVar6;
      lVar22 = lVar22 + -0x20;
      puVar17 = puVar17 + 8;
      uVar19 = local_a8;
    }
    uVar23 = (*(code *)PTR_memcpy_00799008)(uVar23,param_2 * 0x20);
    uVar19 = local_a8 - param_2;
    if (uVar19 != 0) {
      if (local_a8 == param_2 + 1) {
        uVar16 = 0;
      }
      else {
        puVar17 = puVar18 + param_2 * 8 + 8;
        puVar20 = (undefined8 *)(local_a8 * 0x20 + param_3 + -0x20);
        uVar13 = 0;
        do {
          uVar7 = *puVar20;
          uVar8 = puVar20[1];
          uVar9 = puVar20[3];
          *(undefined8 *)(puVar17 + -4) = puVar20[2];
          *(undefined8 *)(puVar17 + -2) = uVar9;
          *(undefined8 *)(puVar17 + -8) = uVar7;
          *(undefined8 *)(puVar17 + -6) = uVar8;
          uVar16 = uVar13 + 2;
          lVar22 = (uVar13 ^ 0x7fffffffffffffe) * 0x20;
          puVar21 = (undefined4 *)(lVar1 + lVar22);
          uVar23 = *puVar21;
          uVar4 = puVar21[1];
          uVar5 = puVar21[2];
          uVar6 = puVar21[3];
          puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar22);
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          *puVar17 = uVar23;
          puVar17[1] = uVar4;
          puVar17[2] = uVar5;
          puVar17[3] = uVar6;
          *(undefined8 *)(puVar17 + 4) = uVar7;
          *(undefined8 *)(puVar17 + 6) = uVar8;
          puVar17 = puVar17 + 0x10;
          puVar20 = puVar20 + -8;
          uVar13 = uVar16;
        } while ((uVar19 & 0xfffffffffffffffe) != uVar16);
        if ((uVar19 & 1) == 0) goto LAB_003ee07e;
      }
      puVar17 = (undefined4 *)(lVar1 + ~uVar16 * 0x20);
      uVar23 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      puVar20 = (undefined8 *)(lVar1 + 0x10 + ~uVar16 * 0x20);
      uVar7 = puVar20[1];
      *(undefined8 *)(puVar18 + param_2 * 8 + uVar16 * 8 + 4) = *puVar20;
      *(undefined8 *)((longlong)(puVar18 + param_2 * 8 + uVar16 * 8 + 4) + 8) = uVar7;
      puVar17 = puVar18 + param_2 * 8 + uVar16 * 8;
      *puVar17 = uVar23;
      puVar17[1] = uVar4;
      puVar17[2] = uVar5;
      puVar17[3] = uVar6;
    }
LAB_003ee07e:
    if (param_2 == 0) break;
    if (local_a8 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)(uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008);
      goto LAB_003ee3e0;
    }
    <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
              (puVar18 + param_2 * 8,uVar19,param_3,param_4,param_5,&local_58,param_7);
    param_1 = puVar18;
    local_a8 = param_2;
    if (param_2 < 0x21) goto LAB_003edb9b;
  } while( true );
  if (param_4 < local_a8) {
LAB_003ee3c5:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = param_3 + local_a8 * 0x20;
  uVar19 = 0;
  puVar17 = puVar18;
  lVar22 = lVar1;
  while( true ) {
    for (; puVar17 < puVar18 + uVar15 * 8; puVar17 = puVar17 + 8) {
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar23,puVar11);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar13 = *(ulonglong *)(pcVar10 + 0x10);
      }
      else {
        uVar13 = 0;
      }
      pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,puVar17);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = PTR_NULL_00799530;
      }
      if ((*pcVar10 == '\x02') && (*(longlong *)(pcVar10 + 8) == 0)) {
        uVar16 = (ulonglong)(*(ulonglong *)(pcVar10 + 0x10) <= uVar13);
        lVar12 = lVar22 + -0x20;
        if (*(ulonglong *)(pcVar10 + 0x10) <= uVar13) {
          lVar12 = param_3;
        }
      }
      else {
        uVar16 = 1;
        lVar12 = param_3;
      }
      lVar22 = lVar22 + -0x20;
      uVar23 = *puVar17;
      uVar4 = puVar17[1];
      uVar5 = puVar17[2];
      uVar6 = puVar17[3];
      uVar7 = *(undefined8 *)(puVar17 + 6);
      puVar20 = (undefined8 *)(lVar12 + 0x10 + uVar19 * 0x20);
      *puVar20 = *(undefined8 *)(puVar17 + 4);
      puVar20[1] = uVar7;
      puVar21 = (undefined4 *)(lVar12 + uVar19 * 0x20);
      *puVar21 = uVar23;
      puVar21[1] = uVar4;
      puVar21[2] = uVar5;
      puVar21[3] = uVar6;
      uVar19 = uVar16 + uVar19;
    }
    if (uVar15 == local_a8) break;
    lVar22 = lVar22 + -0x20;
    uVar23 = *puVar17;
    uVar4 = puVar17[1];
    uVar5 = puVar17[2];
    uVar6 = puVar17[3];
    uVar7 = *(undefined8 *)(puVar17 + 6);
    puVar20 = (undefined8 *)(param_3 + 0x10 + uVar19 * 0x20);
    *puVar20 = *(undefined8 *)(puVar17 + 4);
    puVar20[1] = uVar7;
    puVar21 = (undefined4 *)(param_3 + uVar19 * 0x20);
    *puVar21 = uVar23;
    puVar21[1] = uVar4;
    puVar21[2] = uVar5;
    puVar21[3] = uVar6;
    uVar19 = uVar19 + 1;
    puVar17 = puVar17 + 8;
    uVar15 = local_a8;
  }
  (*(code *)PTR_memcpy_00799008)(uVar23,uVar19 * 0x20);
  param_2 = local_a8 - uVar19;
  if (param_2 == 0) {
    param_1 = puVar18 + local_a8 * 8;
    param_2 = 0;
    goto LAB_003edb9b;
  }
  param_1 = puVar18 + uVar19 * 8;
  if (local_a8 == uVar19 + 1) {
    uVar13 = 0;
  }
  else {
    puVar18 = puVar18 + uVar19 * 8 + 8;
    puVar20 = (undefined8 *)(local_a8 * 0x20 + param_3 + -0x20);
    uVar15 = 0;
    do {
      uVar7 = *puVar20;
      uVar8 = puVar20[1];
      uVar9 = puVar20[3];
      *(undefined8 *)(puVar18 + -4) = puVar20[2];
      *(undefined8 *)(puVar18 + -2) = uVar9;
      *(undefined8 *)(puVar18 + -8) = uVar7;
      *(undefined8 *)(puVar18 + -6) = uVar8;
      uVar13 = uVar15 + 2;
      lVar22 = (uVar15 ^ 0x7fffffffffffffe) * 0x20;
      puVar17 = (undefined4 *)(lVar1 + lVar22);
      uVar23 = puVar17[1];
      uVar4 = puVar17[2];
      uVar5 = puVar17[3];
      puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar22);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      *puVar18 = *puVar17;
      puVar18[1] = uVar23;
      puVar18[2] = uVar4;
      puVar18[3] = uVar5;
      *(undefined8 *)(puVar18 + 4) = uVar7;
      *(undefined8 *)(puVar18 + 6) = uVar8;
      puVar18 = puVar18 + 0x10;
      puVar20 = puVar20 + -8;
      uVar15 = uVar13;
    } while ((param_2 & 0xfffffffffffffffe) != uVar13);
    if ((param_2 & 1) == 0) goto LAB_003ee359;
  }
  puVar18 = (undefined4 *)(lVar1 + ~uVar13 * 0x20);
  uVar23 = *puVar18;
  uVar4 = puVar18[1];
  uVar5 = puVar18[2];
  uVar6 = puVar18[3];
  puVar20 = (undefined8 *)(lVar1 + 0x10 + ~uVar13 * 0x20);
  uVar7 = puVar20[1];
  *(undefined8 *)(param_1 + uVar13 * 8 + 4) = *puVar20;
  *(undefined8 *)((longlong)(param_1 + uVar13 * 8 + 4) + 8) = uVar7;
  puVar18 = param_1 + uVar13 * 8;
  *puVar18 = uVar23;
  puVar18[1] = uVar4;
  puVar18[2] = uVar5;
  puVar18[3] = uVar6;
LAB_003ee359:
  if (local_a8 < uVar19) {
LAB_003ee3e0:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_80 = 0;
  puVar18 = param_1;
  if (param_2 < 0x21) goto LAB_003edb9b;
  goto LAB_003edbcd;
}


