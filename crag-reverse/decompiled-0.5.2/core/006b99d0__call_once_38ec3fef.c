// 006b99d0 call_once

/* <hyper[c4782d5b5c5e3493]::common::date::CACHED::{K#0}::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>>>,)>>::call_once
    */

longlong __rustcall
<hyper[c4782d5b5c5e3493]::common::date::CACHED::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>>>,)>>
::call_once(undefined8 param_1)

{
  longlong lVar1;
  longlong *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET + -0xa0;
  if (*(char *)(*in_FS_OFFSET + -0x60) == '\0') {
    <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::RefCell<hyper[c4782d5b5c5e3493]::common::date::CachedDate>,!>>
    ::get_or_init_slow::<hyper[c4782d5b5c5e3493]::common::date::CACHED::__rust_std_internal_init_fn>
              (lVar1,param_1);
    return lVar1;
  }
  return lVar1;
}


