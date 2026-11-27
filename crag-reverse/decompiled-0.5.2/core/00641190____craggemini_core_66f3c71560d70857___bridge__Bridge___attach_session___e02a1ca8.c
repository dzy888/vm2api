// 00641190 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#2}>

/* <core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::any::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#2}>
    */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::any::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_>::_closure_0_::_closure_2_>
          (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 == lVar2) {
    return 0;
  }
  while ((lVar3 = lVar1 + 0x18, *(longlong *)(lVar1 + 0x10) != 0xb ||
         (*(longlong *)((longlong)*(longlong **)(lVar1 + 8) + 3) != 0x32765f676e69725f ||
          **(longlong **)(lVar1 + 8) != 0x676e69725f6d6873))) {
    lVar1 = lVar3;
    if (lVar3 == lVar2) {
      *param_1 = lVar3;
      return 0;
    }
  }
  *param_1 = lVar3;
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
}


