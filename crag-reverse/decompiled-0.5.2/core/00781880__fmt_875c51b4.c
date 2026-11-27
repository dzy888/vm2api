// 00781880 fmt

/* WARNING: Removing unreachable block (ram,0x0078190c) */
/* WARNING: Removing unreachable block (ram,0x0078192b) */
/* WARNING: Removing unreachable block (ram,0x00781916) */
/* WARNING: Removing unreachable block (ram,0x0078193e) */
/* <core[c0acaeba6ab4c2e0]::io::error::Custom as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

byte __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Custom_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  byte bVar2;
  
  bVar2 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(param_4,6);
  puVar1 = PTR_field_0079a400;
  (*(code *)PTR_field_0079a400)(param_1 + 4,4,&DAT_00798a18);
  (*(code *)puVar1)(*param_1,5,param_1[1]);
  return bVar2 & 1;
}


