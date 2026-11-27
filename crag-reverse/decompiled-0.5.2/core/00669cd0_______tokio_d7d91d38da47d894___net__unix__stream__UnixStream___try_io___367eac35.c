// 00669cd0 <(),<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::try_io<(),<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#3}>::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::try_io::<(),
   <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::try_io<(),
   <craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}::{closure#3}>::{closure#0}>
   <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::try_io::<(),
   <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::try_io<(),
   <craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   &craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}::{closure#3}>::{closure#0}>
    */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::try_io::
<(),<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::try_io<(),<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_>::_closure_0_::_closure_3_>::_closure_0_>
          (void)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *in_RDX;
  uint uVar4;
  undefined1 local_28;
  undefined7 uStack_27;
  
  (*(code *)PTR_ready_event_0079a320)();
  if (CONCAT71(uStack_27,local_28) != 0) {
    if (*(int *)(*in_RDX + 0x18) == -1) {
      (*(code *)PTR_unwrap_failed_00799278)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>();
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    uVar2 = <craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>::send_to_peer
                      (in_RDX[1],*(undefined4 *)in_RDX[2]);
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = (uint)uVar2 & 3;
    switch(uVar4) {
    case 0:
      cVar1 = *(char *)(uVar2 + 0x10);
      break;
    case 1:
      cVar1 = *(char *)(uVar2 + 0x1f);
      break;
    case 2:
      lVar3 = (*(code *)PTR_get_os_functions_007992e0)();
      cVar1 = (**(code **)(lVar3 + 8))();
      break;
    case 3:
      cVar1 = (char)(uVar2 >> 0x20);
    }
    if (cVar1 != '\r') {
      return uVar2;
    }
    (*(code *)PTR_clear_readiness_0079a190)();
    if ((1 < uVar4 - 2) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
  }
  return 0xd00000003;
}


