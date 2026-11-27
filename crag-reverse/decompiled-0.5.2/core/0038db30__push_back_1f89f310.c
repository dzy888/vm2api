// 0038db30 push_back

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>::push_back
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::QueuedWaiter>>
::push_back(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar11 = *param_1;
  uVar9 = param_1[3];
  if (uVar9 == uVar11) {
    grow(param_1);
    uVar11 = *param_1;
    uVar9 = param_1[3];
  }
  param_1[3] = uVar9 + 1;
  uVar12 = 0;
  if (uVar11 <= uVar9 + param_1[2]) {
    uVar12 = uVar11;
  }
  uVar11 = param_1[1];
  lVar10 = ((uVar9 + param_1[2]) - uVar12) * 0x68;
  *(undefined8 *)(uVar11 + 0x60 + lVar10) = param_2[0xc];
  uVar2 = param_2[0xb];
  puVar1 = (undefined8 *)(uVar11 + 0x50 + lVar10);
  *puVar1 = param_2[10];
  puVar1[1] = uVar2;
  uVar2 = param_2[9];
  puVar1 = (undefined8 *)(uVar11 + 0x40 + lVar10);
  *puVar1 = param_2[8];
  puVar1[1] = uVar2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[7];
  puVar1 = (undefined8 *)(uVar11 + 0x30 + lVar10);
  *puVar1 = param_2[6];
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(uVar11 + 0x20 + lVar10);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(uVar11 + 0x10 + lVar10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(uVar11 + lVar10) = uVar2;
  ((undefined8 *)(uVar11 + lVar10))[1] = uVar3;
  return;
}


