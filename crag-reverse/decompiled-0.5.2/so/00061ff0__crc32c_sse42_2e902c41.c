// 00061ff0 crc32c_sse42

/* agy_bridge[64a9e9deac6c45ce]::shm::crc32c_sse42 */

ulonglong __rustcall
agy_bridge[64a9e9deac6c45ce]::shm::crc32c_sse42
          (ulonglong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = param_1 & 0xffffffff;
  if (param_3 < 8) {
    uVar6 = 0;
  }
  else {
    uVar4 = param_1 & 0xffffffff;
    uVar8 = (param_3 - 8 >> 3) + 1;
    uVar7 = (ulonglong)((uint)uVar8 & 7);
    if (param_3 - 8 < 0x38) {
      uVar8 = 0;
      uVar5 = 8;
    }
    else {
      uVar8 = uVar8 & 0xfffffffffffffff8;
      uVar6 = 0;
      do {
        uVar5 = uVar6;
        uVar3 = crc32(uVar4,*(undefined8 *)(param_2 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 8 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 0x10 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 0x18 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 0x20 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 0x28 + uVar5));
        uVar3 = crc32(uVar3,*(undefined8 *)(param_2 + 0x30 + uVar5));
        uVar4 = crc32(uVar3,*(undefined8 *)(param_2 + 0x38 + uVar5));
        uVar6 = uVar5 + 0x40;
        uVar8 = uVar8 - 8;
      } while (uVar8 != 0);
      if (uVar7 == 0) goto LAB_000620aa;
      uVar8 = uVar6;
      uVar5 = uVar5 + 0x48;
    }
    do {
      uVar6 = uVar5;
      uVar4 = crc32(uVar4,*(undefined8 *)(param_2 + uVar8));
      uVar7 = uVar7 - 1;
      uVar8 = uVar6;
      uVar5 = uVar6 + 8;
    } while (uVar7 != 0);
  }
LAB_000620aa:
  uVar7 = uVar6 - param_3;
  if (uVar6 < param_3) {
    uVar8 = (ulonglong)((uint)param_3 & 7);
    uVar5 = param_3 & 7;
    while (uVar5 != 0) {
      uVar1 = crc32((int)uVar4,*(undefined1 *)(param_2 + uVar6));
      uVar4 = (ulonglong)uVar1;
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 - 1;
      uVar5 = uVar8;
    }
    if (uVar7 < 0xfffffffffffffff9) {
      do {
        uVar2 = crc32((int)uVar4,*(undefined1 *)(param_2 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 1 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 2 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 3 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 4 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 5 + uVar6));
        uVar2 = crc32(uVar2,*(undefined1 *)(param_2 + 6 + uVar6));
        uVar1 = crc32(uVar2,*(undefined1 *)(param_2 + 7 + uVar6));
        uVar4 = (ulonglong)uVar1;
        uVar6 = uVar6 + 8;
      } while (param_3 != uVar6);
    }
  }
  return uVar4;
}


