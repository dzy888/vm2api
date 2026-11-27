// 000acfc8 print_path

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
/* WARNING: Switch with 1 destination removed at 0x000ad58b */
/* WARNING: Switch with 1 destination removed at 0x000be29c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(longlong *param_1,char param_2)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  ushort uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
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
LAB_000ad568:
    lVar11 = param_1[4];
    if (lVar11 != 0) {
      pbStack_50 = (byte *)0x1;
      uVar9 = *(uint *)(lVar11 + 0x10);
      if ((uVar9 & 0x18000000) != 0) {
        if ((uVar9 & 0x10000000) == 0) {
          lVar8 = 0;
          uVar6 = 0;
          do {
            uVar6 = uVar6 + (-0x41 < (char)(&DAT_00016a3d)[lVar8]);
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
            pbVar10 = &DAT_00016a3d;
            do {
              if (pbVar10 == &DAT_00016a3e) goto LAB_000b677f;
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
LAB_000b677f:
          uVar6 = uVar6 - uVar7;
        }
        uStack_40 = (ulonglong)*(ushort *)(lVar11 + 0x14);
        if (uVar6 < uStack_40) {
          uStack_34 = (uint)*(ushort *)(lVar11 + 0x14) - (int)uVar6;
          local_58 = &DAT_00016a3d;
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
          while (uVar15 = (short)uVar9 - 1, uVar9 = (uint)uVar15, uVar15 != 0) {
            cVar5 = (**(code **)(lVar11 + 0x20))();
            if (cVar5 != '\0') {
              return 1;
            }
          }
          cVar5 = (**(code **)(lVar11 + 0x18))();
          if (cVar5 != '\0') {
            return 1;
          }
          uStack_34 = uStack_34 - (int)local_48;
          sVar2 = (short)local_48;
          sVar3 = (short)uStack_40;
          iVar16 = 0xffff;
          do {
            if ((short)(((sVar2 + (short)uVar6) - sVar3) + (short)iVar16) == -1) {
              iVar16 = uStack_34;
              break;
            }
            cVar5 = (**(code **)(lVar11 + 0x20))();
            iVar16 = iVar16 + 1;
          } while (cVar5 == '\0');
          return (ulonglong)((ushort)iVar16 < (ushort)uStack_34);
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar11 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbStack_50);
      return uVar6;
    }
  }
  else {
    uVar9 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar9;
    if (uVar9 < 0x1f5) {
      uVar6 = param_1[2];
      if (uVar6 < (ulonglong)param_1[1]) {
        bVar1 = *(byte *)(lVar11 + uVar6);
        param_1[2] = uVar6 + 1;
        if (bVar1 < 0x4d) {
          if (bVar1 != 0x42) {
            if (bVar1 != 0x43) {
              if (bVar1 != 0x49) goto LAB_000ad1bd;
              cVar5 = print_path(param_1,param_2);
              pcVar14 = "ELF\x02\x01\x01";
              if ((cVar5 != '\0') ||
                 ((((param_2 != '\0' && (param_1[4] != 0)) &&
                   (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) ||
                  (((param_1[4] != 0 && (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) ||
                   (uVar6 = print_sep_list::
                            <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_generic_arg>
                                      (param_1), (uVar6 & 1) != 0)))))) goto LAB_000ad594;
              goto LAB_000ad2d3;
            }
            <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73);
            pbVar10 = pbStack_50;
            if ((char)local_58 != '\x01') {
              if (*param_1 == 0) {
                if (param_1[4] != 0) {
                  uVar9 = (*(code *)PTR_fmt_000c3f58)();
                  pcVar14 = (char *)(ulonglong)uVar9;
                  goto LAB_000ad594;
                }
                goto LAB_000ad591;
              }
              <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_58,param_1);
              if (local_58 != (undefined *)0x0) {
                if (param_1[4] != 0) {
                  cVar5 = (*(code *)PTR_fmt_000c4680)();
                  pcVar14 = "ELF\x02\x01\x01";
                  if (cVar5 != '\0') goto LAB_000ad594;
                  if ((((param_1[4] != 0) && (pbVar10 != (byte *)0x0)) &&
                      ((*(uint *)(param_1[4] + 0x10) & 0x800000) == 0)) &&
                     (((cVar5 = (*(code *)PTR_write_str_000c3d28)(extraout_XMM0_Qa,1), cVar5 != '\0'
                       || (cVar5 = (*(code *)PTR_fmt_000c4510)(), cVar5 != '\0')) ||
                      (cVar5 = (*(code *)PTR_write_str_000c3d28)(extraout_XMM0_Qa_00,1),
                      cVar5 != '\0')))) {
                    pcVar14 = "ELF\x02\x01\x01";
                    goto LAB_000ad594;
                  }
                }
                goto LAB_000ad2f6;
              }
LAB_000ad536:
              goto LAB_000ad211;
            }
            lVar11 = param_1[4];
            uVar4 = local_58._1_1_;
joined_r0x000ad32d:
            if (lVar11 != 0) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
              pcVar14 = "ELF\x02\x01\x01";
              if (cVar5 != '\0') goto LAB_000ad594;
            }
            *param_1 = 0;
            *(undefined1 *)(param_1 + 1) = uVar4;
            goto LAB_000ad591;
          }
          cVar5 = print_backref::
                  <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_1_>
                            (param_1,(longlong)&uStack_34 + 3);
LAB_000ad2ee:
          pcVar14 = "ELF\x02\x01\x01";
          if (cVar5 != '\0') goto LAB_000ad594;
        }
        else {
          if (0x57 < bVar1) {
            if (bVar1 == 0x58) {
LAB_000ad1f3:
              <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73)
              ;
              if ((char)local_58 == '\x01') {
LAB_000ad20d:
                pbStack_50._0_1_ = local_58._1_1_;
LAB_000ad211:
                lVar11 = param_1[4];
                uVar4 = pbStack_50._0_1_;
                goto joined_r0x000ad32d;
              }
              skipping_printing::
              <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_0_>(param_1);
            }
            else if (bVar1 != 0x59) goto LAB_000ad1bd;
            if (param_1[4] != 0) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
              pcVar14 = "ELF\x02\x01\x01";
              if (cVar5 != '\0') goto LAB_000ad594;
            }
            cVar5 = print_type(param_1);
            pcVar14 = "ELF\x02\x01\x01";
            if ((cVar5 != '\0') ||
               ((bVar1 != 0x4d &&
                (((param_1[4] != 0 && (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0')) ||
                 (cVar5 = print_path(param_1,0), cVar5 != '\0')))))) goto LAB_000ad594;
LAB_000ad2d3:
            if (param_1[4] == 0) goto LAB_000ad2f6;
LAB_000ad2e3:
            cVar5 = (*(code *)PTR_fmt_000c3f58)();
            goto LAB_000ad2ee;
          }
          if (bVar1 == 0x4d) goto LAB_000ad1f3;
          if (bVar1 != 0x4e) goto LAB_000ad1bd;
          if ((ulonglong)param_1[1] <= uVar6 + 1) {
LAB_000ad0c5:
            if (param_1[4] != 0) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
              pcVar14 = Elf64_Ehdr_00000000.e_ident_magic_str;
              if (cVar5 != '\0') goto LAB_000ad594;
            }
            *param_1 = 0;
            *(undefined1 *)(param_1 + 1) = 0;
            goto LAB_000ad591;
          }
          bVar1 = *(byte *)(lVar11 + 1 + uVar6);
          param_1[2] = uVar6 + 2;
          bVar17 = (byte)(bVar1 + 0x85) < 0xe6;
          uVar9 = 0xffffffff;
          if (bVar17) {
            uVar9 = 0;
          }
          bVar18 = 0x19 < (byte)(bVar1 + 0xbf);
          uVar13 = (uint)bVar1;
          if (bVar18) {
            uVar13 = uVar9;
          }
          if (bVar18 && bVar17) goto LAB_000ad0c5;
          cVar5 = print_path(param_1,param_2);
          pcVar14 = "ELF\x02\x01\x01";
          if (cVar5 != '\0') goto LAB_000ad594;
          if (*param_1 == 0) {
            if (param_1[4] == 0) goto LAB_000ad591;
            cVar5 = (*(code *)PTR_fmt_000c3f58)();
            if (cVar5 != '\0') goto LAB_000ad594;
            if (*param_1 == 0) goto LAB_000ad568;
          }
          <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_58,param_1,0x73);
          pbVar10 = pbStack_50;
          if ((char)local_58 == '\x01') goto LAB_000ad20d;
          if (*param_1 == 0) goto LAB_000ad568;
          <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::ident(&local_58,param_1);
          if (local_58 == (undefined *)0x0) goto LAB_000ad536;
          if (uVar13 == 0xffffffff) {
            if ((uStack_40 != 0 || pbStack_50 != (byte *)0x0) && (param_1[4] != 0)) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
              if (cVar5 != '\0') goto LAB_000ad594;
              if (param_1[4] != 0) {
                cVar5 = (*(code *)PTR_fmt_000c4680)();
                goto LAB_000ad2ee;
              }
            }
            goto LAB_000ad2f6;
          }
          if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_000c3f58)(), cVar5 != '\0'))
          goto LAB_000ad594;
          if (uVar13 == 0x43) {
            lVar11 = param_1[4];
joined_r0x000ad5f3:
            if (lVar11 != 0) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
LAB_000ad620:
              if (cVar5 != '\0') goto LAB_000ad594;
            }
          }
          else {
            if (uVar13 == 0x53) {
              lVar11 = param_1[4];
              goto joined_r0x000ad5f3;
            }
            local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar13);
            if (param_1[4] != 0) {
              cVar5 = (*(code *)PTR_fmt_000c4030)();
              goto LAB_000ad620;
            }
          }
          lVar11 = param_1[4];
          if (uStack_40 == 0 && pbStack_50 == (byte *)0x0) {
LAB_000ad636:
            if (lVar11 != 0) {
              cVar5 = (*(code *)PTR_fmt_000c3f58)();
              if (cVar5 != '\0') goto LAB_000ad594;
              local_58 = pbVar10;
              if (param_1[4] != 0) {
                cVar5 = (*(code *)PTR_fmt_000c3b68)();
                if (cVar5 != '\0') goto LAB_000ad594;
                if (param_1[4] != 0) goto LAB_000ad2e3;
              }
            }
          }
          else if (lVar11 != 0) {
            cVar5 = (*(code *)PTR_fmt_000c3f58)();
            if (cVar5 != '\0') goto LAB_000ad594;
            if (param_1[4] != 0) {
              cVar5 = (*(code *)PTR_fmt_000c4680)();
              if (cVar5 != '\0') goto LAB_000ad594;
              lVar11 = param_1[4];
              goto LAB_000ad636;
            }
          }
        }
LAB_000ad2f6:
        if (*param_1 != 0) {
          *(int *)(param_1 + 3) = (int)param_1[3] + -1;
        }
      }
      else {
LAB_000ad1bd:
        if (param_1[4] != 0) {
          cVar5 = (*(code *)PTR_fmt_000c3f58)();
          pcVar14 = "ELF\x02\x01\x01";
          if (cVar5 != '\0') goto LAB_000ad594;
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
      }
    }
    else {
      if (param_1[4] != 0) {
        cVar5 = (*(code *)PTR_fmt_000c3f58)();
        pcVar14 = "ELF\x02\x01\x01";
        if (cVar5 != '\0') goto LAB_000ad594;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_000ad591:
  pcVar14 = (char *)0x0;
LAB_000ad594:
  return (ulonglong)pcVar14 & 0xffffffff;
}


