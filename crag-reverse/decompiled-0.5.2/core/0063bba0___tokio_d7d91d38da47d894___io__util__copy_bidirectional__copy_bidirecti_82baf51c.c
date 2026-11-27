// 0063bba0 <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional_impl<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063bbf5 */
/* WARNING: Switch with 1 destination removed at 0x0063bc3b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional_impl<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,
   tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional_impl<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    lVar1 = *(longlong *)(param_1 + 200);
  }
  else {
    if (*(char *)(param_1 + 0xf0) != '\x03') {
      return;
    }
    if ((*(byte *)(param_1 + 0x79) < 2) && (*(longlong *)(param_1 + 0x58) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (1 < *(byte *)(param_1 + 0x49)) {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


