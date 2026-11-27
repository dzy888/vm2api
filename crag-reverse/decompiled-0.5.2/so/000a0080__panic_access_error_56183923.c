// 000a0080 panic_access_error

/* std[6c98fd8553dbae28]::thread::local::panic_access_error */

void __rustcall
std[6c98fd8553dbae28]::thread::local::panic_access_error
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_000c3e90)(param_4,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


