// 005ca050 <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::pool::AgySlot,usize,usize,<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_,_>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#0}>::{closure#0},<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>,<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_,_>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#0}>::{closure#0}>>::{closure#0}>::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<usize,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::pool::AgySlot,
   usize, usize, <core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_, _> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#0}>::{closure#0},
   <usize as
   core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>,
   <core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_, _> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}::{closure#0}>::{closure#0}>>::{closure#0}>::{closure#0}>
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::pool::AgySlot,usize,usize,<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_,_>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::_closure_0_::_closure_0_>::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>,<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<_,_>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count::to_usize<&craggemini_core[66f3c71560d70857]::pool::AgySlot,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::_closure_0_::_closure_0_>::_closure_0_>>::_closure_0_>::_closure_0_>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[1]) {
    uVar2 = param_1[1] - lVar1;
    if (uVar2 == 0x848) {
      uVar3 = 0;
    }
    else {
      uVar2 = (uVar2 >> 3) * -0x2c700f74e3fc22c7;
      puVar4 = (ulonglong *)(lVar1 + 0xfc8);
      uVar3 = 0;
      do {
        param_2 = (ulonglong)((*puVar4 & puVar4[-0x13]) == 0xffffffffffffffff) +
                  (ulonglong)((puVar4[-0x109] & puVar4[-0x11c]) == 0xffffffffffffffff) + param_2;
        uVar3 = uVar3 + 2;
        puVar4 = puVar4 + 0x212;
      } while ((uVar2 & 0x1ffffffffffffe) != uVar3);
      if ((uVar2 & 1) == 0) goto LAB_005ca10c;
    }
    param_2 = (ulonglong)
              ((*(ulonglong *)(lVar1 + 0x780 + uVar3 * 0x848) &
               *(ulonglong *)(lVar1 + 0x6e8 + uVar3 * 0x848)) == 0xffffffffffffffff) + param_2;
  }
LAB_005ca10c:
  lVar1 = param_1[2];
  if (lVar1 != param_1[3]) {
    uVar2 = param_1[3] - lVar1;
    if (uVar2 == 0x848) {
      uVar2 = 0;
    }
    else {
      uVar3 = (uVar2 >> 3) * -0x2c700f74e3fc22c7;
      puVar4 = (ulonglong *)(lVar1 + 0xfc8);
      uVar2 = 0;
      do {
        param_2 = (ulonglong)((*puVar4 & puVar4[-0x13]) == 0xffffffffffffffff) +
                  (ulonglong)((puVar4[-0x109] & puVar4[-0x11c]) == 0xffffffffffffffff) + param_2;
        uVar2 = uVar2 + 2;
        puVar4 = puVar4 + 0x212;
      } while ((uVar3 & 0x1ffffffffffffe) != uVar2);
      if ((uVar3 & 1) == 0) {
        return param_2;
      }
    }
    param_2 = (ulonglong)
              ((*(ulonglong *)(lVar1 + 0x780 + uVar2 * 0x848) &
               *(ulonglong *)(lVar1 + 0x6e8 + uVar2 * 0x848)) == 0xffffffffffffffff) + param_2;
  }
  return param_2;
}


