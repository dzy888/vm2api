// 00510870 valid_id

/* craggemini_core[66f3c71560d70857]::protocol::valid_id */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::protocol::valid_id(byte *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_2 - 0x81U < 0xffffffffffffff80) {
    return 0;
  }
  if ((9 < (byte)(*param_1 - 0x30)) && (0x19 < (byte)((*param_1 & 0xdf) + 0xbf))) {
    return 0;
  }
  lVar3 = 0;
  do {
    bVar1 = param_1[lVar3];
    uVar2 = (ulonglong)(bVar1 - 0x30);
    if (9 < (byte)(bVar1 - 0x30)) {
      uVar2 = 0;
      if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
        uVar2 = 0;
        if (0x32 < bVar1 - 0x2d) {
          return 0;
        }
        if ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0) {
          return 0;
        }
      }
    }
    lVar3 = lVar3 + 1;
    if (param_2 == lVar3) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  } while( true );
}


