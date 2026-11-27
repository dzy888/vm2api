// 0055b940 <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0055b9a2 */
/* WARNING: Switch with 1 destination removed at 0x0055b9eb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,
   tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x108) == '\x03') {
    if (*(char *)(param_1 + 0x100) == '\x03') {
      if ((*(byte *)(param_1 + 0x89) < 2) && (*(longlong *)(param_1 + 0x68) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if (1 < *(byte *)(param_1 + 0x59)) {
        return;
      }
      lVar1 = *(longlong *)(param_1 + 0x38);
    }
    else {
      if (*(char *)(param_1 + 0x100) != '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      lVar1 = *(longlong *)(param_1 + 0xd8);
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


