// 006fe770 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>

/* WARNING: Switch with 1 destination removed at 0x006fe7d1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,
   core[c0acaeba6ab4c2e0]::io::error::Error>,
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
          (char *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*param_1 == '\0') {
    if (*(longlong *)(param_1 + 8) == 0) {
      if (((uint)*(ulonglong *)(param_1 + 0x10) & 3) - 2 < 2) {
        return;
      }
      if ((*(ulonglong *)(param_1 + 0x10) & 3) == 0) {
        return;
      }
      (*(code *)PTR_drop_00799040)();
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
  }
  else {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
    lVar3 = puVar1[1];
  }
  if (lVar3 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


