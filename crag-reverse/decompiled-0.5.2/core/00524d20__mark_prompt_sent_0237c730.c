// 00524d20 mark_prompt_sent

/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_prompt_sent */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::mark_prompt_sent
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint local_44;
  uint local_40;
  uint local_3c;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x38);
    lVar6 = *(longlong *)(param_1 + 0x40) * 0x280 + lVar8;
    do {
      if (((*(longlong *)(lVar8 + 0x10) == param_3) &&
          (iVar5 = (*(code *)PTR_bcmp_00799020)(lVar8,param_3), iVar5 == 0)) ||
         ((*(longlong *)(lVar8 + 0x128) != -1 &&
          ((*(longlong *)(lVar8 + 0x138) == param_3 &&
           (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)))))) {
LAB_00524eeb:
        *(undefined1 *)(lVar8 + 0x278) = 1;
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
        *(longlong *)(lVar8 + 0x260) = lVar6;
        return;
      }
      uVar1 = *(ulonglong *)(lVar8 + 0xf0);
      if (uVar1 != 0) {
        uVar2 = *(ulonglong *)(lVar8 + 0xe8);
        uVar3 = *(ulonglong *)(lVar8 + 0xd8);
        uVar12 = uVar3;
        if (uVar2 < uVar3) {
          uVar12 = 0;
        }
        uVar13 = uVar2 - uVar12;
        uVar9 = uVar3 - uVar13;
        lVar10 = (uVar1 - uVar9) * 0x18;
        if (uVar1 <= uVar9) {
          lVar10 = 0;
        }
        lVar4 = *(longlong *)(lVar8 + 0xe0);
        uVar14 = uVar13 + uVar1;
        if (uVar9 < uVar1) {
          uVar14 = uVar3;
        }
        if (uVar13 != uVar14) {
          if (uVar1 < uVar9) {
            uVar9 = uVar1;
          }
          lVar15 = 0;
          do {
            if ((*(longlong *)(lVar4 + uVar2 * 0x18 + uVar12 * -0x18 + 0x10 + lVar15) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) goto LAB_00524eeb;
            lVar15 = lVar15 + 0x18;
          } while (uVar9 * 0x18 != lVar15);
        }
        if (lVar10 != 0) {
          lVar15 = 0;
          do {
            if ((*(longlong *)(lVar4 + 0x10 + lVar15) == param_3) &&
               (iVar5 = (*(code *)PTR_bcmp_00799020)(), iVar5 == 0)) goto LAB_00524eeb;
            lVar15 = lVar15 + 0x18;
          } while (lVar10 != lVar15);
        }
      }
      lVar8 = lVar8 + 0x280;
    } while (lVar8 != lVar6);
  }
  return;
}


