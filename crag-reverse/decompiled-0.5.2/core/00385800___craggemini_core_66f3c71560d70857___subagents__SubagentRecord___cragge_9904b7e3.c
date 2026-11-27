// 00385800 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>
   core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
          (undefined4 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  undefined8 *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Da_00;
  longlong local_100;
  
  if (param_3 <= param_4 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (param_4 != param_3) {
    local_100 = param_4 * 200;
    puVar36 = param_2 + param_4 * 0x19;
    do {
      uVar2 = puVar36[7];
      uVar3 = puVar36[8];
      uVar4 = puVar36[-0x11];
      uVar33 = uVar4;
      if (uVar3 <= uVar4) {
        uVar33 = uVar3;
      }
      iVar30 = (*(code *)PTR_memcmp_00799528)(param_1,uVar33);
      lVar34 = uVar4 - uVar3;
      if (iVar30 != 0) {
        lVar34 = (longlong)iVar30;
      }
      param_1 = extraout_XMM0_Da;
      if (lVar34 < 0) {
        uVar10 = *puVar36;
        uVar11 = puVar36[1];
        uVar12 = puVar36[2];
        uVar13 = puVar36[3];
        uVar14 = puVar36[4];
        uVar15 = puVar36[5];
        uVar5 = puVar36[6];
        uVar16 = puVar36[9];
        uVar17 = puVar36[10];
        uVar18 = puVar36[0xb];
        uVar19 = puVar36[0xc];
        uVar20 = puVar36[0xd];
        uVar21 = puVar36[0xe];
        uVar22 = puVar36[0xf];
        uVar23 = puVar36[0x10];
        uVar24 = puVar36[0x11];
        uVar25 = puVar36[0x12];
        uVar26 = puVar36[0x13];
        uVar27 = puVar36[0x14];
        uVar28 = puVar36[0x15];
        uVar29 = puVar36[0x16];
        param_1 = *(undefined4 *)(puVar36 + 0x17);
        uVar7 = *(undefined4 *)((longlong)puVar36 + 0xbc);
        uVar8 = *(undefined4 *)(puVar36 + 0x18);
        uVar9 = *(undefined4 *)((longlong)puVar36 + 0xc4);
        lVar34 = local_100;
        uVar37 = param_1;
        do {
          lVar32 = lVar34;
          uVar37 = (*(code *)PTR_memcpy_00799008)(uVar37,200);
          if (lVar32 == 200) {
            puVar31 = param_2;
            goto LAB_00385850;
          }
          uVar4 = *(ulonglong *)((longlong)param_2 + lVar32 + -0x150);
          uVar33 = uVar4;
          if (uVar3 <= uVar4) {
            uVar33 = uVar3;
          }
          iVar30 = (*(code *)PTR_memcmp_00799528)(uVar37,uVar33);
          lVar35 = uVar4 - uVar3;
          if (iVar30 != 0) {
            lVar35 = (longlong)iVar30;
          }
          lVar34 = lVar32 + -200;
          uVar37 = extraout_XMM0_Da_00;
        } while (lVar35 < 0);
        puVar31 = (undefined8 *)(lVar32 + -200 + (longlong)param_2);
LAB_00385850:
        puVar31[6] = uVar5;
        puVar31[4] = uVar14;
        puVar31[5] = uVar15;
        puVar31[2] = uVar12;
        puVar31[3] = uVar13;
        *puVar31 = uVar10;
        puVar31[1] = uVar11;
        *(undefined8 *)((longlong)param_2 + lVar32 + -0x90) = uVar2;
        *(ulonglong *)((longlong)param_2 + lVar32 + -0x88) = uVar3;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x80);
        *puVar31 = uVar16;
        puVar31[1] = uVar17;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x70);
        *puVar31 = uVar18;
        puVar31[1] = uVar19;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x60);
        *puVar31 = uVar20;
        puVar31[1] = uVar21;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x50);
        *puVar31 = uVar22;
        puVar31[1] = uVar23;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x40);
        *puVar31 = uVar24;
        puVar31[1] = uVar25;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x30);
        *puVar31 = uVar26;
        puVar31[1] = uVar27;
        puVar31 = (undefined8 *)((longlong)param_2 + lVar32 + -0x20);
        *puVar31 = uVar28;
        puVar31[1] = uVar29;
        puVar1 = (undefined4 *)((longlong)param_2 + lVar32 + -0x10);
        *puVar1 = param_1;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
      }
      puVar36 = puVar36 + 0x19;
      local_100 = local_100 + 200;
    } while (puVar36 != param_2 + param_3 * 0x19);
  }
  return;
}


