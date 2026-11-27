// 00395850 drop

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    lVar6 = 0;
    uVar4 = 0;
    lVar3 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar5 = 0;
    if (uVar4 <= param_1[2]) {
      uVar5 = uVar4;
    }
    lVar3 = param_1[2] - uVar5;
    lVar6 = uVar2 - (uVar4 - lVar3);
    if (uVar2 < uVar4 - lVar3 || lVar6 == 0) {
      uVar4 = uVar2 + lVar3;
      lVar6 = 0;
    }
  }
  uVar2 = param_1[1];
  lVar7 = lVar3 * 0x20 + uVar2 + 0x18;
  for (lVar3 = (uVar4 - lVar3) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    plVar1 = (longlong *)(lVar7 + -0x18);
    lVar7 = lVar7 + 0x20;
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar3 = uVar2 + 0x18;
  for (lVar6 = lVar6 + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
    plVar1 = (longlong *)(lVar3 + -0x18);
    lVar3 = lVar3 + 0x20;
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}


