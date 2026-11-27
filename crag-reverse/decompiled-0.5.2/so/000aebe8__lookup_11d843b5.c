// 000aebe8 lookup

/* core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup */

byte __rustcall core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_1 >> 8;
  bVar2 = 0;
  if (uVar1 < 0x20) {
    if (uVar1 == 0) {
      bVar2 = PTR_WHITESPACE_MAP_000c3c38[param_1 & 0xff];
    }
    else if (uVar1 == 0x16) {
      bVar2 = param_1 == 0x1680;
    }
  }
  else if (uVar1 == 0x20) {
    bVar2 = (byte)PTR_WHITESPACE_MAP_000c3c38[param_1 & 0xff] >> 1;
  }
  else if (uVar1 == 0x30) {
    bVar2 = param_1 == 0x3000;
  }
  return bVar2 & 1;
}


