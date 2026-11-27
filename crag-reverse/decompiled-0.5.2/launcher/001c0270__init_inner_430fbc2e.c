// 001c0270 init_inner

/* polyval[1df58e1208c50bb2]::backend::autodetect::mul_intrinsics::init_get::init_inner */

void __rustcall
polyval[1df58e1208c50bb2]::backend::autodetect::mul_intrinsics::init_get::init_inner(void)

{
  undefined1 local_20 [8];
  uint local_18;
  undefined1 local_10 [16];
  
  init_inner::cpuid(local_20);
  init_inner::cpuid_count(local_10);
  *PTR_STORAGE_0021a3c8 = (char)((local_18 & 2) >> 1);
  return;
}


