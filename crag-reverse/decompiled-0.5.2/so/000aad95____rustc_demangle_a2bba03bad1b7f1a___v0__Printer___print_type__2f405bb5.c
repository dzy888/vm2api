// 000aad95 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>

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
/* WARNING: Switch with 1 destination removed at 0x000aae1d */
/* WARNING: Switch with 1 destination removed at 0x000be29c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_backref::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>
    */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_backref::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong lStack_30;
  longlong in_stack_ffffffffffffffd8;
  longlong in_stack_ffffffffffffffe0;
  
  if (*param_1 == 0) {
    lVar3 = param_1[4];
    if (lVar3 != 0) {
      pbVar12 = (byte *)0x1;
      uVar8 = *(uint *)(lVar3 + 0x10);
      if ((uVar8 & 0x18000000) != 0) {
        if ((uVar8 & 0x10000000) == 0) {
          lVar10 = 0;
          uVar14 = 0;
          do {
            uVar14 = uVar14 + (-0x41 < (char)(&DAT_00016a3d)[lVar10]);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 1);
        }
        else {
          uVar14 = (ulonglong)*(ushort *)(lVar3 + 0x16);
          if (uVar14 == 0) {
            pbVar12 = (byte *)0x0;
            uVar9 = 0;
          }
          else {
            pbVar12 = (byte *)0x0;
            uVar9 = uVar14;
            pbVar11 = &DAT_00016a3d;
            do {
              if (pbVar11 == &DAT_00016a3e) goto LAB_000b677f;
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
LAB_000b677f:
          uVar14 = uVar14 - uVar9;
        }
        uVar2 = *(ushort *)(lVar3 + 0x14);
        if (uVar14 < uVar2) {
          uStack_34 = (uint)uVar2 - (int)uVar14;
          switch(uVar8 >> 0x1d & 3) {
          default:
            uVar8 = 0;
            break;
          case 1:
            uVar8 = uStack_34;
            break;
          case 2:
            uVar8 = (uStack_34 & 0xffff) >> 1;
          }
          lVar3 = *(longlong *)(lVar3 + 8);
          uVar16 = uVar8 + 1;
          while (uVar15 = (short)uVar16 - 1, uVar16 = (uint)uVar15, uVar15 != 0) {
            cVar7 = (**(code **)(lVar3 + 0x20))();
            if (cVar7 != '\0') {
              return true;
            }
          }
          cVar7 = (**(code **)(lVar3 + 0x18))();
          if (cVar7 != '\0') {
            return true;
          }
          uStack_34 = uStack_34 - uVar8;
          iVar17 = 0xffff;
          do {
            if ((ushort)((((short)uVar8 + (short)uVar14) - uVar2) + (short)iVar17) == -1) {
              iVar17 = uStack_34;
              break;
            }
            cVar7 = (**(code **)(lVar3 + 0x20))();
            iVar17 = iVar17 + 1;
          } while (cVar7 == '\0');
          return (ushort)iVar17 < (ushort)uStack_34;
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar3 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar12);
      return (bool)uVar6;
    }
  }
  else {
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::backref(&local_38,param_1);
    if (CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,local_38)) == 0) {
      if ((param_1[4] != 0) && (cVar7 = (*(code *)PTR_fmt_000c3f58)(&DAT_00016a24), cVar7 != '\0'))
      {
        return true;
      }
      param_1[2] = in_stack_ffffffffffffffd8;
      param_1[3] = in_stack_ffffffffffffffe0;
      *param_1 = CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,local_38));
      param_1[1] = lStack_30;
    }
    else if (param_1[4] != 0) {
      lVar3 = *param_1;
      lVar10 = param_1[1];
      lVar4 = param_1[2];
      lVar5 = param_1[3];
      *param_1 = CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,local_38));
      param_1[1] = lStack_30;
      param_1[2] = in_stack_ffffffffffffffd8;
      param_1[3] = in_stack_ffffffffffffffe0;
      uVar6 = print_type(param_1);
      *param_1 = lVar3;
      param_1[1] = lVar10;
      param_1[2] = lVar4;
      param_1[3] = lVar5;
      return (bool)uVar6;
    }
  }
  return false;
}


