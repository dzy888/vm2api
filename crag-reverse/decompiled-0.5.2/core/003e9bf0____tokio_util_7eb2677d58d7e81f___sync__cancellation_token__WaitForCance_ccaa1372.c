// 003e9bf0 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0})>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0})> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_>
            (param_1 + 0x48);
  return;
}


