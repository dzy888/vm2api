// 0063b050 <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::{closure#0}>

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
    if (*(short *)(param_1 + 0x20) == -1) {
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
        (*(code *)PTR_drop_join_handle_slow_00799088)();
      }
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x1a) == '\x04') {
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect_mio::_closure_0_>
                (param_1 + 0x70);
    }
    if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if (uVar1 != 0) {
      if ((1 < ((uint)uVar1 & 3) - 2) && ((uVar1 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}


