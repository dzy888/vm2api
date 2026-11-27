// 000396d0 try_insert

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::
try_insert(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong local_4d8 [154];
  
  (*(code *)PTR_memcpy_000c3aa8)(param_4,0x4d0);
  if (agy_bridge[64a9e9deac6c45ce]::RUNTIME._1232_4_ != 0) {
    initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::_closure_0_>::_closure_0_,_>
              (agy_bridge[64a9e9deac6c45ce]::RUNTIME,local_4d8);
  }
  if (local_4d8[0] == -1) {
    param_1[1] = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_memcpy_000c3aa8)(param_4,0x4d0);
  }
  *param_1 = agy_bridge[64a9e9deac6c45ce]::RUNTIME;
  return;
}


