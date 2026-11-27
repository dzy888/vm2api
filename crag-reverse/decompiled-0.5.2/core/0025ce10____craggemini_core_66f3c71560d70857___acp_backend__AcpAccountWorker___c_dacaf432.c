// 0025ce10 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::continue_suspended_turn::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::continue_suspended_turn::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::continue_suspended_turn::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0xc78) == '\0') {
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xc78) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
              (param_1 + 0x290);
    <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x278);
    *(undefined4 *)(param_1 + 0xc79) = 0;
  }
  return;
}


