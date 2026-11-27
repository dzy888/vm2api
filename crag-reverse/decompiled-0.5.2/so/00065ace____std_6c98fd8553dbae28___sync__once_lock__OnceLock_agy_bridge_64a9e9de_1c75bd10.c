// 00065ace <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::{closure#0}>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::
initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::_closure_0_>::_closure_0_,_>
          (longlong param_1,undefined8 param_2)

{
  undefined1 local_21;
  undefined8 *local_20;
  undefined8 local_18;
  longlong local_10;
  undefined1 *local_8;
  
  if (*(int *)(param_1 + 0x4d0) == 0) {
    return;
  }
  local_20 = &local_18;
  local_8 = &local_21;
  local_18 = param_2;
  local_10 = param_1;
  (*(code *)PTR_call_000c3ef0)
            (anon_a096e19ef5e60642f162739f9e865059_0_llvm_12347187141279222813,&local_20,
             &anon_a096e19ef5e60642f162739f9e865059_2_llvm_12347187141279222813);
  return;
}


