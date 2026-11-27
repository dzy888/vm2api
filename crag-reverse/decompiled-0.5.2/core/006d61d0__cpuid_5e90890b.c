// 006d61d0 cpuid

/* WARNING: Removing unreachable block (ram,0x006d61da) */
/* aes[8e0128500682d16e]::autodetect::aes_intrinsics::init_get::init_inner::cpuid */

void __rustcall
aes[8e0128500682d16e]::autodetect::aes_intrinsics::init_get::init_inner::cpuid(undefined4 *param_1)

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


