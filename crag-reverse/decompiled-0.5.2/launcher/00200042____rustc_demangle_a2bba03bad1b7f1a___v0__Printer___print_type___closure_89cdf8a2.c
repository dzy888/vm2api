// 00200042 <<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x0020b5ba) */
/* WARNING: Removing unreachable block (ram,0x0020b5c2) */
/* WARNING: Removing unreachable block (ram,0x0020b61d) */
/* WARNING: Removing unreachable block (ram,0x0020b66a) */
/* WARNING: Removing unreachable block (ram,0x0020b6b7) */
/* WARNING: Removing unreachable block (ram,0x0020b704) */
/* WARNING: Removing unreachable block (ram,0x0020b751) */
/* WARNING: Removing unreachable block (ram,0x0020b79a) */
/* WARNING: Removing unreachable block (ram,0x0020b7de) */
/* WARNING: Removing unreachable block (ram,0x0020b57f) */
/* WARNING: Switch with 1 destination removed at 0x002000e5 */
/* WARNING: Switch with 1 destination removed at 0x0021398c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::in_binder::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::{closure#0}>
    */

bool __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::in_binder::
<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::_closure_0_>(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  short sVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  
  if (*param_1 == 0) {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      pbVar10 = (byte *)0x1;
      uVar7 = *(uint *)(lVar2 + 0x10);
      if ((uVar7 & 0x18000000) != 0) {
        if ((uVar7 & 0x10000000) == 0) {
          lVar13 = 0;
          uVar12 = 0;
          do {
            uVar12 = uVar12 + (-0x41 < (char)(&DAT_0012f169)[lVar13]);
            lVar13 = lVar13 + 1;
          } while (lVar13 != 1);
        }
        else {
          uVar12 = (ulonglong)*(ushort *)(lVar2 + 0x16);
          if (uVar12 == 0) {
            pbVar10 = (byte *)0x0;
            uVar8 = 0;
          }
          else {
            pbVar10 = (byte *)0x0;
            uVar8 = uVar12;
            pbVar9 = &DAT_0012f169;
            do {
              if (pbVar9 == &DAT_0012f16a) goto LAB_0020b5af;
              bVar1 = *pbVar9;
              if ((char)bVar1 < '\0') {
                if (bVar1 < 0xe0) {
                  pbVar11 = pbVar9 + 2;
                }
                else {
                  pbVar11 = pbVar9 + (4 - (ulonglong)(bVar1 < 0xf0));
                }
              }
              else {
                pbVar11 = pbVar9 + 1;
              }
              pbVar10 = pbVar11 + ((longlong)pbVar10 - (longlong)pbVar9);
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar11;
            } while (uVar8 != 0);
            uVar8 = 0;
          }
LAB_0020b5af:
          uVar12 = uVar12 - uVar8;
        }
        local_40 = (ulonglong)*(ushort *)(lVar2 + 0x14);
        if (uVar12 < local_40) {
          uStack_34 = (uint)*(ushort *)(lVar2 + 0x14) - (int)uVar12;
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
          lVar2 = *(longlong *)(lVar2 + 8);
          uVar15 = uVar7 + 1;
          while (uVar14 = (short)uVar15 - 1, uVar15 = (uint)uVar14, uVar14 != 0) {
            cVar5 = (**(code **)(lVar2 + 0x20))();
            if (cVar5 != '\0') {
              return true;
            }
          }
          cVar5 = (**(code **)(lVar2 + 0x18))();
          if (cVar5 != '\0') {
            return true;
          }
          uStack_34 = uStack_34 - uVar7;
          sVar3 = (short)local_40;
          iVar16 = 0xffff;
          do {
            if ((short)((((short)uVar7 + (short)uVar12) - sVar3) + (short)iVar16) == -1) {
              iVar16 = uStack_34;
              break;
            }
            cVar5 = (**(code **)(lVar2 + 0x20))();
            iVar16 = iVar16 + 1;
          } while (cVar5 == '\0');
          return (ushort)iVar16 < (ushort)uStack_34;
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar10);
      return (bool)uVar6;
    }
  }
  else {
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::opt_integer_62(&local_40,param_1,0x47);
    if ((char)local_40 != '\x01') {
      if (param_1[4] == 0) {
        uVar6 = print_type::_closure_0_(param_1);
        return (bool)uVar6;
      }
      lVar2 = CONCAT26(uStack_34._2_2_,CONCAT24((ushort)uStack_34,local_38));
      if (lVar2 != 0) {
        cVar5 = (*(code *)PTR_fmt_00219e18)();
        puVar4 = PTR_fmt_00219e18;
        if (cVar5 != '\0') {
          return true;
        }
        lVar13 = 0;
        while (lVar2 != lVar13) {
          if (((lVar13 != 0) && (param_1[4] != 0)) && (cVar5 = (*(code *)puVar4)(), cVar5 != '\0'))
          {
            return true;
          }
          *(int *)(param_1 + 5) = (int)param_1[5] + 1;
          cVar5 = print_lifetime_from_index(param_1,1);
          lVar13 = lVar13 + 1;
          if (cVar5 != '\0') {
            return true;
          }
        }
        if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_00219e18)(), cVar5 != '\0')) {
          return true;
        }
      }
      uVar6 = print_type::_closure_0_(param_1);
      *(int *)(param_1 + 5) = (int)param_1[5] - local_38;
      return (bool)uVar6;
    }
    if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_00219e18)(), cVar5 != '\0')) {
      return true;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = local_40._1_1_;
  }
  return false;
}


