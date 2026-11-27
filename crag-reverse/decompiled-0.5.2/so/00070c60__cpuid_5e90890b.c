// 00070c60 cpuid

/* WARNING: Removing unreachable block (ram,0x00070c6a) */
/* sha2[7efb180a76699f7c]::sha512::x86::avx2_cpuid::init_get::init_inner::cpuid */

void __rustcall
sha2[7efb180a76699f7c]::sha512::x86::avx2_cpuid::init_get::init_inner::cpuid(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)cpuid_Version_info(1);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  return;
}


