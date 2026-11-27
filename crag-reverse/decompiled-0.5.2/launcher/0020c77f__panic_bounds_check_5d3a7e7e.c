// 0020c77f panic_bounds_check

/* core[c0acaeba6ab4c2e0]::panicking::panic_bounds_check */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_bounds_check(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_0021a010)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


