// 000ae648 print_lifetime_from_index

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
/* WARNING: Switch with 1 destination removed at 0x000ae6e9 */
/* WARNING: Switch with 1 destination removed at 0x000be29c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_lifetime_from_index */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_lifetime_from_index
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa_00;
  
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    cVar4 = (*(code *)PTR_fmt_000c3f58)(param_4,lVar3);
    if (cVar4 != '\0') {
      return true;
    }
    if (param_2 == 0) {
      pbVar11 = (byte *)0x1;
      uVar6 = *(uint *)(lVar3 + 0x10);
      if ((uVar6 & 0x18000000) != 0) {
        if ((uVar6 & 0x10000000) == 0) {
          lVar8 = 0;
          uVar13 = 0;
          do {
            uVar13 = uVar13 + (-0x41 < (char)(&DAT_00016b16)[lVar8]);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 1);
        }
        else {
          uVar13 = (ulonglong)*(ushort *)(lVar3 + 0x16);
          if (uVar13 == 0) {
            pbVar11 = (byte *)0x0;
            uVar7 = 0;
          }
          else {
            pbVar11 = (byte *)0x0;
            uVar7 = uVar13;
            pbVar9 = &DAT_00016b16;
            do {
              if (pbVar9 == &DAT_00016b17) goto LAB_000b677f;
              bVar1 = *pbVar9;
              if ((char)bVar1 < '\0') {
                if (bVar1 < 0xe0) {
                  pbVar12 = pbVar9 + 2;
                }
                else {
                  pbVar12 = pbVar9 + (4 - (ulonglong)(bVar1 < 0xf0));
                }
              }
              else {
                pbVar12 = pbVar9 + 1;
              }
              pbVar11 = pbVar12 + ((longlong)pbVar11 - (longlong)pbVar9);
              uVar7 = uVar7 - 1;
              pbVar9 = pbVar12;
            } while (uVar7 != 0);
            uVar7 = 0;
          }
LAB_000b677f:
          uVar13 = uVar13 - uVar7;
        }
        uVar2 = *(ushort *)(lVar3 + 0x14);
        if (uVar13 < uVar2) {
          uVar10 = (uint)uVar2 - (int)uVar13;
          switch(uVar6 >> 0x1d & 3) {
          default:
            uVar6 = 0;
            break;
          case 1:
            uVar6 = uVar10;
            break;
          case 2:
            uVar6 = (uVar10 & 0xffff) >> 1;
          }
          lVar3 = *(longlong *)(lVar3 + 8);
          uVar16 = uVar6 + 1;
          uVar17 = extraout_XMM0_Qa;
          while (uVar14 = (short)uVar16 - 1, uVar16 = (uint)uVar14, uVar14 != 0) {
            cVar4 = (**(code **)(lVar3 + 0x20))();
            uVar17 = extraout_XMM0_Qa_00;
            if (cVar4 != '\0') {
              return true;
            }
          }
          cVar4 = (**(code **)(lVar3 + 0x18))(uVar17,pbVar11);
          if (cVar4 != '\0') {
            return true;
          }
          uVar14 = (short)uVar10 - (short)uVar6;
          uVar15 = 0xffff;
          do {
            if ((ushort)((((short)uVar6 + (short)uVar13) - uVar2) + uVar15) == -1) {
              uVar15 = uVar14;
              break;
            }
            cVar4 = (**(code **)(lVar3 + 0x20))();
            uVar15 = uVar15 + 1;
          } while (cVar4 == '\0');
          return uVar15 < uVar14;
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar3 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar11);
      return (bool)uVar5;
    }
    if (param_2 <= *(uint *)(param_1 + 5)) {
      if (*(uint *)(param_1 + 5) - param_2 < 0x1a) {
        uVar5 = (*(code *)PTR_fmt_000c4030)();
      }
      else {
        cVar4 = (*(code *)PTR_fmt_000c3f58)(extraout_XMM0_Qa,lVar3);
        if (cVar4 != '\0') {
          return true;
        }
        uVar5 = (*(code *)PTR_fmt_000c3b68)();
      }
      return (bool)uVar5;
    }
    cVar4 = (*(code *)PTR_fmt_000c3f58)(extraout_XMM0_Qa,lVar3);
    if (cVar4 != '\0') {
      return true;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return false;
}


