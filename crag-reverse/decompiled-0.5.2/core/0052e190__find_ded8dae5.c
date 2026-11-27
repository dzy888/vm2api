// 0052e190 find

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::find
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x38);
    lVar6 = *(longlong *)(param_1 + 0x40) * 0x280 + lVar13;
    do {
      if ((*(longlong *)(lVar13 + 0x10) == param_3) &&
         (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
        return lVar13;
      }
      if (((*(longlong *)(lVar13 + 0x128) != -1) && (*(longlong *)(lVar13 + 0x138) == param_3)) &&
         (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
        return lVar13;
      }
      uVar1 = *(ulonglong *)(lVar13 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar13 + 0xe8);
        uVar3 = *(ulonglong *)(lVar13 + 0xd8);
        uVar10 = uVar3;
        if (uVar2 < uVar3) {
          uVar10 = 0;
        }
        uVar11 = uVar2 - uVar10;
        uVar7 = uVar3 - uVar11;
        lVar9 = (uVar1 - uVar7) * 0x18;
        if (uVar1 <= uVar7) {
          lVar9 = 0;
        }
        lVar4 = *(longlong *)(lVar13 + 0xe0);
        uVar12 = uVar11 + uVar1;
        if (uVar7 < uVar1) {
          uVar12 = uVar3;
        }
        if (uVar11 != uVar12) {
          if (uVar1 < uVar7) {
            uVar7 = uVar1;
          }
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar4 + uVar2 * 0x18 + uVar10 * -0x18 + 0x10 + lVar8) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
              return lVar13;
            }
            lVar8 = lVar8 + 0x18;
          } while (uVar7 * 0x18 != lVar8);
        }
        if (lVar9 != 0) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar4 + 0x10 + lVar8) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
              return lVar13;
            }
            lVar8 = lVar8 + 0x18;
          } while (lVar9 != lVar8);
        }
      }
      lVar13 = lVar13 + 0x280;
    } while (lVar13 != lVar6);
  }
  return 0;
}


