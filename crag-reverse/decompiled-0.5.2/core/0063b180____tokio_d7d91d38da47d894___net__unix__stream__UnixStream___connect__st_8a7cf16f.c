// 0063b180 <<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0xbd) == '\x03') {
    if (*(char *)(param_1 + 0x39) == '\x03') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 8);
      if (*(int *)(param_1 + 0x20) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 8);
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  return;
}


