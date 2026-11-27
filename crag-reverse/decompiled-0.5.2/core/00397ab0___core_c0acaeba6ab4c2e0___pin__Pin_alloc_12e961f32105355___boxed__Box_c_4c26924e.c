// 00397ab0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong local_40;
  longlong local_38;
  
  local_70 = param_2;
  lVar2 = (*(code *)PTR_expect_current_thread_007997c0)();
  if (*(longlong *)(lVar2 + 8) == 0) {
    *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
    lVar3 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    if (lVar3 == 0) {
      (*(code *)PTR_expect_failed_00799440)();
    }
    else {
      *(undefined8 *)(lVar2 + 8) = 0;
      local_48 = &local_70;
      local_50 = param_1;
      local_40 = lVar3;
      local_38 = lVar2;
      <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
      ::with::
      <tokio[d7d91d38da47d894]::runtime::context::set_scheduler<(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::enter<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>>::_closure_0_>::_closure_0_,(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>)>
                (&local_68,&anon_f98aad3bb3e6c606de146d8493d2cfe7_12_llvm_13619962878011216390,
                 &local_50);
      if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          lVar3 = 0;
        }
        else {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
                    ();
          lVar3 = *(longlong *)(lVar2 + 8) + 1;
        }
        *(undefined8 *)(lVar2 + 0x10) = local_68;
        *(longlong *)(lVar2 + 8) = lVar3;
        (*(code *)PTR_drop_00799690)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::scheduler::Context>(param_1);
        if (local_60 == 0) {
          (*(code *)PTR_panic_fmt_007991a8)();
          *(undefined8 *)(lVar2 + 0x10) = local_68;
          *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + 1;
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>>
                    (0,local_58);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>(param_1);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        return local_58;
      }
      (*(code *)PTR_panic_already_borrowed_007997b0)();
    }
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


