// 00385270 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  
  lVar11 = param_2 * 0x10;
  puVar15 = param_1 + param_2 * 4 + -4;
  uVar9 = param_2 * 8 & 0xfffffffffffffff0;
  puVar17 = (undefined4 *)((longlong)param_1 + uVar9);
  puVar18 = (undefined4 *)((longlong)param_1 + (uVar9 - 0x10));
  uVar14 = 0;
  do {
    puVar7 = PTR_memcmp_00799528;
    lVar11 = lVar11 + -0x10;
    uVar1 = *(ulonglong *)(puVar17 + 2);
    uVar2 = *(ulonglong *)(param_1 + 2);
    uVar12 = uVar2;
    if (uVar1 < uVar2) {
      uVar12 = uVar1;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(lVar11,uVar12);
    lVar16 = uVar1 - uVar2;
    if (iVar8 != 0) {
      lVar16 = (longlong)iVar8;
    }
    puVar10 = puVar17;
    if (-1 < lVar16) {
      puVar10 = param_1;
    }
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    puVar13 = (undefined4 *)(param_3 + uVar14);
    *puVar13 = *puVar10;
    puVar13[1] = uVar4;
    puVar13[2] = uVar5;
    puVar13[3] = uVar6;
    puVar17 = (undefined4 *)
              ((ulonglong)((uint)((ulonglong)lVar16 >> 0x3f) << 4) + (longlong)puVar17);
    param_1 = param_1 + (ulonglong)(-1 < lVar16) * 4;
    uVar1 = *(ulonglong *)(puVar15 + 2);
    uVar2 = *(ulonglong *)(puVar18 + 2);
    uVar12 = uVar2;
    if (uVar1 < uVar2) {
      uVar12 = uVar1;
    }
    iVar8 = (*(code *)puVar7)(puVar7,uVar12);
    lVar16 = uVar1 - uVar2;
    if (iVar8 != 0) {
      lVar16 = (longlong)iVar8;
    }
    puVar10 = puVar18;
    if (-1 < lVar16) {
      puVar10 = puVar15;
    }
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    puVar13 = (undefined4 *)(param_3 + lVar11);
    *puVar13 = *puVar10;
    puVar13[1] = uVar4;
    puVar13[2] = uVar5;
    puVar13[3] = uVar6;
    puVar15 = puVar15 + (ulonglong)(-1 < lVar16) * -4;
    puVar18 = puVar18 + (lVar16 >> 0x3f) * 4;
    uVar14 = uVar14 + 0x10;
  } while (uVar9 != uVar14);
  if ((param_2 & 1) != 0) {
    puVar13 = (undefined4 *)(param_3 + uVar14);
    bVar19 = param_1 < puVar18 + 4;
    puVar10 = puVar17;
    if (bVar19) {
      puVar10 = param_1;
    }
    uVar4 = puVar10[1];
    uVar5 = puVar10[2];
    uVar6 = puVar10[3];
    *puVar13 = *puVar10;
    puVar13[1] = uVar4;
    puVar13[2] = uVar5;
    puVar13[3] = uVar6;
    param_1 = param_1 + (ulonglong)bVar19 * 4;
    puVar17 = puVar17 + (ulonglong)!bVar19 * 4;
  }
  if (param_1 == puVar18 + 4) {
    if (puVar17 == puVar15 + 4) {
      return;
    }
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


