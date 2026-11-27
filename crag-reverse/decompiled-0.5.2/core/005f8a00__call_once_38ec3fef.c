// 005f8a00 call_once

/* <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,
   u64)>>>,)>>::call_once */

longlong __rustcall
<<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
::call_once(undefined8 param_1)

{
  longlong lVar1;
  longlong *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-5] == '\0') {
    <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>,!>>
    ::get_or_init_slow::
    <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::__rust_std_internal_init_fn>
              (*in_FS_OFFSET + -0x38,param_1);
    return lVar1 + -0x38;
  }
  return lVar1 + -0x38;
}


