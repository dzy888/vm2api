// 00673ba0 {closure#2}

/* core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::{closure#2} */

undefined8 __rustcall
core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
          (longlong *param_1,longlong param_2,uint param_3,int param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  ushort uVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_4 == 0) {
    param_2 = param_2 + *param_1;
    piVar1 = (int *)param_1[2];
    uVar2 = param_1[3];
    if (uVar2 < 4) {
      do {
        if (uVar2 == 0) {
          return 1;
        }
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar7 = (ulonglong)uVar4;
        if (*(char *)(param_2 + 1 + uVar7) == (char)*piVar1) {
          if (uVar2 == 1) {
            return 1;
          }
          if (*(char *)(param_2 + 2 + uVar7) == *(char *)((longlong)piVar1 + 1)) {
            if (uVar2 == 2) {
              return 1;
            }
            if (*(char *)(param_2 + 3 + uVar7) == *(char *)((longlong)piVar1 + 2) && uVar2 == 3) {
              return 1;
            }
          }
        }
        bVar3 = (byte)uVar4 & 0xf;
        uVar8 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar8);
      } while (uVar8 != 0);
    }
    else {
      do {
        uVar4 = 0;
        for (uVar5 = param_3; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        piVar9 = (int *)(param_2 + (ulonglong)uVar4 + 1);
        piVar6 = (int *)(param_2 + (ulonglong)uVar4 + uVar2 + -3);
        if (piVar9 < piVar6) {
          piVar10 = piVar1;
          do {
            if (*piVar9 != *piVar10) goto LAB_00673bcd;
            piVar9 = piVar9 + 1;
            piVar10 = piVar10 + 1;
          } while (piVar9 < piVar6);
        }
        if (*piVar6 == *(int *)((longlong)piVar1 + (uVar2 - 4))) {
          return 1;
        }
LAB_00673bcd:
        bVar3 = (byte)uVar4 & 0xf;
        uVar8 = (ushort)param_3 & (-2 << bVar3 | 0xfffeU >> 0x10 - bVar3);
        param_3 = CONCAT22((short)(param_3 >> 0x10),uVar8);
      } while (uVar8 != 0);
    }
  }
  return 0;
}


