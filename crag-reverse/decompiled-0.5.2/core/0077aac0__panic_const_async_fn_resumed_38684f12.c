// 0077aac0 panic_const_async_fn_resumed

/* core[c0acaeba6ab4c2e0]::panicking::panic_const::panic_const_async_fn_resumed */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::panic_const::panic_const_async_fn_resumed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_007991a8)(param_4,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


