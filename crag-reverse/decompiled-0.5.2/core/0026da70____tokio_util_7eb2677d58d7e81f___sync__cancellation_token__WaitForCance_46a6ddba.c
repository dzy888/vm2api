// 0026da70 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::join_next::{closure#0},<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::{closure#0})>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::join_next::{closure#0},
   <tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::{closure#0})> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::join_next::_closure_0_,<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::_closure_0_)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  if ((((*(char *)(param_1 + 0x110) == '\x03') && (*(char *)(param_1 + 0x98) == '\x03')) &&
      (*(char *)(param_1 + 0x108) == '\x03')) && (*(char *)(param_1 + 0x100) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0xd8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0026dadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x18))();
      return;
    }
  }
  return;
}


