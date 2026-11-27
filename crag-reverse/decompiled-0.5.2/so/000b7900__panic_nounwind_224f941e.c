// 000b7900 panic_nounwind

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_000c4718)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3048,0);
  (*(code *)PTR_panic_nounwind_nobacktrace_000c4790)();
  (*(code *)PTR_panic_fmt_000c3e90)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


