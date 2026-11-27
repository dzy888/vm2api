// 0008ebe0 __rust_alloc_error_handler

/* __rustc[100742bb89c490cb]::__rust_alloc_error_handler */

void __rustcall __rustc[100742bb89c490cb]::__rust_alloc_error_handler(void)

{
  code *pcVar1;
  
  (*(code *)PTR_rust_oom_000c42a8)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


