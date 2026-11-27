// 0020c920 panic

/* core[c0acaeba6ab4c2e0]::panicking::panic */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_0021a010)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


