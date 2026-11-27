// 000660f0 push_back_mut

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>::push_back_mut
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<agy_bridge[64a9e9deac6c45ce]::SubagentLifecycle>>
::push_back_mut(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[3];
  if (lVar1 == lVar2) {
    grow(param_1);
    lVar2 = *param_1;
    lVar1 = param_1[3];
  }
  param_1[3] = lVar1 + 1;
  (*(code *)PTR_memcpy_000c3aa8)(lVar2,0x98);
  return;
}


