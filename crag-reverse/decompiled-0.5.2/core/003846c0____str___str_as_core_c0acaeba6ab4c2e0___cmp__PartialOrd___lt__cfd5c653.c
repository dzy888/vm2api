// 003846c0 <&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<&str, <&str as
   core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<&str,<&str_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar16;
  ulonglong uVar15;
  undefined8 *puVar17;
  undefined4 extraout_XMM0_Da;
  
  puVar5 = PTR_memcmp_00799528;
  uVar7 = *(ulonglong *)(param_1 + 0x18);
  uVar9 = *(ulonglong *)(param_1 + 8);
  uVar8 = uVar9;
  if (uVar7 < uVar9) {
    uVar8 = uVar7;
  }
  iVar6 = (*(code *)PTR_memcmp_00799528)(param_4,uVar8);
  lVar11 = uVar7 - uVar9;
  if (iVar6 != 0) {
    lVar11 = (longlong)iVar6;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x38);
  uVar9 = *(ulonglong *)(param_1 + 0x28);
  uVar8 = uVar9;
  if (uVar7 < uVar9) {
    uVar8 = uVar7;
  }
  iVar6 = (*(code *)puVar5)(puVar5,uVar8);
  uVar16 = (uint)(uVar7 - uVar9 >> 0x20);
  if (iVar6 != 0) {
    uVar16 = iVar6 >> 0x1f;
  }
  uVar9 = (ulonglong)((uint)((ulonglong)lVar11 >> 0x3f) << 4);
  puVar14 = (undefined8 *)(param_1 + uVar9);
  lVar11 = (ulonglong)(-1 < lVar11) * 0x10;
  puVar1 = (undefined8 *)(param_1 + lVar11);
  uVar7 = (ulonglong)((uVar16 >> 0x1f) << 4);
  puVar12 = (undefined8 *)(param_1 + uVar7 + 0x20);
  uVar15 = (ulonglong)((uVar16 >> 0x1f ^ 3) << 4);
  puVar2 = (undefined8 *)(param_1 + uVar15);
  uVar7 = *(ulonglong *)(param_1 + 0x28 + uVar7);
  uVar9 = *(ulonglong *)(param_1 + 8 + uVar9);
  uVar8 = uVar7;
  if (uVar9 <= uVar7) {
    uVar8 = uVar9;
  }
  iVar6 = (*(code *)PTR_memcmp_00799528)(puVar2,uVar8);
  puVar5 = PTR_memcmp_00799528;
  lVar10 = uVar7 - uVar9;
  if (iVar6 != 0) {
    lVar10 = (longlong)iVar6;
  }
  uVar7 = *(ulonglong *)(param_1 + 8 + uVar15);
  uVar9 = *(ulonglong *)(param_1 + 8 + lVar11);
  uVar8 = uVar9;
  if (uVar7 < uVar9) {
    uVar8 = uVar7;
  }
  iVar6 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da,uVar8);
  lVar11 = uVar7 - uVar9;
  if (iVar6 != 0) {
    lVar11 = (longlong)iVar6;
  }
  puVar17 = puVar1;
  if (lVar11 < 0) {
    puVar17 = puVar12;
  }
  puVar13 = puVar12;
  puVar4 = puVar14;
  if (lVar10 < 0) {
    puVar13 = puVar1;
    puVar4 = puVar12;
    puVar17 = puVar14;
  }
  if (lVar11 < 0) {
    puVar13 = puVar2;
  }
  else {
    puVar1 = puVar2;
  }
  uVar7 = puVar13[1];
  uVar9 = puVar17[1];
  uVar8 = uVar9;
  if (uVar7 < uVar9) {
    uVar8 = uVar7;
  }
  iVar6 = (*(code *)puVar5)(puVar5,uVar8);
  lVar11 = uVar7 - uVar9;
  if (iVar6 != 0) {
    lVar11 = (longlong)iVar6;
  }
  puVar14 = puVar13;
  if (lVar11 < 0) {
    puVar14 = puVar17;
    puVar17 = puVar13;
  }
  uVar3 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar3;
  uVar3 = puVar17[1];
  param_2[2] = *puVar17;
  param_2[3] = uVar3;
  uVar3 = puVar14[1];
  param_2[4] = *puVar14;
  param_2[5] = uVar3;
  uVar3 = puVar1[1];
  param_2[6] = *puVar1;
  param_2[7] = uVar3;
  return;
}


