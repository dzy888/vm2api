// 006e9200 call_once

/* <tokio[d7d91d38da47d894]::runtime::context::CONTEXT::{K#0}::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut
   core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::context::Context>>,)>>::call_once
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::context::CONTEXT::{K#0}::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::context::Context>>,)>>
::call_once(void)

{
  longlong lVar1;
  longlong *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -0xf0) == '\0') {
    return lVar1 + -0x138;
  }
  if (*(char *)(lVar1 + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar1 + -0xf0) = 0;
    return lVar1 + -0x138;
  }
  return 0;
}


