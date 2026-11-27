// 0006ca80 <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<u32, <u32 as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

uint * __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (uint *param_1,uint *param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                                (param_1,param_1 + param_4 * 4,param_1 + param_4 * 7);
    param_2 = (uint *)<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                                (param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (uint *)<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                                (param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < *param_3 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *param_3 != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


