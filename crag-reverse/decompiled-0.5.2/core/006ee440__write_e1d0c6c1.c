// 006ee440 write

/* <std[6c98fd8553dbae28]::hash::random::DefaultHasher as
   core[c0acaeba6ab4c2e0]::hash::Hasher>::write */

void __rustcall
<std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::write
          (ulonglong *param_1,uint *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  param_1[6] = param_1[6] + param_3;
  uVar2 = param_1[8];
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 8 - uVar2;
    uVar7 = param_3;
    if (uVar3 < param_3) {
      uVar7 = uVar3;
    }
    if (uVar3 < 4) {
      uVar1 = 0;
      uVar6 = 0;
      if (1 < uVar7) goto LAB_006ee496;
    }
    else {
      uVar6 = (ulonglong)*param_2;
      uVar1 = 4;
      if (5 < uVar7) {
LAB_006ee496:
        uVar6 = uVar6 | (ulonglong)*(ushort *)((longlong)param_2 + uVar1) << (char)uVar1 * '\b';
        uVar1 = uVar1 | 2;
      }
    }
    if (uVar1 < uVar7) {
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_2 + uVar1) << (sbyte)((int)uVar1 << 3);
    }
    uVar7 = uVar6 << ((char)uVar2 * '\b' & 0x3fU) | param_1[7];
    param_1[7] = uVar7;
    if (param_3 < uVar3) {
      param_1[8] = uVar2 + param_3;
      return;
    }
    uVar1 = param_1[3] ^ uVar7;
    uVar2 = param_1[2];
    uVar6 = *param_1 + uVar2;
    uVar8 = (uVar2 << 0xd | uVar2 >> 0x33) ^ uVar6;
    uVar2 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ param_1[1] + uVar1;
    uVar5 = param_1[1] + uVar1 + uVar8;
    uVar1 = (uVar6 << 0x20 | uVar6 >> 0x20) + uVar2;
    param_1[2] = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar5;
    param_1[3] = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar1;
    param_1[1] = uVar5 << 0x20 | uVar5 >> 0x20;
    *param_1 = uVar1 ^ uVar7;
  }
  uVar4 = (uint)(param_3 - uVar3) & 7;
  uVar2 = param_3 - uVar3 & 0xfffffffffffffff8;
  if (uVar3 < uVar2) {
    uVar7 = *param_1;
    uVar1 = param_1[1];
    uVar6 = param_1[3];
    uVar5 = param_1[2];
    do {
      uVar6 = uVar6 ^ *(ulonglong *)((longlong)param_2 + uVar3);
      uVar7 = uVar7 + uVar5;
      uVar5 = (uVar5 << 0xd | uVar5 >> 0x33) ^ uVar7;
      uVar8 = (uVar6 << 0x10 | uVar6 >> 0x30) ^ uVar1 + uVar6;
      uVar1 = uVar1 + uVar6 + uVar5;
      uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar8;
      uVar5 = (uVar5 << 0x11 | uVar5 >> 0x2f) ^ uVar1;
      uVar1 = uVar1 << 0x20 | uVar1 >> 0x20;
      uVar6 = (uVar8 << 0x15 | uVar8 >> 0x2b) ^ uVar7;
      uVar7 = uVar7 ^ *(ulonglong *)((longlong)param_2 + uVar3);
      uVar3 = uVar3 + 8;
    } while (uVar3 < uVar2);
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    param_1[1] = uVar1;
    *param_1 = uVar7;
  }
  if (uVar4 < 4) {
    uVar2 = 0;
    uVar7 = 0;
    if (uVar4 < 2) goto LAB_006ee5f5;
  }
  else {
    uVar7 = (ulonglong)*(uint *)((longlong)param_2 + uVar3);
    uVar2 = 4;
    if (uVar4 < 6) goto LAB_006ee5f5;
  }
  uVar7 = uVar7 | (ulonglong)*(ushort *)((longlong)param_2 + uVar2 + uVar3) << (char)uVar2 * '\b';
  uVar2 = uVar2 | 2;
LAB_006ee5f5:
  if ((uint)uVar2 < uVar4) {
    uVar7 = uVar7 | (ulonglong)*(byte *)((longlong)param_2 + uVar3 + uVar2) <<
                    (sbyte)((uint)uVar2 << 3);
  }
  param_1[7] = uVar7;
  param_1[8] = (ulonglong)uVar4;
  return;
}


