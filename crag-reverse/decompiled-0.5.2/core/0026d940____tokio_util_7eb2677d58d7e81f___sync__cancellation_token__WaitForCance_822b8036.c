// 0026d940 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0},tokio[d7d91d38da47d894]::sync::notify::Notified)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   <craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::{closure#0},
   tokio[d7d91d38da47d894]::sync::notify::Notified)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_,tokio[d7d91d38da47d894]::sync::notify::Notified)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  if ((((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x118) == '\x03')) &&
      (*(char *)(param_1 + 0x110) == '\x03')) &&
     ((*(char *)(param_1 + 0x108) == '\x03' && (*(char *)(param_1 + 0x100) == '\x03')))) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))();
    }
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0026d9d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x180) + 0x18))();
  return;
}


