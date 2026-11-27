// 00660290 drop

/* WARNING: Switch with 1 destination removed at 0x006602a5 */
/* <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,
   tokio[d7d91d38da47d894]::io::blocking::Buf)> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::File,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,
   core[c0acaeba6ab4c2e0]::io::error::Error>> as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
  if (cVar2 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))();
  return;
}


