// 0063edc0 <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>
          (longlong param_1)

{
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  return;
}


