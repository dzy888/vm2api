// 0076ec18 print_const_uint

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
/* WARNING: Switch with 1 destination removed at 0x0076ecb6 */
/* WARNING: Switch with 1 destination removed at 0x0076eefb */
/* WARNING: Switch with 1 destination removed at 0x0076ef9e */
/* WARNING: Switch with 1 destination removed at 0x0078256c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const_uint */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_const_uint
          (longlong *param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  ulonglong unaff_RBX;
  undefined1 *unaff_RBP;
  byte *pbVar13;
  longlong unaff_R12;
  longlong unaff_R13;
  ulonglong uVar14;
  longlong unaff_R14;
  ushort uVar15;
  ulonglong unaff_R15;
  undefined7 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar18 [16];
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_9c [12];
  byte bStack_90;
  byte bStack_8f;
  undefined1 uStack_89;
  ulonglong uStack_88;
  longlong lStack_80;
  longlong lStack_70;
  ulonglong uStack_68;
  code *pcStack_60;
  undefined1 auStack_58 [8];
  longlong local_50;
  longlong local_40;
  undefined1 local_38;
  undefined1 auStack_37 [7];
  
  puVar3 = auStack_37;
  if (*param_1 == 0) {
    puVar11 = (undefined8 *)param_1[4];
    if (puVar11 != (undefined8 *)0x0) goto <str_as_core[c0acaeba6ab4c2e0]::fmt::Display>_fmt;
  }
  else {
    unaff_RBX = param_2 & 0xffffffff;
    pcStack_60 = (code *)0x76ec43;
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles(&local_40,param_1);
    unaff_R12 = local_40;
    uVar16 = (undefined7)((ulonglong)&local_40 >> 8);
    if (local_40 == 0) {
      if (param_1[4] != 0) {
        pcStack_60 = (code *)0x76eced;
        cVar4 = (*(code *)PTR_fmt_007994b8)();
        unaff_R15 = CONCAT71(uVar16,1);
        if (cVar4 != '\0') goto LAB_0076ed64;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = local_38;
    }
    else {
      unaff_R13 = CONCAT71(auStack_37,local_38);
      local_50 = local_40;
      pcStack_60 = (code *)0x76ec5f;
      auVar18 = <rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_uint();
      if (auVar18._0_8_ == 1) {
        unaff_R14 = param_1[4];
        if (unaff_R14 != 0) {
          pcStack_60 = (code *)0x76ec87;
          local_40 = auVar18._8_8_;
          cVar4 = (*(code *)PTR_fmt_007991f8)();
          lVar7 = unaff_R14;
          goto LAB_0076ed35;
        }
      }
      else {
        unaff_R14 = param_1[4];
        if (unaff_R14 != 0) {
          pcStack_60 = (code *)0x76ed1f;
          cVar4 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa,unaff_R14);
          unaff_R15 = CONCAT71(uVar16,1);
          if (cVar4 != '\0') goto LAB_0076ed64;
          pcStack_60 = (code *)0x76ed35;
          cVar4 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa_00,unaff_R14);
          lVar7 = unaff_R13;
LAB_0076ed35:
          unaff_R15 = CONCAT71(uVar16,1);
          if (cVar4 != '\0') goto LAB_0076ed64;
          if ((*(byte *)(unaff_R14 + 0x12) & 0x80) == 0) {
            pcStack_60 = (code *)0x76ed48;
            lVar7 = rustc_demangle[a2bba03bad1b7f1a]::v0::basic_type(param_2 & 0xff,lVar7);
            if (lVar7 == 0) {
              pcStack_60 = print_const_str_literal;
              (*(code *)PTR_unwrap_failed_00799278)();
              pcStack_60 = (code *)(auStack_37 + 0x2f);
              uStack_68 = unaff_R15;
              lStack_70 = unaff_R14;
              lStack_80 = unaff_R12;
              uStack_88 = unaff_RBX;
              if (PTR_s__rust_deps_rustc_demangle_0_1_27_00797920 == (undefined *)0x0) {
                if (_UNK_00797940 != (undefined8 *)0x0) {
                  register0x00000020 = (BADSPACEBASE *)auStack_58;
                  puVar11 = _UNK_00797940;
                  unaff_RBP = puVar3 + 0x2f;
<str_as_core[c0acaeba6ab4c2e0]::fmt::Display>_fmt:
                  pbVar12 = (byte *)0x1;
                  *(undefined1 **)((longlong)register0x00000020 + -8) = unaff_RBP;
                  *(ulonglong *)((longlong)register0x00000020 + -0x10) = unaff_R15;
                  *(longlong *)((longlong)register0x00000020 + -0x18) = unaff_R14;
                  *(longlong *)((longlong)register0x00000020 + -0x20) = unaff_R13;
                  *(longlong *)((longlong)register0x00000020 + -0x28) = unaff_R12;
                  *(ulonglong *)((longlong)register0x00000020 + -0x30) = unaff_RBX;
                  uVar5 = *(uint *)(puVar11 + 2);
                  if ((uVar5 & 0x18000000) != 0) {
                    if ((uVar5 & 0x10000000) == 0) {
                      lVar7 = 0;
                      uVar14 = 0;
                      do {
                        uVar14 = uVar14 + (-0x41 < (char)(&DAT_001c1039)[lVar7]);
                        lVar7 = lVar7 + 1;
                      } while (lVar7 != 1);
                    }
                    else {
                      uVar14 = (ulonglong)*(ushort *)((longlong)puVar11 + 0x16);
                      if (uVar14 == 0) {
                        pbVar12 = (byte *)0x0;
                        uVar8 = 0;
                      }
                      else {
                        pbVar12 = (byte *)0x0;
                        uVar8 = uVar14;
                        pbVar9 = &DAT_001c1039;
                        do {
                          if (pbVar9 == &DAT_001c103a) goto LAB_00778a5f;
                          bVar1 = *pbVar9;
                          if ((char)bVar1 < '\0') {
                            if (bVar1 < 0xe0) {
                              pbVar13 = pbVar9 + 2;
                            }
                            else {
                              pbVar13 = pbVar9 + (4 - (ulonglong)(bVar1 < 0xf0));
                            }
                          }
                          else {
                            pbVar13 = pbVar9 + 1;
                          }
                          pbVar12 = pbVar13 + ((longlong)pbVar12 - (longlong)pbVar9);
                          uVar8 = uVar8 - 1;
                          pbVar9 = pbVar13;
                        } while (uVar8 != 0);
                        uVar8 = 0;
                      }
LAB_00778a5f:
                      uVar14 = uVar14 - uVar8;
                    }
                    uVar15 = *(ushort *)((longlong)puVar11 + 0x14);
                    if (uVar14 < uVar15) {
                      *(ulonglong *)((longlong)register0x00000020 + -0x40) = (ulonglong)uVar15;
                      uVar10 = (uint)uVar15 - (int)uVar14;
                      *(undefined **)((longlong)register0x00000020 + -0x58) = &DAT_001c1039;
                      *(byte **)((longlong)register0x00000020 + -0x50) = pbVar12;
                      *(uint *)((longlong)register0x00000020 + -0x34) = uVar10;
                      switch(uVar5 >> 0x1d & 3) {
                      default:
                        uVar8 = 0;
                        break;
                      case 1:
                        uVar8 = (ulonglong)uVar10;
                        break;
                      case 2:
                        uVar8 = (ulonglong)((uVar10 & 0xffff) >> 1);
                      }
                      lVar7 = puVar11[1];
                      *(ulonglong *)((longlong)register0x00000020 + -0x48) = uVar8;
                      uVar5 = (int)uVar8 + 1;
                      while (uVar15 = (short)uVar5 - 1, uVar5 = (uint)uVar15, uVar15 != 0) {
                        UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x20);
                        *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0x778d3f;
                        cVar4 = (*UNRECOVERED_JUMPTABLE)();
                        if (cVar4 != '\0') {
                          return 1;
                        }
                      }
                      UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x18);
                      *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0x778d52;
                      cVar4 = (*UNRECOVERED_JUMPTABLE)();
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uVar17 = *(undefined8 *)((longlong)register0x00000020 + -0x48);
                      *(int *)((longlong)register0x00000020 + -0x34) =
                           *(int *)((longlong)register0x00000020 + -0x34) - (int)uVar17;
                      uVar2 = *(undefined4 *)((longlong)register0x00000020 + -0x40);
                      uVar15 = 0xffff;
                      do {
                        if ((ushort)((((short)uVar17 + (short)uVar14) - (short)uVar2) + uVar15) ==
                            -1) {
                          uVar15 = (ushort)*(undefined4 *)((longlong)register0x00000020 + -0x34);
                          break;
                        }
                        UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x20);
                        *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0x778d83;
                        cVar4 = (*UNRECOVERED_JUMPTABLE)();
                        uVar15 = uVar15 + 1;
                      } while (cVar4 == '\0');
                      return (ulonglong)(uVar15 < *(ushort *)((longlong)register0x00000020 + -0x34))
                      ;
                    }
                  }
                    /* WARNING: Could not recover jumptable at 0x00778d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar14 = (**(code **)(puVar11[1] + 0x18))(*(code **)(puVar11[1] + 0x18),pbVar12);
                  return uVar14;
                }
              }
              else {
                <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::hex_nibbles
                          (&lStack_c8,&PTR_s__rust_deps_rustc_demangle_0_1_27_00797920);
                if (lStack_c8 == 0) {
                  if ((_UNK_00797940 != (undefined8 *)0x0) &&
                     (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
                    return 1;
                  }
                  PTR_s__rust_deps_rustc_demangle_0_1_27_00797920 = (undefined *)0x0;
                  UNK_00797928 = (undefined1)uStack_c0;
                }
                else {
                  if ((uStack_c0 & 1) == 0) {
                    uVar14 = uStack_c0 & 0x7ffffffffffffffe;
                    uStack_b0 = 0;
                    uStack_a8 = 2;
                    uStack_c0 = uVar14;
                    lStack_b8 = lStack_c8 + uVar14;
                    do {
                      uVar5 = <core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                              ::next(&lStack_c8);
                      puVar11 = _UNK_00797940;
                    } while (uVar5 < 0xfffffffe);
                    if (uVar5 == 0xfffffffe) {
                      if (_UNK_00797940 == (undefined8 *)0x0) {
                        return 0;
                      }
                      cVar4 = (*(code *)PTR_write_char_0079a6e0)();
                      if (cVar4 != '\0') {
                        return 1;
                      }
                      uStack_b0 = 0;
                      uStack_a8 = 2;
                      uStack_c0 = uVar14;
                      lStack_b8 = lStack_c8 + uVar14;
                      while( true ) {
                        while( true ) {
                          iVar6 = <core[c0acaeba6ab4c2e0]::iter::sources::from_fn::FromFn<<rustc_demangle[a2bba03bad1b7f1a]::v0::HexNibbles>::try_parse_str_chars::{closure#2}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                                  ::next(&lStack_c8);
                          if (iVar6 == -2) {
                            uVar17 = *puVar11;
                            UNRECOVERED_JUMPTABLE = *(code **)(puVar11[1] + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0078200e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                            uVar14 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
                            return uVar14;
                          }
                          if (iVar6 != 0x27) break;
                          cVar4 = (*(code *)PTR_write_char_0079a6e0)();
                          if (cVar4 != '\0') {
                            return 1;
                          }
                        }
                        if (iVar6 == -1) break;
                        <char>::escape_debug_ext(auStack_9c,iVar6);
                        uVar8 = (ulonglong)bStack_8f;
                        uVar14 = (ulonglong)bStack_90;
                        while (uVar14 < uVar8) {
                          cVar4 = (*(code *)PTR_write_char_0079a6e0)();
                          uVar14 = uVar14 + 1;
                          if (cVar4 != '\0') {
                            return 1;
                          }
                        }
                      }
                      uVar17 = (*(code *)PTR_unwrap_failed_00799028)
                                         (&DAT_00797828,&uStack_89,
                                          &PTR_s__rustc_48a229ceaefd4985c50990b14_00797c28);
                      lVar7 = _UNK_001c10e7;
                      if (_UNK_001c10e7 != 0) {
                        cVar4 = (*(code *)PTR_fmt_007994b8)(uVar17,_UNK_001c10e7);
                        if (cVar4 != '\0') {
                          return 1;
                        }
                        if (0x2a < (ulonglong)_UNK_001c10ef) {
                          if ((ulonglong)_UNK_001c10ef - 0x2b < 0x1a) {
                            uVar5 = (*(code *)PTR_fmt_0079a6b8)();
                          }
                          else {
                            cVar4 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa_02,lVar7);
                            if (cVar4 != '\0') {
                              return 1;
                            }
                            uVar5 = (*(code *)PTR_fmt_007991f8)();
                          }
                          return (ulonglong)uVar5;
                        }
                        cVar4 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa_02,lVar7);
                        if (cVar4 != '\0') {
                          return 1;
                        }
                        _DAT_001c10c7 = 0;
                        UNK_001c10cf = 0;
                      }
                      return 0;
                    }
                  }
                  if ((_UNK_00797940 != (undefined8 *)0x0) &&
                     (cVar4 = (*(code *)PTR_fmt_007994b8)(), cVar4 != '\0')) {
                    return 1;
                  }
                  PTR_s__rust_deps_rustc_demangle_0_1_27_00797920 = (undefined *)0x0;
                  UNK_00797928 = 0;
                }
              }
              return 0;
            }
            pcStack_60 = (code *)0x76ed5c;
            uVar5 = (*(code *)PTR_fmt_007994b8)(extraout_XMM0_Qa_01,unaff_R14);
            unaff_R15 = (ulonglong)uVar5;
            goto LAB_0076ed64;
          }
        }
      }
    }
  }
  unaff_R15 = 0;
LAB_0076ed64:
  return unaff_R15 & 0xffffffff;
}


