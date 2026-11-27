// 00188f20 nth

/* <std[6c98fd8553dbae28]::env::ArgsOs as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::nth */

void __rustcall
<std[6c98fd8553dbae28]::env::ArgsOs_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::
nth(undefined4 param_1,undefined8 *param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_3 + 8);
  puVar2 = *(undefined8 **)(param_3 + 0x18);
  uVar6 = ((ulonglong)((longlong)puVar2 - (longlong)puVar7) >> 3) * -0x5555555555555555;
  uVar5 = uVar6;
  if (param_4 < uVar6) {
    uVar5 = param_4;
  }
  puVar1 = puVar7 + uVar5 * 3;
  *(undefined8 **)(param_3 + 8) = puVar1;
  puVar4 = PTR___rust_dealloc_00219c40;
  if (puVar2 != puVar7) {
    puVar7 = puVar7 + 1;
    do {
      if (puVar7[-1] != 0) {
        param_1 = (*(code *)puVar4)(param_1,1);
      }
      puVar7 = puVar7 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if ((uVar6 < param_4) || (puVar1 == puVar2)) {
    *param_2 = 0xffffffffffffffff;
  }
  else {
    *(undefined8 **)(param_3 + 8) = puVar1 + 3;
    param_2[2] = puVar1[2];
    uVar3 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar3;
  }
  return;
}


