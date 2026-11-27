// 003efaa0 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::_closure_1_>::_closure_0_>
          (undefined4 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  longlong local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 < 0x21) {
    puVar13 = param_1;
  }
  else {
    local_78 = param_6;
    do {
      uVar23 = param_2;
      while( true ) {
        if (param_5 == 0) {
          drift::sort::
          <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::_closure_1_>::_closure_0_>
                    (param_1,uVar23,param_3,param_4,1,param_7);
          return;
        }
        uVar17 = uVar23 >> 3;
        puVar13 = param_1 + uVar17 * 0x20;
        puVar15 = param_1 + uVar17 * 0x38;
        if (uVar23 < 0x40) {
          uVar17 = *(ulonglong *)(param_1 + 6);
          uVar20 = *(ulonglong *)(puVar13 + 6);
          if (uVar20 < *(ulonglong *)(puVar15 + 6) != uVar17 < uVar20) {
            puVar13 = puVar15;
          }
          if (uVar17 < *(ulonglong *)(puVar15 + 6) != uVar17 < uVar20) {
            puVar13 = param_1;
          }
        }
        else {
          puVar13 = (undefined4 *)
                    shared::pivot::median3_rec::
                    <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                              (param_1,puVar13,puVar15,uVar17,param_7);
        }
        param_5 = param_5 + -1;
        uVar17 = (ulonglong)((longlong)puVar13 - (longlong)param_1) >> 5;
        local_58 = *puVar13;
        uStack_54 = puVar13[1];
        uStack_50 = puVar13[2];
        uStack_4c = puVar13[3];
        local_48 = puVar13[4];
        uStack_44 = puVar13[5];
        uStack_40 = puVar13[6];
        uStack_3c = puVar13[7];
        if ((local_78 != 0) && (*(ulonglong *)(puVar13 + 6) <= *(ulonglong *)(local_78 + 0x18)))
        break;
        if (param_4 < uVar23) goto LAB_003eff78;
        lVar19 = param_3 + uVar23 * 0x20;
        param_2 = 0;
        puVar15 = param_1;
        lVar18 = lVar19;
        uVar20 = uVar17;
        while( true ) {
          for (; puVar15 < param_1 + uVar20 * 8; puVar15 = puVar15 + 8) {
            uVar16 = *(ulonglong *)(puVar15 + 6);
            lVar18 = lVar18 + -0x20;
            uVar14 = *(ulonglong *)(puVar13 + 6);
            lVar21 = lVar18;
            if (uVar16 < uVar14) {
              lVar21 = param_3;
            }
            uVar24 = *puVar15;
            uVar4 = puVar15[1];
            uVar5 = puVar15[2];
            uVar6 = puVar15[3];
            uVar7 = puVar15[5];
            uVar8 = puVar15[6];
            uVar9 = puVar15[7];
            puVar1 = (undefined4 *)(lVar21 + 0x10 + param_2 * 0x20);
            *puVar1 = puVar15[4];
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1 = (undefined4 *)(lVar21 + param_2 * 0x20);
            *puVar1 = uVar24;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            param_2 = param_2 + (uVar16 < uVar14);
          }
          if (uVar20 == uVar23) break;
          uVar24 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[2];
          uVar6 = puVar15[3];
          uVar7 = puVar15[5];
          uVar8 = puVar15[6];
          uVar9 = puVar15[7];
          puVar1 = (undefined4 *)(lVar18 + -0x10 + param_2 * 0x20);
          *puVar1 = puVar15[4];
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          puVar1 = (undefined4 *)(lVar18 + -0x20 + param_2 * 0x20);
          *puVar1 = uVar24;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          lVar18 = lVar18 + -0x20;
          puVar15 = puVar15 + 8;
          uVar20 = uVar23;
        }
        uVar24 = (*(code *)PTR_memcpy_00799008)();
        uVar20 = uVar23 - param_2;
        if (uVar20 != 0) {
          if (uVar23 == param_2 + 1) {
            uVar14 = 0;
          }
          else {
            puVar15 = param_1 + param_2 * 8 + 8;
            puVar22 = (undefined8 *)(uVar23 * 0x20 + param_3 + -0x20);
            uVar16 = 0;
            do {
              uVar10 = *puVar22;
              uVar11 = puVar22[1];
              uVar12 = puVar22[3];
              *(undefined8 *)(puVar15 + -4) = puVar22[2];
              *(undefined8 *)(puVar15 + -2) = uVar12;
              *(undefined8 *)(puVar15 + -8) = uVar10;
              *(undefined8 *)(puVar15 + -6) = uVar11;
              uVar14 = uVar16 + 2;
              lVar18 = (uVar16 ^ 0x7fffffffffffffe) * 0x20;
              puVar1 = (undefined4 *)(lVar19 + lVar18);
              uVar24 = *puVar1;
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar18);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              *puVar15 = uVar24;
              puVar15[1] = uVar4;
              puVar15[2] = uVar5;
              puVar15[3] = uVar6;
              *(undefined8 *)(puVar15 + 4) = uVar10;
              *(undefined8 *)(puVar15 + 6) = uVar11;
              puVar15 = puVar15 + 0x10;
              puVar22 = puVar22 + -8;
              uVar16 = uVar14;
            } while ((uVar20 & 0xfffffffffffffffe) != uVar14);
            if ((uVar20 & 1) == 0) goto LAB_003efd2c;
          }
          puVar15 = (undefined4 *)(lVar19 + ~uVar14 * 0x20);
          uVar24 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[2];
          uVar6 = puVar15[3];
          puVar22 = (undefined8 *)(lVar19 + 0x10 + ~uVar14 * 0x20);
          uVar10 = puVar22[1];
          *(undefined8 *)(param_1 + param_2 * 8 + uVar14 * 8 + 4) = *puVar22;
          *(undefined8 *)((longlong)(param_1 + param_2 * 8 + uVar14 * 8 + 4) + 8) = uVar10;
          puVar15 = param_1 + param_2 * 8 + uVar14 * 8;
          *puVar15 = uVar24;
          puVar15[1] = uVar4;
          puVar15[2] = uVar5;
          puVar15[3] = uVar6;
        }
LAB_003efd2c:
        if (param_2 == 0) break;
        if (uVar23 < param_2) {
          (*(code *)PTR_panic_fmt_007991a8)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008)
          ;
          goto LAB_003eff93;
        }
        <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::_closure_1_>::_closure_0_>
                  (param_1 + param_2 * 8,uVar20,param_3,param_4,param_5,&local_58,param_7);
        uVar23 = param_2;
        if (param_2 < 0x21) {
          puVar13 = param_1;
          goto LAB_003eff44;
        }
      }
      if (param_4 < uVar23) {
LAB_003eff78:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar18 = uVar23 * 0x20;
      lVar19 = param_3 + lVar18;
      uVar20 = 0;
      puVar15 = param_1;
      while( true ) {
        for (; puVar15 < param_1 + uVar17 * 8; puVar15 = puVar15 + 8) {
          uVar16 = *(ulonglong *)(puVar13 + 6);
          lVar19 = lVar19 + -0x20;
          uVar14 = *(ulonglong *)(puVar15 + 6);
          lVar21 = lVar19;
          if (uVar16 >= uVar14) {
            lVar21 = param_3;
          }
          uVar24 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[2];
          uVar6 = puVar15[3];
          uVar10 = *(undefined8 *)(puVar15 + 6);
          puVar22 = (undefined8 *)(lVar21 + 0x10 + uVar20 * 0x20);
          *puVar22 = *(undefined8 *)(puVar15 + 4);
          puVar22[1] = uVar10;
          puVar1 = (undefined4 *)(lVar21 + uVar20 * 0x20);
          *puVar1 = uVar24;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          uVar20 = (uVar20 + 1) - (ulonglong)(uVar16 < uVar14);
        }
        if (uVar17 == uVar23) break;
        lVar19 = lVar19 + -0x20;
        uVar24 = *puVar15;
        uVar4 = puVar15[1];
        uVar5 = puVar15[2];
        uVar6 = puVar15[3];
        uVar10 = *(undefined8 *)(puVar15 + 6);
        puVar22 = (undefined8 *)(param_3 + 0x10 + uVar20 * 0x20);
        *puVar22 = *(undefined8 *)(puVar15 + 4);
        puVar22[1] = uVar10;
        puVar1 = (undefined4 *)(param_3 + uVar20 * 0x20);
        *puVar1 = uVar24;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        uVar20 = uVar20 + 1;
        puVar15 = puVar15 + 8;
        uVar17 = uVar23;
      }
      (*(code *)PTR_memcpy_00799008)(lVar19,uVar20 * 0x20);
      param_2 = uVar23 - uVar20;
      if (param_2 == 0) {
        puVar13 = param_1 + uVar23 * 8;
        param_2 = 0;
        break;
      }
      puVar13 = param_1 + uVar20 * 8;
      lVar19 = param_3 + lVar18;
      if (uVar23 == uVar20 + 1) {
        uVar16 = 0;
LAB_003efed4:
        puVar15 = (undefined4 *)(lVar19 + ~uVar16 * 0x20);
        uVar24 = *puVar15;
        uVar4 = puVar15[1];
        uVar5 = puVar15[2];
        uVar6 = puVar15[3];
        puVar22 = (undefined8 *)(lVar19 + 0x10 + ~uVar16 * 0x20);
        uVar10 = puVar22[1];
        *(undefined8 *)(puVar13 + uVar16 * 8 + 4) = *puVar22;
        *(undefined8 *)((longlong)(puVar13 + uVar16 * 8 + 4) + 8) = uVar10;
        puVar15 = puVar13 + uVar16 * 8;
        *puVar15 = uVar24;
        puVar15[1] = uVar4;
        puVar15[2] = uVar5;
        puVar15[3] = uVar6;
      }
      else {
        param_1 = param_1 + uVar20 * 8 + 8;
        puVar22 = (undefined8 *)(lVar18 + param_3 + -0x20);
        uVar17 = 0;
        do {
          uVar10 = *puVar22;
          uVar11 = puVar22[1];
          uVar12 = puVar22[3];
          *(undefined8 *)(param_1 + -4) = puVar22[2];
          *(undefined8 *)(param_1 + -2) = uVar12;
          *(undefined8 *)(param_1 + -8) = uVar10;
          *(undefined8 *)(param_1 + -6) = uVar11;
          uVar16 = uVar17 + 2;
          lVar18 = (uVar17 ^ 0x7fffffffffffffe) * 0x20;
          puVar15 = (undefined4 *)(lVar19 + lVar18);
          uVar24 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar18);
          uVar10 = *puVar2;
          uVar11 = puVar2[1];
          *param_1 = *puVar15;
          param_1[1] = uVar24;
          param_1[2] = uVar4;
          param_1[3] = uVar5;
          *(undefined8 *)(param_1 + 4) = uVar10;
          *(undefined8 *)(param_1 + 6) = uVar11;
          param_1 = param_1 + 0x10;
          puVar22 = puVar22 + -8;
          uVar17 = uVar16;
        } while ((param_2 & 0xfffffffffffffffe) != uVar16);
        if ((param_2 & 1) != 0) goto LAB_003efed4;
      }
      if (uVar23 < uVar20) {
LAB_003eff93:
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020,uVar23);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78 = 0;
      param_1 = puVar13;
    } while (0x20 < param_2);
  }
LAB_003eff44:
  shared::smallsort::small_sort_general_with_scratch::
  <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
            (puVar13,param_2,param_3,param_4,param_7);
  return;
}


