// 006a5240 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>>::
grow(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  (*(code *)PTR_grow_one_0079a3a0)();
  if ((ulonglong)(lVar1 - param_1[3]) < (ulonglong)param_1[2]) {
    lVar2 = *param_1;
    uVar3 = lVar1 - param_1[2];
    uVar4 = param_1[3] - uVar3;
    if (uVar4 <= (ulonglong)(lVar2 - lVar1) && uVar3 > uVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar3 <= uVar4,uVar4 * 0x20);
      return;
    }
    (*(code *)PTR_memmove_00799258)(param_1[1],uVar3 * 0x20);
    param_1[2] = lVar2 - uVar3;
  }
  return;
}


