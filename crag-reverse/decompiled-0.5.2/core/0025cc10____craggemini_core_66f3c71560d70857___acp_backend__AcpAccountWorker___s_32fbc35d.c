// 0025cc10 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::set_config_option::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::set_config_option::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::set_config_option::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x160) == '\x03') {
    if (*(char *)(param_1 + 0x158) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                (param_1 + 0xe0);
      *(undefined1 *)(param_1 + 0x159) = 0;
    }
    else if (*(char *)(param_1 + 0x158) == '\0') {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x78);
      return;
    }
  }
  return;
}


