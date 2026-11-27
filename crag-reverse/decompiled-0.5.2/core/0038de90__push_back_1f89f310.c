// 0038de90 push_back

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>::push_back
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<craggemini_core[66f3c71560d70857]::pool::AgySlot>>
::push_back(longlong *param_1)

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
  (*(code *)PTR_memcpy_00799008)(lVar2,0x848);
  return;
}


