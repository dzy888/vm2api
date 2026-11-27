// 0040a1d0 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(undefined4 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_3 + 0x18) != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_1,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,core[c0acaeba6ab4c2e0]::io::error::Error>>>
              (&local_60,0x75);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_50 = (*(code *)PTR_enter_007998a8)();
  <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll(&local_60,param_3 + 0x20,param_4);
  (*(code *)PTR_drop_007998b0)();
  if (local_60 != 2) {
    local_50._0_4_ = 2;
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
              ((undefined4 *)(param_3 + 0x18));
    *(undefined4 *)(param_3 + 0x38) = local_30;
    *(undefined4 *)(param_3 + 0x3c) = uStack_2c;
    *(undefined4 *)(param_3 + 0x40) = uStack_28;
    *(undefined4 *)(param_3 + 0x44) = uStack_24;
    *(undefined4 *)(param_3 + 0x28) = local_40;
    *(undefined4 *)(param_3 + 0x2c) = uStack_3c;
    *(undefined4 *)(param_3 + 0x30) = uStack_38;
    *(undefined4 *)(param_3 + 0x34) = uStack_34;
    *(undefined4 *)(param_3 + 0x18) = (undefined4)local_50;
    *(undefined4 *)(param_3 + 0x1c) = local_50._4_4_;
    *(undefined4 *)(param_3 + 0x20) = uStack_48;
    *(undefined4 *)(param_3 + 0x24) = uStack_44;
    (*(code *)PTR_drop_007998b0)();
  }
  *param_2 = CONCAT44(uStack_5c,local_60);
  param_2[1] = uStack_58;
  return param_2;
}


