// 0049e6b0 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::{closure#1}>::{closure#0}>
   core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 800;
    lVar6 = param_4 * 0x578;
    param_1 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                        (param_1,param_1 + lVar4,param_1 + lVar6);
    param_2 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                        (param_2,param_2 + lVar4,param_2 + lVar6,param_4,param_5);
    param_3 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                        (param_3,lVar4 + param_3,lVar6 + param_3,param_4,param_5);
  }
  puVar2 = PTR_memcmp_00799528;
  uVar8 = *(ulonglong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_2 + 0x40);
  iVar3 = (*(code *)PTR_memcmp_00799528)();
  uVar7 = lVar4 - uVar8;
  if (iVar3 != 0) {
    uVar7 = (longlong)iVar3;
  }
  uVar1 = *(ulonglong *)(param_3 + 0x40);
  uVar5 = uVar8;
  if (uVar1 < uVar8) {
    uVar5 = uVar1;
  }
  iVar3 = (*(code *)puVar2)(puVar2,uVar5);
  uVar8 = uVar1 - uVar8;
  if (iVar3 != 0) {
    uVar8 = (longlong)iVar3;
  }
  if (-1 < (longlong)(uVar8 ^ uVar7)) {
    iVar3 = (*(code *)PTR_memcmp_00799528)();
    uVar8 = uVar1 - lVar4;
    if (iVar3 != 0) {
      uVar8 = (longlong)iVar3;
    }
    param_1 = param_2;
    if ((longlong)(uVar8 ^ uVar7) < 0) {
      param_1 = param_3;
    }
  }
  return param_1;
}


