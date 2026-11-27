// 00703350 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>>
::grow(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  (*(code *)PTR_grow_one_0079a810)();
  if ((ulonglong)(lVar1 - param_1[3]) < (ulonglong)param_1[2]) {
    lVar2 = *param_1;
    uVar3 = lVar1 - param_1[2];
    uVar4 = param_1[3] - uVar3;
    if (uVar4 <= (ulonglong)(lVar2 - lVar1) && uVar3 > uVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar3 <= uVar4,uVar4 * 0x10);
      return;
    }
    (*(code *)PTR_memmove_00799258)(param_1[1],uVar3 * 0x10);
    param_1[2] = lVar2 - uVar3;
  }
  return;
}


