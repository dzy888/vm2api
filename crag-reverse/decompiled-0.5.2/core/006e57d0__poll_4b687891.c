// 006e57d0 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll
   <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::maybe_move_runtime::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *in_FS_OFFSET;
  
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    param_2 = (code *)0x2d;
    lVar3 = (*(code *)PTR_expect_failed_00799440)
                      (param_4,&anon_48246b2c7bc3818a1cbc30620defa29e_34_llvm_17816610714767121267);
    uVar4 = (uint)param_4;
LAB_006e582e:
    if (uVar4 != 1) goto LAB_006e5803;
    param_2 = std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
              <tokio[d7d91d38da47d894]::runtime::context::Context>;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + 0x48) = 0;
  }
  else {
    lVar3 = *in_FS_OFFSET + -0x138;
    bVar1 = *(byte *)(*in_FS_OFFSET + -0xf0);
    uVar4 = (uint)bVar1;
    if (bVar1 != 0) goto LAB_006e582e;
  }
  *(undefined1 *)(lVar3 + 0x44) = 0;
LAB_006e5803:
  tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run(lVar2,param_2);
  return 0;
}


