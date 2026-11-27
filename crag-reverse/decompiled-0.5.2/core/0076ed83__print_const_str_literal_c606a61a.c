// 0076ed83 print_const_str_literal

/* WARNING: Removing unreachable block (ram,0x00778a72) */
/* WARNING: Removing unreachable block (ram,0x00778acd) */
/* WARNING: Removing unreachable block (ram,0x00778b1a) */
/* WARNING: Removing unreachable block (ram,0x00778b67) */
/* WARNING: Removing unreachable block (ram,0x00778bb4) */
/* WARNING: Removing unreachable block (ram,0x00778c01) */
/* WARNING: Removing unreachable block (ram,0x00778c4a) */
/* WARNING: Removing unreachable block (ram,0x00778c8e) */
/* WARNING: Removing unreachable block (ram,0x0076f04c) */
/* WARNING: Removing unreachable block (ram,0x00778a6a) */
/* WARNING: Removing unreachable block (ram,0x00778a2f) */
/* WARNING: Switch with 1 destination removed at 0x0076eefb */
/* WARNING: Switch with 1 destination removed at 0x0076ef9e */
/* WARNING: Switch with 1 destination removed at 0x0078256c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const_str_literal */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const_str_literal(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  short sVar3;
  short sVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ushort uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  byte local_38;
  byte local_37;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      pbVar12 = (byte *)0x1;
      uVar7 = *(uint *)(lVar2 + 0x10);
      if ((uVar7 & 0x18000000) != 0) {
        if ((uVar7 & 0x10000000) == 0) {
          lVar10 = 0;
          uVar14 = 0;
          do {
            uVar14 = uVar14 + (-0x41 < (char)(&DAT_001c1039)[lVar10]);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 1);
        }
        else {
          uVar14 = (ulonglong)*(ushort *)(lVar2 + 0x16);
          if (uVar14 == 0) {
            pbVar12 = (byte *)0x0;
            uVar9 = 0;
          }
          else {
            pbVar12 = (byte *)0x0;
            uVar9 = uVar14;
            pbVar11 = &DAT_001c1039;
            do {
              if (pbVar11 == &DAT_001c103a) goto LAB_00778a5f;
              bVar1 = *pbVar11;
              if ((char)bVar1 < '\0') {
                if (bVar1 < 0xe0) {
                  pbVar13 = pbVar11 + 2;
                }
                else {
                  pbVar13 = pbVar11 + (4 - (ulonglong)(bVar1 < 0xf0));
                }
              }
              else {
                pbVar13 = pbVar11 + 1;
              }
              pbVar12 = pbVar13 + ((longlong)pbVar12 - (longlong)pbVar11);
              uVar9 = uVar9 - 1;
              pbVar11 = pbVar13;
            } while (uVar9 != 0);
            uVar9 = 0;
          }
LAB_00778a5f:
          uVar14 = uVar14 - uVar9;
        }
        uStack_40 = (ulonglong)*(ushort *)(lVar2 + 0x14);
        if (uVar14 < uStack_40) {
          uStack_34 = (uint)*(ushort *)(lVar2 + 0x14) - (int)uVar14;
          switch(uVar7 >> 0x1d & 3) {
          default:
            uStack_48 = 0;
            break;
          case 1:
            uStack_48 = (ulonglong)uStack_34;
            break;
          case 2:
            uStack_48 = (ulonglong)((uStack_34 & 0xffff) >> 1);
          }
          lVar2 = *(longlong *)(lVar2 + 8);
          uVar7 = (int)uStack_48 + 1;
          while (uVar15 = (short)uVar7 - 1, uVar7 = (uint)uVar15, uVar15 != 0) {
            cVar5 = (**(code **)(lVar2 + 0x20))();
            if (cVar5 != '\0') {
              return true;
            }
          }
          cVar5 = (**(code **)(lVar2 + 0x18))();
          if (cVar5 != '\0') {
            return true;
          }
          uStack_34 = uStack_34 - (int)uStack_48;
          sVar3 = (short)uStack_48;
          sVar4 = (short)uStack_40;
          iVar8 = 0xffff;
          do {
            if ((short)(((sVar3 + (short)uVar14) - sVar4) + (short)iVar8) == -1) {
              iVar8 = uStack_34;
              break;
            }
            cVar5 = (**(code **)(lVar2 + 0x20))();
            iVar8 = iVar8 + 1;
          } while (cVar5 == '\0');
          return (ushort)iVar8 < (ushort)uStack_34;
        }
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(lVar2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00,pbVar12);
      return (bool)uVar6;
    }
  }
  else {
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles(&local_70,param_1);
    if (local_70 == 0) {
      if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_007994b8)(), cVar5 != '\0')) {
        return true;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = (undefined1)local_68;
    }
    else {
      if ((local_68 & 1) == 0) {
        uVar14 = local_68 & 0x7ffffffffffffffe;
        local_58 = 0;
        local_50 = 2;
        local_68 = uVar14;
        local_60 = local_70 + uVar14;
        do {
          uVar7 = <core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                  ::next(&local_70);
        } while (uVar7 < 0xfffffffe);
        if (uVar7 == 0xfffffffe) {
          lVar2 = param_1[4];
          if (lVar2 == 0) {
            return false;
          }
          cVar5 = (*(code *)PTR_write_char_0079a6e0)();
          if (cVar5 != '\0') {
            return true;
          }
          local_58 = 0;
          local_50 = 2;
          local_68 = uVar14;
          local_60 = local_70 + uVar14;
          while( true ) {
            while( true ) {
              iVar8 = <core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                      ::next(&local_70);
              if (iVar8 == -2) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(lVar2 + 8) + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0078200e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar6 = (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
                return (bool)uVar6;
              }
              if (iVar8 != 0x27) break;
              cVar5 = (*(code *)PTR_write_char_0079a6e0)();
              if (cVar5 != '\0') {
                return true;
              }
            }
            if (iVar8 == -1) break;
            <char>::escape_debug_ext((longlong)&uStack_48 + 4,iVar8);
            uVar9 = (ulonglong)local_37;
            uVar14 = (ulonglong)local_38;
            while (uVar14 < uVar9) {
              cVar5 = (*(code *)PTR_write_char_0079a6e0)();
              uVar14 = uVar14 + 1;
              if (cVar5 != '\0') {
                return true;
              }
            }
          }
          uVar16 = (*(code *)PTR_unwrap_failed_00799028)
                             (&DAT_00797828,(longlong)&uStack_34 + 3,
                              &PTR_s__rustc_48a229ceaefd4985c50990b14_00797c28);
          lVar2 = _UNK_001c10e7;
          if (_UNK_001c10e7 != 0) {
            cVar5 = (*(code *)PTR_fmt_007994b8)(uVar16,_UNK_001c10e7);
            if (cVar5 != '\0') {
              return true;
            }
            if (0x2a < (ulonglong)_UNK_001c10ef) {
              if ((ulonglong)_UNK_001c10ef - 0x2b < 0x1a) {
                uVar6 = (*(code *)PTR_fmt_0079a6b8)();
              }
              else {
                cVar5 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa,lVar2);
                if (cVar5 != '\0') {
                  return true;
                }
                uVar6 = (*(code *)PTR_fmt_007991f8)();
              }
              return (bool)uVar6;
            }
            cVar5 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa,lVar2);
            if (cVar5 != '\0') {
              return true;
            }
            _DAT_001c10c7 = 0;
            UNK_001c10cf = 0;
          }
          return false;
        }
      }
      if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_007994b8)(), cVar5 != '\0')) {
        return true;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  return false;
}


