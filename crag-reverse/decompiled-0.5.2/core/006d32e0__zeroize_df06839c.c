// 006d32e0 zeroize

/* <alloc[12e961f32105355]::string::String as zeroize[9db449f162459538]::Zeroize>::zeroize */

void __rustcall
<alloc[12e961f32105355]::string::String_as_zeroize[9db449f162459538]::Zeroize>::zeroize
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1[1];
  uVar2 = param_1[2];
  puVar1 = puVar4 + uVar2;
  (*(code *)PTR_memset_00799090)(param_4,*param_1 - uVar2);
  if (uVar2 != 0) {
    for (uVar3 = uVar2 & 7; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    if (7 < uVar2) {
      do {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4 = puVar4 + 8;
      } while (puVar4 != puVar1);
    }
  }
  param_1[2] = 0;
  return;
}


