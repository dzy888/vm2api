// 00637ea0 <&str,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#5}>

/* <core[c0acaeba6ab4c2e0]::option::Option<&craggemini_core[66f3c71560d70857]::shm::ShmOwner>>::and_then::<&str,
   <craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#5}>
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<&craggemini_core[66f3c71560d70857]::shm::ShmOwner>>::
and_then::
<&str,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_>::_closure_0_::_closure_5_>
          (longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  if (param_1 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  (*(code *)PTR_from_utf8_00799468)(param_4,*(undefined8 *)(param_1 + 0x10));
  if (local_18 == '\0') {
    auVar3._8_8_ = local_8;
    auVar3._0_8_ = local_10;
    return auVar3;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_8;
  return auVar2 << 0x40;
}


