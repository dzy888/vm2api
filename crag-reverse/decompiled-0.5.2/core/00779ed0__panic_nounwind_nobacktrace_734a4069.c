// 00779ed0 panic_nounwind_nobacktrace

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_0079b310)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007984e8,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


