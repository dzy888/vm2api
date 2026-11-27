// 00066330 push_back_mut

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::vec::Vec<u8>)>>::push_back_mut */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::vec::Vec<u8>)>>
::push_back_mut(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar8 = *param_1;
  uVar7 = param_1[3];
  if (uVar7 == uVar8) {
    grow(param_1);
    uVar8 = *param_1;
    uVar7 = param_1[3];
  }
  param_1[3] = uVar7 + 1;
  uVar9 = 0;
  if (uVar8 <= uVar7 + param_1[2]) {
    uVar9 = uVar8;
  }
  uVar8 = param_1[1];
  lVar10 = ((uVar7 + param_1[2]) - uVar9) * 0x30;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar10);
  *puVar1 = param_2[4];
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(uVar8 + 0x10 + lVar10);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(uVar8 + lVar10) = uVar2;
  ((undefined8 *)(uVar8 + lVar10))[1] = uVar3;
  return uVar8 + lVar10;
}


