// 0020d4d0 panic_const_rem_by_zero

/* core[c0acaeba6ab4c2e0]::panicking::panic_const::panic_const_rem_by_zero */

void __rustcall
core[c0acaeba6ab4c2e0]::panicking::panic_const::panic_const_rem_by_zero
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_0021a010)(param_4,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


