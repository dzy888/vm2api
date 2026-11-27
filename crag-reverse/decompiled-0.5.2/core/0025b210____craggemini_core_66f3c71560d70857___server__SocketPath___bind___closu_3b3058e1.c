// 0025b210 <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025b29b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[0x5d] == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if ((char)param_1[0x5d] == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_>>
              (param_1 + 0x37);
    <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x32);
    if (param_1[0x32] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)((longlong)param_1 + 0x2ea) = 0;
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)((longlong)param_1 + 0x2e9) = 0;
  }
  return;
}


