// 000628e0 <u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::<u32, <u32 as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::unstable::heapsort::heapsort::
<u32,<u32_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>(undefined4 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (param_2 >> 1) + param_2;
  do {
    do {
      if (uVar3 == 0) {
        return;
      }
      uVar3 = uVar3 - 1;
      uVar4 = uVar3 - param_2;
      if (uVar3 < param_2) {
        uVar1 = *param_1;
        *param_1 = param_1[uVar3];
        param_1[uVar3] = uVar1;
        uVar4 = 0;
      }
      uVar5 = uVar3;
      if (param_2 < uVar3) {
        uVar5 = param_2;
      }
      uVar6 = uVar4 * 2 + 1;
    } while (uVar5 <= uVar6);
    do {
      uVar7 = uVar6;
      if (uVar4 * 2 + 2 < uVar5) {
        uVar7 = uVar6 + ((uint)param_1[uVar6] < (uint)param_1[uVar4 * 2 + 2]);
      }
      uVar2 = param_1[uVar4];
      if ((uint)param_1[uVar7] <= uVar2) break;
      param_1[uVar4] = param_1[uVar7];
      param_1[uVar7] = uVar2;
      uVar6 = uVar7 * 2 + 1;
      uVar4 = uVar7;
    } while (uVar6 < uVar5);
  } while( true );
}


