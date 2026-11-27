// 000be350 fmt

/* <char as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall
<char_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (uint *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  if ((*(byte *)(param_2 + 0x13) & 0x18) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000be385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return;
  }
  if (uVar1 < 0x80) {
    uVar2 = 1;
  }
  else {
    param_4 = (ulonglong)uVar1 & 0xffffffffffffff3f | 0x80;
    if (uVar1 < 0x800) {
      uVar2 = 2;
    }
    else if (uVar1 < 0x10000) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
  }
  (*(code *)PTR_pad_000c3fb8)(param_4,uVar2);
  return;
}


