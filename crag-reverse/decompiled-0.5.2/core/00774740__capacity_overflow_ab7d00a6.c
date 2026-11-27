// 00774740 capacity_overflow

/* alloc[12e961f32105355]::raw_vec::capacity_overflow */

void __rustcall alloc[12e961f32105355]::raw_vec::capacity_overflow(void)

{
  code *pcVar1;
  undefined8 in_RCX;
  
  (*(code *)PTR_panic_fmt_007991a8)
            (in_RCX,&PTR_anon_b653a1b66957936d0374b020249023da_10_llvm_8452810696759730481_00798158)
  ;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


