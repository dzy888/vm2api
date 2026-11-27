// 0076b539 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::{closure#1}>

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
/* WARNING: Switch with 1 destination removed at 0x0076b5cc */
/* WARNING: Switch with 1 destination removed at 0x0078256c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_backref::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::{closure#1}>
    */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_backref::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path::_closure_1_>
          (ulonglong *param_1,undefined1 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  short sVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  ulonglong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  ulonglong in_stack_ffffffffffffffd8;
  
  if (*param_1 == 0) {
    uVar2 = param_1[4];
    if (uVar2 != 0) {
      pbVar11 = (byte *)0x1;
      uVar7 = *(uint *)(uVar2 + 0x10);
      if ((uVar7 & 0x18000000) != 0) {
        if ((uVar7 & 0x10000000) == 0) {
          lVar9 = 0;
          uVar13 = 0;
          do {
            uVar13 = uVar13 + (-0x41 < (char)(&DAT_001c1039)[lVar9]);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 1);
        }
        else {
          uVar13 = (ulonglong)*(ushort *)(uVar2 + 0x16);
          if (uVar13 == 0) {
            pbVar11 = (byte *)0x0;
            uVar8 = 0;
          }
          else {
            pbVar11 = (byte *)0x0;
            uVar8 = uVar13;
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
              pbVar11 = pbVar12 + ((longlong)pbVar11 - (longlong)pbVar10);
              uVar8 = uVar8 - 1;
              pbVar10 = pbVar12;
            } while (uVar8 != 0);
            uVar8 = 0;
          }
LAB_00778a5f:
          uVar13 = uVar13 - uVar8;
        }
        local_40 = (ulonglong)*(ushort *)(uVar2 + 0x14);
        if (uVar13 < local_40) {
          uStack_34 = (uint)*(ushort *)(uVar2 + 0x14) - (int)uVar13;
          switch(uVar7 >> 0x1d & 3) {
          default:
            uVar7 = 0;
            break;
          case 1:
            uVar7 = uStack_34;
            break;
          case 2:
            uVar7 = (uStack_34 & 0xffff) >> 1;
          }
          lVar9 = *(longlong *)(uVar2 + 8);
          uVar15 = uVar7 + 1;
          while (uVar14 = (short)uVar15 - 1, uVar15 = (uint)uVar14, uVar14 != 0) {
            cVar6 = (**(code **)(lVar9 + 0x20))();
            if (cVar6 != '\0') {
              return true;
            }
          }
          cVar6 = (**(code **)(lVar9 + 0x18))();
          if (cVar6 != '\0') {
            return true;
          }
          uStack_34 = uStack_34 - uVar7;
          sVar3 = (short)local_40;
          iVar16 = 0xffff;
          do {
            if ((short)((((short)uVar7 + (short)uVar13) - sVar3) + (short)iVar16) == -1) {
              iVar16 = uStack_34;
              break;
            }
            cVar6 = (**(code **)(lVar9 + 0x20))();
            iVar16 = iVar16 + 1;
          } while (cVar6 == '\0');
          return (ushort)iVar16 < (ushort)uStack_34;
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(uVar2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar11);
      return (bool)uVar5;
    }
  }
  else {
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::backref(&local_40,param_1);
    if (local_40 == 0) {
      if ((param_1[4] != 0) && (cVar6 = (*(code *)PTR_fmt_007994b8)(&DAT_001c1020), cVar6 != '\0'))
      {
        return true;
      }
      param_1[2] = local_30;
      param_1[3] = in_stack_ffffffffffffffd8;
      *param_1 = local_40;
      param_1[1] = CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,uStack_38));
    }
    else if (param_1[4] != 0) {
      uVar2 = *param_1;
      uVar13 = param_1[1];
      uVar8 = param_1[2];
      uVar4 = param_1[3];
      *param_1 = local_40;
      param_1[1] = CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,uStack_38));
      param_1[2] = local_30;
      param_1[3] = in_stack_ffffffffffffffd8;
      uVar5 = print_path(param_1,*param_2);
      *param_1 = uVar2;
      param_1[1] = uVar13;
      param_1[2] = uVar8;
      param_1[3] = uVar4;
      return (bool)uVar5;
    }
  }
  return false;
}


