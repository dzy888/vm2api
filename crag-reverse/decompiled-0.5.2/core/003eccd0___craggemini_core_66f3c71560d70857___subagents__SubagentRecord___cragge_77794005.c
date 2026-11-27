// 003eccd0 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
          (ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  code *pcVar14;
  longlong local_110;
  undefined1 local_f8 [200];
  
  if (param_2 < 0x21) {
LAB_003eccfa:
    shared::smallsort::small_sort_general_with_scratch::
    <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
              (param_1,param_2,param_3,param_4,param_7);
    return;
  }
  local_110 = param_6;
LAB_003ecd35:
  uVar10 = param_2;
  do {
    puVar4 = PTR_memcmp_00799528;
    if (param_5 == 0) {
      drift::sort::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
                (param_1,uVar10,param_3,param_4,1,param_7);
      return;
    }
    uVar7 = uVar10 >> 3;
    uVar9 = uVar7 * 800 + param_1;
    uVar12 = uVar7 * 0x578 + param_1;
    if (uVar10 < 0x40) {
      uVar13 = *(ulonglong *)(param_1 + 0x40);
      uVar1 = *(ulonglong *)(uVar9 + 0x40);
      uVar8 = uVar13;
      if (uVar1 < uVar13) {
        uVar8 = uVar1;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(uVar7,uVar8);
      uVar8 = uVar1 - uVar13;
      if (iVar5 != 0) {
        uVar8 = (longlong)iVar5;
      }
      uVar2 = *(ulonglong *)(uVar12 + 0x40);
      uVar7 = uVar13;
      if (uVar2 < uVar13) {
        uVar7 = uVar2;
      }
      iVar5 = (*(code *)puVar4)(puVar4,uVar7);
      uVar13 = uVar2 - uVar13;
      if (iVar5 != 0) {
        uVar13 = (longlong)iVar5;
      }
      uVar7 = param_1;
      if (-1 < (longlong)(uVar13 ^ uVar8)) {
        iVar5 = (*(code *)PTR_memcmp_00799528)();
        uVar13 = uVar2 - uVar1;
        if (iVar5 != 0) {
          uVar13 = (longlong)iVar5;
        }
        uVar7 = uVar9;
        if ((longlong)(uVar13 ^ uVar8) < 0) {
          uVar7 = uVar12;
        }
      }
    }
    else {
      uVar7 = shared::pivot::median3_rec::
              <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                        (param_1,uVar9,uVar12,uVar7,param_7);
    }
    param_5 = param_5 + -1;
    uVar9 = (uVar7 - param_1 >> 3) * -0x70a3d70a3d70a3d7;
    (*(code *)PTR_memcpy_00799008)(uVar9,200);
    if (local_110 != 0) {
      lVar6 = *(longlong *)(local_110 + 0x40);
      lVar11 = *(longlong *)(uVar7 + 0x40);
      iVar5 = (*(code *)PTR_memcmp_00799528)();
      lVar6 = lVar11 - lVar6;
      if (iVar5 != 0) {
        lVar6 = (longlong)iVar5;
      }
      if (-1 < lVar6) break;
    }
    if (param_4 < uVar10) goto LAB_003ed3f0;
    param_2 = 0;
    uVar12 = param_1;
    uVar13 = uVar9;
    while( true ) {
      pcVar14 = (code *)PTR_memcpy_00799008;
      for (; PTR_memcpy_00799008 = pcVar14, uVar12 < uVar13 * 200 + param_1; uVar12 = uVar12 + 200)
      {
        lVar6 = *(longlong *)(uVar12 + 0x40);
        lVar11 = *(longlong *)(uVar7 + 0x40);
        iVar5 = (*(code *)PTR_memcmp_00799528)();
        lVar6 = lVar11 - lVar6;
        if (iVar5 != 0) {
          lVar6 = (longlong)iVar5;
        }
        (*(code *)PTR_memcpy_00799008)();
        param_2 = param_2 - (lVar6 >> 0x3f);
        pcVar14 = (code *)PTR_memcpy_00799008;
      }
      if (uVar13 == uVar10) break;
      (*pcVar14)();
      uVar12 = uVar12 + 200;
      uVar13 = uVar10;
    }
    (*pcVar14)();
    uVar12 = uVar10 - param_2;
    if (uVar12 != 0) {
      if (uVar10 == param_2 + 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          (*pcVar14)();
          uVar13 = uVar13 + 2;
          (*pcVar14)();
        } while ((uVar12 & 0xfffffffffffffffe) != uVar13);
        if ((uVar12 & 1) == 0) goto LAB_003ed0f6;
      }
      (*pcVar14)(~uVar13 * 200,200);
    }
LAB_003ed0f6:
    if (param_2 == 0) break;
    if (uVar10 < param_2) {
      (*(code *)PTR_panic_fmt_007991a8)();
      goto LAB_003ed40b;
    }
    <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
              (param_2 * 200 + param_1,uVar12,param_3,param_4,param_5,local_f8,param_7);
    uVar10 = param_2;
    if (param_2 < 0x21) goto LAB_003eccfa;
  } while( true );
  if (param_4 < uVar10) {
LAB_003ed3f0:
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  lVar6 = uVar10 * 200;
  uVar12 = 0;
  uVar13 = param_1;
  while( true ) {
    pcVar14 = (code *)PTR_memcpy_00799008;
    for (; PTR_memcpy_00799008 = pcVar14, uVar13 < uVar9 * 200 + param_1; uVar13 = uVar13 + 200) {
      lVar11 = *(longlong *)(uVar13 + 0x40);
      lVar3 = *(longlong *)(uVar7 + 0x40);
      iVar5 = (*(code *)PTR_memcmp_00799528)();
      lVar11 = lVar11 - lVar3;
      if (iVar5 != 0) {
        lVar11 = (longlong)iVar5;
      }
      (*(code *)PTR_memcpy_00799008)();
      uVar12 = (-1 < lVar11) + uVar12;
      pcVar14 = (code *)PTR_memcpy_00799008;
    }
    if (uVar9 == uVar10) break;
    (*pcVar14)();
    uVar12 = uVar12 + 1;
    uVar13 = uVar13 + 200;
    uVar9 = uVar10;
  }
  (*pcVar14)();
  param_2 = uVar10 - uVar12;
  if (param_2 == 0) {
    param_1 = param_1 + lVar6;
    param_2 = 0;
    goto LAB_003eccfa;
  }
  param_1 = param_1 + uVar12 * 200;
  if (uVar10 != uVar12 + 1) {
    lVar6 = lVar6 + param_3 + -200;
    uVar7 = 0;
    do {
      puVar4 = PTR_memcpy_00799008;
      (*(code *)PTR_memcpy_00799008)(lVar6,200);
      uVar7 = uVar7 + 2;
      (*(code *)puVar4)(puVar4,200);
      lVar6 = lVar6 + -400;
    } while ((param_2 & 0xfffffffffffffffe) != uVar7);
    pcVar14 = (code *)PTR_memcpy_00799008;
    if ((param_2 & 1) == 0) goto LAB_003ed379;
  }
  (*pcVar14)(lVar6,200);
LAB_003ed379:
  if (uVar10 < uVar12) {
LAB_003ed40b:
    (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_110 = 0;
  if (param_2 < 0x21) goto LAB_003eccfa;
  goto LAB_003ecd35;
}


