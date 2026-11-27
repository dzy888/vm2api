// 0038dd80 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
::grow(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>::
  grow_one();
  if ((ulonglong)(lVar1 - param_1[3]) < (ulonglong)param_1[2]) {
    lVar2 = *param_1;
    uVar4 = lVar1 - param_1[2];
    uVar3 = param_1[3] - uVar4;
    if (uVar3 <= (ulonglong)(lVar2 - lVar1) && uVar3 < uVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar3,uVar3 * 0x848);
      return;
    }
    (*(code *)PTR_memmove_00799258)(param_1[1],uVar4 * 0x848);
    param_1[2] = lVar2 - uVar4;
  }
  return;
}


