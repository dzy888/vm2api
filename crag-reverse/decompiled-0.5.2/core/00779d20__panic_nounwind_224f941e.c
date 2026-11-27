// 00779d20 panic_nounwind

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_0079b310)(&PTR_s__rustc_48a229ceaefd4985c50990b14_007984d0,0);
  (*(code *)PTR_panic_nounwind_nobacktrace_0079b3b0)();
  (*(code *)PTR_panic_fmt_007991a8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


