// 005769a0 <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005769c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  return;
}


