// 0005f3e0 valid_text

/* agy_bridge[64a9e9deac6c45ce]::protocol::valid_text */

undefined8 __rustcall
agy_bridge[64a9e9deac6c45ce]::protocol::valid_text(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong extraout_RDX;
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined1 auVar21 [16];
  
  <str>::trim_matches::<<char>::is_whitespace>();
  uVar6 = 0;
  if ((param_2 < 0xc00001) && (extraout_RDX != 0)) {
    pbVar1 = param_1 + param_2;
    if (param_2 != 0) {
      pbVar7 = param_1;
      do {
        bVar2 = *pbVar7;
        uVar15 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar14 = bVar2 & 0x1f;
          pbVar16 = pbVar7 + 1;
          if (bVar2 < 0xe0) {
            pbVar7 = pbVar7 + 2;
            uVar15 = uVar14 << 6 | *pbVar16 & 0x3f;
          }
          else {
            uVar15 = pbVar7[2] & 0x3f | (*pbVar16 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              pbVar7 = pbVar7 + 3;
              uVar15 = uVar15 | uVar14 << 0xc;
            }
            else {
              pbVar16 = pbVar7 + 3;
              pbVar7 = pbVar7 + 4;
              uVar15 = *pbVar16 & 0x3f | uVar15 << 6 | (bVar2 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar7 = pbVar7 + 1;
        }
        if ((uVar15 - 0x7f < 0x21 || uVar15 < 0x20) &&
           ((0xd < uVar15 || ((0x2600U >> (uVar15 & 0x1f) & 1) == 0)))) {
          return 0;
        }
      } while (pbVar7 != pbVar1);
    }
    pbVar17 = (byte *)0x0;
    pbVar16 = (byte *)0x0;
    pbVar7 = param_1;
    do {
      while (pbVar20 = pbVar7, pbVar20 != pbVar1) {
        bVar2 = *pbVar20;
        uVar15 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar14 = bVar2 & 0x1f;
          if (bVar2 < 0xe0) {
            pbVar7 = pbVar20 + 2;
            uVar15 = uVar14 << 6 | pbVar20[1] & 0x3f;
          }
          else {
            uVar15 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              pbVar7 = pbVar20 + 3;
              uVar15 = uVar15 | uVar14 << 0xc;
            }
            else {
              pbVar7 = pbVar20 + 4;
              uVar15 = pbVar20[3] & 0x3f | uVar15 << 6 | (bVar2 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar7 = pbVar20 + 1;
        }
        pbVar17 = pbVar7 + ((longlong)pbVar17 - (longlong)pbVar20);
        pbVar18 = pbVar17;
        if ((uVar15 == 0xd) || (uVar15 == 10)) goto LAB_0005f5de;
      }
      pbVar18 = pbVar16;
      pbVar7 = pbVar1;
LAB_0005f5de:
      auVar21 = <str>::trim_start_matches::<<char>::is_whitespace>(param_1 + (longlong)pbVar16);
      lVar5 = auVar21._8_8_;
      pbVar4 = auVar21._0_8_;
      if ((lVar5 != 0) && (*pbVar4 == 0x2f)) {
        pbVar16 = pbVar4 + 1;
        pbVar4 = pbVar4 + lVar5;
        pbVar13 = (byte *)0x0;
        bVar9 = false;
        pbVar11 = pbVar16;
        pbVar10 = (byte *)0x0;
        do {
          pbVar19 = pbVar10;
          if (bVar9) goto LAB_0005f510;
          bVar9 = true;
          pbVar10 = pbVar11;
          do {
            while( true ) {
              while( true ) {
                do {
                  pbVar12 = pbVar13;
                  if (pbVar10 == pbVar4) {
                    uVar8 = (lVar5 + -1) - (longlong)pbVar19;
                    pbVar11 = pbVar4;
                    pbVar3 = (byte *)(lVar5 + -1);
                    pbVar13 = pbVar12;
                    pbVar10 = pbVar19;
                    goto joined_r0x0005f7af;
                  }
                  bVar2 = *pbVar10;
                  uVar15 = (uint)bVar2;
                  if ((char)bVar2 < '\0') {
                    uVar14 = bVar2 & 0x1f;
                    if (bVar2 < 0xe0) {
                      pbVar11 = pbVar10 + 2;
                      uVar15 = uVar14 << 6 | pbVar10[1] & 0x3f;
                    }
                    else {
                      uVar15 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
                      if (bVar2 < 0xf0) {
                        pbVar11 = pbVar10 + 3;
                        uVar15 = uVar15 | uVar14 << 0xc;
                      }
                      else {
                        pbVar11 = pbVar10 + 4;
                        uVar15 = pbVar10[3] & 0x3f | uVar15 << 6 | (bVar2 & 7) << 0x12;
                      }
                    }
                  }
                  else {
                    pbVar11 = pbVar10 + 1;
                  }
                  pbVar13 = pbVar12 + ((longlong)pbVar11 - (longlong)pbVar10);
                  if ((uVar15 < 0x21) && ((0x100003e00U >> ((ulonglong)uVar15 & 0x3f) & 1) != 0))
                  goto LAB_0005f620;
                  pbVar10 = pbVar11;
                } while (uVar15 < 0x85);
                uVar14 = uVar15 >> 8;
                if (0x1f < uVar14) break;
                if (uVar14 == 0) {
                  if ((PTR_WHITESPACE_MAP_000c3c38[uVar15 & 0xff] & 1) != 0) goto LAB_0005f620;
                }
                else if ((uVar14 == 0x16) && (uVar15 == 0x1680)) goto LAB_0005f620;
              }
              if (uVar14 == 0x20) break;
              if ((uVar14 == 0x30) && (uVar15 == 0x3000)) goto LAB_0005f620;
            }
          } while (((byte)PTR_WHITESPACE_MAP_000c3c38[uVar15 & 0xff] >> 1 & 1) == 0);
LAB_0005f620:
          bVar9 = false;
          uVar8 = (longlong)pbVar12 - (longlong)pbVar19;
          pbVar3 = pbVar12;
          pbVar10 = pbVar13;
joined_r0x0005f7af:
        } while (uVar8 == 0);
        if (uVar8 < 0x10) {
          pbVar4 = pbVar19;
          do {
            if (pbVar16[(longlong)pbVar4] == 0x2f) goto LAB_0005f510;
            pbVar4 = pbVar4 + 1;
          } while (pbVar3 != pbVar4);
        }
        else {
          lVar5 = (*(code *)PTR_memchr_aligned_000c3cb0)(uVar8,uVar8);
          pbVar4 = (byte *)0x0;
          if (lVar5 == 1) goto LAB_0005f510;
        }
        pbVar4 = (byte *)0x0;
        if ((byte)((pbVar16[(longlong)pbVar19] & 0xdf) + 0xbf) < 0x1a) {
          while( true ) {
            bVar2 = pbVar16[(longlong)pbVar19];
            pbVar4 = (byte *)0x0;
            if ((((9 < (byte)(bVar2 - 0x30)) && (0x19 < (byte)((bVar2 & 0xdf) + 0xbf))) &&
                (bVar2 != 0x5f)) && (bVar2 != 0x2d)) break;
            pbVar19 = pbVar19 + 1;
            if (pbVar3 == pbVar19) {
              return 0;
            }
          }
        }
      }
LAB_0005f510:
      pbVar16 = pbVar18;
    } while (pbVar20 != pbVar1);
    uVar6 = CONCAT71((int7)((ulonglong)pbVar4 >> 8),1);
  }
  return uVar6;
}


