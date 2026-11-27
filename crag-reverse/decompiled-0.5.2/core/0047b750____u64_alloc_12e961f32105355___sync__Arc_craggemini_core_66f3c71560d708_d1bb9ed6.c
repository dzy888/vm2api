// 0047b750 <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>), <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::drift::sort::
<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
          (longlong param_1,ulonglong param_2,undefined4 *param_3,ulonglong param_4,char param_5,
          undefined8 param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulonglong *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  byte abStack_283 [67];
  ulonglong auStack_240 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar7 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar12 = param_2 - (param_2 >> 1);
    uVar8 = 0x40;
    if (uVar12 < 0x40) {
      uVar8 = uVar12;
    }
  }
  else {
    uVar8 = (*(code *)PTR_sqrt_approx_007999c8)();
  }
  uVar23 = 1;
  uVar14 = 0;
  uVar22 = 0;
  uVar12 = param_2;
  if (param_2 == 0) goto LAB_0047b849;
LAB_0047b860:
  lVar13 = param_1 + uVar14 * 0x18;
  if (uVar12 < uVar8) {
LAB_0047b874:
    if (param_5 == '\0') {
      if (uVar8 <= uVar12) {
        uVar12 = uVar8;
      }
      uVar12 = uVar12 * 2;
      goto LAB_0047ba18;
    }
    if (0x1f < uVar12) {
      uVar12 = 0x20;
    }
    quicksort::quicksort::
    <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
              (lVar13,uVar12,param_3,param_4,0,0,param_6);
    uVar9 = uVar12 & 0xffffffff;
  }
  else if (uVar12 < 2) {
    uVar9 = uVar12;
  }
  else {
    uVar10 = *(ulonglong *)(lVar13 + 0x20);
    if (uVar10 < *(ulonglong *)(lVar13 + 8)) {
      if (uVar12 != 2) {
        puVar18 = (ulonglong *)(param_1 + 0x38 + uVar14 * 0x18);
        uVar26 = 2;
        uVar25 = uVar10;
        do {
          uVar1 = *puVar18;
          uVar9 = uVar26;
          if (uVar25 <= uVar1) break;
          uVar26 = uVar26 + 1;
          puVar18 = puVar18 + 3;
          uVar25 = uVar1;
          uVar9 = uVar12;
        } while (uVar12 != uVar26);
        goto joined_r0x0047b992;
      }
      uVar9 = 2;
      uVar12 = 1;
LAB_0047b9ae:
      puVar21 = (undefined8 *)(param_1 + 0x10 + uVar14 * 0x18);
      puVar19 = (undefined8 *)(uVar14 * 0x18 + uVar9 * 0x18 + param_1 + -8);
      do {
        uVar2 = puVar21[-2];
        puVar21[-2] = puVar19[-2];
        puVar19[-2] = uVar2;
        uVar2 = puVar21[-1];
        puVar21[-1] = puVar19[-1];
        puVar19[-1] = uVar2;
        uVar2 = *puVar21;
        *puVar21 = *puVar19;
        *puVar19 = uVar2;
        puVar21 = puVar21 + 3;
        puVar19 = puVar19 + -3;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    else {
      uVar9 = 2;
      if (uVar12 != 2) {
        puVar18 = (ulonglong *)(param_1 + 0x38 + uVar14 * 0x18);
        uVar26 = 2;
        uVar25 = uVar10;
        do {
          uVar1 = *puVar18;
          uVar9 = uVar26;
          if (uVar1 < uVar25) break;
          uVar26 = uVar26 + 1;
          puVar18 = puVar18 + 3;
          uVar25 = uVar1;
          uVar9 = uVar12;
        } while (uVar12 != uVar26);
joined_r0x0047b992:
        if (uVar9 < uVar8) goto LAB_0047b874;
        uVar12 = uVar9 >> 1;
        if (!(uVar12 == 0 || *(ulonglong *)(lVar13 + 8) <= uVar10)) goto LAB_0047b9ae;
      }
    }
  }
  uVar12 = uVar9 * 2 + 1;
LAB_0047ba18:
  uVar10 = ((uVar12 >> 1) + uVar14 * 2) * lVar7 ^ (uVar14 * 2 - (uVar23 >> 1)) * lVar7;
  lVar13 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  uVar17 = (uint)lVar13 ^ 0x3f;
  uVar10 = uVar23;
  do {
    uVar23 = uVar12;
    if (1 < uVar22) {
      do {
        while( true ) {
          if (abStack_283[uVar22] < (byte)uVar17) goto LAB_0047bd36;
          uVar22 = uVar22 - 1;
          uVar9 = auStack_240[uVar22];
          uVar25 = uVar9 >> 1;
          uVar26 = uVar10 >> 1;
          uVar12 = uVar26 + uVar25;
          if ((param_4 < uVar12) || ((((uint)uVar9 | (uint)uVar10) & 1) != 0)) break;
          uVar10 = uVar12 * 2;
          if (uVar22 < 2) goto LAB_0047bd30;
        }
        puVar15 = (undefined4 *)(param_1 + (uVar14 - uVar12) * 0x18);
        if ((uVar9 & 1) == 0) {
          lVar13 = 0x3f;
          if ((uVar25 | 1) != 0) {
            for (; (uVar25 | 1) >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          quicksort::quicksort::
          <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                    (puVar15,uVar25,param_3,param_4,((uint)lVar13 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar10 & 1) == 0) {
          lVar13 = 0x3f;
          if ((uVar26 | 1) != 0) {
            for (; (uVar26 | 1) >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          quicksort::quicksort::
          <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                    (puVar15 + uVar25 * 6,uVar26,param_3,param_4,((uint)lVar13 ^ 0x3f) * 2 ^ 0x7e,0,
                     param_6);
        }
        if ((uVar26 != 0) && (uVar25 != 0)) {
          uVar10 = uVar25;
          if (uVar26 < uVar25) {
            uVar10 = uVar26;
          }
          if (uVar10 <= param_4) {
            puVar16 = puVar15 + uVar25 * 6;
            (*(code *)PTR_memcpy_00799008)(uVar25 * 3,uVar10 * 0x18);
            puVar24 = param_3 + uVar10 * 6;
            puVar20 = param_3;
            if (uVar26 < uVar25) {
              puVar11 = (undefined4 *)(uVar14 * 0x18 + param_1 + -0x18);
              do {
                bVar27 = *(ulonglong *)(puVar24 + -4) < *(ulonglong *)(puVar16 + -4);
                puVar3 = puVar24;
                if (bVar27) {
                  puVar3 = puVar16;
                }
                *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar3 + -2);
                uVar4 = puVar3[-5];
                uVar5 = puVar3[-4];
                uVar6 = puVar3[-3];
                *puVar11 = puVar3[-6];
                puVar11[1] = uVar4;
                puVar11[2] = uVar5;
                puVar11[3] = uVar6;
                puVar16 = puVar16 + (ulonglong)!bVar27 * 6 + -6;
                lVar13 = (ulonglong)bVar27 * 3;
                puVar24 = puVar24 + (ulonglong)bVar27 * 6 + -6;
              } while ((puVar16 != puVar15) && (puVar11 = puVar11 + -6, puVar24 != param_3));
            }
            else {
              do {
                bVar27 = *(ulonglong *)(puVar16 + 2) < *(ulonglong *)(puVar20 + 2);
                lVar13 = CONCAT71((int7)(*(ulonglong *)(puVar16 + 2) >> 8),bVar27);
                puVar11 = puVar20;
                if (bVar27) {
                  puVar11 = puVar16;
                }
                *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar11 + 4);
                uVar4 = puVar11[1];
                uVar5 = puVar11[2];
                uVar6 = puVar11[3];
                *puVar15 = *puVar11;
                puVar15[1] = uVar4;
                puVar15[2] = uVar5;
                puVar15[3] = uVar6;
                puVar20 = puVar20 + (ulonglong)!bVar27 * 6;
                puVar15 = puVar15 + 6;
              } while ((puVar20 != puVar24) &&
                      (puVar16 = puVar16 + (ulonglong)bVar27 * 6,
                      puVar16 != (undefined4 *)(param_1 + uVar14 * 0x18)));
            }
            (*(code *)PTR_memcpy_00799008)(lVar13,(longlong)puVar24 - (longlong)puVar20);
          }
        }
        uVar10 = uVar12 * 2 + 1;
      } while (1 < uVar22);
LAB_0047bd30:
      uVar22 = 1;
    }
LAB_0047bd36:
    auStack_240[uVar22] = uVar10;
    abStack_283[uVar22 + 1] = (byte)uVar17;
    if (param_2 <= uVar14) {
      if ((uVar10 & 1) != 0) {
        return;
      }
      lVar7 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      quicksort::quicksort::
      <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                (param_1,param_2,param_3,param_4,((uint)lVar7 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar22 = uVar22 + 1;
    uVar14 = uVar14 + (uVar23 >> 1);
    uVar12 = param_2 - uVar14;
    if (uVar14 <= param_2 && param_2 - uVar14 != 0) goto LAB_0047b860;
LAB_0047b849:
    uVar17 = 0;
    uVar12 = 1;
    uVar10 = uVar23;
  } while( true );
}


