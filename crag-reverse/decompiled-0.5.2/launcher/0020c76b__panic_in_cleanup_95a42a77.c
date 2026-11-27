// 0020c76b panic_in_cleanup

/* core[c0acaeba6ab4c2e0]::panicking::panic_in_cleanup */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_in_cleanup(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_nobacktrace_0021ade0)();
  (*(code *)PTR_panic_fmt_0021a010)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


