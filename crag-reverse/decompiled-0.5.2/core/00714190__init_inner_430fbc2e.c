// 00714190 init_inner

/* sha2[7efb180a76699f7c]::sha512::x86::avx2_cpuid::init_get::init_inner */

byte __rustcall sha2[7efb180a76699f7c]::sha512::x86::avx2_cpuid::init_get::init_inner(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 auStack_28 [8];
  uint local_20;
  undefined1 local_18 [4];
  uint local_14;
  
  init_inner::cpuid(auStack_28);
  init_inner::cpuid_count(local_18);
  if ((~local_20 & 0xc000000) == 0) {
    uVar1 = core[c0acaeba6ab4c2e0]::core_arch::x86::xsave::_xgetbv();
    bVar2 = (~uVar1 & 6) == 0;
  }
  else {
    bVar2 = false;
  }
  STORAGE = (byte)(local_20 >> 0x1c) & bVar2 & (byte)((local_14 & 0x20) >> 5);
  return STORAGE;
}


