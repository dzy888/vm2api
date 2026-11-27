// 0020d670 lookup

/* core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup */

bool __rustcall core[c0acaeba6ab4c2e0]::unicode::unicode_data::white_space::lookup(uint param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 8;
  bVar1 = false;
  if (uVar2 < 0x20) {
    if (uVar2 == 0) {
      bVar1 = (param_1 & 0xff) == 0xa0 || (param_1 & 0xff) == 0x85;
    }
    else if (uVar2 == 0x16) {
      return param_1 == 0x1680;
    }
  }
  else {
    if (uVar2 == 0x20) {
      return (bool)((PTR_WHITESPACE_MAP_0021a000[param_1 & 0xff] & 2) >> 1);
    }
    if (uVar2 == 0x30) {
      return param_1 == 0x3000;
    }
  }
  return bVar1;
}


