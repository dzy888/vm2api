// 00775ad0 read_ipv4_addr

/* WARNING: Removing unreachable block (ram,0x00775b5f) */
/* <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv4_addr */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv4_addr(longlong *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong unaff_R14;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  pbVar2 = (byte *)*param_1;
  lVar1 = param_1[1];
  if (((lVar1 != 0) && (uVar4 = *pbVar2 - 0x30, uVar4 < 10)) && (lVar10 = lVar1 + -1, lVar10 != 0))
  {
    uVar7 = pbVar2[1] - 0x30;
    if (uVar7 < 10) {
      uVar7 = uVar7 + uVar4 * 10;
      lVar10 = lVar1 + -2;
      if (lVar10 == 0) {
LAB_00775b64:
        pbVar8 = pbVar2 + lVar1;
        lVar10 = 0;
      }
      else if (pbVar2[2] - 0x30 < 10) {
        uVar7 = (pbVar2[2] - 0x30) + uVar7 * 10;
        lVar10 = lVar1 + -3;
        if (lVar10 == 0) goto LAB_00775b64;
        pbVar8 = pbVar2 + 3;
        if ((byte)(*pbVar8 - 0x30) < 10) goto LAB_00775e60;
      }
      else {
        pbVar8 = pbVar2 + 2;
      }
      if ((uVar4 == 0) || (uVar4 = uVar7, 0xff < uVar7)) goto LAB_00775e60;
    }
    else {
      pbVar8 = pbVar2 + 1;
    }
    if ((lVar10 != 0) && (*pbVar8 == 0x2e)) {
      pbVar11 = pbVar8 + 1;
      uVar6 = lVar10 - 1;
      if ((uVar6 == 0) || (uVar7 = pbVar8[1] - 0x30, 9 < uVar7)) {
LAB_00775c75:
        uVar9 = 0;
        uVar13 = uVar6;
      }
      else {
        uVar13 = lVar10 - 2;
        if (uVar13 == 0) goto LAB_00775e60;
        if (pbVar8[2] - 0x30 < 10) {
          uVar12 = (pbVar8[2] - 0x30) + uVar7 * 10;
          unaff_R14 = lVar10 - 3;
          if (unaff_R14 == 0) {
LAB_00775c4d:
            pbVar8 = pbVar8 + lVar10;
            unaff_R14 = 0;
          }
          else if (pbVar8[3] - 0x30 < 10) {
            uVar12 = (pbVar8[3] - 0x30) + uVar12 * 10;
            unaff_R14 = lVar10 - 4;
            if (unaff_R14 == 0) goto LAB_00775c4d;
            pbVar8 = pbVar8 + 4;
            if ((byte)(*pbVar8 - 0x30) < 10) goto LAB_00775c75;
          }
          else {
            pbVar8 = pbVar8 + 3;
          }
          if (uVar7 == 0) goto LAB_00775c75;
          bVar16 = uVar12 < 0x100;
          uVar13 = uVar6;
          if (bVar16) {
            uVar13 = unaff_R14;
          }
          uVar9 = (uint)bVar16;
          if (bVar16) {
            pbVar11 = pbVar8;
          }
          uVar7 = uVar12;
        }
        else {
          pbVar11 = pbVar8 + 2;
          uVar9 = 1;
        }
      }
      if (((uVar9 != 0) && (uVar13 != 0)) && (*pbVar11 == 0x2e)) {
        pbVar8 = pbVar11 + 1;
        uVar6 = uVar13 - 1;
        if ((uVar6 == 0) || (uVar9 = pbVar11[1] - 0x30, 9 < uVar9)) {
LAB_00775d4d:
          bVar16 = false;
          uVar14 = uVar6;
        }
        else {
          uVar14 = uVar13 - 2;
          if (uVar14 == 0) goto LAB_00775e60;
          if (pbVar11[2] - 0x30 < 10) {
            uVar12 = (pbVar11[2] - 0x30) + uVar9 * 10;
            unaff_R14 = (ulonglong)uVar12;
            uVar15 = uVar13 - 3;
            if (uVar15 == 0) {
LAB_00775d25:
              pbVar11 = pbVar11 + uVar13;
              uVar15 = 0;
            }
            else if (pbVar11[3] - 0x30 < 10) {
              unaff_R14 = (ulonglong)((pbVar11[3] - 0x30) + uVar12 * 10);
              uVar15 = uVar13 - 4;
              if (uVar15 == 0) goto LAB_00775d25;
              pbVar11 = pbVar11 + 4;
              if ((byte)(*pbVar11 - 0x30) < 10) goto LAB_00775d4d;
            }
            else {
              pbVar11 = pbVar11 + 3;
            }
            if (uVar9 == 0) goto LAB_00775d4d;
            bVar16 = (uint)unaff_R14 < 0x100;
            uVar14 = uVar6;
            if (bVar16) {
              pbVar8 = pbVar11;
              uVar14 = uVar15;
            }
            uVar9 = (uint)unaff_R14;
          }
          else {
            pbVar8 = pbVar11 + 2;
            bVar16 = true;
            unaff_R14 = uVar14;
          }
        }
        uVar12 = (uint)unaff_R14;
        if (((bVar16) && (uVar14 != 0)) && (*pbVar8 == 0x2e)) {
          if ((uVar14 - 1 == 0) || (uVar5 = pbVar8[1] - 0x30, 9 < uVar5)) {
LAB_00775e2b:
            bVar16 = false;
LAB_00775e2e:
            *param_1 = (longlong)(pbVar8 + 1);
            param_1[1] = uVar14 - 1;
          }
          else {
            if (uVar14 - 2 == 0) {
              *param_1 = (longlong)(pbVar8 + 2);
              param_1[1] = 0;
            }
            else {
              if (pbVar8[2] - 0x30 < 10) {
                uVar12 = (pbVar8[2] - 0x30) + uVar5 * 10;
                lVar10 = uVar14 - 3;
                if (lVar10 == 0) {
LAB_00775e05:
                  pbVar11 = pbVar8 + uVar14;
                  lVar10 = 0;
                }
                else if (pbVar8[3] - 0x30 < 10) {
                  uVar12 = (pbVar8[3] - 0x30) + uVar12 * 10;
                  lVar10 = uVar14 - 4;
                  if (lVar10 == 0) goto LAB_00775e05;
                  pbVar11 = pbVar8 + 4;
                  if ((byte)(*pbVar11 - 0x30) < 10) goto LAB_00775e2b;
                }
                else {
                  pbVar11 = pbVar8 + 3;
                }
                *param_1 = (longlong)pbVar11;
                param_1[1] = lVar10;
                if (uVar5 == 0) goto LAB_00775e2b;
                bVar16 = uVar12 < 0x100;
                if (!bVar16) goto LAB_00775e2e;
                goto LAB_00775e38;
              }
              *param_1 = (longlong)(pbVar8 + 2);
              param_1[1] = uVar14 - 2;
            }
            bVar16 = true;
            uVar12 = uVar5;
          }
LAB_00775e38:
          if (bVar16) {
            pbVar2 = (byte *)(ulonglong)
                             (uVar4 & 0xff |
                             (uVar7 & 0xff) << 8 | (uVar9 & 0xff) << 0x10 | uVar12 << 0x18);
            bVar3 = 1;
            goto LAB_00775e69;
          }
        }
      }
    }
  }
LAB_00775e60:
  *param_1 = (longlong)pbVar2;
  param_1[1] = lVar1;
  bVar3 = 0;
LAB_00775e69:
  return (longlong)pbVar2 << 8 | (ulonglong)bVar3;
}


