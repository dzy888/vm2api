// 00357840 ct_eq

/* WARNING: Switch with 1 destination removed at 0x003578ab */
/* <[u8] as subtle[fe4c0592a7414ef1]::ConstantTimeEq>::ct_eq */

byte __rustcall
<[u8]as_subtle[fe4c0592a7414ef1]::ConstantTimeEq>::ct_eq
          (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  
  puVar2 = PTR_<u8>_00799268;
  if (param_2 == param_4) {
    if (param_2 == 0) {
      bVar5 = 1;
    }
    else {
      bVar5 = 1;
      lVar4 = 0;
      do {
        lVar1 = lVar4 + 1;
        bVar3 = (*(code *)puVar2)(*(undefined1 *)(param_1 + lVar4));
        bVar5 = bVar5 & bVar3;
        lVar4 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  else {
    bVar5 = 0;
  }
  return bVar5;
}


