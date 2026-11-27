// 00384860 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_06;
  
  uVar9 = *(ulonglong *)(param_1 + 0x40);
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar10 = uVar1;
  if (uVar9 < uVar1) {
    uVar10 = uVar9;
  }
  iVar8 = (*(code *)PTR_memcmp_00799528)(param_4,uVar10);
  lVar17 = uVar9 - uVar1;
  if (iVar8 != 0) {
    lVar17 = (longlong)iVar8;
  }
  uVar20 = extraout_XMM0_Da;
  if (lVar17 == 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x58);
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    uVar10 = uVar1;
    if (uVar9 < uVar1) {
      uVar10 = uVar9;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da,uVar10);
    lVar17 = uVar9 - uVar1;
    uVar20 = extraout_XMM0_Da_00;
    if (iVar8 != 0) {
      lVar17 = (longlong)iVar8;
    }
  }
  uVar9 = *(ulonglong *)(param_1 + 0xa0);
  uVar1 = *(ulonglong *)(param_1 + 0x70);
  uVar10 = uVar1;
  if (uVar9 < uVar1) {
    uVar10 = uVar9;
  }
  iVar8 = (*(code *)PTR_memcmp_00799528)(uVar20,uVar10);
  lVar14 = uVar9 - uVar1;
  if (iVar8 != 0) {
    lVar14 = (longlong)iVar8;
  }
  if (lVar14 == 0) {
    uVar9 = *(ulonglong *)(param_1 + 0xb8);
    uVar1 = *(ulonglong *)(param_1 + 0x88);
    uVar10 = uVar1;
    if (uVar9 < uVar1) {
      uVar10 = uVar9;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_01,uVar10);
    lVar14 = uVar9 - uVar1;
    if (iVar8 != 0) {
      lVar14 = (longlong)iVar8;
    }
  }
  uVar2 = (uint)((ulonglong)lVar17 >> 0x20);
  uVar9 = (ulonglong)(uint)(((int)uVar2 >> 0x1f) * -0x30);
  puVar18 = (undefined8 *)(param_1 + uVar9);
  puVar15 = (undefined8 *)((ulonglong)(uint)(((int)~uVar2 >> 0x1f) * -0x30) + param_1);
  puVar19 = (undefined8 *)(param_1 + 0x90);
  puVar13 = (undefined8 *)(param_1 + 0x60);
  if (lVar14 < 0) {
    puVar19 = (undefined8 *)(param_1 + 0x60);
    puVar13 = (undefined8 *)(param_1 + 0x90);
  }
  uVar1 = puVar13[2];
  uVar9 = *(ulonglong *)(param_1 + 0x10 + uVar9);
  uVar10 = uVar9;
  if (uVar1 < uVar9) {
    uVar10 = uVar1;
  }
  iVar8 = (*(code *)PTR_memcmp_00799528)(uVar1,uVar10);
  lVar17 = uVar1 - uVar9;
  if (iVar8 != 0) {
    lVar17 = (longlong)iVar8;
  }
  uVar20 = extraout_XMM0_Da_02;
  if (lVar17 == 0) {
    uVar9 = puVar13[5];
    uVar1 = puVar18[5];
    uVar10 = uVar1;
    if (uVar9 < uVar1) {
      uVar10 = uVar9;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_02,uVar10);
    lVar17 = uVar9 - uVar1;
    uVar20 = extraout_XMM0_Da_03;
    if (iVar8 != 0) {
      lVar17 = (longlong)iVar8;
    }
  }
  uVar9 = puVar19[2];
  uVar1 = puVar15[2];
  uVar10 = uVar1;
  if (uVar9 < uVar1) {
    uVar10 = uVar9;
  }
  iVar8 = (*(code *)PTR_memcmp_00799528)(uVar20,uVar10);
  lVar14 = uVar9 - uVar1;
  if (iVar8 != 0) {
    lVar14 = (longlong)iVar8;
  }
  uVar20 = extraout_XMM0_Da_04;
  if (lVar14 == 0) {
    uVar9 = puVar19[5];
    uVar1 = puVar15[5];
    uVar10 = uVar1;
    if (uVar9 < uVar1) {
      uVar10 = uVar9;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_04,uVar10);
    lVar14 = uVar9 - uVar1;
    uVar20 = extraout_XMM0_Da_05;
    if (iVar8 != 0) {
      lVar14 = (longlong)iVar8;
    }
  }
  puVar16 = puVar15;
  if (lVar14 < 0) {
    puVar16 = puVar13;
  }
  puVar12 = puVar13;
  if (lVar17 < 0) {
    puVar12 = puVar15;
    puVar16 = puVar18;
  }
  if (lVar14 < 0) {
    puVar12 = puVar19;
  }
  uVar9 = puVar12[2];
  uVar1 = puVar16[2];
  uVar10 = uVar1;
  if (uVar9 < uVar1) {
    uVar10 = uVar9;
  }
  iVar8 = (*(code *)PTR_memcmp_00799528)(uVar20,uVar10);
  lVar11 = uVar9 - uVar1;
  if (iVar8 != 0) {
    lVar11 = (longlong)iVar8;
  }
  if (lVar11 == 0) {
    uVar9 = puVar12[5];
    uVar1 = puVar16[5];
    uVar10 = uVar1;
    if (uVar9 < uVar1) {
      uVar10 = uVar9;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_06,uVar10);
    lVar11 = uVar9 - uVar1;
    if (iVar8 != 0) {
      lVar11 = (longlong)iVar8;
    }
  }
  if (lVar14 < 0) {
    puVar19 = puVar15;
  }
  if (lVar17 < 0) {
    puVar18 = puVar13;
  }
  puVar13 = puVar12;
  if (lVar11 < 0) {
    puVar13 = puVar16;
    puVar16 = puVar12;
  }
  uVar3 = *puVar18;
  uVar4 = puVar18[1];
  uVar5 = puVar18[2];
  uVar6 = puVar18[3];
  uVar7 = puVar18[5];
  param_2[4] = puVar18[4];
  param_2[5] = uVar7;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  *param_2 = uVar3;
  param_2[1] = uVar4;
  uVar3 = *puVar16;
  uVar4 = puVar16[1];
  uVar5 = puVar16[2];
  uVar6 = puVar16[3];
  uVar7 = puVar16[5];
  param_2[10] = puVar16[4];
  param_2[0xb] = uVar7;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar3 = *puVar13;
  uVar4 = puVar13[1];
  uVar5 = puVar13[2];
  uVar6 = puVar13[3];
  uVar7 = puVar13[5];
  param_2[0x10] = puVar13[4];
  param_2[0x11] = uVar7;
  param_2[0xe] = uVar5;
  param_2[0xf] = uVar6;
  param_2[0xc] = uVar3;
  param_2[0xd] = uVar4;
  uVar3 = puVar19[1];
  uVar4 = puVar19[2];
  uVar5 = puVar19[3];
  uVar6 = puVar19[4];
  uVar7 = puVar19[5];
  param_2[0x12] = *puVar19;
  param_2[0x13] = uVar3;
  param_2[0x14] = uVar4;
  param_2[0x15] = uVar5;
  param_2[0x16] = uVar6;
  param_2[0x17] = uVar7;
  return;
}


