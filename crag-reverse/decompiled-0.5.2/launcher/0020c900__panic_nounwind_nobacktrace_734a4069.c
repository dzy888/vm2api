// 0020c900 panic_nounwind_nobacktrace

/* core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_nounwind_nobacktrace(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_fmt_0021ad68)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002191c8,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


