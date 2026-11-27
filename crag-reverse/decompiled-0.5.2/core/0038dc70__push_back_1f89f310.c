// 0038dc70 push_back

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>>::push_back
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AcpQueuedWaiter>>
::push_back(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = *param_1;
  uVar7 = param_1[3];
  if (uVar7 == uVar9) {
    grow(param_1);
    uVar9 = *param_1;
    uVar7 = param_1[3];
  }
  param_1[3] = uVar7 + 1;
  uVar10 = 0;
  if (uVar9 <= uVar7 + param_1[2]) {
    uVar10 = uVar9;
  }
  uVar9 = param_1[1];
  lVar8 = ((uVar7 + param_1[2]) - uVar10) * 0x38;
  *(undefined8 *)(uVar9 + 0x30 + lVar8) = param_2[6];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  puVar1 = (undefined8 *)(uVar9 + 0x20 + lVar8);
  *puVar1 = param_2[4];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar9 + 0x10 + lVar8);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(uVar9 + lVar8) = uVar2;
  ((undefined8 *)(uVar9 + lVar8))[1] = uVar3;
  return;
}


