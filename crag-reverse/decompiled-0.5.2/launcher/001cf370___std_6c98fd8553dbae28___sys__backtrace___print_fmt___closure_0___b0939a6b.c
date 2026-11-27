// 001cf370 <std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x001cf381 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sys::backtrace::_print_fmt::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 < 1) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


