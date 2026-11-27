// 00527080 find_by_response_id

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find_by_response_id */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::find_by_response_id
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
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x38);
    lVar6 = *(longlong *)(param_1 + 0x40) * 0x280 + lVar13;
    do {
      uVar1 = *(ulonglong *)(lVar13 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar13 + 0xe8);
        uVar3 = *(ulonglong *)(lVar13 + 0xd8);
        uVar9 = uVar3;
        if (uVar2 < uVar3) {
          uVar9 = 0;
        }
        uVar10 = uVar2 - uVar9;
        uVar7 = uVar3 - uVar10;
        lVar12 = (uVar1 - uVar7) * 0x18;
        if (uVar1 <= uVar7) {
          lVar12 = 0;
        }
        lVar4 = *(longlong *)(lVar13 + 0xe0);
        uVar11 = uVar10 + uVar1;
        if (uVar7 < uVar1) {
          uVar11 = uVar3;
        }
        if (uVar10 != uVar11) {
          if (uVar1 < uVar7) {
            uVar7 = uVar1;
          }
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar4 + uVar2 * 0x18 + uVar9 * -0x18 + 0x10 + lVar8) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
              return lVar13;
            }
            lVar8 = lVar8 + 0x18;
          } while (uVar7 * 0x18 != lVar8);
        }
        if (lVar12 != 0) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(lVar4 + 0x10 + lVar8) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) {
              return lVar13;
            }
            lVar8 = lVar8 + 0x18;
          } while (lVar12 != lVar8);
        }
      }
      lVar13 = lVar13 + 0x280;
    } while (lVar13 != lVar6);
  }
  return 0;
}


