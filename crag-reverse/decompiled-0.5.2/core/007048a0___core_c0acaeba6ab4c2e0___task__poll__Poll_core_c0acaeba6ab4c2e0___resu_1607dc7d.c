// 007048a0 <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>

/* WARNING: Switch with 1 destination removed at 0x00704914 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,
   core[c0acaeba6ab4c2e0]::io::error::Error>,
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>
          (longlong *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      if (param_1[1] == 0) {
        if (((uint)param_1[2] & 3) - 2 < 2) {
          return;
        }
        if ((param_1[2] & 3U) == 0) {
          return;
        }
        (*(code *)PTR_drop_00799040)();
        return;
      }
      lVar3 = param_1[3];
    }
    else {
      if (param_1[2] == 0) {
        return;
      }
      puVar1 = (undefined8 *)param_1[3];
      pcVar2 = (code *)*puVar1;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      lVar3 = puVar1[1];
    }
    if (lVar3 != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


