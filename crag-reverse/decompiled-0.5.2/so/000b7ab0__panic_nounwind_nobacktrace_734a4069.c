// 000b7ab0 panic_nounwind_nobacktrace

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_000c4718)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3060,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


