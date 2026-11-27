// 000b7840 expect_failed

/* core[c0acaeba6ab4c2e0]::option::expect_failed */

void __rustcall core[c0acaeba6ab4c2e0]::option::expect_failed(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_fmt_000c3e90)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


