// 007016d0 set_waker

/* <tokio[d7d91d38da47d894]::runtime::task::core::Trailer>::set_waker */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Trailer>::set_waker
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


