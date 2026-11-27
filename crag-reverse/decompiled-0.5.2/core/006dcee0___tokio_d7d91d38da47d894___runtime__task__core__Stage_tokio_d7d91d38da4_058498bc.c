// 006dcee0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x006dcf0c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,
   u16) as
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>>>
   core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<str
   as 
   tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<(&str,u16)as_tokio[d7d91d38da47d894]::net::addr::sealed::ToSocketAddrsPriv>::to_socket_addrs::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 0) {
    if ((*(longlong *)(param_1 + 2) != -1) && (*(longlong *)(param_1 + 2) != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*param_1 == 1) {
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::into_iter::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 2);
    return;
  }
  return;
}


