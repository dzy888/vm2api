// 00532960 mark_provider_output_observed

/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::mark_provider_output_observed
    */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>::mark_provider_output_observed
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  
  puVar2 = PTR_bcmp_00799020;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar9 = 0;
    do {
      if ((*(longlong *)(lVar1 + 0x10 + lVar9) == param_3) &&
         (iVar3 = (*(code *)puVar2)(), iVar3 == 0)) {
        if (*(char *)(lVar1 + 0xd4 + lVar9) != '\0') {
          return;
        }
        *(undefined1 *)(lVar1 + 0xd4 + lVar9) = 1;
        (*(code *)PTR_now_00799478)();
        iVar8 = (int)local_48 >> 0xd;
        iVar3 = iVar8 + -1;
        iVar6 = 0;
        if (iVar8 < 1) {
          iVar6 = (1U - iVar8) / 400 + 1;
          iVar3 = iVar3 + iVar6 * 400;
          iVar6 = iVar6 * -0x23ab1;
        }
        lVar7 = (ulonglong)local_40 / 1000000 +
                ((longlong)
                 (int)((((local_48 >> 4 & 0x1ff) + iVar6) - iVar3 / 100) + (iVar3 * 0x5b5 >> 2) +
                       (iVar3 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_44) * 1000;
        lVar4 = 0;
        if (0 < lVar7) {
          lVar4 = lVar7;
        }
        *(longlong *)(lVar1 + 200 + lVar9) = lVar4;
        uVar5 = persist(param_1);
        if (uVar5 == 0) {
          return;
        }
        if (((uint)uVar5 & 3) - 2 < 2) {
          return;
        }
        if ((uVar5 & 3) == 0) {
          return;
        }
        (*(code *)PTR_drop_00799040)();
        return;
      }
      lVar9 = lVar9 + 0xd8;
    } while (lVar4 * 0xd8 != lVar9);
  }
  return;
}


