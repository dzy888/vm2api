// 00386810 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>
   core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
          (longlong param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined8 *local_88;
  longlong local_80;
  
  puVar13 = PTR_memcpy_00799008;
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar21 = param_2 >> 1;
    lVar25 = param_1 + uVar21 * 200;
    local_88 = param_3 + uVar21 * 0x19;
    if (param_2 < 8) {
      uVar28 = (*(code *)PTR_memcpy_00799008)(param_4,200);
      uVar28 = (*(code *)puVar13)(uVar28,200);
      uVar17 = 1;
    }
    else {
      sort4_stable::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                (param_1,param_3);
      uVar28 = sort4_stable::
               <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                         (lVar25,local_88);
      uVar17 = 4;
    }
    if (uVar17 < uVar21) {
      local_80 = uVar17 * 200;
      uVar26 = uVar17;
      do {
        puVar24 = (undefined8 *)(param_1 + uVar26 * 200);
        uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,200);
        uVar2 = param_3[uVar26 * 0x19 + 7];
        uVar20 = param_3[uVar26 * 0x19 + 8];
        uVar19 = param_3[uVar26 * 0x19 + -0x11];
        uVar18 = uVar19;
        if (uVar20 <= uVar19) {
          uVar18 = uVar20;
        }
        iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar18);
        lVar22 = uVar19 - uVar20;
        if (iVar14 != 0) {
          lVar22 = (longlong)iVar14;
        }
        uVar28 = extraout_XMM0_Da;
        if (lVar22 < 0) {
          lVar22 = local_80;
          do {
            lVar16 = lVar22;
            uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,200);
            if (lVar16 == 200) {
              puVar15 = param_3;
              goto LAB_003868eb;
            }
            uVar19 = *(ulonglong *)((longlong)param_3 + lVar16 + -0x150);
            uVar18 = uVar19;
            if (uVar20 <= uVar19) {
              uVar18 = uVar20;
            }
            iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar18);
            lVar23 = uVar19 - uVar20;
            if (iVar14 != 0) {
              lVar23 = (longlong)iVar14;
            }
            lVar22 = lVar16 + -200;
            uVar28 = extraout_XMM0_Da_00;
          } while (lVar23 < 0);
          puVar15 = (undefined8 *)(lVar16 + -200 + (longlong)param_3);
LAB_003868eb:
          puVar15[6] = puVar24[6];
          uVar7 = *puVar24;
          uVar8 = puVar24[1];
          uVar9 = puVar24[2];
          uVar10 = puVar24[3];
          uVar11 = puVar24[5];
          puVar15[4] = puVar24[4];
          puVar15[5] = uVar11;
          puVar15[2] = uVar9;
          puVar15[3] = uVar10;
          *puVar15 = uVar7;
          puVar15[1] = uVar8;
          *(undefined8 *)((longlong)param_3 + lVar16 + -0x90) = uVar2;
          *(ulonglong *)((longlong)param_3 + lVar16 + -0x88) = uVar20;
          uVar2 = puVar24[10];
          uVar7 = puVar24[0xb];
          uVar8 = puVar24[0xc];
          uVar9 = puVar24[0xd];
          uVar10 = puVar24[0xe];
          uVar11 = puVar24[0xf];
          uVar12 = puVar24[0x10];
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x80);
          *puVar15 = puVar24[9];
          puVar15[1] = uVar2;
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x70);
          *puVar15 = uVar7;
          puVar15[1] = uVar8;
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x60);
          *puVar15 = uVar9;
          puVar15[1] = uVar10;
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x50);
          *puVar15 = uVar11;
          puVar15[1] = uVar12;
          uVar2 = puVar24[0x12];
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x40);
          *puVar15 = puVar24[0x11];
          puVar15[1] = uVar2;
          uVar2 = puVar24[0x14];
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x30);
          *puVar15 = puVar24[0x13];
          puVar15[1] = uVar2;
          uVar2 = puVar24[0x16];
          puVar15 = (undefined8 *)((longlong)param_3 + lVar16 + -0x20);
          *puVar15 = puVar24[0x15];
          puVar15[1] = uVar2;
          uVar28 = *(undefined4 *)(puVar24 + 0x17);
          uVar4 = *(undefined4 *)((longlong)puVar24 + 0xbc);
          uVar5 = *(undefined4 *)(puVar24 + 0x18);
          uVar6 = *(undefined4 *)((longlong)puVar24 + 0xc4);
          puVar1 = (undefined4 *)((longlong)param_3 + lVar16 + -0x10);
          *puVar1 = uVar28;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
        uVar26 = uVar26 + 1;
        local_80 = local_80 + 200;
      } while (uVar26 != uVar21);
    }
    if (uVar17 < param_2 - uVar21) {
      local_80 = uVar17 * 200;
      do {
        puVar24 = (undefined8 *)(lVar25 + uVar17 * 200);
        uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,200);
        uVar2 = local_88[uVar17 * 0x19 + 7];
        uVar26 = local_88[uVar17 * 0x19 + 8];
        uVar20 = local_88[uVar17 * 0x19 + -0x11];
        uVar19 = uVar20;
        if (uVar26 <= uVar20) {
          uVar19 = uVar26;
        }
        iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar19);
        lVar22 = uVar20 - uVar26;
        if (iVar14 != 0) {
          lVar22 = (longlong)iVar14;
        }
        uVar28 = extraout_XMM0_Da_01;
        if (lVar22 < 0) {
          lVar22 = local_80;
          do {
            lVar16 = lVar22;
            uVar28 = (*(code *)PTR_memcpy_00799008)(uVar28,200);
            if (lVar16 == 200) {
              puVar15 = local_88;
              goto LAB_00386a97;
            }
            uVar20 = *(ulonglong *)((longlong)local_88 + lVar16 + -0x150);
            uVar19 = uVar20;
            if (uVar26 <= uVar20) {
              uVar19 = uVar26;
            }
            iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar19);
            lVar23 = uVar20 - uVar26;
            if (iVar14 != 0) {
              lVar23 = (longlong)iVar14;
            }
            lVar22 = lVar16 + -200;
            uVar28 = extraout_XMM0_Da_02;
          } while (lVar23 < 0);
          puVar15 = (undefined8 *)(lVar16 + -200 + (longlong)local_88);
LAB_00386a97:
          puVar15[6] = puVar24[6];
          uVar7 = *puVar24;
          uVar8 = puVar24[1];
          uVar9 = puVar24[2];
          uVar10 = puVar24[3];
          uVar11 = puVar24[5];
          puVar15[4] = puVar24[4];
          puVar15[5] = uVar11;
          puVar15[2] = uVar9;
          puVar15[3] = uVar10;
          *puVar15 = uVar7;
          puVar15[1] = uVar8;
          *(undefined8 *)((longlong)local_88 + lVar16 + -0x90) = uVar2;
          *(ulonglong *)((longlong)local_88 + lVar16 + -0x88) = uVar26;
          uVar2 = puVar24[10];
          uVar7 = puVar24[0xb];
          uVar8 = puVar24[0xc];
          uVar9 = puVar24[0xd];
          uVar10 = puVar24[0xe];
          uVar11 = puVar24[0xf];
          uVar12 = puVar24[0x10];
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x80);
          *puVar15 = puVar24[9];
          puVar15[1] = uVar2;
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x70);
          *puVar15 = uVar7;
          puVar15[1] = uVar8;
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x60);
          *puVar15 = uVar9;
          puVar15[1] = uVar10;
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x50);
          *puVar15 = uVar11;
          puVar15[1] = uVar12;
          uVar2 = puVar24[0x12];
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x40);
          *puVar15 = puVar24[0x11];
          puVar15[1] = uVar2;
          uVar2 = puVar24[0x14];
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x30);
          *puVar15 = puVar24[0x13];
          puVar15[1] = uVar2;
          uVar2 = puVar24[0x16];
          puVar15 = (undefined8 *)((longlong)local_88 + lVar16 + -0x20);
          *puVar15 = puVar24[0x15];
          puVar15[1] = uVar2;
          uVar28 = *(undefined4 *)(puVar24 + 0x17);
          uVar4 = *(undefined4 *)((longlong)puVar24 + 0xbc);
          uVar5 = *(undefined4 *)(puVar24 + 0x18);
          uVar6 = *(undefined4 *)((longlong)puVar24 + 0xc4);
          puVar1 = (undefined4 *)((longlong)local_88 + lVar16 + -0x10);
          *puVar1 = uVar28;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
        uVar17 = uVar17 + 1;
        local_80 = local_80 + 200;
      } while (uVar17 != param_2 - uVar21);
    }
    puVar15 = param_3 + param_2 * 0x19 + -0x19;
    puVar24 = local_88 + -0x19;
    do {
      uVar17 = local_88[8];
      uVar26 = param_3[8];
      uVar20 = uVar17;
      if (uVar26 < uVar17) {
        uVar20 = uVar26;
      }
      iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar20);
      lVar25 = uVar26 - uVar17;
      if (iVar14 != 0) {
        lVar25 = (longlong)iVar14;
      }
      uVar28 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,200);
      local_88 = local_88 + (lVar25 >> 0x3f) * -0x19;
      param_3 = param_3 + (ulonglong)(-1 < lVar25) * 0x19;
      uVar17 = puVar15[8];
      uVar26 = puVar24[8];
      uVar20 = uVar17;
      if (uVar26 < uVar17) {
        uVar20 = uVar26;
      }
      iVar14 = (*(code *)PTR_memcmp_00799528)(uVar28,uVar20);
      lVar25 = uVar26 - uVar17;
      if (iVar14 != 0) {
        lVar25 = (longlong)iVar14;
      }
      uVar28 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,200);
      puVar15 = puVar15 + (ulonglong)(-1 < lVar25) * -0x19;
      puVar24 = puVar24 + (lVar25 >> 0x3f) * 0x19;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
    puVar24 = puVar24 + 0x19;
    if ((param_2 & 1) != 0) {
      bVar27 = param_3 < puVar24;
      (*(code *)PTR_memcpy_00799008)(uVar28,200);
      param_3 = param_3 + (ulonglong)bVar27 * 0x19;
      local_88 = local_88 + (ulonglong)!bVar27 * 0x19;
    }
    if ((param_3 == puVar24) && (local_88 == puVar15 + 0x19)) {
      return;
    }
    (*(code *)PTR_panic_on_ord_violation_007996f0)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


