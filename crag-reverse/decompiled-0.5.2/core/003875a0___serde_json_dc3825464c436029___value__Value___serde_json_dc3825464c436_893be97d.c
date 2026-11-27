// 003875a0 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined8 *puVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  ulonglong local_a8;
  undefined8 *local_a0;
  ulonglong local_90;
  undefined8 *local_88;
  ulonglong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) goto LAB_00387cba;
  local_78 = param_2 >> 1;
  puVar20 = param_1 + local_78 * 4;
  local_a0 = param_3 + local_78 * 4;
  if (param_2 < 8) {
    uVar10 = *param_1;
    uVar11 = param_1[1];
    uVar12 = param_1[3];
    param_3[2] = param_1[2];
    param_3[3] = uVar12;
    *param_3 = uVar10;
    param_3[1] = uVar11;
    uVar28 = *(undefined4 *)puVar20;
    uVar4 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar5 = *(undefined4 *)(puVar20 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[3];
    local_a0[2] = puVar20[2];
    local_a0[3] = uVar10;
    *(undefined4 *)local_a0 = uVar28;
    *(undefined4 *)((longlong)local_a0 + 4) = uVar4;
    *(undefined4 *)(local_a0 + 1) = uVar5;
    *(undefined4 *)((longlong)local_a0 + 0xc) = uVar6;
    local_90 = 1;
    if (1 < local_78) goto LAB_00387664;
  }
  else {
    sort4_stable::
    <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
              (param_1,param_3);
    uVar28 = sort4_stable::
             <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_conversations::_closure_0_::_closure_0_>::_closure_0_>
                       (puVar20,local_a0);
    local_90 = 4;
    if (4 < local_78) {
LAB_00387664:
      uVar22 = (ulonglong)(uint)((int)local_90 << 5);
      lVar21 = uVar22 - 0x20;
      lVar18 = uVar22 - 0x40;
      uVar22 = local_90;
      do {
        puVar26 = param_1 + uVar22 * 4;
        uVar28 = *(undefined4 *)puVar26;
        uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar5 = *(undefined4 *)(puVar26 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar26 = param_1 + uVar22 * 4 + 2;
        uVar7 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar8 = *(undefined4 *)(puVar26 + 1);
        uVar9 = *(undefined4 *)((longlong)puVar26 + 0xc);
        puVar17 = param_3 + uVar22 * 4 + 2;
        *(undefined4 *)puVar17 = *(undefined4 *)puVar26;
        *(undefined4 *)((longlong)puVar17 + 4) = uVar7;
        *(undefined4 *)(puVar17 + 1) = uVar8;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        puVar26 = param_3 + uVar22 * 4;
        *(undefined4 *)puVar26 = uVar28;
        *(undefined4 *)((longlong)puVar26 + 4) = uVar4;
        *(undefined4 *)(puVar26 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar26 + 0xc) = uVar6;
        puVar26 = param_3 + uVar22 * 4 + -4;
        pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,puVar26);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = PTR_NULL_00799530;
        }
        if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
          uVar19 = *(ulonglong *)(pcVar14 + 0x10);
        }
        else {
          uVar19 = 0;
        }
        pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_3 + uVar22 * 4);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = PTR_NULL_00799530;
        }
        uVar28 = extraout_XMM0_Da_00;
        if (((*pcVar14 == '\x02') && (uVar28 = extraout_XMM0_Da_00, *(longlong *)(pcVar14 + 8) == 0)
            ) && (uVar28 = extraout_XMM0_Da_00, uVar19 < *(ulonglong *)(pcVar14 + 0x10))) {
          puVar17 = param_1 + uVar22 * 4;
          local_68 = *puVar17;
          uStack_60 = puVar17[1];
          local_58 = puVar17[2];
          uStack_50 = puVar17[3];
          lVar13 = lVar21;
          lVar23 = lVar18;
          do {
            lVar16 = lVar13;
            puVar1 = (undefined4 *)((longlong)param_3 + lVar16);
            uVar28 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)param_3 + lVar16 + 0x10);
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)((longlong)param_3 + lVar16 + 0x30);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            puVar1 = (undefined4 *)((longlong)param_3 + lVar16 + 0x20);
            *puVar1 = uVar28;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            if (lVar16 == 0) {
              puVar26 = param_3;
              goto LAB_0038767c;
            }
            pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,(longlong)param_3 + lVar23);
            if (pcVar14 == (char *)0x0) {
              pcVar14 = PTR_NULL_00799530;
            }
            if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
              local_a8 = *(ulonglong *)(pcVar14 + 0x10);
            }
            else {
              local_a8 = 0;
            }
            pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,&local_68);
            if (pcVar14 == (char *)0x0) {
              pcVar14 = PTR_NULL_00799530;
            }
            if ((*pcVar14 != '\x02') || (*(longlong *)(pcVar14 + 8) != 0)) goto LAB_0038767c;
            puVar26 = puVar26 + -4;
            lVar23 = lVar23 + -0x20;
            lVar13 = lVar16 + -0x20;
          } while (local_a8 < *(ulonglong *)(pcVar14 + 0x10));
          puVar26 = (undefined8 *)(lVar16 + (longlong)param_3);
LAB_0038767c:
          puVar26[2] = local_58;
          puVar26[3] = uStack_50;
          *(undefined4 *)puVar26 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar26 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_60._4_4_;
          uVar28 = (undefined4)local_68;
        }
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 0x20;
        lVar18 = lVar18 + 0x20;
      } while (uVar22 != local_78);
    }
  }
  local_38 = param_2 - local_78;
  if (local_90 < local_38) {
    local_48 = (ulonglong)(uint)((int)local_90 << 5);
    local_40 = param_3 + local_78 * 4 + -4;
    local_88 = param_3 + local_78 * 4 + -8;
    uVar22 = 0x20;
LAB_003878e1:
    puVar26 = puVar20 + local_90 * 4;
    uVar28 = *(undefined4 *)puVar26;
    uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
    uVar5 = *(undefined4 *)(puVar26 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
    puVar26 = puVar20 + local_90 * 4 + 2;
    uVar7 = *(undefined4 *)((longlong)puVar26 + 4);
    uVar8 = *(undefined4 *)(puVar26 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar26 + 0xc);
    puVar17 = local_a0 + local_90 * 4 + 2;
    *(undefined4 *)puVar17 = *(undefined4 *)puVar26;
    *(undefined4 *)((longlong)puVar17 + 4) = uVar7;
    *(undefined4 *)(puVar17 + 1) = uVar8;
    *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
    puVar26 = local_a0 + local_90 * 4;
    *(undefined4 *)puVar26 = uVar28;
    *(undefined4 *)((longlong)puVar26 + 4) = uVar4;
    *(undefined4 *)(puVar26 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar26 + 0xc) = uVar6;
    puVar26 = local_a0 + local_90 * 4 + -4;
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,puVar26);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
      uVar19 = *(ulonglong *)(pcVar14 + 0x10);
    }
    else {
      uVar19 = 0;
    }
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)
                                (extraout_XMM0_Da_02,local_a0 + local_90 * 4);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    uVar28 = extraout_XMM0_Da_03;
    if (((*pcVar14 == '\x02') && (uVar28 = extraout_XMM0_Da_03, *(longlong *)(pcVar14 + 8) == 0)) &&
       (uVar28 = extraout_XMM0_Da_03, uVar19 < *(ulonglong *)(pcVar14 + 0x10))) {
      puVar17 = puVar20 + local_90 * 4;
      local_68 = *puVar17;
      uStack_60 = puVar17[1];
      local_58 = puVar17[2];
      uStack_50 = puVar17[3];
      puVar17 = local_40;
      uVar19 = uVar22;
      puVar24 = local_88;
      while( true ) {
        puVar15 = puVar17;
        puVar1 = (undefined4 *)((longlong)puVar15 + local_48);
        uVar28 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar1 = (undefined4 *)((longlong)puVar15 + local_48 + 0x10);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)((longlong)puVar15 + local_48 + 0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        puVar1 = (undefined4 *)((longlong)puVar15 + local_48 + 0x20);
        *puVar1 = uVar28;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        if (local_48 == uVar19) break;
        pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,(longlong)puVar24 + local_48);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = PTR_NULL_00799530;
        }
        if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
          local_a8 = *(ulonglong *)(pcVar14 + 0x10);
        }
        else {
          local_a8 = 0;
        }
        pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,&local_68);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = PTR_NULL_00799530;
        }
        if ((*pcVar14 != '\x02') || (*(longlong *)(pcVar14 + 8) != 0)) goto LAB_003878a0;
        puVar26 = puVar26 + -4;
        puVar24 = puVar24 + -4;
        uVar19 = uVar19 + 0x20;
        puVar17 = puVar15 + -4;
        if (*(ulonglong *)(pcVar14 + 0x10) <= local_a8) goto LAB_00387898;
      }
      puVar26 = local_a0;
      goto LAB_003878a5;
    }
    goto LAB_003878c0;
  }
LAB_00387a77:
  puVar26 = param_3 + param_2 * 4;
  puVar20 = local_a0 + -4;
  puVar17 = param_1 + param_2 * 4;
  do {
    puVar24 = param_1;
    puVar26 = puVar26 + -4;
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,param_3);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
      uVar22 = *(ulonglong *)(pcVar14 + 0x10);
    }
    else {
      uVar22 = 0;
    }
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_05,local_a0);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    puVar15 = param_3;
    if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
      uVar25 = (uint)(uVar22 < *(ulonglong *)(pcVar14 + 0x10));
      if (uVar22 < *(ulonglong *)(pcVar14 + 0x10)) {
        puVar15 = local_a0;
      }
    }
    else {
      uVar25 = 0;
    }
    uVar28 = *(undefined4 *)puVar15;
    uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
    uVar5 = *(undefined4 *)(puVar15 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
    uVar7 = *(undefined4 *)((longlong)puVar15 + 0x14);
    uVar8 = *(undefined4 *)(puVar15 + 3);
    uVar9 = *(undefined4 *)((longlong)puVar15 + 0x1c);
    *(undefined4 *)(puVar24 + 2) = *(undefined4 *)(puVar15 + 2);
    *(undefined4 *)((longlong)puVar24 + 0x14) = uVar7;
    *(undefined4 *)(puVar24 + 3) = uVar8;
    *(undefined4 *)((longlong)puVar24 + 0x1c) = uVar9;
    *(undefined4 *)puVar24 = uVar28;
    *(undefined4 *)((longlong)puVar24 + 4) = uVar4;
    *(undefined4 *)(puVar24 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar24 + 0xc) = uVar6;
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(uVar28,puVar20);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
      local_a8 = *(ulonglong *)(pcVar14 + 0x10);
    }
    else {
      local_a8 = 0;
    }
    pcVar14 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_06,puVar26);
    if (pcVar14 == (char *)0x0) {
      pcVar14 = PTR_NULL_00799530;
    }
    puVar15 = puVar26;
    if ((*pcVar14 == '\x02') && (*(longlong *)(pcVar14 + 8) == 0)) {
      bVar27 = local_a8 < *(ulonglong *)(pcVar14 + 0x10);
      if (bVar27) {
        puVar15 = puVar20;
      }
    }
    else {
      bVar27 = false;
    }
    local_a0 = (undefined8 *)((longlong)local_a0 + (ulonglong)(uVar25 << 5));
    param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)((uVar25 ^ 1) << 5));
    uVar28 = *(undefined4 *)puVar15;
    uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
    uVar5 = *(undefined4 *)(puVar15 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
    uVar7 = *(undefined4 *)((longlong)puVar15 + 0x14);
    uVar8 = *(undefined4 *)(puVar15 + 3);
    uVar9 = *(undefined4 *)((longlong)puVar15 + 0x1c);
    *(undefined4 *)(puVar17 + -2) = *(undefined4 *)(puVar15 + 2);
    *(undefined4 *)((longlong)puVar17 + -0xc) = uVar7;
    *(undefined4 *)(puVar17 + -1) = uVar8;
    *(undefined4 *)((longlong)puVar17 + -4) = uVar9;
    *(undefined4 *)(puVar17 + -4) = uVar28;
    *(undefined4 *)((longlong)puVar17 + -0x1c) = uVar4;
    *(undefined4 *)(puVar17 + -3) = uVar5;
    *(undefined4 *)((longlong)puVar17 + -0x14) = uVar6;
    puVar26 = puVar26 + (ulonglong)bVar27 * 4;
    puVar20 = puVar20 + (ulonglong)bVar27 * -4;
    local_78 = local_78 - 1;
    param_1 = puVar24 + 4;
    puVar17 = puVar17 + -4;
  } while (local_78 != 0);
  if ((param_2 & 1) != 0) {
    bVar27 = param_3 < puVar20 + 4;
    puVar17 = local_a0;
    if (bVar27) {
      puVar17 = param_3;
    }
    uVar28 = *(undefined4 *)puVar17;
    uVar4 = *(undefined4 *)((longlong)puVar17 + 4);
    uVar5 = *(undefined4 *)(puVar17 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
    uVar7 = *(undefined4 *)((longlong)puVar17 + 0x14);
    uVar8 = *(undefined4 *)(puVar17 + 3);
    uVar9 = *(undefined4 *)((longlong)puVar17 + 0x1c);
    *(undefined4 *)(puVar24 + 6) = *(undefined4 *)(puVar17 + 2);
    *(undefined4 *)((longlong)puVar24 + 0x34) = uVar7;
    *(undefined4 *)(puVar24 + 7) = uVar8;
    *(undefined4 *)((longlong)puVar24 + 0x3c) = uVar9;
    *(undefined4 *)(puVar24 + 4) = uVar28;
    *(undefined4 *)((longlong)puVar24 + 0x24) = uVar4;
    *(undefined4 *)(puVar24 + 5) = uVar5;
    *(undefined4 *)((longlong)puVar24 + 0x2c) = uVar6;
    param_3 = param_3 + (ulonglong)bVar27 * 4;
    local_a0 = local_a0 + (ulonglong)!bVar27 * 4;
  }
  if ((param_3 == puVar20 + 4) && (local_a0 == puVar26)) {
    return;
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
LAB_00387cba:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_00387898:
  puVar26 = (undefined8 *)((longlong)puVar15 + local_48);
LAB_003878a0:
LAB_003878a5:
  puVar26[2] = local_58;
  puVar26[3] = uStack_50;
  *(undefined4 *)puVar26 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar26 + 4) = local_68._4_4_;
  *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_60._4_4_;
  uVar28 = (undefined4)local_68;
LAB_003878c0:
  local_90 = local_90 + 1;
  local_40 = local_40 + 4;
  local_88 = local_88 + 4;
  uVar22 = uVar22 - 0x20;
  if (local_90 == local_38) goto LAB_00387a77;
  goto LAB_003878e1;
}


