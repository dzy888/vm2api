// 0020abc0 pad_formatted_parts

/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts */

bool __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad_formatted_parts
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  short *psVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 local_78;
  ulonglong local_70;
  short *local_68;
  longlong local_60;
  ulonglong local_58;
  int local_4c;
  ulonglong local_48;
  undefined8 *local_40;
  uint local_34;
  
  uVar7 = *(ushort *)((longlong)param_1 + 0x14);
  uVar8 = (ulonglong)uVar7;
  if (uVar7 == 0) {
    uVar5 = write_formatted_parts(*param_1,param_1[1]);
    return (bool)uVar5;
  }
  local_78 = *param_2;
  uVar12 = param_2[1];
  psVar9 = (short *)param_2[2];
  lVar10 = param_2[3];
  local_48 = param_1[2];
  local_70 = uVar12;
  local_68 = psVar9;
  local_60 = lVar10;
  if ((local_48 & 0x1000000) == 0) {
    uVar11 = (uint)local_48;
  }
  else {
    local_40 = param_1;
    cVar4 = (**(code **)(param_1[1] + 0x18))(param_4,uVar12);
    if (cVar4 != '\0') {
      return true;
    }
    local_78 = 1;
    local_70 = 0;
    uVar8 = (ulonglong)(ushort)(uVar7 - (ushort)uVar12);
    if (uVar7 < (ushort)uVar12) {
      uVar8 = 0;
    }
    uVar11 = (uint)local_48 & 0x9fe00000 | 0x20000030;
    *(uint *)(local_40 + 2) = uVar11;
    uVar12 = 0;
    param_1 = local_40;
  }
  for (; lVar10 != 0; lVar10 = lVar10 + -1) {
    if (*psVar9 == 0) {
      uVar6 = *(ulonglong *)(psVar9 + 4);
    }
    else if (*psVar9 == 1) {
      uVar7 = psVar9[1];
      if (uVar7 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (ulonglong)
                (((uVar7 + 0x7d8f0 & uVar7 + 0xdfc18 ^ uVar7 + 0x7ff9c & uVar7 + 0x5fff6) >> 0x11) +
                1);
      }
    }
    else {
      uVar6 = *(ulonglong *)(psVar9 + 8);
    }
    bVar13 = CARRY8(uVar12,uVar6);
    uVar12 = uVar12 + uVar6;
    if (bVar13) {
      uVar12 = 0xffffffffffffffff;
    }
    psVar9 = psVar9 + 0xc;
  }
  if (uVar8 <= uVar12) {
    uVar5 = write_formatted_parts(*param_1,param_1[1],&local_78);
    param_1[2] = local_48;
    return (bool)uVar5;
  }
  local_4c = (int)uVar8;
  local_34 = local_4c - (int)uVar12;
  switch(uVar11 >> 0x1d & 3) {
  case 0:
    local_58 = 0;
    break;
  default:
    local_58 = (ulonglong)local_34;
    break;
  case 2:
    local_58 = (ulonglong)((local_34 & 0xffff) >> 1);
  }
  uVar1 = *param_1;
  lVar10 = param_1[1];
  uVar11 = (int)local_58 + 1;
  local_40 = param_1;
  while (uVar7 = (short)uVar11 - 1, uVar11 = (uint)uVar7, uVar7 != 0) {
    cVar4 = (**(code **)(lVar10 + 0x20))();
    if (cVar4 != '\0') {
      return true;
    }
  }
  cVar4 = write_formatted_parts(uVar1,lVar10,&local_78);
  if (cVar4 != '\0') {
    return true;
  }
  local_34 = local_34 - (int)local_58;
  sVar2 = (short)local_58;
  sVar3 = (short)local_4c;
  uVar11 = 0xffff;
  do {
    if ((short)(((sVar2 + (short)uVar12) - sVar3) + (short)uVar11) == -1) {
      uVar11 = local_34;
      break;
    }
    cVar4 = (**(code **)(lVar10 + 0x20))();
    uVar11 = uVar11 + 1;
  } while (cVar4 == '\0');
  local_40[2] = local_48;
  return (ushort)uVar11 < (ushort)local_34;
}


