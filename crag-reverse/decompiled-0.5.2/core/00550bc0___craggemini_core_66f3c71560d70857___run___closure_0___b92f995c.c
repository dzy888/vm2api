// 00550bc0 <craggemini_core[66f3c71560d70857]::run::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::runtime::Runtime>::block_on::<craggemini_core[66f3c71560d70857]::run::{closure#0}>
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::runtime::Runtime>::block_on::
<craggemini_core[66f3c71560d70857]::run::_closure_0_>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_66c0;
  longlong local_66b8;
  longlong *local_66b0;
  int *local_66a0;
  int *local_6698;
  longlong *local_6690;
  undefined8 local_6020;
  undefined8 local_5020;
  undefined8 local_4020;
  undefined8 local_3020;
  undefined8 local_2020;
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
  local_3020 = 0;
  local_4020 = 0;
  local_5020 = 0;
  local_6020 = 0;
  (*(code *)PTR_memcpy_00799008)(param_4,0x6680);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar2 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar2 == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_enter_00799d90)();
  if (*param_1 == 1) {
    uVar3 = tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::
            <<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                      (param_1 + 0xc,1,lVar2,
                       &anon_92c4c5dab1af02541b6de8b875afdfcf_1_llvm_8405253652347736786);
  }
  else {
    local_6698 = param_1 + 2;
    local_66a0 = param_1 + 0xc;
    local_6690 = &local_66c0;
    local_66c0 = lVar2;
    uVar3 = tokio[d7d91d38da47d894]::runtime::context::runtime::enter_runtime::
            <<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CurrentThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                      (local_66a0,0,&local_66a0,param_3);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
              (local_66c0);
  }
  (*(code *)PTR_drop_00799680)();
  if (local_66b8 != 2) {
    if (local_66b8 == 0) {
      LOCK();
      *local_66b0 = *local_66b0 + -1;
      UNLOCK();
      if (*local_66b0 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      LOCK();
      *local_66b0 = *local_66b0 + -1;
      UNLOCK();
      if (*local_66b0 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
  }
  return uVar3;
}


