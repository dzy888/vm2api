// 00550fa0 <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}::{closure#0}>>

/* <tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}::{closure#0}>>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::park::CachedParkThread>::block_on::
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_::_closure_0_>>
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *in_FS_OFFSET;
  undefined1 auVar5 [16];
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  
  puVar3 = param_3;
  local_70 = (*(code *)PTR_waker_00799730)();
  if (local_70 != 0) {
    local_50 = &local_70;
    local_40 = 0;
    local_60 = *in_FS_OFFSET + -0x138;
    local_58 = *param_3;
    local_68 = puVar3;
    local_48 = local_50;
    do {
      cVar1 = (char)in_FS_OFFSET[-0x1e];
      if (cVar1 == '\0') {
LAB_0055102b:
        cVar1 = *(char *)((longlong)in_FS_OFFSET + -0xf4);
        *(undefined2 *)((longlong)in_FS_OFFSET + -0xf4) = 0x8001;
      }
      else if (cVar1 == '\x01') {
        (*(code *)PTR_register_00799240)();
        *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
        goto LAB_0055102b;
      }
      cVar2 = (*(code *)PTR_poll_007992b8)();
      if (cVar2 == '\0') {
        lVar4 = 0;
      }
      else {
        auVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
                 ::poll(local_58,&local_50);
        param_3 = auVar5._8_8_;
        lVar4 = auVar5._0_8_ + 1;
      }
      if (cVar1 != '\x02') {
        (*(code *)PTR_drop_007997a8)();
      }
      if (lVar4 != 2) goto LAB_005510cb;
      (*(code *)PTR_park_00799740)();
    } while( true );
  }
  lVar4 = 2;
LAB_005510df:
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = lVar4;
  return auVar5;
LAB_005510cb:
  (**(code **)(local_70 + 0x18))();
  goto LAB_005510df;
}


