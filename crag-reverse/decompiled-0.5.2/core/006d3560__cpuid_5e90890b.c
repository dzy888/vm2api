// 006d3560 cpuid

/* WARNING: Removing unreachable block (ram,0x006d356a) */
/* polyval[1df58e1208c50bb2]::backend::autodetect::mul_intrinsics::init_get::init_inner::cpuid */

void __rustcall
polyval[1df58e1208c50bb2]::backend::autodetect::mul_intrinsics::init_get::init_inner::cpuid
          (undefined4 *param_1)

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


