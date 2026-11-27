// 00383cc0 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  puVar6 = PTR_memcmp_00799528;
  uVar12 = *(ulonglong *)(param_1 + 0x28);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar9 = uVar2;
  if (uVar12 < uVar2) {
    uVar9 = uVar12;
  }
  iVar7 = (*(code *)PTR_memcmp_00799528)(param_4,uVar9);
  uVar12 = uVar12 - uVar2;
  if (iVar7 != 0) {
    uVar12 = (longlong)iVar7;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  uVar9 = *(ulonglong *)(param_1 + 0x40);
  uVar8 = uVar9;
  if (uVar2 < uVar9) {
    uVar8 = uVar2;
  }
  iVar7 = (*(code *)puVar6)(extraout_XMM0_Da,uVar8);
  lVar10 = uVar2 - uVar9;
  if (iVar7 != 0) {
    lVar10 = (longlong)iVar7;
  }
  puVar14 = (undefined8 *)(param_1 + ((longlong)uVar12 >> 0x3f) * -0x18);
  puVar1 = (undefined8 *)(param_1 + ((longlong)~uVar12 >> 0x3f) * -0x18);
  puVar16 = (undefined8 *)(param_1 + 0x48);
  puVar4 = (undefined8 *)(param_1 + 0x30);
  if (lVar10 < 0) {
    puVar16 = (undefined8 *)(param_1 + 0x30);
    puVar4 = (undefined8 *)(param_1 + 0x48);
  }
  uVar2 = puVar4[2];
  uVar9 = *(ulonglong *)(param_1 + 0x10 + ((longlong)uVar12 >> 0x3f) * -0x18);
  uVar8 = uVar9;
  if (uVar2 < uVar9) {
    uVar8 = uVar2;
  }
  iVar7 = (*(code *)puVar6)(uVar2,uVar8);
  lVar10 = uVar2 - uVar9;
  if (iVar7 != 0) {
    lVar10 = (longlong)iVar7;
  }
  uVar2 = puVar16[2];
  uVar12 = *(ulonglong *)(param_1 + 0x10 + ((longlong)~uVar12 >> 0x3f) * -0x18);
  uVar9 = uVar12;
  if (uVar2 < uVar12) {
    uVar9 = uVar2;
  }
  iVar7 = (*(code *)puVar6)(extraout_XMM0_Da_00,uVar9);
  lVar11 = uVar2 - uVar12;
  if (iVar7 != 0) {
    lVar11 = (longlong)iVar7;
  }
  puVar15 = puVar1;
  if (lVar11 < 0) {
    puVar15 = puVar4;
  }
  puVar13 = puVar4;
  puVar5 = puVar14;
  if (lVar10 < 0) {
    puVar13 = puVar1;
    puVar5 = puVar4;
    puVar15 = puVar14;
  }
  if (lVar11 < 0) {
    puVar13 = puVar16;
  }
  else {
    puVar1 = puVar16;
  }
  uVar12 = puVar13[2];
  uVar2 = puVar15[2];
  uVar9 = uVar2;
  if (uVar12 < uVar2) {
    uVar9 = uVar12;
  }
  iVar7 = (*(code *)puVar6)(puVar6,uVar9);
  lVar10 = uVar12 - uVar2;
  if (iVar7 != 0) {
    lVar10 = (longlong)iVar7;
  }
  puVar14 = puVar13;
  if (lVar10 < 0) {
    puVar14 = puVar15;
    puVar15 = puVar13;
  }
  param_2[2] = puVar5[2];
  uVar3 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar3;
  param_2[5] = puVar15[2];
  uVar3 = puVar15[1];
  param_2[3] = *puVar15;
  param_2[4] = uVar3;
  uVar3 = puVar14[1];
  param_2[6] = *puVar14;
  param_2[7] = uVar3;
  param_2[8] = puVar14[2];
  uVar3 = puVar1[1];
  param_2[9] = *puVar1;
  param_2[10] = uVar3;
  param_2[0xb] = puVar1[2];
  return;
}


