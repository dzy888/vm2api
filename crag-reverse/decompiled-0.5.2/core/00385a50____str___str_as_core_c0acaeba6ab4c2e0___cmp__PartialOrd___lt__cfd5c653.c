// 00385a50 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<&str, <&str
   as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  if (param_3 <= param_4 - 1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_4 != param_3) {
    lVar10 = param_4 * 0x10;
    puVar14 = param_2 + param_4 * 2;
    do {
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      uVar4 = puVar14[-1];
      uVar11 = uVar4;
      if (uVar3 < uVar4) {
        uVar11 = uVar3;
      }
      iVar9 = (*(code *)PTR_memcmp_00799528)(param_1,uVar11);
      lVar13 = uVar3 - uVar4;
      if (iVar9 != 0) {
        lVar13 = (longlong)iVar9;
      }
      param_1 = extraout_XMM0_Da;
      if (lVar13 < 0) {
        lVar13 = lVar10;
        do {
          puVar1 = (undefined4 *)((longlong)param_2 + lVar13 + -0x10);
          param_1 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar1 = (undefined4 *)((longlong)param_2 + lVar13);
          *puVar1 = param_1;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          if (lVar13 == 0x10) {
            puVar12 = param_2;
            goto LAB_00385a9e;
          }
          uVar4 = *(ulonglong *)((longlong)param_2 + lVar13 + -0x18);
          uVar11 = uVar4;
          if (uVar3 < uVar4) {
            uVar11 = uVar3;
          }
          iVar9 = (*(code *)PTR_memcmp_00799528)(param_1,uVar11);
          lVar15 = uVar3 - uVar4;
          if (iVar9 != 0) {
            lVar15 = (longlong)iVar9;
          }
          lVar13 = lVar13 + -0x10;
        } while (lVar15 < 0);
        puVar12 = (undefined8 *)(lVar13 + (longlong)param_2);
        param_1 = extraout_XMM0_Da_00;
LAB_00385a9e:
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
      }
      puVar14 = puVar14 + 2;
      lVar10 = lVar10 + 0x10;
    } while (puVar14 != param_2 + param_3 * 2);
  }
  return;
}


