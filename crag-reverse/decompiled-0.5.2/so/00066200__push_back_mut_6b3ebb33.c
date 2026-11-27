// 00066200 push_back_mut

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::push_back_mut
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::
push_back_mut(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = *param_1;
  uVar3 = param_1[3];
  if (uVar3 == uVar5) {
    grow(param_1);
    uVar5 = *param_1;
    uVar3 = param_1[3];
  }
  param_1[3] = uVar3 + 1;
  uVar6 = 0;
  if (uVar5 <= uVar3 + param_1[2]) {
    uVar6 = uVar5;
  }
  lVar4 = (uVar3 + param_1[2]) - uVar6;
  uVar5 = param_1[1];
  *(undefined8 *)(uVar5 + 0x10 + lVar4 * 0x18) = param_2[2];
  uVar2 = param_2[1];
  puVar1 = (undefined8 *)(uVar5 + lVar4 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  return uVar5 + lVar4 * 0x18;
}


