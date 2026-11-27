// 0004d380 call_once

/* <<core[c0acaeba6ab4c2e0]::io::error::Error>::from_raw_os_error::FUNCTIONS::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(i32, &mut
   core[c0acaeba6ab4c2e0]::fmt::Formatter)>>::call_once */

ulonglong __rustcall
<<core[c0acaeba6ab4c2e0]::io::error::Error>::from_raw_os_error::FUNCTIONS::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(i32,&mut_core[c0acaeba6ab4c2e0]::fmt::Formatter)>>
::call_once(void)

{
  ulonglong uVar1;
  undefined8 in_RCX;
  longlong local_28;
  undefined8 local_18;
  
  (*(code *)PTR_error_string_000c3d30)();
  uVar1 = (*(code *)PTR_write_str_000c3d28)(in_RCX,local_18);
  if (local_28 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    (*(code *)PTR___rust_dealloc_000c3aa0)(in_RCX,1);
  }
  return uVar1;
}


