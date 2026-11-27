// 0049f970 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::merge::merge::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined4 *param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,
          ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  
  uVar15 = param_2 - param_5;
  if ((param_5 <= param_2 && uVar15 != 0) && param_5 != 0) {
    uVar12 = param_5;
    if (uVar15 < param_5) {
      uVar12 = uVar15;
    }
    if (uVar12 <= param_4) {
      puVar17 = param_1 + param_5 * 0xc;
      uVar20 = (*(code *)PTR_memcpy_00799008)(param_4,uVar12 * 0x30);
      puVar19 = param_3 + uVar12 * 0xc;
      if (uVar15 < param_5) {
        puVar18 = param_1 + param_2 * 0xc;
        do {
          uVar15 = *(ulonglong *)(puVar19 + -8);
          uVar12 = *(ulonglong *)(puVar17 + -8);
          uVar14 = uVar12;
          if (uVar15 < uVar12) {
            uVar14 = uVar15;
          }
          iVar11 = (*(code *)PTR_memcmp_00799528)(uVar20,uVar14);
          lVar16 = uVar15 - uVar12;
          if (iVar11 != 0) {
            lVar16 = (longlong)iVar11;
          }
          if (lVar16 == 0) {
            uVar15 = *(ulonglong *)(puVar19 + -2);
            uVar12 = *(ulonglong *)(puVar17 + -2);
            uVar14 = uVar12;
            if (uVar15 < uVar12) {
              uVar14 = uVar15;
            }
            iVar11 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da,uVar14);
            lVar16 = uVar15 - uVar12;
            if (iVar11 != 0) {
              lVar16 = (longlong)iVar11;
            }
          }
          puVar13 = puVar17 + -0xc;
          puVar17 = puVar13;
          if (-1 < lVar16) {
            puVar17 = puVar19 + -0xc;
          }
          uVar20 = *puVar17;
          uVar1 = puVar17[1];
          uVar2 = puVar17[2];
          uVar3 = puVar17[3];
          uVar4 = puVar17[4];
          uVar5 = puVar17[5];
          uVar6 = puVar17[6];
          uVar7 = puVar17[7];
          uVar8 = puVar17[9];
          uVar9 = puVar17[10];
          uVar10 = puVar17[0xb];
          puVar18[-4] = puVar17[8];
          puVar18[-3] = uVar8;
          puVar18[-2] = uVar9;
          puVar18[-1] = uVar10;
          puVar18[-8] = uVar4;
          puVar18[-7] = uVar5;
          puVar18[-6] = uVar6;
          puVar18[-5] = uVar7;
          puVar18[-0xc] = uVar20;
          puVar18[-0xb] = uVar1;
          puVar18[-10] = uVar2;
          puVar18[-9] = uVar3;
          puVar17 = (undefined4 *)((ulonglong)((uint)(-1 < lVar16) * 0x30) + (longlong)puVar13);
          puVar19 = (undefined4 *)
                    ((ulonglong)(uint)((int)(lVar16 >> 0x3f) * -0x30) + (longlong)(puVar19 + -0xc));
        } while ((puVar17 != param_1) && (puVar18 = puVar18 + -0xc, puVar19 != param_3));
      }
      else {
        puVar18 = param_1 + param_2 * 0xc;
        do {
          uVar15 = *(ulonglong *)(puVar17 + 4);
          uVar12 = *(ulonglong *)(param_3 + 4);
          uVar14 = uVar12;
          if (uVar15 < uVar12) {
            uVar14 = uVar15;
          }
          iVar11 = (*(code *)PTR_memcmp_00799528)(uVar20,uVar14);
          lVar16 = uVar15 - uVar12;
          if (iVar11 != 0) {
            lVar16 = (longlong)iVar11;
          }
          if (lVar16 == 0) {
            uVar15 = *(ulonglong *)(puVar17 + 10);
            uVar12 = *(ulonglong *)(param_3 + 10);
            uVar14 = uVar12;
            if (uVar15 < uVar12) {
              uVar14 = uVar15;
            }
            iVar11 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Da_00,uVar14);
            lVar16 = uVar15 - uVar12;
            if (iVar11 != 0) {
              lVar16 = (longlong)iVar11;
            }
          }
          puVar13 = puVar17;
          if (-1 < lVar16) {
            puVar13 = param_3;
          }
          uVar20 = *puVar13;
          uVar1 = puVar13[1];
          uVar2 = puVar13[2];
          uVar3 = puVar13[3];
          uVar4 = puVar13[4];
          uVar5 = puVar13[5];
          uVar6 = puVar13[6];
          uVar7 = puVar13[7];
          uVar8 = puVar13[9];
          uVar9 = puVar13[10];
          uVar10 = puVar13[0xb];
          param_1[8] = puVar13[8];
          param_1[9] = uVar8;
          param_1[10] = uVar9;
          param_1[0xb] = uVar10;
          param_1[4] = uVar4;
          param_1[5] = uVar5;
          param_1[6] = uVar6;
          param_1[7] = uVar7;
          *param_1 = uVar20;
          param_1[1] = uVar1;
          param_1[2] = uVar2;
          param_1[3] = uVar3;
          param_3 = (undefined4 *)((longlong)param_3 + (ulonglong)((uint)(-1 < lVar16) * 0x30));
          param_1 = param_1 + 0xc;
        } while ((param_3 != puVar19) &&
                (puVar17 = (undefined4 *)
                           ((longlong)puVar17 + (ulonglong)(uint)((int)(lVar16 >> 0x3f) * -0x30)),
                puVar17 != puVar18));
      }
      (*(code *)PTR_memcpy_00799008)(puVar13,(longlong)puVar19 - (longlong)param_3);
      return;
    }
  }
  return;
}


