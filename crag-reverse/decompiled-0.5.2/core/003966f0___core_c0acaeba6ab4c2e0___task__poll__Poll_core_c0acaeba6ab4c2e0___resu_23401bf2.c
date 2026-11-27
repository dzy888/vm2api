// 003966f0 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>,<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::enter::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>>,
   <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}::{closure#0}>
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::enter::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>,<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_::_closure_0_>
          (void)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *in_RCX;
  undefined8 in_RDX;
  char cVar4;
  longlong in_RSI;
  longlong *in_RDI;
  longlong in_FS_OFFSET;
  undefined1 auVar5 [16];
  
  if (*(longlong *)(in_RSI + 8) != 0) {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
    goto LAB_00396813;
  }
  *(undefined8 *)(in_RSI + 8) = 0xffffffffffffffff;
  if (*(longlong *)(in_RSI + 0x10) == 0) {
    lVar3 = 0;
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
              ();
    lVar3 = *(longlong *)(in_RSI + 8) + 1;
  }
  *(undefined8 *)(in_RSI + 0x10) = in_RDX;
  *(longlong *)(in_RSI + 8) = lVar3;
  uVar1 = *in_RCX;
  cVar4 = *(char *)(in_FS_OFFSET + -0xf0);
  if (cVar4 == '\0') {
LAB_00396758:
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
    *(undefined2 *)(in_FS_OFFSET + -0xf4) = 0x8001;
  }
  else if (cVar4 == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    goto LAB_00396758;
  }
  auVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
           ::poll(uVar1);
  if (cVar4 != '\x02') {
    (*(code *)PTR_drop_007997a8)();
  }
  if (*(longlong *)(in_RSI + 8) == 0) {
    *(undefined8 *)(in_RSI + 8) = 0xffffffffffffffff;
    lVar3 = *(longlong *)(in_RSI + 0x10);
    *(undefined8 *)(in_RSI + 0x10) = 0;
    if (lVar3 != 0) {
      *(undefined8 *)(in_RSI + 8) = 0;
      *in_RDI = lVar3;
      *(undefined1 (*) [16])(in_RDI + 1) = auVar5;
      return;
    }
    (*(code *)PTR_expect_failed_00799440)();
  }
  else {
    (*(code *)PTR_panic_already_borrowed_007997b0)();
  }
LAB_00396813:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


