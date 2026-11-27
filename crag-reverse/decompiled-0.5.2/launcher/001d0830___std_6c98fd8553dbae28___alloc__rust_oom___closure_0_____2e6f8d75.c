// 001d0830 <std[6c98fd8553dbae28]::alloc::rust_oom::{closure#0},!>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_end_short_backtrace::<std[6c98fd8553dbae28]::alloc::rust_oom::{closure#0},
   !> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_end_short_backtrace::
<std[6c98fd8553dbae28]::alloc::rust_oom::_closure_0_,_>(void)

{
  code *pcVar1;
  
  alloc::rust_oom::_closure_0_();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


