// 0038e170 iter

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>::iter
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
::iter(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = param_2[3];
  if (uVar1 == 0) {
    lVar2 = 0;
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar3 = 0;
    if (uVar5 <= param_2[2]) {
      uVar3 = uVar5;
    }
    lVar2 = param_2[2] - uVar3;
    lVar4 = uVar1 - (uVar5 - lVar2);
    if (uVar1 < uVar5 - lVar2 || lVar4 == 0) {
      uVar5 = uVar1 + lVar2;
      lVar4 = 0;
    }
  }
  uVar1 = param_2[1];
  *param_1 = lVar2 * 0x3b0 + uVar1;
  param_1[1] = uVar5 * 0x3b0 + uVar1;
  param_1[2] = uVar1;
  param_1[3] = lVar4 * 0x3b0 + uVar1;
  return;
}


