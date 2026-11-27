// 002f9d60 <(&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(&mut
   tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002f9d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))();
  return;
}


