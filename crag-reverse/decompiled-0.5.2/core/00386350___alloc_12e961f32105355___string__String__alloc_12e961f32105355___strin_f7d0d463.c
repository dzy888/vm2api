// 00386350 <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<alloc[12e961f32105355]::string::String,
   <alloc[12e961f32105355]::string::String as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
          (undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_78;
  
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar22 = param_2 >> 1;
    puVar24 = param_1 + uVar22 * 3;
    puVar21 = param_3 + uVar22 * 3;
    if (param_2 < 8) {
      param_3[2] = param_1[2];
      uVar2 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar2;
      puVar21[2] = puVar24[2];
      uVar26 = *(undefined4 *)puVar24;
      uVar5 = *(undefined4 *)((longlong)puVar24 + 4);
      uVar6 = *(undefined4 *)(puVar24 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar24 + 0xc);
      *(undefined4 *)puVar21 = uVar26;
      *(undefined4 *)((longlong)puVar21 + 4) = uVar5;
      *(undefined4 *)(puVar21 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar21 + 0xc) = uVar7;
      uVar12 = 1;
    }
    else {
      sort4_stable::
      <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                (param_1,param_3);
      uVar26 = sort4_stable::
               <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                         (puVar24,puVar21);
      uVar12 = 4;
    }
    if (uVar12 < uVar22) {
      local_78 = (ulonglong)(uint)((int)uVar12 * 8) * 3;
      uVar23 = uVar12;
      do {
        puVar10 = param_1 + uVar23 * 3;
        uVar26 = *(undefined4 *)puVar10;
        uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar6 = *(undefined4 *)(puVar10 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
        puVar10 = param_3 + uVar23 * 3;
        *(undefined4 *)puVar10 = uVar26;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar5;
        *(undefined4 *)(puVar10 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar7;
        uVar16 = param_1[uVar23 * 3 + 2];
        param_3[uVar23 * 3 + 2] = uVar16;
        uVar2 = param_3[uVar23 * 3 + 1];
        uVar15 = param_3[uVar23 * 3 + -1];
        uVar14 = uVar15;
        if (uVar16 < uVar15) {
          uVar14 = uVar16;
        }
        iVar9 = (*(code *)PTR_memcmp_00799528)(uVar26,uVar14);
        lVar18 = uVar16 - uVar15;
        if (iVar9 != 0) {
          lVar18 = (longlong)iVar9;
        }
        uVar26 = extraout_XMM0_Da;
        if (lVar18 < 0) {
          uVar3 = param_3[uVar23 * 3];
          lVar18 = local_78;
          do {
            lVar11 = lVar18;
            *(undefined8 *)((longlong)param_3 + lVar11 + 0x10) =
                 *(undefined8 *)((longlong)param_3 + lVar11 + -8);
            puVar1 = (undefined4 *)((longlong)param_3 + lVar11 + -0x18);
            uVar26 = *puVar1;
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)param_3 + lVar11);
            *puVar1 = uVar26;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            if (lVar11 == 0x18) {
              puVar10 = param_3;
              goto LAB_0038642e;
            }
            uVar15 = *(ulonglong *)((longlong)param_3 + lVar11 + -0x20);
            uVar14 = uVar15;
            if (uVar16 < uVar15) {
              uVar14 = uVar16;
            }
            iVar9 = (*(code *)PTR_memcmp_00799528)(uVar26,uVar14);
            lVar19 = uVar16 - uVar15;
            if (iVar9 != 0) {
              lVar19 = (longlong)iVar9;
            }
            lVar18 = lVar11 + -0x18;
          } while (lVar19 < 0);
          puVar10 = (undefined8 *)(lVar11 + -0x18 + (longlong)param_3);
          uVar26 = extraout_XMM0_Da_00;
LAB_0038642e:
          *puVar10 = uVar3;
          *(undefined8 *)((longlong)param_3 + lVar11 + -0x10) = uVar2;
          *(ulonglong *)((longlong)param_3 + lVar11 + -8) = uVar16;
        }
        uVar23 = uVar23 + 1;
        local_78 = local_78 + 0x18;
      } while (uVar23 != uVar22);
    }
    if (uVar12 < param_2 - uVar22) {
      local_78 = (ulonglong)(uint)((int)uVar12 * 8) * 3;
      do {
        puVar10 = puVar24 + uVar12 * 3;
        uVar26 = *(undefined4 *)puVar10;
        uVar5 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar6 = *(undefined4 *)(puVar10 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar10 + 0xc);
        puVar10 = puVar21 + uVar12 * 3;
        *(undefined4 *)puVar10 = uVar26;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar5;
        *(undefined4 *)(puVar10 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar7;
        uVar23 = puVar24[uVar12 * 3 + 2];
        puVar21[uVar12 * 3 + 2] = uVar23;
        uVar2 = puVar21[uVar12 * 3 + 1];
        uVar16 = puVar21[uVar12 * 3 + -1];
        uVar15 = uVar16;
        if (uVar23 < uVar16) {
          uVar15 = uVar23;
        }
        iVar9 = (*(code *)PTR_memcmp_00799528)(uVar26,uVar15);
        puVar8 = PTR_memcmp_00799528;
        lVar18 = uVar23 - uVar16;
        if (iVar9 != 0) {
          lVar18 = (longlong)iVar9;
        }
        uVar26 = extraout_XMM0_Da_01;
        if (lVar18 < 0) {
          uVar3 = puVar21[uVar12 * 3];
          lVar18 = local_78;
          do {
            lVar11 = lVar18;
            *(undefined8 *)((longlong)puVar21 + lVar11 + 0x10) =
                 *(undefined8 *)((longlong)puVar21 + lVar11 + -8);
            puVar1 = (undefined4 *)((longlong)puVar21 + lVar11 + -0x18);
            uVar26 = *puVar1;
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)puVar21 + lVar11);
            *puVar1 = uVar26;
            puVar1[1] = uVar5;
            puVar1[2] = uVar6;
            puVar1[3] = uVar7;
            if (lVar11 == 0x18) {
              puVar10 = puVar21;
              goto LAB_00386541;
            }
            uVar16 = *(ulonglong *)((longlong)puVar21 + lVar11 + -0x20);
            uVar15 = uVar16;
            if (uVar23 < uVar16) {
              uVar15 = uVar23;
            }
            iVar9 = (*(code *)puVar8)(uVar26,uVar15);
            lVar19 = uVar23 - uVar16;
            if (iVar9 != 0) {
              lVar19 = (longlong)iVar9;
            }
            lVar18 = lVar11 + -0x18;
          } while (lVar19 < 0);
          puVar10 = (undefined8 *)(lVar11 + -0x18 + (longlong)puVar21);
          uVar26 = extraout_XMM0_Da_02;
LAB_00386541:
          *puVar10 = uVar3;
          *(undefined8 *)((longlong)puVar21 + lVar11 + -0x10) = uVar2;
          *(ulonglong *)((longlong)puVar21 + lVar11 + -8) = uVar23;
        }
        uVar12 = uVar12 + 1;
        local_78 = local_78 + 0x18;
      } while (uVar12 != param_2 - uVar22);
    }
    puVar17 = param_1 + param_2 * 3 + -3;
    puVar24 = param_3 + param_2 * 3 + -3;
    puVar10 = puVar21 + -3;
    do {
      puVar20 = param_1;
      uVar12 = puVar21[2];
      uVar23 = param_3[2];
      uVar16 = uVar23;
      if (uVar12 < uVar23) {
        uVar16 = uVar12;
      }
      iVar9 = (*(code *)PTR_memcmp_00799528)(uVar26,uVar16);
      lVar18 = uVar12 - uVar23;
      if (iVar9 != 0) {
        lVar18 = (longlong)iVar9;
      }
      puVar13 = puVar21;
      if (-1 < lVar18) {
        puVar13 = param_3;
      }
      uVar26 = *(undefined4 *)((longlong)puVar13 + 4);
      uVar5 = *(undefined4 *)(puVar13 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar13 + 0xc);
      *(undefined4 *)puVar20 = *(undefined4 *)puVar13;
      *(undefined4 *)((longlong)puVar20 + 4) = uVar26;
      *(undefined4 *)(puVar20 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar20 + 0xc) = uVar6;
      puVar20[2] = puVar13[2];
      puVar21 = puVar21 + (lVar18 >> 0x3f) * -3;
      param_3 = param_3 + (ulonglong)(-1 < lVar18) * 3;
      uVar12 = puVar24[2];
      uVar23 = puVar10[2];
      uVar16 = uVar23;
      if (uVar12 < uVar23) {
        uVar16 = uVar12;
      }
      iVar9 = (*(code *)PTR_memcmp_00799528)((lVar18 >> 0x3f) * -3,uVar16);
      lVar18 = uVar12 - uVar23;
      if (iVar9 != 0) {
        lVar18 = (longlong)iVar9;
      }
      puVar13 = puVar10;
      if (-1 < lVar18) {
        puVar13 = puVar24;
      }
      uVar26 = *(undefined4 *)puVar13;
      uVar5 = *(undefined4 *)((longlong)puVar13 + 4);
      uVar6 = *(undefined4 *)(puVar13 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar13 + 0xc);
      *(undefined4 *)puVar17 = uVar26;
      *(undefined4 *)((longlong)puVar17 + 4) = uVar5;
      *(undefined4 *)(puVar17 + 1) = uVar6;
      *(undefined4 *)((longlong)puVar17 + 0xc) = uVar7;
      puVar17[2] = puVar13[2];
      puVar24 = puVar24 + (ulonglong)(-1 < lVar18) * -3;
      puVar10 = puVar10 + (lVar18 >> 0x3f) * 3;
      puVar17 = puVar17 + -3;
      uVar22 = uVar22 - 1;
      param_1 = puVar20 + 3;
    } while (uVar22 != 0);
    if ((param_2 & 1) != 0) {
      bVar25 = param_3 < puVar10 + 3;
      puVar17 = puVar21;
      if (bVar25) {
        puVar17 = param_3;
      }
      puVar20[5] = puVar17[2];
      uVar26 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar5 = *(undefined4 *)(puVar17 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
      *(undefined4 *)(puVar20 + 3) = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar20 + 0x1c) = uVar26;
      *(undefined4 *)(puVar20 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar20 + 0x24) = uVar6;
      param_3 = param_3 + (ulonglong)bVar25 * 3;
      puVar21 = puVar21 + (ulonglong)!bVar25 * 3;
    }
    if ((param_3 == puVar10 + 3) && (puVar21 == puVar24 + 3)) {
      return;
    }
    (*(code *)PTR_panic_on_ord_violation_007996f0)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


