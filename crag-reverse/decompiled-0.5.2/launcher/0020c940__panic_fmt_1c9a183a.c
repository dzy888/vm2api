// 0020c940 panic_fmt

/* core[c0acaeba6ab4c2e0]::panicking::panic_fmt */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_fmt(void)

{
  code *pcVar1;
  
  (*(code *)PTR_rust_begin_unwind_00219c10)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


