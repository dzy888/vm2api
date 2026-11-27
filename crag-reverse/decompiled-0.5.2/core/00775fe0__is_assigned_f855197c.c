// 00775fe0 is_assigned

/* <char>::is_assigned */

bool __rustcall <char>::is_assigned(uint param_1)

{
  byte bVar1;
  
  if (0x377 < param_1) {
    if (param_1 < 0x3fffe) {
      bVar1 = (*(code *)PTR_lookup_slow_0079b298)();
      return (bool)(bVar1 ^ 1);
    }
    if ((0xfffd < param_1 - 0xf0000 && param_1 != 0xe0001) &&
        (0xef < param_1 - 0xe0100 && 0x5f < param_1 - 0xe0020)) {
      return param_1 - 0x100000 < 0xfffe;
    }
  }
  return true;
}


