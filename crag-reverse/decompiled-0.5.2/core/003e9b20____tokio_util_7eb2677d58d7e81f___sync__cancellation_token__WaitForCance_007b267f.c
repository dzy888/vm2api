// 003e9b20 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::{closure#0})>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   <tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::{closure#0})> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::_closure_0_)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  if ((((*(char *)(param_1 + 0xf8) == '\x03') && (*(char *)(param_1 + 0x80) == '\x03')) &&
      (*(char *)(param_1 + 0xf0) == '\x03')) && (*(char *)(param_1 + 0xe8) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0xc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003e9b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0xc0) + 0x18))();
      return;
    }
  }
  return;
}


