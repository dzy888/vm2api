// 002ecdc0 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drain_and_shutdown::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drain_and_shutdown::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drain_and_shutdown::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
              (param_1 + 0x48);
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\x04') {
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x38);
    return;
  }
  return;
}


