// 002031d0 print_pat

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
/* WARNING: Switch with 1 destination removed at 0x002032b0 */
/* WARNING: Switch with 1 destination removed at 0x0021398c */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_pat */

bool __rustcall <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_pat(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  
  if (*param_1 == 0) {
    lVar3 = param_1[4];
    if (lVar3 == 0) {
      return false;
    }
    pbVar12 = (byte *)0x1;
    uVar7 = *(uint *)(lVar3 + 0x10);
    if ((uVar7 & 0x18000000) != 0) {
      if ((uVar7 & 0x10000000) == 0) {
        lVar9 = 0;
        uVar14 = 0;
        do {
          uVar14 = uVar14 + (-0x41 < (char)(&DAT_0012f169)[lVar9]);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 1);
      }
      else {
        uVar14 = (ulonglong)*(ushort *)(lVar3 + 0x16);
        if (uVar14 == 0) {
          pbVar12 = (byte *)0x0;
          uVar8 = 0;
        }
        else {
          pbVar12 = (byte *)0x0;
          uVar8 = uVar14;
          pbVar10 = &DAT_0012f169;
          do {
            if (pbVar10 == &DAT_0012f16a) goto LAB_0020b5af;
            bVar1 = *pbVar10;
            if ((char)bVar1 < '\0') {
              if (bVar1 < 0xe0) {
                pbVar13 = pbVar10 + 2;
              }
              else {
                pbVar13 = pbVar10 + (4 - (ulonglong)(bVar1 < 0xf0));
              }
            }
            else {
              pbVar13 = pbVar10 + 1;
            }
            pbVar12 = pbVar13 + ((longlong)pbVar12 - (longlong)pbVar10);
            uVar8 = uVar8 - 1;
            pbVar10 = pbVar13;
          } while (uVar8 != 0);
          uVar8 = 0;
        }
LAB_0020b5af:
        uVar14 = uVar14 - uVar8;
      }
      uVar2 = *(ushort *)(lVar3 + 0x14);
      if (uVar14 < uVar2) {
        uVar11 = (uint)uVar2 - (int)uVar14;
        switch(uVar7 >> 0x1d & 3) {
        default:
          uVar7 = 0;
          break;
        case 1:
          uVar7 = uVar11;
          break;
        case 2:
          uVar7 = (uVar11 & 0xffff) >> 1;
        }
        lVar3 = *(longlong *)(lVar3 + 8);
        uVar17 = uVar7 + 1;
        while (uVar15 = (short)uVar17 - 1, uVar17 = (uint)uVar15, uVar15 != 0) {
          cVar5 = (**(code **)(lVar3 + 0x20))();
          if (cVar5 != '\0') {
            return true;
          }
        }
        cVar5 = (**(code **)(lVar3 + 0x18))();
        if (cVar5 != '\0') {
          return true;
        }
        uVar15 = (short)uVar11 - (short)uVar7;
        uVar16 = 0xffff;
        do {
          if ((ushort)((((short)uVar7 + (short)uVar14) - uVar2) + uVar16) == -1) {
            uVar16 = uVar15;
            break;
          }
          cVar5 = (**(code **)(lVar3 + 0x20))();
          uVar16 = uVar16 + 1;
        } while (cVar5 == '\0');
        return uVar16 < uVar15;
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar3 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar12);
    return (bool)uVar6;
  }
  uVar14 = param_1[2];
  if (uVar14 < (ulonglong)param_1[1]) {
    cVar5 = *(char *)(*param_1 + uVar14);
    param_1[2] = uVar14 + 1;
    if (cVar5 == 'N') {
      if (param_1[4] == 0) {
        return false;
      }
      cVar5 = (*(code *)PTR_fmt_00219e18)();
    }
    else {
      if (cVar5 == 'O') {
        uVar7 = (int)param_1[3] + 1;
        *(uint *)(param_1 + 3) = uVar7;
        if (500 < uVar7) {
          if ((param_1[4] == 0) || (cVar5 = (*(code *)PTR_fmt_00219e18)(), cVar5 == '\0')) {
            *param_1 = 0;
            *(undefined1 *)(param_1 + 1) = 1;
            return false;
          }
          return true;
        }
        cVar5 = print_pat(param_1);
        puVar4 = PTR_fmt_00219e18;
        while( true ) {
          if (cVar5 != '\0') {
            return true;
          }
          if (*param_1 == 0) break;
          uVar14 = param_1[2];
          if ((uVar14 < (ulonglong)param_1[1]) && (*(char *)(*param_1 + uVar14) == 'E')) {
            param_1[2] = uVar14 + 1;
            *(int *)(param_1 + 3) = (int)param_1[3] + -1;
            return false;
          }
          if ((param_1[4] != 0) && (cVar5 = (*(code *)puVar4)(), cVar5 != '\0')) {
            return true;
          }
          cVar5 = print_pat(param_1);
        }
        if (param_1[4] != 0) {
          cVar5 = (*(code *)PTR_fmt_00219e18)();
          goto LAB_0020327b;
        }
        goto LAB_00203283;
      }
      if (cVar5 != 'R') goto LAB_0020325d;
      cVar5 = print_const(param_1,0);
      if (cVar5 != '\0') {
        return true;
      }
      if ((param_1[4] != 0) && (cVar5 = (*(code *)PTR_fmt_00219e18)(), cVar5 != '\0')) {
        return true;
      }
      cVar5 = print_const(param_1,0);
    }
    if (cVar5 != '\0') {
      return true;
    }
  }
  else {
LAB_0020325d:
    if (param_1[4] != 0) {
      cVar5 = (*(code *)PTR_fmt_00219e18)();
LAB_0020327b:
      if (cVar5 != '\0') {
        return true;
      }
    }
LAB_00203283:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return false;
}


