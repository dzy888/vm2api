// 001b91b0 cpuid_count

/* WARNING: Removing unreachable block (ram,0x001b91ba) */
/* curve25519_dalek[8828c522c30c513]::backend::get_selected_backend::cpuid_avx2::init_get::init_inner::cpuid_count
    */

void __rustcall
curve25519_dalek[8828c522c30c513]::backend::get_selected_backend::cpuid_avx2::init_get::init_inner::
cpuid_count(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar3;
  return;
}


