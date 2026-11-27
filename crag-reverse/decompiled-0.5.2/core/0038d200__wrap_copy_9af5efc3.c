// 0038d200 wrap_copy

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>::wrap_copy
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
::wrap_copy(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  pcVar2 = (code *)PTR_memmove_00799258;
  uVar3 = param_3 - param_2;
  if ((uVar3 == 0) || (param_4 == 0)) {
    return;
  }
  uVar4 = *param_1;
  uVar1 = uVar4 + uVar3;
  if (!CARRY8(uVar4,uVar3)) {
    uVar1 = uVar3;
  }
  uVar3 = uVar4 - param_2;
  uVar4 = uVar4 - param_3;
  lVar5 = param_4 - uVar3;
  if (param_4 < uVar3 || lVar5 == 0) {
    if (param_4 < uVar4 || param_4 - uVar4 == 0) {
      (*(code *)PTR_memmove_00799258)(param_4,param_4 * 0x3b0);
      return;
    }
    if (uVar1 < param_4) {
      (*(code *)PTR_memmove_00799258)(param_4,(param_4 - uVar4) * 0x3b0);
    }
    else {
      (*(code *)PTR_memmove_00799258)(param_4,uVar4 * 0x3b0);
    }
  }
  else if (uVar1 < param_4) {
    if (uVar4 < param_4) {
      (*(code *)PTR_memmove_00799258)(param_4,lVar5 * 0x3b0);
      (*(code *)PTR_memmove_00799258)();
      pcVar2 = (code *)PTR_memmove_00799258;
    }
    else {
      (*(code *)PTR_memmove_00799258)(param_4,lVar5 * 0x3b0);
    }
  }
  else {
    lVar5 = param_4 - uVar4;
    if (param_4 < uVar4 || lVar5 == 0) {
      (*(code *)PTR_memmove_00799258)(lVar5,uVar3 * 0x3b0);
    }
    else {
      (*(code *)PTR_memmove_00799258)(lVar5,uVar3 * 0x3b0);
      (*pcVar2)();
    }
  }
  (*pcVar2)();
  return;
}


