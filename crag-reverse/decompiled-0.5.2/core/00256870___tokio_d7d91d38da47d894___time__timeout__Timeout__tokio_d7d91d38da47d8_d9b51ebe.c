// 00256870 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>::connect<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_>>
          (longlong *param_1)

{
  longlong *plVar1;
  
  if (*(char *)((longlong)param_1 + 0x12d) == '\x03') {
    if (*(char *)((longlong)param_1 + 0xa9) == '\x03') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xf);
      if ((int)param_1[0x12] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xf);
      *(undefined1 *)(param_1 + 0x15) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 300) = 0;
  }
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


