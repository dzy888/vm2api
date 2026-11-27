// 0076d948 print_path

/* WARNING: Removing unreachable block (ram,0x00778a6a) */
/* WARNING: Removing unreachable block (ram,0x00778a72) */
/* WARNING: Removing unreachable block (ram,0x00778acd) */
/* WARNING: Removing unreachable block (ram,0x00778b1a) */
/* WARNING: Removing unreachable block (ram,0x00778b67) */
/* WARNING: Removing unreachable block (ram,0x00778bb4) */
/* WARNING: Removing unreachable block (ram,0x00778c01) */
/* WARNING: Removing unreachable block (ram,0x00778c4a) */
/* WARNING: Removing unreachable block (ram,0x00778c8e) */
/* WARNING: Removing unreachable block (ram,0x00778a2f) */
/* WARNING: Switch with 1 destination removed at 0x0076df0b */
/* WARNING: Switch with 1 destination removed at 0x0078256c */
/* WARNING: Type propagation algorithm not settling */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(longlong *param_1,char param_2)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  short sVar3;
  char cVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 local_58;
  byte *pbStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined4 uStack_34;
  
  uStack_34 = CONCAT13(param_2,(undefined3)uStack_34);
  lVar11 = *param_1;
  if (lVar11 == 0) {
LAB_0076dee8:
    lVar11 = param_1[4];
    if (lVar11 == 0) {
      return false;
    }
    pbStack_50 = (byte *)0x1;
    uVar9 = *(uint *)(lVar11 + 0x10);
    if ((uVar9 & 0x18000000) != 0) {
      if ((uVar9 & 0x10000000) == 0) {
        lVar8 = 0;
        uVar6 = 0;
        do {
          uVar6 = uVar6 + (-0x41 < (char)(&DAT_001c1039)[lVar8]);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 1);
      }
      else {
        uVar6 = (ulonglong)*(ushort *)(lVar11 + 0x16);
        if (uVar6 == 0) {
          pbStack_50 = (byte *)0x0;
          uVar7 = 0;
        }
        else {
          pbStack_50 = (byte *)0x0;
          uVar7 = uVar6;
          pbVar10 = &DAT_001c1039;
          do {
            if (pbVar10 == &DAT_001c103a) goto LAB_00778a5f;
            bVar1 = *pbVar10;
            if ((char)bVar1 < '\0') {
              if (bVar1 < 0xe0) {
                pbVar12 = pbVar10 + 2;
              }
              else {
                pbVar12 = pbVar10 + (4 - (ulonglong)(bVar1 < 0xf0));
              }
            }
            else {
              pbVar12 = pbVar10 + 1;
            }
            pbStack_50 = pbVar12 + ((longlong)pbStack_50 - (longlong)pbVar10);
            uVar7 = uVar7 - 1;
            pbVar10 = pbVar12;
          } while (uVar7 != 0);
          uVar7 = 0;
        }
LAB_00778a5f:
        uVar6 = uVar6 - uVar7;
      }
      uStack_40 = (ulonglong)*(ushort *)(lVar11 + 0x14);
      if (uVar6 < uStack_40) {
        uStack_34 = (uint)*(ushort *)(lVar11 + 0x14) - (int)uVar6;
        local_58 = &DAT_001c1039;
        switch(uVar9 >> 0x1d & 3) {
        default:
          local_48 = 0;
          break;
        case 1:
          local_48 = (ulonglong)uStack_34;
          break;
        case 2:
          local_48 = (ulonglong)((uStack_34 & 0xffff) >> 1);
        }
        lVar11 = *(longlong *)(lVar11 + 8);
        uVar9 = (int)local_48 + 1;
        while (uVar14 = (short)uVar9 - 1, uVar9 = (uint)uVar14, uVar14 != 0) {
          cVar4 = (**(code **)(lVar11 + 0x20))();
          if (cVar4 != '\0') {
            return true;
          }
        }
        cVar4 = (**(code **)(lVar11 + 0x18))();
        if (cVar4 != '\0') {
          return true;
        }
        uStack_34 = uStack_34 - (int)local_48;
        sVar2 = (short)local_48;
        sVar3 = (short)uStack_40;
        iVar15 = 0xffff;
        do {
          if ((short)(((sVar2 + (short)uVar6) - sVar3) + (short)iVar15) == -1) {
            iVar15 = uStack_34;
            break;
          }
          cVar4 = (**(code **)(lVar11 + 0x20))();
          iVar15 = iVar15 + 1;
        } while (cVar4 == '\0');
        return (ushort)iVar15 < (ushort)uStack_34;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar11 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbStack_50);
    return (bool)uVar5;
  }
  uVar9 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar9;
  if (500 < uVar9) {
    if ((param_1[4] == 0) || (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 == '\0')) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      return false;
    }
    return true;
  }
  uVar6 = param_1[2];
  if ((ulonglong)param_1[1] <= uVar6) {
LAB_0076db3d:
    if ((param_1[4] == 0) || (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 == '\0')) {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return false;
    }
    return true;
  }
  bVar1 = *(byte *)(lVar11 + uVar6);
  param_1[2] = uVar6 + 1;
  if (bVar1 < 0x4d) {
    if (bVar1 != 0x42) {
      if (bVar1 == 0x43) {
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73);
        pbVar10 = pbStack_50;
        if ((char)local_58 == '\x01') {
          lVar11 = param_1[4];
          uVar5 = local_58._1_1_;
          goto joined_r0x0076dcad;
        }
        if (*param_1 == 0) {
          if (param_1[4] == 0) {
            return false;
          }
          uVar5 = (*(code *)PTR_fmt_007994b8)();
          return (bool)uVar5;
        }
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_58,param_1);
        if (local_58 != (undefined *)0x0) {
          if (param_1[4] != 0) {
            cVar4 = (*(code *)PTR_fmt_0079b288)();
            if (cVar4 != '\0') {
              return true;
            }
            if ((((param_1[4] != 0) && (pbVar10 != (byte *)0x0)) &&
                ((*(uint *)(param_1[4] + 0x10) & 0x800000) == 0)) &&
               (((cVar4 = (*(code *)PTR_write_str_00799488)(extraout_XMM0_Qa,1), cVar4 != '\0' ||
                 (cVar4 = (*(code *)PTR_fmt_0079a138)(), cVar4 != '\0')) ||
                (cVar4 = (*(code *)PTR_write_str_00799488)(extraout_XMM0_Qa_00,1), cVar4 != '\0'))))
            {
              return true;
            }
          }
          goto LAB_0076dc76;
        }
LAB_0076deb6:
LAB_0076db91:
        lVar11 = param_1[4];
        uVar5 = pbStack_50._0_1_;
joined_r0x0076dcad:
        if ((lVar11 == 0) || (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 == '\0')) {
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = uVar5;
          return false;
        }
        return true;
      }
      if (bVar1 != 0x49) goto LAB_0076db3d;
      cVar4 = print_path(param_1,param_2);
      if (cVar4 != '\0') {
        return true;
      }
      if (((param_2 != '\0') && (param_1[4] != 0)) &&
         (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
        return true;
      }
      if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
        return true;
      }
      uVar6 = print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>
                        (param_1);
      if ((uVar6 & 1) != 0) {
        return true;
      }
      goto LAB_0076dc53;
    }
    cVar4 = print_backref::
            <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_1_>
                      (param_1,(longlong)&uStack_34 + 3);
  }
  else {
    if (bVar1 < 0x58) {
      if (bVar1 == 0x4d) goto LAB_0076db73;
      if (bVar1 != 0x4e) goto LAB_0076db3d;
      if ((ulonglong)param_1[1] <= uVar6 + 1) {
LAB_0076da45:
        if ((param_1[4] == 0) || (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 == '\0')) {
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
          return false;
        }
        return true;
      }
      bVar1 = *(byte *)(lVar11 + 1 + uVar6);
      param_1[2] = uVar6 + 2;
      bVar16 = (byte)(bVar1 + 0x85) < 0xe6;
      uVar9 = 0xffffffff;
      if (bVar16) {
        uVar9 = 0;
      }
      bVar17 = 0x19 < (byte)(bVar1 + 0xbf);
      uVar13 = (uint)bVar1;
      if (bVar17) {
        uVar13 = uVar9;
      }
      if (bVar17 && bVar16) goto LAB_0076da45;
      cVar4 = print_path(param_1,param_2);
      if (cVar4 != '\0') {
        return true;
      }
      if (*param_1 == 0) {
        if (param_1[4] == 0) {
          return false;
        }
        cVar4 = (*(code *)PTR_fmt_007994b8)();
        if (cVar4 != '\0') {
          return true;
        }
        if (*param_1 == 0) goto LAB_0076dee8;
      }
      <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73);
      pbVar10 = pbStack_50;
      if ((char)local_58 == '\x01') goto LAB_0076db8d;
      if (*param_1 == 0) goto LAB_0076dee8;
      <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_58,param_1);
      if (local_58 == (undefined *)0x0) goto LAB_0076deb6;
      if (uVar13 == 0xffffffff) {
        if ((uStack_40 == 0 && pbStack_50 == (byte *)0x0) || (param_1[4] == 0)) goto LAB_0076dc76;
        cVar4 = (*(code *)PTR_fmt_007994b8)();
        if (cVar4 != '\0') {
          return true;
        }
        if (param_1[4] == 0) goto LAB_0076dc76;
        cVar4 = (*(code *)PTR_fmt_0079b288)();
        goto LAB_0076dc6e;
      }
      if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
        return true;
      }
      if (uVar13 == 0x43) {
        lVar11 = param_1[4];
joined_r0x0076df73:
        if (lVar11 != 0) {
          cVar4 = (*(code *)PTR_fmt_007994b8)();
LAB_0076dfa0:
          if (cVar4 != '\0') {
            return true;
          }
        }
      }
      else {
        if (uVar13 == 0x53) {
          lVar11 = param_1[4];
          goto joined_r0x0076df73;
        }
        local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar13);
        if (param_1[4] != 0) {
          cVar4 = (*(code *)PTR_fmt_0079a6b8)();
          goto LAB_0076dfa0;
        }
      }
      lVar11 = param_1[4];
      if (uStack_40 != 0 || pbStack_50 != (byte *)0x0) {
        if (lVar11 == 0) goto LAB_0076dc76;
        cVar4 = (*(code *)PTR_fmt_007994b8)();
        if (cVar4 != '\0') {
          return true;
        }
        if (param_1[4] == 0) goto LAB_0076dc76;
        cVar4 = (*(code *)PTR_fmt_0079b288)();
        if (cVar4 != '\0') {
          return true;
        }
        lVar11 = param_1[4];
      }
      if (lVar11 == 0) goto LAB_0076dc76;
      cVar4 = (*(code *)PTR_fmt_007994b8)();
      if (cVar4 != '\0') {
        return true;
      }
      local_58 = pbVar10;
      if (param_1[4] == 0) goto LAB_0076dc76;
      cVar4 = (*(code *)PTR_fmt_007991f8)();
      if (cVar4 != '\0') {
        return true;
      }
      lVar11 = param_1[4];
    }
    else {
      if (bVar1 == 0x58) {
LAB_0076db73:
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73);
        if ((char)local_58 == '\x01') {
LAB_0076db8d:
          pbStack_50._0_1_ = local_58._1_1_;
          goto LAB_0076db91;
        }
        skipping_printing::
        <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_0_>(param_1);
      }
      else if (bVar1 != 0x59) goto LAB_0076db3d;
      if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
        return true;
      }
      cVar4 = print_type(param_1);
      if (cVar4 != '\0') {
        return true;
      }
      if (bVar1 != 0x4d) {
        if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
          return true;
        }
        cVar4 = print_path(param_1,0);
        if (cVar4 != '\0') {
          return true;
        }
      }
LAB_0076dc53:
      lVar11 = param_1[4];
    }
    if (lVar11 == 0) goto LAB_0076dc76;
    cVar4 = (*(code *)PTR_fmt_007994b8)();
  }
LAB_0076dc6e:
  if (cVar4 != '\0') {
    return true;
  }
LAB_0076dc76:
  if (*param_1 != 0) {
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  }
  return false;
}


