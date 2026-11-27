// 0038d8a0 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::
grow(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  (*(code *)PTR_grow_one_00799328)();
  if ((ulonglong)(lVar3 - param_1[3]) < (ulonglong)param_1[2]) {
    uVar2 = lVar3 - param_1[2];
    uVar1 = param_1[3] - uVar2;
    if (uVar1 <= (ulonglong)(*param_1 - lVar3) && uVar1 < uVar2) {
      (*(code *)PTR_memcpy_00799008)(lVar3 * 3,uVar1 * 0x18);
      return;
    }
    lVar3 = *param_1 - uVar2;
    (*(code *)PTR_memmove_00799258)(lVar3 * 3,uVar2 * 0x18);
    param_1[2] = lVar3;
  }
  return;
}


