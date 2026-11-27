// 005c28c0 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int local_d0;
  undefined8 local_c8;
  
  lVar1 = *param_2;
  *param_2 = -1;
  if (lVar1 == -1) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_0acbc551f34e4a0bfb9a607189131925_36_llvm_9953415283177307294);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar2 = param_2[2];
  (*(code *)PTR_stop_007998b8)();
  (*(code *)PTR_metadata_00799308)(param_4,lVar2);
  if (local_d0 == 2) {
    param_1[1] = local_c8;
    *param_1 = 2;
  }
  else {
    (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
  }
  if (lVar1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  return param_1;
}


