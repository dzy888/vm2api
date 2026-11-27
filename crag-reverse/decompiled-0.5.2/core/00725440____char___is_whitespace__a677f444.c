// 00725440 <<char>::is_whitespace>

/* <str>::trim_matches::<<char>::is_whitespace> */

undefined1  [16] __rustcall
<str>::trim_matches::<<char>::is_whitespace>(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  
  pbVar7 = param_1 + param_2;
  if (param_2 == 0) {
    pbVar4 = (byte *)0x0;
    pbVar3 = (byte *)0x0;
    pbVar6 = param_1;
joined_r0x007255a3:
    do {
      do {
        pbVar2 = pbVar7;
        if (pbVar6 == pbVar2) goto LAB_007256d1;
        uVar9 = (uint)(char)pbVar2[-1];
        if ((int)uVar9 < 0) {
          bVar10 = pbVar2[-2];
          if ((char)bVar10 < -0x40) {
            bVar1 = pbVar2[-3];
            if ((char)bVar1 < -0x40) {
              pbVar7 = pbVar2 + -4;
              uVar5 = bVar1 & 0x3f | (pbVar2[-4] & 7) << 6;
            }
            else {
              pbVar7 = pbVar2 + -3;
              uVar5 = bVar1 & 0xf;
            }
            uVar5 = bVar10 & 0x3f | uVar5 << 6;
          }
          else {
            pbVar7 = pbVar2 + -2;
            uVar5 = bVar10 & 0x1f;
          }
          uVar9 = uVar9 & 0x3f | uVar5 << 6;
        }
        else {
          pbVar7 = pbVar2 + -1;
        }
      } while ((uVar9 - 9 < 5) || (uVar9 == 0x20));
      if (uVar9 < 0x85) break;
      uVar5 = uVar9 >> 8;
      if (uVar5 < 0x20) {
        if (uVar5 == 0) {
          bVar10 = PTR_WHITESPACE_MAP_00799868[(ulonglong)uVar9 & 0xff];
        }
        else {
          if (uVar5 != 0x16) break;
          bVar10 = uVar9 == 0x1680;
        }
      }
      else if (uVar5 == 0x20) {
        bVar10 = (byte)PTR_WHITESPACE_MAP_00799868[(ulonglong)uVar9 & 0xff] >> 1;
      }
      else {
        if (uVar5 != 0x30) break;
        bVar10 = uVar9 == 0x3000;
      }
    } while ((bVar10 & 1) != 0);
    pbVar4 = pbVar2 + ((longlong)pbVar4 - (longlong)pbVar6);
  }
  else {
    pbVar3 = (byte *)0x0;
    pbVar4 = param_1;
    do {
      bVar10 = *pbVar4;
      uVar8 = (ulonglong)bVar10;
      if ((char)bVar10 < '\0') {
        uVar9 = bVar10 & 0x1f;
        if (bVar10 < 0xe0) {
          pbVar6 = pbVar4 + 2;
          uVar8 = (ulonglong)(uVar9 << 6 | pbVar4[1] & 0x3f);
        }
        else {
          uVar5 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
          if (bVar10 < 0xf0) {
            pbVar6 = pbVar4 + 3;
            uVar8 = (ulonglong)(uVar5 | uVar9 << 0xc);
          }
          else {
            pbVar6 = pbVar4 + 4;
            uVar8 = (ulonglong)(pbVar4[3] & 0x3f | uVar5 << 6 | (bVar10 & 7) << 0x12);
          }
        }
      }
      else {
        pbVar6 = pbVar4 + 1;
      }
      pbVar4 = pbVar3 + ((longlong)pbVar6 - (longlong)pbVar4);
      uVar9 = (uint)uVar8;
      if ((4 < uVar9 - 9) && (uVar9 != 0x20)) {
        if (uVar9 < 0x85) goto joined_r0x007255a3;
        uVar5 = (uint)(uVar8 >> 8);
        if (uVar5 < 0x20) {
          if ((uVar8 & 0xffffff00) == 0) {
            bVar10 = PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff];
          }
          else {
            if (uVar5 != 0x16) goto joined_r0x007255a3;
            bVar10 = uVar9 == 0x1680;
          }
        }
        else if (uVar5 == 0x20) {
          bVar10 = (byte)PTR_WHITESPACE_MAP_00799868[uVar8 & 0xff] >> 1;
        }
        else {
          if (uVar5 != 0x30) goto joined_r0x007255a3;
          bVar10 = uVar9 == 0x3000;
        }
        if ((bVar10 & 1) == 0) goto joined_r0x007255a3;
      }
      pbVar3 = pbVar4;
      pbVar4 = pbVar6;
    } while (pbVar6 != pbVar7);
    pbVar3 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
  }
LAB_007256d1:
  auVar11._8_8_ = (longlong)pbVar4 - (longlong)pbVar3;
  auVar11._0_8_ = param_1 + (longlong)pbVar3;
  return auVar11;
}


