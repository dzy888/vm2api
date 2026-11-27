// 0026cde0 <(<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0},tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0},
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio[d7d91d38da47d894]::time::sleep::Sleep)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>
          (longlong param_1)

{
  longlong *plVar1;
  
  <<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_>(param_1 + 0xd8);
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x18))();
  }
  if (*(char *)(param_1 + 0x150) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x158);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x158);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0x160)
  ;
  return;
}


