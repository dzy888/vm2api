// 00757480 modified

/* <std[6c98fd8553dbae28]::fs::Metadata>::modified */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::fs::Metadata>::modified(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  
  uVar1 = *(ulonglong *)(param_2 + 0x80);
  ppuVar2 = &PTR_DAT_007967f8;
  if (uVar1 < 1000000000) {
    ppuVar2 = *(undefined ***)(param_2 + 0x78);
  }
  uVar3 = 0xffffffff;
  if (uVar1 < 1000000000) {
    uVar3 = (int)uVar1;
  }
  *param_1 = ppuVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  return param_1;
}


