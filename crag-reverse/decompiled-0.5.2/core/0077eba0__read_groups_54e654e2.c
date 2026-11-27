// 0077eba0 read_groups

/* WARNING: Removing unreachable block (ram,0x0077efed) */
/* <core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr::read_groups */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::net::parser::Parser>::read_ipv6_addr::read_groups
          (longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  
  if (param_3 == 0) {
    return ZEXT816(0);
  }
  pbVar11 = (byte *)*param_1;
  lVar12 = param_1[1];
  if (param_3 != 1) {
    uVar2 = read_ipv4_addr();
    if ((uVar2 & 1) != 0) {
      uVar4 = (ushort)(uVar2 >> 0x18);
      uVar3 = 0;
LAB_0077ebf2:
      uVar2 = uVar2 >> 8 & 0xffffff;
      uVar7 = (ushort)uVar2;
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      param_2[uVar3] = uVar7;
      param_2[uVar3 + 1] = uVar4 << 8 | uVar4 >> 8;
      uVar8 = CONCAT71((int7)(CONCAT62((int6)(uVar2 >> 0x10),uVar7) >> 8),1);
      param_3 = uVar3 + 2;
      goto LAB_0077ef9c;
    }
    *param_1 = (longlong)pbVar11;
    param_1[1] = lVar12;
  }
  if (lVar12 != 0) {
    bVar1 = *pbVar11;
    uVar6 = bVar1 - 0x30;
    if (0x39 < bVar1) {
      uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    }
    if (uVar6 < 0x10) {
      pbVar10 = pbVar11 + 1;
      lVar13 = lVar12 + -1;
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        bVar1 = pbVar11[1];
        uVar5 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar5 < 0x10) {
          lVar13 = lVar12 + -2;
          uVar6 = uVar5 | uVar6 << 4;
          if (lVar13 == 0) {
LAB_0077efcf:
            pbVar10 = pbVar11 + lVar12;
            lVar13 = 0;
          }
          else {
            bVar1 = pbVar11[2];
            uVar5 = bVar1 - 0x30;
            if (0x39 < bVar1) {
              uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            }
            if (uVar5 < 0x10) {
              lVar13 = lVar12 + -3;
              uVar6 = uVar5 | uVar6 << 4;
              if (lVar13 == 0) goto LAB_0077efcf;
              bVar1 = pbVar11[3];
              uVar5 = bVar1 - 0x30;
              if (0x39 < bVar1) {
                uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
              }
              if (uVar5 < 0x10) {
                lVar13 = lVar12 + -4;
                uVar6 = uVar5 | uVar6 << 4;
                if (lVar13 == 0) goto LAB_0077efcf;
                pbVar10 = pbVar11 + 4;
                bVar1 = *pbVar10;
                uVar5 = bVar1 - 0x30;
                if (0x39 < bVar1) {
                  uVar5 = (bVar1 - 0x41 & 0xffffffde) + 10;
                }
                if (uVar5 < 0x10) goto LAB_0077ed23;
              }
              else {
                pbVar10 = pbVar11 + 3;
              }
            }
            else {
              pbVar10 = pbVar11 + 2;
            }
          }
        }
      }
      *param_1 = (longlong)pbVar10;
      param_1[1] = lVar13;
      *param_2 = (short)uVar6;
      if (param_3 == 1) {
        uVar8 = 0;
        param_3 = 1;
      }
      else {
        lVar12 = param_3 * 2 + -2;
        uVar3 = 1;
        do {
          if (uVar3 < param_3 - 1) {
            if (lVar13 != 0) {
              bVar1 = *pbVar10;
              *param_1 = (longlong)(pbVar10 + 1);
              param_1[1] = lVar13 + -1;
              if ((bVar1 == 0x3a) && (uVar2 = read_ipv4_addr(), (uVar2 & 1) != 0)) {
                uVar4 = (ushort)(uVar2 >> 0x18);
                goto LAB_0077ebf2;
              }
            }
            *param_1 = (longlong)pbVar10;
            param_1[1] = lVar13;
          }
          if (lVar13 == 0) {
LAB_0077ef88:
            *param_1 = (longlong)pbVar10;
            param_1[1] = lVar13;
            uVar8 = 0;
            param_3 = uVar3;
            break;
          }
          bVar1 = *pbVar10;
          *param_1 = (longlong)(pbVar10 + 1);
          param_1[1] = lVar13 + -1;
          if ((bVar1 != 0x3a) || (lVar13 + -1 == 0)) goto LAB_0077ef88;
          bVar1 = pbVar10[1];
          uVar6 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar6) goto LAB_0077ef88;
          pbVar11 = pbVar10 + 2;
          lVar9 = lVar13 + -2;
          if (lVar9 == 0) {
            lVar9 = 0;
          }
          else {
            bVar1 = pbVar10[2];
            uVar5 = bVar1 - 0x30;
            if (0x39 < bVar1) {
              uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
            }
            if (uVar5 < 0x10) {
              lVar9 = lVar13 + -3;
              uVar6 = uVar5 | uVar6 << 4;
              if (lVar9 != 0) {
                bVar1 = pbVar10[3];
                uVar5 = bVar1 - 0x30;
                if (0x39 < bVar1) {
                  uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                }
                if (0xf < uVar5) {
                  pbVar11 = pbVar10 + 3;
                  goto LAB_0077ef67;
                }
                lVar9 = lVar13 + -4;
                uVar6 = uVar5 | uVar6 << 4;
                if (lVar9 != 0) {
                  bVar1 = pbVar10[4];
                  uVar5 = bVar1 - 0x30;
                  if (0x39 < bVar1) {
                    uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
                  }
                  if (0xf < uVar5) {
                    pbVar11 = pbVar10 + 4;
                    goto LAB_0077ef67;
                  }
                  lVar9 = lVar13 + -5;
                  uVar6 = uVar5 | uVar6 << 4;
                  if (lVar9 != 0) {
                    bVar1 = pbVar10[5];
                    uVar5 = bVar1 - 0x30;
                    if (0x39 < bVar1) {
                      uVar5 = (bVar1 - 0x41 & 0xffffffde) + 10;
                    }
                    pbVar11 = pbVar10 + 5;
                    if (uVar5 < 0x10) goto LAB_0077ef88;
                    goto LAB_0077ef6b;
                  }
                }
              }
              pbVar11 = pbVar10 + lVar13;
              lVar9 = 0;
            }
LAB_0077ef67:
          }
LAB_0077ef6b:
          pbVar10 = pbVar11;
          *param_1 = (longlong)pbVar10;
          param_1[1] = lVar9;
          param_2[uVar3] = (short)uVar6;
          uVar3 = uVar3 + 1;
          uVar8 = 0;
          lVar12 = lVar12 + -2;
          lVar13 = lVar9;
        } while (lVar12 != 0);
      }
      goto LAB_0077ef9c;
    }
  }
LAB_0077ed23:
  *param_1 = (longlong)pbVar11;
  param_1[1] = lVar12;
  uVar8 = 0;
  param_3 = 0;
LAB_0077ef9c:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = param_3;
  return auVar14;
}


