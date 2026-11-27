// 006d9790 new_v4

/* <uuid[ef5bff2cf415df3d]::Uuid>::new_v4 */

ulonglong * __rustcall
<uuid[ef5bff2cf415df3d]::Uuid>::new_v4(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = (*(code *)PTR_u128_0079a6f8)();
  param_1[1] = (uVar1 & 0x3f00000000000000 | 0x8000000000000000) >> 0x38 |
               (uVar1 & 0xff000000000000) >> 0x28 | (uVar1 & 0xff0000000000) >> 0x18 |
               (uVar1 & 0xff00000000) >> 8 | (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18
               | (uVar1 & 0xff00) << 0x28 | uVar1 << 0x38;
  *param_1 = param_3 >> 0x38 | (param_3 & 0xff000000000000) >> 0x28 |
             (param_3 & 0xff0000000000) >> 0x18 | (param_3 & 0xff00000000) >> 8 |
             (param_3 & 0xff000000) << 8 | (param_3 & 0xff0000) << 0x18 |
             (param_3 & 0xf00 | 0x4000) << 0x28 | param_3 << 0x38;
  return param_1;
}


