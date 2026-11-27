// 006ffe10 poll_recv

/* <tokio[d7d91d38da47d894]::signal::RxFuture>::poll_recv */

bool __rustcall
<tokio[d7d91d38da47d894]::signal::RxFuture>::poll_recv
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_18;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))();
  if (lVar1 != 0) {
    local_18 = 0;
    local_b0 = lVar1;
    local_a8 = param_3;
    <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>>
    ::set::<tokio[d7d91d38da47d894]::signal::make_future::_closure_0_>(param_1,&local_b0);
  }
  return lVar1 == 0;
}


