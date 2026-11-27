// 001af5c0 init_inner

/* sha2[7efb180a76699f7c]::sha256::x86::shani_cpuid::init_get::init_inner */

void __rustcall sha2[7efb180a76699f7c]::sha256::x86::shani_cpuid::init_get::init_inner(void)

{
  undefined1 local_20 [8];
  uint local_18;
  undefined4 local_14;
  byte bStack_11;
  undefined1 local_10 [7];
  byte bStack_9;
  
  sha512::x86::avx2_cpuid::init_get::init_inner::cpuid(local_20);
  sha512::x86::avx2_cpuid::init_get::init_inner::cpuid_count(local_10);
  STORAGE = (~local_18 & 0x80200) == 0 & bStack_11 >> 2 & bStack_9 >> 5;
  return;
}


