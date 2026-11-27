// 00521dd0 touch_record

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::touch_record */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::touch_record
          (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  if (param_2 != 0) {
    lVar6 = param_2 * 0x280 + param_1;
    do {
      if (((*(longlong *)(param_1 + 0x10) == param_4) &&
          (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) ||
         ((*(longlong *)(param_1 + 0x128) != -1 &&
          ((*(longlong *)(param_1 + 0x138) == param_4 &&
           (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)))))) {
LAB_00521f9b:
        (*(code *)PTR_now_00799478)();
        iVar11 = (int)local_44 >> 0xd;
        iVar5 = iVar11 + -1;
        iVar7 = 0;
        if (iVar11 < 1) {
          iVar7 = (1U - iVar11) / 400 + 1;
          iVar5 = iVar5 + iVar7 * 400;
          iVar7 = iVar7 * -0x23ab1;
        }
        lVar10 = (ulonglong)local_3c / 1000000 +
                 ((longlong)
                  (int)((((local_44 >> 4 & 0x1ff) + iVar7) - iVar5 / 100) + (iVar5 * 0x5b5 >> 2) +
                        (iVar5 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_40) * 1000;
        lVar6 = 0;
        if (0 < lVar10) {
          lVar6 = lVar10;
        }
        *(longlong *)(param_1 + 0x260) = lVar6;
        return;
      }
      uVar1 = *(ulonglong *)(param_1 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(param_1 + 0xe8);
        uVar3 = *(ulonglong *)(param_1 + 0xd8);
        uVar12 = uVar3;
        if (uVar2 < uVar3) {
          uVar12 = 0;
        }
        uVar13 = uVar2 - uVar12;
        uVar8 = uVar3 - uVar13;
        lVar10 = (uVar1 - uVar8) * 0x18;
        if (uVar1 <= uVar8) {
          lVar10 = 0;
        }
        lVar4 = *(longlong *)(param_1 + 0xe0);
        uVar14 = uVar13 + uVar1;
        if (uVar8 < uVar1) {
          uVar14 = uVar3;
        }
        if (uVar13 != uVar14) {
          if (uVar1 < uVar8) {
            uVar8 = uVar1;
          }
          lVar9 = 0;
          do {
            if ((*(longlong *)(lVar4 + uVar2 * 0x18 + uVar12 * -0x18 + 0x10 + lVar9) == param_4) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) goto LAB_00521f9b;
            lVar9 = lVar9 + 0x18;
          } while (uVar8 * 0x18 != lVar9);
        }
        if (lVar10 != 0) {
          lVar9 = 0;
          do {
            if ((*(longlong *)(lVar4 + 0x10 + lVar9) == param_4) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) goto LAB_00521f9b;
            lVar9 = lVar9 + 0x18;
          } while (lVar10 != lVar9);
        }
      }
      param_1 = param_1 + 0x280;
    } while (param_1 != lVar6);
  }
  return;
}


