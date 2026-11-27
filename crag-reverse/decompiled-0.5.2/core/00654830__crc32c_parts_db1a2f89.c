// 00654830 crc32c_parts

/* craggemini_core[66f3c71560d70857]::shm::crc32c_parts */

uint __rustcall
craggemini_core[66f3c71560d70857]::shm::crc32c_parts(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte *pbVar8;
  
  uVar6 = *(ulonglong *)PTR_CACHE_0079a260;
  if (uVar6 == 0) {
    uVar6 = (*(code *)PTR_detect_and_initialize_0079a268)();
  }
  if ((uVar6 & 0x800) == 0) {
    uVar3 = (*(uint *)(&DAT_001a344c + (ulonglong)(*param_1 ^ 0xff) * 4) ^ 0xffffff) >> 8 ^
            *(uint *)(&DAT_001a344c +
                     (ulonglong)
                     (byte)((byte)(*(uint *)(&DAT_001a344c + (ulonglong)(*param_1 ^ 0xff) * 4) ^
                                  0xffffff) ^ param_1[1]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[2]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[3]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[4]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[5]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[6]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[7]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[8]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[9]) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[10]) * 4)
    ;
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0xb]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0xc]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0xd]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0xe]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0xf]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0x10]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0x11]) * 4);
    uVar3 = uVar3 >> 8 ^
            *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ param_1[0x12]) * 4);
    bVar7 = (byte)uVar3 ^ param_1[0x13];
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_001a344c + (ulonglong)bVar7 * 4);
    if (param_3 != 0) {
      pbVar8 = param_2;
      uVar4 = uVar3;
      uVar2 = (uint)bVar7;
      if ((param_3 & 1) != 0) {
        uVar4 = uVar3 >> 8 ^
                *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ *param_2) * 4);
        pbVar8 = param_2 + 1;
        uVar2 = uVar4;
      }
      uVar3 = uVar2;
      if (param_3 != 1) {
        uVar3 = uVar4;
        do {
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ *pbVar8) * 4);
          pbVar1 = pbVar8 + 1;
          pbVar8 = pbVar8 + 2;
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_001a344c + (ulonglong)(byte)((byte)uVar3 ^ *pbVar1) * 4);
        } while (pbVar8 != param_2 + param_3);
      }
    }
  }
  else {
    uVar5 = crc32c_sse42(0xffffffff,param_1,0x14);
    uVar3 = crc32c_sse42(uVar5,param_2,param_3);
  }
  return ~uVar3;
}


