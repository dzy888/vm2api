// 0040a3b0 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_188 [23];
  longlong local_d0 [22];
  
  if (*(int *)(param_2 + 0x18) != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>>
              ();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_188[0] = (*(code *)PTR_enter_007998a8)();
  <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(local_d0,param_2 + 0x20,param_3);
  (*(code *)PTR_drop_007998b0)();
  if (local_d0[0] != -1) {
    local_188[0] = CONCAT44(local_188[0]._4_4_,2);
    set_stage(param_2,local_188);
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
  return param_1;
}


