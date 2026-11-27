// 007032c0 grow

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>::grow
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
::grow(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  (*(code *)PTR_grow_one_0079a800)();
  uVar2 = param_1[2];
  if ((ulonglong)(lVar1 - param_1[3]) < uVar2) {
    lVar3 = *param_1;
    uVar4 = lVar1 - uVar2;
    uVar5 = param_1[3] - uVar4;
    if (uVar5 <= (ulonglong)(lVar3 - lVar1) && uVar5 < uVar4) {
      (*(code *)PTR_memcpy_00799008)(uVar2,uVar5 * 8);
      return;
    }
    (*(code *)PTR_memmove_00799258)(uVar2,uVar4 * 8);
    param_1[2] = lVar3 - uVar4;
  }
  return;
}


