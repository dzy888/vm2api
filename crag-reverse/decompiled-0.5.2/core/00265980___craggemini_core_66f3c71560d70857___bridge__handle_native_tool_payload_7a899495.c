// 00265980 <craggemini_core[66f3c71560d70857]::bridge::handle_native_tool_payload::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::handle_native_tool_payload::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::handle_native_tool_payload::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x428) == '\x03') {
    if (*(char *)(param_1 + 0x421) == '\x03') {
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                (param_1 + 0x188);
      *(undefined1 *)(param_1 + 0x424) = 0;
    }
    else if ((*(char *)(param_1 + 0x421) == '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x429) = 0;
  }
  return;
}


