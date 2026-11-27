// 00386e20 <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<serde_json[dc3825464c436029]::value::Value,
   <[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::{closure#2}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
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
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  uint uVar30;
  bool bVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_88 = param_2 >> 1;
    puVar24 = param_1 + local_88 * 4;
    puVar20 = param_3 + local_88 * 4;
    if (param_2 < 8) {
      uVar11 = *param_1;
      uVar12 = param_1[1];
      uVar13 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar13;
      *param_3 = uVar11;
      param_3[1] = uVar12;
      uVar4 = *(undefined4 *)puVar24;
      uVar5 = *(undefined4 *)((longlong)puVar24 + 4);
      uVar6 = *(undefined4 *)(puVar24 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar24 + 0xc);
      uVar11 = puVar24[3];
      puVar20[2] = puVar24[2];
      puVar20[3] = uVar11;
      *(undefined4 *)puVar20 = uVar4;
      *(undefined4 *)((longlong)puVar20 + 4) = uVar5;
      *(undefined4 *)(puVar20 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uVar7;
      uVar15 = 1;
    }
    else {
      sort4_stable::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                (param_1,param_3);
      sort4_stable::
      <serde_json[dc3825464c436029]::value::Value,<[serde_json[dc3825464c436029]::value::Value]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::slots_snapshot_with_limit::_closure_2_>::_closure_0_>
                (puVar24,puVar20);
      uVar15 = 4;
    }
    local_40 = puVar24;
    if (uVar15 < local_88) {
      uVar25 = (ulonglong)(uint)((int)uVar15 << 5);
      lVar26 = uVar25 - 0x20;
      lVar22 = uVar25 - 0x40;
      uVar25 = uVar15;
      do {
        puVar24 = param_1 + uVar25 * 4;
        uVar4 = *(undefined4 *)puVar24;
        uVar5 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar6 = *(undefined4 *)(puVar24 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar24 + 0xc);
        puVar24 = param_1 + uVar25 * 4 + 2;
        uVar8 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar9 = *(undefined4 *)(puVar24 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar24 + 0xc);
        puVar21 = param_3 + uVar25 * 4 + 2;
        *(undefined4 *)puVar21 = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar8;
        *(undefined4 *)(puVar21 + 1) = uVar9;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar10;
        puVar24 = param_3 + uVar25 * 4;
        *(undefined4 *)puVar24 = uVar4;
        *(undefined4 *)((longlong)puVar24 + 4) = uVar5;
        *(undefined4 *)(puVar24 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar24 + 0xc) = uVar7;
        pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(uVar4,param_3 + uVar25 * 4);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = PTR_NULL_00799530;
        }
        if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
          uVar27 = *(ulonglong *)(pcVar16 + 0x10);
        }
        else {
          uVar27 = 0;
        }
        puVar24 = param_3 + uVar25 * 4 + -4;
        pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,puVar24);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = PTR_NULL_00799530;
        }
        if (((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) &&
           (uVar27 < *(ulonglong *)(pcVar16 + 0x10))) {
          puVar21 = param_1 + uVar25 * 4;
          local_78 = *puVar21;
          uStack_70 = puVar21[1];
          local_68 = puVar21[2];
          uStack_60 = puVar21[3];
          lVar14 = lVar26;
          lVar28 = lVar22;
          do {
            lVar18 = lVar14;
            puVar1 = (undefined4 *)((longlong)param_3 + lVar18);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)param_3 + lVar18 + 0x10);
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            puVar2 = (undefined4 *)((longlong)param_3 + lVar18 + 0x30);
            *puVar2 = *puVar1;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            puVar1 = (undefined4 *)((longlong)param_3 + lVar18 + 0x20);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            if (lVar18 == 0) {
              puVar24 = param_3;
              goto LAB_00386eec;
            }
            pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(uVar4,&local_78);
            if (pcVar16 == (char *)0x0) {
              pcVar16 = PTR_NULL_00799530;
            }
            if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
              local_b0 = *(ulonglong *)(pcVar16 + 0x10);
            }
            else {
              local_b0 = 0;
            }
            pcVar16 = (char *)(*(code *)PTR_index_into_00799300)
                                        (extraout_XMM0_Da_00,(longlong)param_3 + lVar28);
            if (pcVar16 == (char *)0x0) {
              pcVar16 = PTR_NULL_00799530;
            }
            if ((*pcVar16 != '\x02') || (*(longlong *)(pcVar16 + 8) != 0)) goto LAB_00386eec;
            puVar24 = puVar24 + -4;
            lVar28 = lVar28 + -0x20;
            lVar14 = lVar18 + -0x20;
          } while (local_b0 < *(ulonglong *)(pcVar16 + 0x10));
          puVar24 = (undefined8 *)(lVar18 + (longlong)param_3);
LAB_00386eec:
          puVar24[2] = local_68;
          puVar24[3] = uStack_60;
          *(undefined4 *)puVar24 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar24 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_70._4_4_;
        }
        uVar25 = uVar25 + 1;
        lVar26 = lVar26 + 0x20;
        lVar22 = lVar22 + 0x20;
      } while (uVar25 != local_88);
    }
    local_38 = param_2 - local_88;
    if (uVar15 < local_38) {
      uVar25 = (ulonglong)(uint)((int)uVar15 << 5);
      local_48 = param_3 + local_88 * 4 + -4;
      local_50 = param_3 + local_88 * 4 + -8;
      uVar27 = 0x20;
      puVar24 = local_40;
      do {
        puVar21 = puVar24 + uVar15 * 4;
        uVar4 = *(undefined4 *)puVar21;
        uVar5 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar6 = *(undefined4 *)(puVar21 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar21 + 0xc);
        puVar21 = puVar24 + uVar15 * 4 + 2;
        uVar8 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar9 = *(undefined4 *)(puVar21 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar21 + 0xc);
        puVar29 = puVar20 + uVar15 * 4 + 2;
        *(undefined4 *)puVar29 = *(undefined4 *)puVar21;
        *(undefined4 *)((longlong)puVar29 + 4) = uVar8;
        *(undefined4 *)(puVar29 + 1) = uVar9;
        *(undefined4 *)((longlong)puVar29 + 0xc) = uVar10;
        puVar21 = puVar20 + uVar15 * 4;
        *(undefined4 *)puVar21 = uVar4;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar5;
        *(undefined4 *)(puVar21 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar7;
        pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(uVar4,puVar20 + uVar15 * 4);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = PTR_NULL_00799530;
        }
        if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
          uVar23 = *(ulonglong *)(pcVar16 + 0x10);
        }
        else {
          uVar23 = 0;
        }
        puVar21 = puVar20 + uVar15 * 4 + -4;
        pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_01,puVar21);
        if (pcVar16 == (char *)0x0) {
          pcVar16 = PTR_NULL_00799530;
        }
        if (((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) &&
           (uVar23 < *(ulonglong *)(pcVar16 + 0x10))) {
          puVar24 = puVar24 + uVar15 * 4;
          local_78 = *puVar24;
          uStack_70 = puVar24[1];
          local_68 = puVar24[2];
          uStack_60 = puVar24[3];
          puVar24 = local_48;
          uVar23 = uVar27;
          puVar29 = local_50;
          do {
            puVar19 = puVar24;
            puVar1 = (undefined4 *)((longlong)puVar19 + uVar25);
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)puVar19 + uVar25 + 0x10);
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            puVar2 = (undefined4 *)((longlong)puVar19 + uVar25 + 0x30);
            *puVar2 = *puVar1;
            puVar2[1] = uVar8;
            puVar2[2] = uVar9;
            puVar2[3] = uVar10;
            puVar1 = (undefined4 *)((longlong)puVar19 + uVar25 + 0x20);
            *puVar1 = uVar4;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            if (uVar25 == uVar23) {
              puVar21 = puVar20;
              goto LAB_0038710a;
            }
            pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(uVar4,&local_78);
            if (pcVar16 == (char *)0x0) {
              pcVar16 = PTR_NULL_00799530;
            }
            if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
              local_a8 = *(ulonglong *)(pcVar16 + 0x10);
            }
            else {
              local_a8 = 0;
            }
            pcVar16 = (char *)(*(code *)PTR_index_into_00799300)
                                        (extraout_XMM0_Da_02,(longlong)puVar29 + uVar25);
            if (pcVar16 == (char *)0x0) {
              pcVar16 = PTR_NULL_00799530;
            }
            if ((*pcVar16 != '\x02') || (*(longlong *)(pcVar16 + 8) != 0)) goto LAB_0038710a;
            puVar21 = puVar21 + -4;
            puVar29 = puVar29 + -4;
            uVar23 = uVar23 + 0x20;
            puVar24 = puVar19 + -4;
          } while (local_a8 < *(ulonglong *)(pcVar16 + 0x10));
          puVar21 = (undefined8 *)((longlong)puVar19 + uVar25);
LAB_0038710a:
          puVar21[2] = local_68;
          puVar21[3] = uStack_60;
          *(undefined4 *)puVar21 = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar21 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_70._4_4_;
          puVar24 = local_40;
        }
        uVar15 = uVar15 + 1;
        local_48 = local_48 + 4;
        local_50 = local_50 + 4;
        uVar27 = uVar27 - 0x20;
      } while (uVar15 != local_38);
    }
    puVar21 = param_3 + param_2 * 4 + -4;
    puVar24 = puVar20 + -4;
    puVar29 = param_1 + param_2 * 4;
    do {
      puVar19 = param_1;
      pcVar16 = (char *)(*(code *)PTR_index_into_00799300)();
      if (pcVar16 == (char *)0x0) {
        pcVar16 = PTR_NULL_00799530;
      }
      if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
        uVar15 = *(ulonglong *)(pcVar16 + 0x10);
      }
      else {
        uVar15 = 0;
      }
      pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_03,param_3);
      if (pcVar16 == (char *)0x0) {
        pcVar16 = PTR_NULL_00799530;
      }
      puVar17 = param_3;
      if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
        uVar30 = (uint)(uVar15 < *(ulonglong *)(pcVar16 + 0x10));
        if (uVar15 < *(ulonglong *)(pcVar16 + 0x10)) {
          puVar17 = puVar20;
        }
      }
      else {
        uVar30 = 0;
      }
      uVar4 = *(undefined4 *)puVar17;
      uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar6 = *(undefined4 *)(puVar17 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar17 + 0x14);
      uVar9 = *(undefined4 *)(puVar17 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar17 + 0x1c);
      *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(puVar17 + 2);
      *(undefined4 *)((longlong)puVar19 + 0x14) = uVar8;
      *(undefined4 *)(puVar19 + 3) = uVar9;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar10;
      *(undefined4 *)puVar19 = uVar4;
      *(undefined4 *)((longlong)puVar19 + 4) = uVar5;
      *(undefined4 *)(puVar19 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uVar7;
      pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(uVar4,puVar21);
      if (pcVar16 == (char *)0x0) {
        pcVar16 = PTR_NULL_00799530;
      }
      if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
        local_b0 = *(ulonglong *)(pcVar16 + 0x10);
      }
      else {
        local_b0 = 0;
      }
      pcVar16 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_04,puVar24);
      if (pcVar16 == (char *)0x0) {
        pcVar16 = PTR_NULL_00799530;
      }
      puVar17 = puVar21;
      if ((*pcVar16 == '\x02') && (*(longlong *)(pcVar16 + 8) == 0)) {
        bVar31 = local_b0 < *(ulonglong *)(pcVar16 + 0x10);
        if (bVar31) {
          puVar17 = puVar24;
        }
      }
      else {
        bVar31 = false;
      }
      puVar20 = (undefined8 *)((longlong)puVar20 + (ulonglong)(uVar30 << 5));
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)((uVar30 ^ 1) << 5));
      uVar4 = *(undefined4 *)puVar17;
      uVar5 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar6 = *(undefined4 *)(puVar17 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar17 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar17 + 0x14);
      uVar9 = *(undefined4 *)(puVar17 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar17 + 0x1c);
      *(undefined4 *)(puVar29 + -2) = *(undefined4 *)(puVar17 + 2);
      *(undefined4 *)((longlong)puVar29 + -0xc) = uVar8;
      *(undefined4 *)(puVar29 + -1) = uVar9;
      *(undefined4 *)((longlong)puVar29 + -4) = uVar10;
      *(undefined4 *)(puVar29 + -4) = uVar4;
      *(undefined4 *)((longlong)puVar29 + -0x1c) = uVar5;
      *(undefined4 *)(puVar29 + -3) = uVar6;
      *(undefined4 *)((longlong)puVar29 + -0x14) = uVar7;
      puVar17 = puVar21 + (ulonglong)bVar31 * 4;
      puVar21 = puVar17 + -4;
      puVar24 = puVar24 + (ulonglong)bVar31 * -4;
      local_88 = local_88 - 1;
      param_1 = puVar19 + 4;
      puVar29 = puVar29 + -4;
    } while (local_88 != 0);
    if ((param_2 & 1) != 0) {
      bVar31 = param_3 < puVar24 + 4;
      puVar21 = puVar20;
      if (bVar31) {
        puVar21 = param_3;
      }
      uVar4 = *(undefined4 *)puVar21;
      uVar5 = *(undefined4 *)((longlong)puVar21 + 4);
      uVar6 = *(undefined4 *)(puVar21 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar21 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar21 + 0x14);
      uVar9 = *(undefined4 *)(puVar21 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar21 + 0x1c);
      *(undefined4 *)(puVar19 + 6) = *(undefined4 *)(puVar21 + 2);
      *(undefined4 *)((longlong)puVar19 + 0x34) = uVar8;
      *(undefined4 *)(puVar19 + 7) = uVar9;
      *(undefined4 *)((longlong)puVar19 + 0x3c) = uVar10;
      *(undefined4 *)(puVar19 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar19 + 0x24) = uVar5;
      *(undefined4 *)(puVar19 + 5) = uVar6;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar7;
      param_3 = param_3 + (ulonglong)bVar31 * 4;
      puVar20 = puVar20 + (ulonglong)!bVar31 * 4;
    }
    if ((param_3 == puVar24 + 4) && (puVar20 == puVar17)) {
      return;
    }
    (*(code *)PTR_panic_on_ord_violation_007996f0)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


