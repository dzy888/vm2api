// 0038df10 push_back_mut

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::ControlJob>>::push_back_mut
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::ControlJob>>
::push_back_mut(ulonglong *param_1,undefined8 *param_2)

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
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar10 = *param_1;
  uVar9 = param_1[3];
  if (uVar9 == uVar10) {
    grow(param_1);
    uVar10 = *param_1;
    uVar9 = param_1[3];
  }
  param_1[3] = uVar9 + 1;
  uVar11 = 0;
  if (uVar10 <= uVar9 + param_1[2]) {
    uVar11 = uVar10;
  }
  uVar10 = param_1[1];
  lVar12 = ((uVar9 + param_1[2]) - uVar11) * 0x68;
  *(undefined8 *)(uVar10 + 0x60 + lVar12) = param_2[0xc];
  uVar2 = param_2[0xb];
  puVar1 = (undefined8 *)(uVar10 + 0x50 + lVar12);
  *puVar1 = param_2[10];
  puVar1[1] = uVar2;
  uVar2 = param_2[9];
  puVar1 = (undefined8 *)(uVar10 + 0x40 + lVar12);
  *puVar1 = param_2[8];
  puVar1[1] = uVar2;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[7];
  puVar1 = (undefined8 *)(uVar10 + 0x30 + lVar12);
  *puVar1 = param_2[6];
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(uVar10 + 0x20 + lVar12);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(uVar10 + 0x10 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(uVar10 + lVar12) = uVar2;
  ((undefined8 *)(uVar10 + lVar12))[1] = uVar3;
  return uVar10 + lVar12;
}


