// 00704182 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::_closure_0_,_>
          (longlong param_1)

{
  undefined1 local_19;
  longlong *local_18;
  longlong local_10;
  undefined1 *local_8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  local_18 = &local_10;
  local_8 = &local_19;
  local_10 = param_1;
  (*(code *)PTR_call_0079a178)
            (anon_c153c4d816f71af2accb98944a80e600_3_llvm_2617760850115737065,&local_18,
             &anon_c153c4d816f71af2accb98944a80e600_2_llvm_2617760850115737065);
  return;
}


