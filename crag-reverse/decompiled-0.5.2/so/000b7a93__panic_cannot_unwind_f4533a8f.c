// 000b7a93 panic_cannot_unwind

/* core[c0acaeba6ab4c2e0]::panicking::panic_cannot_unwind */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_cannot_unwind(void)

{
  code *pcVar1;
  
  (*(code *)PTR_panic_nounwind_000c43f0)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


