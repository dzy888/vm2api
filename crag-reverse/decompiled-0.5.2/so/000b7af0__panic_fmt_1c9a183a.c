// 000b7af0 panic_fmt

/* core[c0acaeba6ab4c2e0]::panicking::panic_fmt */

void __rustcall core[c0acaeba6ab4c2e0]::panicking::panic_fmt(void)

{
  code *pcVar1;
  
  (*(code *)PTR_rust_begin_unwind_000c3a60)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


