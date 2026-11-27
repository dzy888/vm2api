// 002f9dc0 <(&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio[d7d91d38da47d894]::time::sleep::Sleep,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(&mut
   tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>,
   tokio[d7d91d38da47d894]::time::sleep::Sleep,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio[d7d91d38da47d894]::time::sleep::Sleep,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>
          (char *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == '\0') {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0x10);
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002f9e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x18))();
  return;
}


