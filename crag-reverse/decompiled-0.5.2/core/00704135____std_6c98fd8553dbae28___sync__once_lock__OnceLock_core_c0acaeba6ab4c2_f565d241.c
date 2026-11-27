// 00704135 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::option::Option<i32>>>>::get_or_init<tokio[d7d91d38da47d894]::signal::unix::signal_enable::_closure_0_>::_closure_0_,_>
          (void)

{
  longlong in_RDI;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 local_20 [24];
  undefined1 *local_8;
  
  if (*(int *)(in_RDI + 8) == 0) {
    return;
  }
  local_28 = local_20;
  local_8 = &local_29;
  (*(code *)PTR_call_0079a178)
            (anon_c153c4d816f71af2accb98944a80e600_0_llvm_2617760850115737065,&local_28,
             &anon_c153c4d816f71af2accb98944a80e600_2_llvm_2617760850115737065);
  return;
}


