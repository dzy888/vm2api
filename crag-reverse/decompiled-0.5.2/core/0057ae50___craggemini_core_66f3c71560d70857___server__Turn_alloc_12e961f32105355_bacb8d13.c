// 0057ae50 <craggemini_core[66f3c71560d70857]::server::Turn,alloc[12e961f32105355]::alloc::Global>

/* <<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::join_head_and_tail_wrapping::<craggemini_core[66f3c71560d70857]::server::Turn,
   alloc[12e961f32105355]::alloc::Global> */

void __rustcall
<<alloc[12e961f32105355]::collections::vec_deque::drain::Drain<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop::join_head_and_tail_wrapping::
<craggemini_core[66f3c71560d70857]::server::Turn,alloc[12e961f32105355]::alloc::Global>
          (ulonglong *param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 < param_4) {
    uVar1 = param_2 + param_1[2];
    uVar3 = 0;
    if (*param_1 <= uVar1) {
      uVar3 = *param_1;
    }
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
    ::wrap_copy(param_1,param_1[2],uVar1 - uVar3,param_3);
    return;
  }
  uVar3 = *param_1;
  uVar2 = param_2 + param_3 + param_1[2];
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    uVar1 = 0;
  }
  param_3 = param_1[2] + param_3;
  if (param_3 < uVar3) {
    uVar3 = 0;
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
  ::wrap_copy(param_1,uVar2 - uVar1,param_3 - uVar3);
  return;
}


