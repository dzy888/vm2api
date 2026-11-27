// 0077f260 fmt_decimal

/* <core[c0acaeba6ab4c2e0]::time::Duration as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt::fmt_decimal
    */

undefined1 __rustcall
<core[c0acaeba6ab4c2e0]::time::Duration_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt::fmt_decimal
          (longlong param_1,ulonglong param_2,uint param_3,ulonglong param_4,undefined8 param_5,
          longlong param_6,char *param_7,longlong param_8)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  ushort uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 *local_b8;
  ulonglong *local_b0;
  char **local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  char *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_44;
  undefined8 local_40;
  byte local_38;
  
  local_90 = param_7;
  local_88 = param_8;
  local_40 = 0x3030303030303030;
  local_38 = 0x30;
  uVar14 = *(uint *)(param_1 + 0x10);
  local_80 = param_5;
  local_78 = param_6;
  if (param_3 == 0) {
    uVar19 = (ulonglong)*(ushort *)(param_1 + 0x16);
    uVar16 = 0;
LAB_0077f5db:
    local_50 = uVar16;
  }
  else {
    uVar19 = (ulonglong)*(ushort *)(param_1 + 0x16);
    uVar16 = (ulonglong)*(ushort *)(param_1 + 0x16);
    local_50 = 9;
    if ((uVar14 & 0x10000000) != 0) {
      local_50 = uVar16;
    }
    uVar15 = (uint)param_4;
    if (local_50 != 0) {
      uVar23 = (ulonglong)param_3 % (param_4 & 0xffffffff);
      uVar11 = (uint)uVar23;
      cVar7 = (char)((ulonglong)param_3 / (param_4 & 0xffffffff)) + '0';
      local_40 = CONCAT71(0x30303030303030,cVar7);
      if (uVar11 == 0) {
        uVar16 = 1;
      }
      else {
        uVar12 = param_4 & 0xffffffff;
        uVar22 = uVar12 / 10;
        iVar21 = (int)uVar22;
        iVar17 = (int)local_50;
        if (iVar17 == 1) {
LAB_0077f443:
          bVar24 = uVar11 == iVar21 * 5;
          if ((uint)(iVar21 * 5) <= uVar11) {
LAB_0077f534:
            uVar23 = (ulonglong)*(byte *)((longlong)&local_44 + local_50 + 3);
            if (bVar24) goto LAB_0077f548;
            goto LAB_0077f551;
          }
LAB_0077f453:
          goto LAB_0077f5df;
        }
        if (uVar15 < 10) {
LAB_0077f859:
          (*(code *)PTR_panic_const_div_by_zero_00799f50)();
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        uVar2 = uVar23 % uVar22;
        uVar11 = (uint)uVar2;
        local_40._0_2_ = CONCAT11((char)(uVar23 / uVar22) + '0',cVar7);
        local_40 = CONCAT62(0x303030303030,(undefined2)local_40);
        if (uVar11 == 0) {
          uVar16 = 2;
        }
        else {
          uVar23 = uVar12 / 100;
          iVar21 = (int)uVar23;
          if (iVar17 == 2) goto LAB_0077f443;
          if (uVar15 < 100) goto LAB_0077f859;
          uVar22 = uVar2 % uVar23;
          uVar11 = (uint)uVar22;
          local_40._0_3_ = CONCAT12((char)(uVar2 / uVar23) + '0',(undefined2)local_40);
          local_40 = CONCAT53(0x3030303030,(undefined3)local_40);
          if (uVar11 == 0) {
            uVar16 = 3;
            goto LAB_0077f5db;
          }
          uVar23 = uVar12 / 1000;
          iVar21 = (int)uVar23;
          if (iVar17 == 3) goto LAB_0077f443;
          if (uVar15 < 1000) goto LAB_0077f859;
          uVar2 = uVar22 % uVar23;
          uVar11 = (uint)uVar2;
          local_40._0_4_ = CONCAT13((char)(uVar22 / uVar23) + '0',(undefined3)local_40);
          local_40 = CONCAT44(0x30303030,(undefined4)local_40);
          if (uVar11 == 0) {
            uVar16 = 4;
            goto LAB_0077f5db;
          }
          uVar23 = uVar12 / 10000;
          iVar21 = (int)uVar23;
          if (iVar17 == 4) goto LAB_0077f443;
          if (uVar15 < 10000) goto LAB_0077f859;
          uVar11 = (uint)(uVar2 % uVar23);
          local_40._0_5_ = CONCAT14((char)(uVar2 / uVar23) + '0',(undefined4)local_40);
          local_40 = CONCAT35(0x303030,(undefined5)local_40);
          if (uVar11 == 0) {
            uVar16 = 5;
            goto LAB_0077f5db;
          }
          uVar22 = param_4 >> 5 & 0x7ffffff;
          iVar21 = (int)(uVar22 / 0xc35);
          if (iVar17 == 5) goto LAB_0077f443;
          if (uVar15 < 100000) goto LAB_0077f859;
          uVar20 = (ushort)(uVar22 / 0xc35);
          uVar13 = (ushort)(uVar2 % uVar23);
          uVar11 = (uint)uVar13 % (uint)uVar20;
          uVar10 = (ushort)uVar11;
          local_40._0_6_ = CONCAT15((char)(uVar13 / uVar20) + '0',(undefined5)local_40);
          local_40 = CONCAT26(0x3030,(undefined6)local_40);
          if (uVar10 == 0) {
            uVar16 = 6;
            goto LAB_0077f5db;
          }
          iVar21 = (int)(uVar12 / 1000000);
          if (iVar17 == 6) {
LAB_0077f440:
            uVar11 = (uint)uVar10;
            goto LAB_0077f443;
          }
          if (uVar15 < 1000000) goto LAB_0077f859;
          uVar1 = (uint)(ushort)(uVar12 / 1000000);
          uVar10 = (ushort)(uVar11 % uVar1);
          local_40._0_7_ = CONCAT16((char)(uVar11 / uVar1) + '0',(undefined6)local_40);
          local_40 = CONCAT17(0x30,(undefined7)local_40);
          if (uVar10 == 0) {
            uVar16 = 7;
            goto LAB_0077f5db;
          }
          iVar21 = (int)(uVar12 / 10000000);
          if (iVar17 == 7) goto LAB_0077f440;
          if (uVar15 < 10000000) goto LAB_0077f859;
          uVar13 = (ushort)(byte)(uVar12 / 10000000);
          bVar9 = (byte)((uVar10 & 0xff) % uVar13);
          local_40 = CONCAT17((char)((uVar10 & 0xff) / uVar13) + '0',(undefined7)local_40);
          if (bVar9 == 0) {
            uVar16 = 8;
          }
          else {
            if (iVar17 == 8) {
              bVar4 = (99999999 < uVar15) * '\x05';
              bVar24 = bVar9 == bVar4;
              if (bVar4 <= bVar9) goto LAB_0077f534;
              goto LAB_0077f453;
            }
            if (uVar15 < 100000000) goto LAB_0077f859;
            local_38 = bVar9 | 0x30;
            uVar16 = 9;
          }
        }
      }
      goto LAB_0077f5db;
    }
    if (param_3 < uVar15 * 5) {
      uVar16 = 0;
    }
    else {
      uVar23 = param_2 & 0xffffffff;
      if (param_3 == uVar15 * 5) {
LAB_0077f548:
        if ((uVar23 & 1) == 0) goto LAB_0077f5df;
      }
LAB_0077f551:
      uVar23 = uVar16;
      if (local_50 != 0) {
        do {
          uVar12 = uVar23 - 1;
          bVar9 = *(byte *)((longlong)&local_44 + uVar23 + 3);
          cVar7 = bVar9 + 1;
          if (0x38 < bVar9) {
            cVar7 = '0';
          }
          *(char *)((longlong)&local_44 + uVar23 + 3) = cVar7;
        } while ((0x38 < bVar9) && (uVar23 = uVar12, uVar12 != 0));
        if (bVar9 < 0x39) goto LAB_0077f5df;
      }
      if (param_2 == 0xffffffffffffffff) {
        local_a0 = 0;
        bVar24 = false;
        goto LAB_0077f5ed;
      }
      param_2 = param_2 + 1;
    }
  }
LAB_0077f5df:
  bVar24 = true;
  local_a0 = 1;
  local_98 = param_2;
LAB_0077f5ed:
  uVar15 = 9;
  if ((ushort)uVar19 < 9) {
    uVar15 = (uint)uVar19;
  }
  local_70 = (ulonglong)uVar15;
  if ((uVar14 & 0x10000000) == 0) {
    local_70 = uVar16;
  }
  local_d0 = &local_a0;
  local_c8 = &local_80;
  local_c0 = &local_70;
  local_b8 = &local_40;
  local_b0 = &local_50;
  local_a8 = &local_90;
  if ((uVar14 & 0x8000000) != 0) {
    local_58 = (ulonglong)*(ushort *)(param_1 + 0x14);
    uVar23 = (ulonglong)(-0x41 < *param_7);
    if ((param_8 != 1) && (uVar23 = uVar23 + (-0x41 < param_7[1]), param_8 != 2)) {
      uVar23 = uVar23 + (-0x41 < param_7[2]);
    }
    uVar12 = 0x14;
    if (bVar24) {
      if (param_2 == 0) {
        uVar12 = 1;
      }
      else {
        uVar15 = 10;
        uVar12 = param_2 / 10000000000;
        if (param_2 >> 10 < 0x9502f9) {
          uVar15 = 0;
          uVar12 = param_2;
        }
        if (99999 < uVar12) {
          uVar12 = uVar12 / 100000;
          uVar15 = uVar15 | 5;
        }
        iVar17 = (int)uVar12;
        uVar12 = (ulonglong)
                 (((iVar17 + 0x7d8f0U & iVar17 + 0xdfc18U ^ iVar17 + 0x7ff9cU & iVar17 + 0x5fff6U)
                  >> 0x11) + uVar15 + 1);
      }
    }
    if ((uVar14 & 0x10000000) == 0) {
      uVar19 = uVar16;
    }
    lVar18 = uVar19 + 1;
    if (local_70 == 0) {
      lVar18 = 0;
    }
    uVar19 = lVar18 + uVar23 + param_6 + uVar12;
    if (uVar19 < local_58) {
      local_44 = (uint)*(ushort *)(param_1 + 0x14) - (int)uVar19;
      switch(uVar14 >> 0x1d & 3) {
      default:
        local_60 = 0;
        break;
      case 1:
        local_60 = (ulonglong)local_44;
        break;
      case 2:
        local_60 = (ulonglong)((local_44 & 0xffff) >> 1);
      }
      lVar18 = *(longlong *)(param_1 + 8);
      uVar14 = (int)local_60 + 1;
      local_68 = param_1;
      while (uVar13 = (short)uVar14 - 1, uVar14 = (uint)uVar13, uVar13 != 0) {
        cVar7 = (**(code **)(lVar18 + 0x20))();
        if (cVar7 != '\0') {
          return true;
        }
      }
      cVar7 = fmt_decimal::_closure_1_(&local_d0,local_68);
      if (cVar7 != '\0') {
        return true;
      }
      local_44 = local_44 - (int)local_60;
      sVar5 = (short)local_60;
      sVar6 = (short)local_58;
      iVar17 = 0xffff;
      do {
        if ((short)(((sVar5 + (short)uVar19) - sVar6) + (short)iVar17) == -1) {
          iVar17 = local_44;
          break;
        }
        cVar7 = (**(code **)(lVar18 + 0x20))();
        iVar17 = iVar17 + 1;
      } while (cVar7 == '\0');
      return (ushort)iVar17 < (ushort)local_44;
    }
  }
  uVar8 = fmt_decimal::_closure_1_(&local_d0,param_1);
  return uVar8;
}


