// 003e9c60 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,craggemini_core[66f3c71560d70857]::guard::pty_read::{closure#0})>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   craggemini_core[66f3c71560d70857]::guard::pty_read::{closure#0})> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,craggemini_core[66f3c71560d70857]::guard::pty_read::_closure_0_)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  if ((((*(char *)(param_1 + 0x118) == '\x03') && (*(char *)(param_1 + 0x110) == '\x03')) &&
      (*(char *)(param_1 + 0x108) == '\x03')) &&
     ((*(char *)(param_1 + 0x100) == '\x03' && (*(char *)(param_1 + 0xf8) == '\x03')))) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003e9cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x18))();
      return;
    }
  }
  return;
}


