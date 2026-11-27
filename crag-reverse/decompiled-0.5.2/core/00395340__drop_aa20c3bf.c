// 00395340 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = param_1[3];
  if (uVar5 == 0) {
    lVar4 = 0;
    uVar2 = 0;
    lVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar3 = 0;
    if (uVar2 <= param_1[2]) {
      uVar3 = uVar2;
    }
    lVar1 = param_1[2] - uVar3;
    lVar4 = uVar5 - (uVar2 - lVar1);
    if (uVar5 < uVar2 - lVar1 || lVar4 == 0) {
      uVar2 = uVar5 + lVar1;
      lVar4 = 0;
    }
  }
  uVar5 = param_1[1];
  lVar6 = (uVar2 - lVar1) + 1;
  lVar1 = lVar1 * 0x38 + uVar5;
  for (; lVar6 != 1; lVar6 = lVar6 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(lVar1);
    lVar1 = lVar1 + 0x38;
  }
  for (lVar4 = lVar4 + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>(uVar5);
    uVar5 = uVar5 + 0x38;
  }
  return;
}


