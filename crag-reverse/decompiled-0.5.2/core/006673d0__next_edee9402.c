// 006673d0 next

/* <core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::next */

byte * __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::next(undefined8 *param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  byte *pbVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  
  puVar2 = PTR_WHITESPACE_MAP_00799868;
  bVar12 = *(byte *)((longlong)param_1 + 0x39);
  pbVar1 = (byte *)param_1[1];
  pbVar8 = (byte *)param_1[4];
  pbVar10 = (byte *)param_1[6];
  pbVar11 = (byte *)*param_1;
  do {
    pbVar5 = pbVar11;
    if ((bVar12 & 1) != 0) {
      return (byte *)0x0;
    }
    pbVar7 = pbVar8;
    pbVar3 = pbVar10;
    if (pbVar8 != (byte *)param_1[5]) {
      do {
        bVar12 = *pbVar7;
        uVar4 = (ulonglong)bVar12;
        if ((char)bVar12 < '\0') {
          uVar9 = bVar12 & 0x1f;
          if (bVar12 < 0xe0) {
            pbVar8 = pbVar7 + 2;
            uVar4 = (ulonglong)(uVar9 << 6 | pbVar7[1] & 0x3f);
          }
          else {
            uVar6 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
            if (bVar12 < 0xf0) {
              pbVar8 = pbVar7 + 3;
              uVar4 = (ulonglong)(uVar6 | uVar9 << 0xc);
            }
            else {
              pbVar8 = pbVar7 + 4;
              uVar4 = (ulonglong)(pbVar7[3] & 0x3f | uVar6 << 6 | (bVar12 & 7) << 0x12);
            }
          }
        }
        else {
          pbVar8 = pbVar7 + 1;
        }
        pbVar11 = pbVar8 + ((longlong)pbVar3 - (longlong)pbVar7);
        uVar9 = (uint)uVar4;
        pbVar10 = pbVar11;
        if ((uVar9 < 0x21) && ((0x100003e00U >> (uVar4 & 0x3f) & 1) != 0)) {
LAB_00667420:
          param_1[4] = pbVar8;
          param_1[6] = pbVar11;
          *param_1 = pbVar11;
          bVar12 = 0;
          goto LAB_00667430;
        }
        if (0x84 < uVar9) {
          uVar6 = (uint)(uVar4 >> 8);
          if (uVar6 < 0x20) {
            if ((uVar4 & 0xffffff00) == 0) {
              bVar12 = puVar2[uVar4 & 0xff];
            }
            else {
              if (uVar6 != 0x16) goto LAB_00667477;
              bVar12 = uVar9 == 0x1680;
            }
          }
          else if (uVar6 == 0x20) {
            bVar12 = (byte)puVar2[uVar4 & 0xff] >> 1;
          }
          else {
            if (uVar6 != 0x30) goto LAB_00667477;
            bVar12 = uVar9 == 0x3000;
          }
          if ((bVar12 & 1) != 0) goto LAB_00667420;
        }
LAB_00667477:
        pbVar7 = pbVar8;
        pbVar3 = pbVar11;
      } while (pbVar8 != (byte *)param_1[5]);
      param_1[4] = pbVar8;
      param_1[6] = pbVar11;
    }
    *(undefined1 *)((longlong)param_1 + 0x39) = 1;
    bVar12 = 1;
    pbVar3 = pbVar1;
    pbVar11 = pbVar5;
    if ((*(char *)(param_1 + 7) == '\0') && (pbVar1 == pbVar5)) {
      return (byte *)0x0;
    }
LAB_00667430:
    if (pbVar3 != pbVar5) {
      return pbVar5 + param_1[2];
    }
  } while( true );
}


