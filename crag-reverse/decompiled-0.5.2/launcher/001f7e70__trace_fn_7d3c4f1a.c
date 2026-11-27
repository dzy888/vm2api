// 001f7e70 trace_fn

/* std[6c98fd8553dbae28]::backtrace_rs::backtrace::libunwind::trace::trace_fn */

int __rustcall
std[6c98fd8553dbae28]::backtrace_rs::backtrace::libunwind::trace::trace_fn
          (undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(longlong *)(param_2 + 8) + 0x20))();
  return (uint)(bVar1 ^ 1) * 9;
}


