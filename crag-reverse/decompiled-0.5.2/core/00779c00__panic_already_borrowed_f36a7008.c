// 00779c00 panic_already_borrowed

/* core[c0acaeba6ab4c2e0]::cell::panic_already_borrowed */

void __rustcall
core[c0acaeba6ab4c2e0]::cell::panic_already_borrowed
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_007991a8)(param_4,param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


