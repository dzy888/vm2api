// 006feb90 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>>

/* WARNING: Switch with 1 destination removed at 0x006febb4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,
   core[c0acaeba6ab4c2e0]::io::error::Error>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == '\0') {
    if (*(longlong *)(param_1 + 8) == 0) {
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0x10) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0x10) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
        return;
      }
    }
    else if (*(longlong *)(param_1 + 0x18) != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,4);
      return;
    }
  }
  return;
}


