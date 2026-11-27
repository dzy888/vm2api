// 00568c60 <craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00568cd8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)((longlong)param_1 + 0x399) == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x399) == '\x03') {
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
              (param_1 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
    if ((*(char *)((longlong)param_1 + 0x39b) == '\0') || (param_1[0x16] == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x39b) = 0;
      return;
    }
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    *(undefined1 *)((longlong)param_1 + 0x39b) = 0;
  }
  return;
}


