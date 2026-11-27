// 00253d90 <core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (int *param_1)

{
  if (*param_1 != 2) {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (param_1[6] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    return;
  }
  if ((1 < ((uint)*(ulonglong *)(param_1 + 2) & 3) - 2) && ((*(ulonglong *)(param_1 + 2) & 3) != 0))
  {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


