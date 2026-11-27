// 005e5510 valid_system_prompt

/* craggemini_core[66f3c71560d70857]::tools::valid_system_prompt */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::tools::valid_system_prompt(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (0xc00000 < param_2) {
    return 0;
  }
  if (param_2 != 0) {
    pbVar4 = param_1 + param_2;
    do {
      bVar2 = *param_1;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar3 = bVar2 & 0x1f;
        pbVar1 = param_1 + 1;
        if (bVar2 < 0xe0) {
          param_1 = param_1 + 2;
          uVar5 = uVar3 << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar5 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            param_1 = param_1 + 3;
            uVar5 = uVar5 | uVar3 << 0xc;
          }
          else {
            pbVar1 = param_1 + 3;
            param_1 = param_1 + 4;
            uVar5 = *pbVar1 & 0x3f | uVar5 << 6 | (bVar2 & 7) << 0x12;
          }
        }
      }
      else {
        param_1 = param_1 + 1;
      }
      if (uVar5 - 0x7f < 0x21 || uVar5 < 0x20) {
        if ((0xd < uVar5) || ((0x2600U >> (uVar5 & 0x1f) & 1) == 0)) {
          return 0;
        }
      }
    } while (param_1 != pbVar4);
  }
  return 1;
}


