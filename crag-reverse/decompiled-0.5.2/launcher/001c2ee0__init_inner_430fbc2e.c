// 001c2ee0 init_inner

/* aes[8e0128500682d16e]::autodetect::aes_intrinsics::init_get::init_inner */

void __rustcall aes[8e0128500682d16e]::autodetect::aes_intrinsics::init_get::init_inner(void)

{
  undefined1 local_20 [11];
  byte bStack_15;
  undefined1 local_10 [16];
  
  init_inner::cpuid(local_20);
  init_inner::cpuid_count(local_10);
  *PTR_STORAGE_00219dc8 = bStack_15 >> 1 & 1;
  return;
}


