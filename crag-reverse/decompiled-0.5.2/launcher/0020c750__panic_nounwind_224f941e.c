// 0020c750 panic_nounwind

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_0021ad68)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002191b0,0);
  (*(code *)PTR_panic_nounwind_nobacktrace_0021ade0)();
  (*(code *)PTR_panic_fmt_0021a010)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


