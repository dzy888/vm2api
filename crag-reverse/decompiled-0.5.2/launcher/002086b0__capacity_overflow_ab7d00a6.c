// 002086b0 capacity_overflow

/* alloc[12e961f32105355]::raw_vec::capacity_overflow */

void __rustcall alloc[12e961f32105355]::raw_vec::capacity_overflow(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_panic_fmt_0021a010)(in_RCX,&PTR_s__rustc_48a229ceaefd4985c50990b14_00218f68);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


