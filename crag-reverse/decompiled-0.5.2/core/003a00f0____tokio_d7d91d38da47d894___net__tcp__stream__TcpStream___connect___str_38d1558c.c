// 003a00f0 <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,
   u16)>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
          (longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x1a) == '\x03') {
    if ((*(short *)(param_1 + 0x20) == -1) &&
       (cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar2 != '\0')) {
      (*(code *)PTR_drop_join_handle_slow_00799088)();
    }
  }
  else {
    if (*(char *)(param_1 + 0x1a) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      if (*(char *)(param_1 + 0x9c) == '\x03') {
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x70);
        if (*(int *)(param_1 + 0x88) != -1) {
          (*(code *)PTR_close_00799030)();
        }
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x70);
      }
      else if (*(char *)(param_1 + 0x9c) == '\0') {
        (*(code *)PTR_close_00799030)();
      }
    }
    if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if (((uVar1 != 0) && (1 < ((uint)uVar1 & 3) - 2)) && ((uVar1 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}


