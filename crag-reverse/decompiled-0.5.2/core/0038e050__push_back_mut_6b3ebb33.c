// 0038e050 push_back_mut

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>::push_back_mut
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::server::Turn>>
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
  (*(code *)PTR_memcpy_00799008)(lVar2,0x3b0);
  return;
}


