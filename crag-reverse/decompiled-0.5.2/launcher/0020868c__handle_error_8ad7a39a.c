// 0020868c handle_error

/* alloc[12e961f32105355]::raw_vec::handle_error */

void __rustcall alloc[12e961f32105355]::raw_vec::handle_error(longlong param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    (*(code *)PTR_capacity_overflow_0021ad78)();
  }
  (*(code *)PTR_handle_alloc_error_00219eb0)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


