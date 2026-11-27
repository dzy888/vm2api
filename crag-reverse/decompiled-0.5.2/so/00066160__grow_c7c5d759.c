// 00066160 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
::grow(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  <alloc[12e961f32105355]::raw_vec::RawVec<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>::
  grow_one();
  if ((ulonglong)(lVar1 - param_1[3]) < (ulonglong)param_1[2]) {
    lVar2 = *param_1;
    uVar4 = lVar1 - param_1[2];
    uVar3 = param_1[3] - uVar4;
    if (uVar3 <= (ulonglong)(lVar2 - lVar1) && uVar3 < uVar4) {
      (*(code *)PTR_memcpy_000c3aa8)(uVar3,uVar3 * 0x98);
      return;
    }
    (*(code *)PTR_memmove_000c3c50)(param_1[1],uVar4 * 0x98);
    param_1[2] = lVar2 - uVar4;
  }
  return;
}


