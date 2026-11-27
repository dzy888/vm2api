// 00208679 handle_alloc_error

/* alloc[12e961f32105355]::alloc::handle_alloc_error */

void __rustcall
alloc[12e961f32105355]::alloc::handle_alloc_error(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  (*(code *)PTR___rust_alloc_error_handler_00219c20)();
  if (param_2 == 0) {
    (*(code *)PTR_capacity_overflow_0021ad78)();
  }
  (*(code *)PTR_handle_alloc_error_00219eb0)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


