// 0047a1d0 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
          (undefined4 param_1,longlong param_2,ulonglong param_3,undefined4 *param_4,
          ulonglong param_5,char param_6,undefined8 param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong *puVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  bool bVar35;
  undefined4 extraout_XMM0_Da;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_3 < 2) {
    return;
  }
  lVar13 = (0x4000000000000000 / param_3 + 1) - (ulonglong)(0x4000000000000000U % param_3 == 0);
  if (param_3 < 0x1001) {
    uVar18 = param_3 - (param_3 >> 1);
    uVar14 = 0x40;
    if (uVar18 < 0x40) {
      uVar14 = uVar18;
    }
  }
  else {
    uVar14 = (*(code *)PTR_sqrt_approx_007999c8)();
    param_1 = extraout_XMM0_Da;
  }
  uVar31 = 1;
  uVar23 = 0;
  uVar30 = 0;
  uVar18 = param_3;
  if (param_3 == 0) goto LAB_0047a2c9;
LAB_0047a2e0:
  lVar19 = uVar23 * 0x20;
  lVar1 = param_2 + lVar19;
  if (uVar18 < uVar14) {
LAB_0047a2f7:
    if (param_6 == '\0') {
      if (uVar14 <= uVar18) {
        uVar18 = uVar14;
      }
      uVar18 = uVar18 * 2;
      goto LAB_0047a498;
    }
    if (0x1f < uVar18) {
      uVar18 = 0x20;
    }
    param_1 = quicksort::quicksort::
              <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                        (lVar1,uVar18,param_4,param_5,0,0,param_7);
    uVar15 = uVar18 & 0xffffffff;
  }
  else if (uVar18 < 2) {
    uVar15 = uVar18;
  }
  else {
    uVar16 = *(ulonglong *)(lVar1 + 0x38);
    if (uVar16 < *(ulonglong *)(lVar1 + 0x18)) {
      if (uVar18 != 2) {
        puVar29 = (ulonglong *)(param_2 + 0x58 + lVar19);
        uVar34 = 2;
        uVar22 = uVar16;
        do {
          uVar2 = *puVar29;
          uVar15 = uVar34;
          if (uVar22 <= uVar2) break;
          uVar34 = uVar34 + 1;
          puVar29 = puVar29 + 4;
          uVar22 = uVar2;
          uVar15 = uVar18;
        } while (uVar18 != uVar34);
        goto joined_r0x0047a428;
      }
      uVar15 = 2;
      uVar18 = 1;
LAB_0047a444:
      puVar25 = (undefined8 *)(param_2 + 0x10 + lVar19);
      puVar28 = (undefined8 *)(uVar15 * 0x20 + lVar19 + param_2 + -0x10);
      do {
        uVar10 = puVar25[-2];
        uVar11 = puVar25[-1];
        uVar12 = puVar28[-1];
        puVar25[-2] = puVar28[-2];
        puVar25[-1] = uVar12;
        puVar28[-2] = uVar10;
        puVar28[-1] = uVar11;
        param_1 = *(undefined4 *)puVar25;
        uVar3 = *(undefined4 *)((longlong)puVar25 + 4);
        uVar4 = *(undefined4 *)(puVar25 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar25 + 0xc);
        uVar10 = puVar28[1];
        *puVar25 = *puVar28;
        puVar25[1] = uVar10;
        *(undefined4 *)puVar28 = param_1;
        *(undefined4 *)((longlong)puVar28 + 4) = uVar3;
        *(undefined4 *)(puVar28 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar28 + 0xc) = uVar5;
        puVar25 = puVar25 + 4;
        puVar28 = puVar28 + -4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    else {
      uVar15 = 2;
      if (uVar18 != 2) {
        puVar29 = (ulonglong *)(param_2 + 0x58 + lVar19);
        uVar34 = 2;
        uVar22 = uVar16;
        do {
          uVar2 = *puVar29;
          uVar15 = uVar34;
          if (uVar2 < uVar22) break;
          uVar34 = uVar34 + 1;
          puVar29 = puVar29 + 4;
          uVar22 = uVar2;
          uVar15 = uVar18;
        } while (uVar18 != uVar34);
joined_r0x0047a428:
        if (uVar15 < uVar14) goto LAB_0047a2f7;
        uVar18 = uVar15 >> 1;
        if (!(uVar18 == 0 || *(ulonglong *)(lVar1 + 0x18) <= uVar16)) goto LAB_0047a444;
      }
    }
  }
  uVar18 = uVar15 * 2 + 1;
LAB_0047a498:
  uVar16 = ((uVar18 >> 1) + uVar23 * 2) * lVar13 ^ (uVar23 * 2 - (uVar31 >> 1)) * lVar13;
  lVar1 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar27 = (uint)lVar1 ^ 0x3f;
  uVar16 = uVar31;
  do {
    uVar31 = uVar18;
    if (1 < uVar30) {
      do {
        while( true ) {
          if (abStack_283[uVar30] < (byte)uVar27) goto LAB_0047a7a6;
          uVar30 = uVar30 - 1;
          uVar15 = auStack_240[uVar30];
          uVar22 = uVar15 >> 1;
          uVar34 = uVar16 >> 1;
          uVar18 = uVar22 + uVar34;
          if ((param_5 < uVar18) || ((((uint)uVar15 | (uint)uVar16) & 1) != 0)) break;
          uVar16 = uVar18 * 2;
          if (uVar30 < 2) goto LAB_0047a7a0;
        }
        puVar24 = (undefined4 *)((uVar23 - uVar18) * 0x20 + param_2);
        if ((uVar15 & 1) == 0) {
          lVar1 = 0x3f;
          if ((uVar22 | 1) != 0) {
            for (; (uVar22 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          param_1 = quicksort::quicksort::
                    <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                              (puVar24,uVar22,param_4,param_5,((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e,0,
                               param_7);
        }
        if ((uVar16 & 1) == 0) {
          lVar1 = 0x3f;
          if ((uVar34 | 1) != 0) {
            for (; (uVar34 | 1) >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          param_1 = quicksort::quicksort::
                    <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                              (puVar24 + uVar22 * 8,uVar34,param_4,param_5,
                               ((uint)lVar1 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
        }
        if ((uVar34 != 0) && (uVar22 != 0)) {
          uVar16 = uVar22;
          if (uVar34 < uVar22) {
            uVar16 = uVar34;
          }
          if (uVar16 <= param_5) {
            puVar33 = puVar24 + uVar22 * 8;
            (*(code *)PTR_memcpy_00799008)(param_1,uVar16 * 0x20);
            puVar32 = param_4 + uVar16 * 8;
            puVar26 = param_4;
            if (uVar34 < uVar22) {
              puVar17 = (undefined4 *)(uVar23 * 0x20 + param_2 + -0x20);
              do {
                puVar20 = puVar33 + -8;
                bVar35 = *(ulonglong *)(puVar32 + -2) < *(ulonglong *)(puVar33 + -2);
                puVar21 = puVar32 + -8;
                if (bVar35) {
                  puVar21 = puVar20;
                }
                uVar3 = *puVar21;
                uVar4 = puVar21[1];
                uVar5 = puVar21[2];
                uVar6 = puVar21[3];
                uVar7 = puVar21[5];
                uVar8 = puVar21[6];
                uVar9 = puVar21[7];
                puVar17[4] = puVar21[4];
                puVar17[5] = uVar7;
                puVar17[6] = uVar8;
                puVar17[7] = uVar9;
                *puVar17 = uVar3;
                puVar17[1] = uVar4;
                puVar17[2] = uVar5;
                puVar17[3] = uVar6;
                puVar33 = puVar33 + (ulonglong)!bVar35 * 8 + -8;
                puVar32 = puVar32 + (ulonglong)bVar35 * 8 + -8;
              } while ((puVar33 != puVar24) && (puVar17 = puVar17 + -8, puVar32 != param_4));
            }
            else {
              do {
                bVar35 = *(ulonglong *)(puVar33 + 6) < *(ulonglong *)(puVar26 + 6);
                puVar20 = (undefined4 *)CONCAT71((int7)(*(ulonglong *)(puVar33 + 6) >> 8),bVar35);
                puVar17 = puVar26;
                if (bVar35) {
                  puVar17 = puVar33;
                }
                uVar3 = *puVar17;
                uVar4 = puVar17[1];
                uVar5 = puVar17[2];
                uVar6 = puVar17[3];
                uVar7 = puVar17[5];
                uVar8 = puVar17[6];
                uVar9 = puVar17[7];
                puVar24[4] = puVar17[4];
                puVar24[5] = uVar7;
                puVar24[6] = uVar8;
                puVar24[7] = uVar9;
                *puVar24 = uVar3;
                puVar24[1] = uVar4;
                puVar24[2] = uVar5;
                puVar24[3] = uVar6;
                puVar26 = puVar26 + (ulonglong)!bVar35 * 8;
                puVar24 = puVar24 + 8;
              } while ((puVar26 != puVar32) &&
                      (puVar33 = puVar33 + (ulonglong)bVar35 * 8,
                      puVar33 != (undefined4 *)(param_2 + uVar23 * 0x20)));
            }
            param_1 = (*(code *)PTR_memcpy_00799008)(puVar20,(longlong)puVar32 - (longlong)puVar26);
          }
        }
        uVar16 = uVar18 * 2 + 1;
      } while (1 < uVar30);
LAB_0047a7a0:
      uVar30 = 1;
    }
LAB_0047a7a6:
    auStack_240[uVar30] = uVar16;
    abStack_283[uVar30 + 1] = (byte)uVar27;
    if (param_3 <= uVar23) {
      if ((uVar16 & 1) != 0) {
        return;
      }
      lVar13 = 0x3f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      quicksort::quicksort::
      <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                (param_2,param_3,param_4,param_5,((uint)lVar13 ^ 0x3f) * 2 ^ 0x7e,0,param_7);
      return;
    }
    uVar30 = uVar30 + 1;
    uVar23 = uVar23 + (uVar31 >> 1);
    uVar18 = param_3 - uVar23;
    if (uVar23 <= param_3 && param_3 - uVar23 != 0) goto LAB_0047a2e0;
LAB_0047a2c9:
    uVar27 = 0;
    uVar18 = 1;
    uVar16 = uVar31;
  } while( true );
}


