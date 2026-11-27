// 006cdd70 init_inner

/* curve25519_dalek[8828c522c30c513]::backend::get_selected_backend::cpuid_avx2::init_get::init_inner
    */

byte __rustcall
curve25519_dalek[8828c522c30c513]::backend::get_selected_backend::cpuid_avx2::init_get::init_inner
          (void)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auStack_28 [8];
  uint local_20;
  undefined1 local_18 [4];
  uint local_14;
  
  init_inner::cpuid(auStack_28);
  init_inner::cpuid_count(local_18);
  if ((~local_20 & 0xc000000) == 0) {
    uVar1 = core[c0acaeba6ab4c2e0]::core_arch::x86::xsave::_xgetbv();
    bVar3 = (~uVar1 & 6) == 0;
  }
  else {
    bVar3 = false;
  }
  bVar2 = (byte)(local_20 >> 0x1c) & bVar3 & (byte)((local_14 & 0x20) >> 5);
  *PTR_STORAGE_0079a688 = bVar2;
  return bVar2;
}


