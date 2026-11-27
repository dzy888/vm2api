// 000adbef print_const

/* WARNING: Removing unreachable block (ram,0x000b678a) */
/* WARNING: Removing unreachable block (ram,0x000b6792) */
/* WARNING: Removing unreachable block (ram,0x000b67ed) */
/* WARNING: Removing unreachable block (ram,0x000b683a) */
/* WARNING: Removing unreachable block (ram,0x000b6887) */
/* WARNING: Removing unreachable block (ram,0x000b68d4) */
/* WARNING: Removing unreachable block (ram,0x000b6921) */
/* WARNING: Removing unreachable block (ram,0x000b696a) */
/* WARNING: Removing unreachable block (ram,0x000b69ae) */
/* WARNING: Removing unreachable block (ram,0x000b674f) */
/* WARNING: Switch with 1 destination removed at 0x000ae042 */
/* WARNING: Switch with 1 destination removed at 0x000be29c */
/* WARNING: Type propagation algorithm not settling */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  short sVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong extraout_RDX;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  byte *pbVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  ulonglong local_40;
  undefined1 local_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = CONCAT17(param_2,(undefined7)uStack_30);
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_000ae01d:
    lVar2 = param_1[4];
    if (lVar2 == 0) {
      return false;
    }
    pbVar11 = (byte *)0x1;
    uVar13 = *(uint *)(lVar2 + 0x10);
    if ((uVar13 & 0x18000000) != 0) {
      if ((uVar13 & 0x10000000) == 0) {
        lVar9 = 0;
        uVar12 = 0;
        do {
          uVar12 = uVar12 + (-0x41 < (char)(&DAT_00016a3d)[lVar9]);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 1);
      }
      else {
        uVar12 = (ulonglong)*(ushort *)(lVar2 + 0x16);
        if (uVar12 == 0) {
          pbVar11 = (byte *)0x0;
          uVar8 = 0;
        }
        else {
          pbVar11 = (byte *)0x0;
          uVar8 = uVar12;
          pbVar10 = &DAT_00016a3d;
          do {
            if (pbVar10 == &DAT_00016a3e) goto LAB_000b677f;
            bVar6 = *pbVar10;
            if ((char)bVar6 < '\0') {
              if (bVar6 < 0xe0) {
                pbVar14 = pbVar10 + 2;
              }
              else {
                pbVar14 = pbVar10 + (4 - (ulonglong)(bVar6 < 0xf0));
              }
            }
            else {
              pbVar14 = pbVar10 + 1;
            }
            pbVar11 = pbVar14 + ((longlong)pbVar11 - (longlong)pbVar10);
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar14;
          } while (uVar8 != 0);
          uVar8 = 0;
        }
LAB_000b677f:
        uVar12 = uVar12 - uVar8;
      }
      local_40 = (ulonglong)*(ushort *)(lVar2 + 0x14);
      if (uVar12 < local_40) {
        uStack_34 = (uint)*(ushort *)(lVar2 + 0x14) - (int)uVar12;
        switch(uVar13 >> 0x1d & 3) {
        default:
          uVar13 = 0;
          break;
        case 1:
          uVar13 = uStack_34;
          break;
        case 2:
          uVar13 = (uStack_34 & 0xffff) >> 1;
        }
        lVar2 = *(longlong *)(lVar2 + 8);
        uVar16 = uVar13 + 1;
        while (uVar15 = (short)uVar16 - 1, uVar16 = (uint)uVar15, uVar15 != 0) {
          cVar4 = (**(code **)(lVar2 + 0x20))();
          if (cVar4 != '\0') {
            return true;
          }
        }
        cVar4 = (**(code **)(lVar2 + 0x18))();
        if (cVar4 != '\0') {
          return true;
        }
        uStack_34 = uStack_34 - uVar13;
        sVar3 = (short)local_40;
        iVar17 = 0xffff;
        do {
          if ((short)((((short)uVar13 + (short)uVar12) - sVar3) + (short)iVar17) == -1) {
            iVar17 = uStack_34;
            break;
          }
          cVar4 = (**(code **)(lVar2 + 0x20))();
          iVar17 = iVar17 + 1;
        } while (cVar4 == '\0');
        return (ushort)iVar17 < (ushort)uStack_34;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar11);
    return (bool)uVar7;
  }
  uVar12 = param_1[1];
  uVar8 = param_1[2];
  if (uVar12 <= uVar8) goto switchD_000adc90_caseD_53;
  cVar4 = *(char *)(lVar2 + uVar8);
  uVar1 = uVar8 + 1;
  param_1[2] = uVar1;
  uVar13 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar13;
  if (500 < uVar13) {
    if ((param_1[4] == 0) || (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 == '\0')) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      return false;
    }
    return true;
  }
  switch(cVar4) {
  case 'Q':
switchD_000adc90_caseD_51:
    if (((param_2 == '\0') && (param_1[4] != 0)) &&
       (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) {
      return true;
    }
    if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) {
      return true;
    }
    if (((cVar4 != 'R') && (param_1[4] != 0)) &&
       (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
      return true;
    }
    cVar4 = print_const(param_1,1);
    break;
  case 'R':
    if ((uVar12 <= uVar1) || (*(char *)(lVar2 + uVar1) != 'e')) goto switchD_000adc90_caseD_51;
    param_1[2] = uVar8 + 2;
    cVar4 = print_const_str_literal(param_1);
    goto LAB_000adcd6;
  case 'S':
  case 'U':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'd':
  case 'f':
  case 'g':
  case 'k':
  case 'q':
  case 'r':
  case 'u':
  case 'v':
  case 'w':
    goto switchD_000adc90_caseD_53;
  case 'T':
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      uVar12 = 1;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
    }
    if (param_1[4] != 0) {
      uVar12 = 1;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
    }
    auVar18 = print_sep_list::
              <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_3_>
                        (param_1,uVar12);
    if ((auVar18._0_8_ & 1) != 0) {
      return true;
    }
    if (auVar18._8_8_ == 1) {
      if (param_1[4] == 0) goto LAB_000adce1;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
    }
LAB_000adf65:
    lVar2 = param_1[4];
joined_r0x000ae144:
    if (lVar2 == 0) goto LAB_000adce1;
    cVar4 = (*(code *)PTR_fmt_000c3f58)();
    break;
  case 'V':
    if (((param_2 == '\0') && (param_1[4] != 0)) &&
       (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
      return true;
    }
    cVar4 = print_path(param_1,1);
    if (cVar4 != '\0') {
      return true;
    }
    if (*param_1 == 0) goto LAB_000ae01d;
    uVar12 = param_1[2];
    if ((ulonglong)param_1[1] <= uVar12) {
LAB_000adff9:
      if (param_1[4] == 0) goto LAB_000adec4;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      goto LAB_000adebc;
    }
    cVar4 = *(char *)(*param_1 + uVar12);
    param_1[2] = uVar12 + 1;
    if (cVar4 == 'S') {
      if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
        return true;
      }
      uVar12 = print_sep_list::
               <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_5_>(param_1);
      if ((uVar12 & 1) != 0) {
        return true;
      }
      lVar2 = param_1[4];
      goto joined_r0x000ae144;
    }
    if (cVar4 == 'T') {
      if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
        return true;
      }
      uVar12 = print_sep_list::
               <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_2_>(param_1);
      if ((uVar12 & 1) != 0) {
        return true;
      }
      goto LAB_000adf65;
    }
    if (cVar4 != 'U') goto LAB_000adff9;
    goto LAB_000ae0ac;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if ((((uVar1 < uVar12) && (*(char *)(lVar2 + uVar1) == 'n')) &&
        (param_1[2] = uVar8 + 2, param_1[4] != 0)) &&
       (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) {
      return true;
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    cVar4 = print_const_uint(param_1,cVar4);
    goto LAB_000adcd6;
  case 'b':
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles(&local_40,param_1);
    if (local_40 == 0) {
      lVar2 = param_1[4];
      uVar7 = local_38;
joined_r0x000ae19c:
      if ((lVar2 == 0) || (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 == '\0')) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = uVar7;
        return false;
      }
      return true;
    }
    auVar18 = <rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_uint();
    if (auVar18._0_8_ != 1) goto switchD_000adc90_caseD_53;
    if (auVar18._8_8_ == 0) {
      lVar2 = param_1[4];
    }
    else {
      if (auVar18._8_8_ != 1) goto switchD_000adc90_caseD_53;
      lVar2 = param_1[4];
    }
    goto joined_r0x000ae1ff;
  case 'c':
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles(&local_40,param_1);
    if (local_40 == 0) {
      lVar2 = param_1[4];
      uVar7 = local_38;
      goto joined_r0x000ae19c;
    }
    bVar6 = <rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_uint();
    if (((extraout_RDX >> 0x20 == 0 & bVar6) == 1) &&
       (0xffef07ff < ((uint)extraout_RDX ^ 0xd800) - 0x110000)) {
      cVar4 = print_quoted_escaped_chars::<core[c0acaeba6ab4c2e0]::iter::sources::once::Once<char>>
                        (param_1,extraout_RDX & 0xffffffff);
      goto LAB_000adcd6;
    }
    goto switchD_000adc90_caseD_53;
  case 'e':
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      uVar12 = 1;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
    }
    if (param_1[4] != 0) {
      uVar12 = 1;
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
    }
    cVar4 = print_const_str_literal(param_1,uVar12);
    break;
  case 'p':
    if (param_1[4] == 0) goto LAB_000adce1;
    goto LAB_000ae0ce;
  default:
    if (cVar4 == 'A') {
      if ((param_2 == '\0') && (param_1[4] != 0)) {
        uVar12 = 1;
        cVar4 = (*(code *)PTR_fmt_000c3f58)();
        if (cVar4 != '\0') {
          return true;
        }
      }
      if (param_1[4] != 0) {
        uVar12 = 1;
        cVar4 = (*(code *)PTR_fmt_000c3f58)();
        if (cVar4 != '\0') {
          return true;
        }
      }
      uVar12 = print_sep_list::
               <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_2_>
                         (param_1,uVar12);
      if ((uVar12 & 1) != 0) {
        return true;
      }
      lVar2 = param_1[4];
      goto joined_r0x000ae144;
    }
    if (cVar4 == 'B') {
      cVar4 = print_backref::
              <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const::_closure_6_>
                        (param_1,(longlong)&uStack_30 + 7);
      goto LAB_000adcd6;
    }
switchD_000adc90_caseD_53:
    if (param_1[4] != 0) {
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
LAB_000adebc:
      if (cVar4 != '\0') {
        return true;
      }
    }
LAB_000adec4:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return false;
  }
  if (cVar4 != '\0') {
    return true;
  }
LAB_000ae0ac:
  if (param_2 == '\0') {
    lVar2 = param_1[4];
joined_r0x000ae1ff:
    if (lVar2 != 0) {
LAB_000ae0ce:
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
LAB_000adcd6:
      if (cVar4 != '\0') {
        return true;
      }
    }
  }
LAB_000adce1:
  if (*param_1 == 0) {
    return false;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return false;
}


