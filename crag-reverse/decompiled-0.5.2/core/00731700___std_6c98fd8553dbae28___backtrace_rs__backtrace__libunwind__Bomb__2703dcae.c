// 00731700 <std[6c98fd8553dbae28]::backtrace_rs::backtrace::libunwind::Bomb>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::backtrace_rs::backtrace::libunwind::Bomb>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::backtrace_rs::backtrace::libunwind::Bomb>
          (ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  if ((param_1 & 1) == 0) {
    return;
  }
  (*(code *)PTR_panic_fmt_007991a8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00797268);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


