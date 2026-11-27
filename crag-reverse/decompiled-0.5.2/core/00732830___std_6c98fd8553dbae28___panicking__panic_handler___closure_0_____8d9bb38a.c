// 00732830 <std[6c98fd8553dbae28]::panicking::panic_handler::{closure#0},!>

/* std[6c98fd8553dbae28]::sys::backtrace::__rust_end_short_backtrace::<std[6c98fd8553dbae28]::panicking::panic_handler::{closure#0},
   !> */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::__rust_end_short_backtrace::
<std[6c98fd8553dbae28]::panicking::panic_handler::_closure_0_,_>(void)

{
  code *pcVar1;
  
  panicking::panic_handler::_closure_0_();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


