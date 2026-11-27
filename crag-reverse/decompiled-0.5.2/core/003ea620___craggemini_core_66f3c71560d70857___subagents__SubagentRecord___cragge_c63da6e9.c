// 003ea620 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0},alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>

/* WARNING: Switch with 1 destination removed at 0x003ea712 */
/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar4 = param_2 - (param_2 >> 1);
  uVar2 = 40000;
  if (param_2 < 40000) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  uVar6 = 0x30;
  if (0x30 < uVar2) {
    uVar6 = uVar2;
  }
  uVar5 = param_3;
  if (uVar4 < 0xa3d70a3d70a3d8) goto LAB_003ea684;
  uVar1 = 0;
  while( true ) {
    param_1 = uVar1;
    (*(code *)PTR_handle_error_00798ff0)();
    uVar5 = param_3;
    param_2 = uVar6 * 200;
LAB_003ea684:
    if (uVar6 * 200 == 0) break;
    param_3 = uVar5;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    uVar1 = 8;
    if (lVar3 != 0) {
LAB_003ea6c9:
      drift::sort::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                (param_1,param_2,lVar3,uVar6,param_2 < 0x41,uVar5);
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  lVar3 = 8;
  uVar6 = 0;
  goto LAB_003ea6c9;
}


