// 005ca410 <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::server::Turn,usize,usize,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#2},<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#2}>>::{closure#0}>::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>
   as core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::fold::<usize,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::server::Turn,
   usize, usize, <craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#2}, <usize as
   core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>,
   <craggemini_core[66f3c71560d70857]::server::Runtime>::admit::{closure#2}>>::{closure#0}>::{closure#0}>
    */

longlong __rustcall
<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::fold::
<usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&craggemini_core[66f3c71560d70857]::server::Turn,usize,usize,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_2_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::server::Turn>,<craggemini_core[66f3c71560d70857]::server::Runtime>::admit::_closure_2_>>::_closure_0_>::_closure_0_>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[1]) {
    uVar3 = param_1[1] - lVar1;
    uVar4 = uVar3 / 0x3b0;
    uVar2 = (ulonglong)((uint)uVar4 & 3);
    if (uVar3 < 0xec0) {
      uVar3 = 0;
    }
    else {
      plVar6 = (longlong *)(lVar1 + 0xb98);
      uVar3 = 0;
      do {
        param_2 = param_2 + plVar6[-0x162] + plVar6[-0xec] + plVar6[-0x76] + *plVar6;
        uVar3 = uVar3 + 4;
        plVar6 = plVar6 + 0x1d8;
      } while ((uVar4 & 0xfffffffffffffffc) != uVar3);
      if (uVar2 == 0) goto LAB_005ca4c0;
    }
    lVar5 = 0;
    do {
      param_2 = param_2 + *(longlong *)(uVar3 * 0x3b0 + lVar1 + 0x88 + lVar5);
      lVar5 = lVar5 + 0x3b0;
    } while (uVar2 * 0x3b0 != lVar5);
  }
LAB_005ca4c0:
  lVar1 = param_1[2];
  if (lVar1 != param_1[3]) {
    uVar3 = param_1[3] - lVar1;
    uVar4 = uVar3 / 0x3b0;
    uVar2 = (ulonglong)((uint)uVar4 & 3);
    if (uVar3 < 0xec0) {
      uVar3 = 0;
    }
    else {
      plVar6 = (longlong *)(lVar1 + 0xb98);
      uVar3 = 0;
      do {
        param_2 = param_2 + plVar6[-0x162] + plVar6[-0xec] + plVar6[-0x76] + *plVar6;
        uVar3 = uVar3 + 4;
        plVar6 = plVar6 + 0x1d8;
      } while ((uVar4 & 0xfffffffffffffffc) != uVar3);
      if (uVar2 == 0) {
        return param_2;
      }
    }
    lVar5 = 0;
    do {
      param_2 = param_2 + *(longlong *)(uVar3 * 0x3b0 + lVar1 + 0x88 + lVar5);
      lVar5 = lVar5 + 0x3b0;
    } while (uVar2 * 0x3b0 != lVar5);
  }
  return param_2;
}


