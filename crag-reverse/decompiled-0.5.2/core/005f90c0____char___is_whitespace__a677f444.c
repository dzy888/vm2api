// 005f90c0 <<char>::is_whitespace>

/* <str>::trim_start_matches::<<char>::is_whitespace> */

undefined1  [16] __rustcall
<str>::trim_start_matches::<<char>::is_whitespace>(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 == (byte *)0x0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  pbVar2 = (byte *)0x0;
  pbVar4 = param_1;
  do {
    bVar7 = *pbVar4;
    uVar5 = (ulonglong)bVar7;
    if ((char)bVar7 < '\0') {
      uVar6 = bVar7 & 0x1f;
      if (bVar7 < 0xe0) {
        pbVar1 = pbVar4 + 2;
        uVar3 = uVar6 << 6 | pbVar4[1] & 0x3f;
      }
      else {
        uVar3 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (0xef < bVar7) {
          pbVar1 = pbVar4 + 4;
          uVar3 = pbVar4[3] & 0x3f | uVar3 << 6 | (bVar7 & 7) << 0x12;
          uVar5 = (ulonglong)uVar3;
          goto joined_r0x005f9198;
        }
        pbVar1 = pbVar4 + 3;
        uVar3 = uVar3 | uVar6 << 0xc;
      }
      uVar5 = (ulonglong)uVar3;
    }
    else {
      pbVar1 = pbVar4 + 1;
      uVar3 = (uint)bVar7;
    }
joined_r0x005f9198:
    if ((4 < uVar3 - 9) && (uVar6 = (uint)uVar5, uVar6 != 0x20)) {
      if (uVar6 < 0x85) goto LAB_005f922c;
      uVar3 = (uint)(uVar5 >> 8);
      if (uVar3 < 0x20) {
        if ((uVar5 & 0xffffff00) == 0) {
          bVar7 = PTR_WHITESPACE_MAP_00799868[uVar5 & 0xff];
        }
        else {
          if (uVar3 != 0x16) goto LAB_005f922c;
          bVar7 = uVar6 == 0x1680;
        }
      }
      else if (uVar3 == 0x20) {
        bVar7 = (byte)PTR_WHITESPACE_MAP_00799868[uVar5 & 0xff] >> 1;
      }
      else {
        if (uVar3 != 0x30) goto LAB_005f922c;
        bVar7 = uVar6 == 0x3000;
      }
      if ((bVar7 & 1) == 0) goto LAB_005f922c;
    }
    pbVar2 = pbVar1 + ((longlong)pbVar2 - (longlong)pbVar4);
    pbVar4 = pbVar1;
  } while (pbVar1 != param_1 + (longlong)param_2);
  pbVar2 = param_2;
LAB_005f922c:
  auVar8._8_8_ = (longlong)param_2 - (longlong)pbVar2;
  auVar8._0_8_ = param_1 + (longlong)pbVar2;
  return auVar8;
}


