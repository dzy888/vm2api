// 00265920 <craggemini_core[66f3c71560d70857]::bridge::deliver_synthesized_frame::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0026595b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::deliver_synthesized_frame::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::deliver_synthesized_frame::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)((longlong)param_1 + 0x331) == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x331) == '\x03') {
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
              (param_1 + 0x13);
    *(undefined1 *)((longlong)param_1 + 0x334) = 0;
    return;
  }
  return;
}


