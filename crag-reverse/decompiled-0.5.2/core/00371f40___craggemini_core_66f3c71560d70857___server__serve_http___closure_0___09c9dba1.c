// 00371f40 <craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *(char *)(param_1 + 0x60);
  if (cVar2 == '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    iVar3 = *(int *)(param_1 + 0x18);
    lVar1 = param_1;
  }
  else {
    if (cVar2 == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x98) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x98) + 0x18))();
      }
      if ((((*(char *)(param_1 + 0x180) == '\x03') && (*(char *)(param_1 + 0x108) == '\x03')) &&
          (*(char *)(param_1 + 0x178) == '\x03')) && (*(char *)(param_1 + 0x170) == '\x03')) {
        (*(code *)PTR_drop_007990e0)();
        if (*(longlong *)(param_1 + 0x148) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))();
        }
      }
    }
    else if (cVar2 != '\x04') {
      return;
    }
    <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>(param_1 + 0x50);
    lVar1 = param_1 + 0x28;
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(lVar1);
    iVar3 = *(int *)(param_1 + 0x40);
  }
  if (iVar3 != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(lVar1);
  return;
}


