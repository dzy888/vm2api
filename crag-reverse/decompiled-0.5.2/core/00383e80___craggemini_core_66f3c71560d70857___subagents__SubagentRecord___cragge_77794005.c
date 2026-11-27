// 00383e80 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   <[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::{closure#0}::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::list_subagents::_closure_0_::_closure_1_>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar3 = PTR_memcmp_00799528;
  uVar7 = *(ulonglong *)(param_1 + 0x108);
  uVar2 = *(ulonglong *)(param_1 + 0x40);
  uVar6 = uVar7;
  if (uVar2 < uVar7) {
    uVar6 = uVar2;
  }
  iVar4 = (*(code *)PTR_memcmp_00799528)(param_4,uVar6);
  uVar7 = uVar2 - uVar7;
  if (iVar4 != 0) {
    uVar7 = (longlong)iVar4;
  }
  lVar8 = *(longlong *)(param_1 + 0x298);
  lVar10 = *(longlong *)(param_1 + 0x1d0);
  iVar4 = (*(code *)puVar3)();
  lVar8 = lVar10 - lVar8;
  if (iVar4 != 0) {
    lVar8 = (longlong)iVar4;
  }
  lVar5 = ((longlong)uVar7 >> 0x3f) * -200;
  lVar11 = ((longlong)~uVar7 >> 0x3f) * -200;
  lVar1 = lVar11 + param_1;
  lVar10 = param_1 + 400;
  lVar9 = param_1 + 600;
  lVar12 = lVar10;
  if (lVar8 < 0) {
    lVar9 = lVar10;
    lVar12 = param_1 + 600;
  }
  uVar7 = *(ulonglong *)(lVar12 + 0x40);
  uVar2 = *(ulonglong *)(param_1 + 0x40 + lVar5);
  uVar6 = uVar7;
  if (uVar2 < uVar7) {
    uVar6 = uVar2;
  }
  iVar4 = (*(code *)puVar3)(lVar10,uVar6);
  lVar8 = uVar2 - uVar7;
  if (iVar4 != 0) {
    lVar8 = (longlong)iVar4;
  }
  lVar10 = *(longlong *)(lVar9 + 0x40);
  lVar11 = *(longlong *)(param_1 + 0x40 + lVar11);
  iVar4 = (*(code *)puVar3)();
  lVar10 = lVar11 - lVar10;
  if (iVar4 != 0) {
    lVar10 = (longlong)iVar4;
  }
  lVar11 = lVar1;
  if (lVar10 < 0) {
    lVar11 = lVar12;
  }
  if (lVar8 < 0) {
    lVar12 = lVar1;
    lVar11 = lVar5 + param_1;
  }
  if (lVar10 < 0) {
    lVar12 = lVar9;
  }
  uVar7 = *(ulonglong *)(lVar12 + 0x40);
  if (*(ulonglong *)(lVar11 + 0x40) < *(ulonglong *)(lVar12 + 0x40)) {
    uVar7 = *(ulonglong *)(lVar11 + 0x40);
  }
  (*(code *)puVar3)(puVar3,uVar7);
  puVar3 = PTR_memcpy_00799008;
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  (*(code *)puVar3)();
  return;
}


