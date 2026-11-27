// 0073dd60 {closure#0}

/* std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::_closure_0_
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)0x0;
  if (*param_1 != -1) {
    plVar1 = param_1;
  }
  output_filename(param_2,param_3,(char)param_1[3],plVar1);
  return;
}


