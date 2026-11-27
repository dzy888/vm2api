// 005c29a0 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
      ,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar1 = *param_2;
  *param_2 = -1;
  if (lVar1 == -1) {
    uVar4 = (*(code *)PTR_expect_failed_00799440)
                      (param_4,&anon_0acbc551f34e4a0bfb9a607189131925_36_llvm_9953415283177307294);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  (*(code *)PTR_stop_007998b8)();
  uVar4 = (*(code *)PTR__open_00799768)(lVar3,lVar2,param_5,param_6,(int)param_2[3],(int)param_2[4])
  ;
  if (lVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


