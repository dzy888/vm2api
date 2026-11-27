// 003f15f0 <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>), <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::quicksort::quicksort::
<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,int param_5,
          longlong param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (0x20 < param_2) {
    local_58 = param_6;
    do {
      uVar14 = param_2;
      while( true ) {
        if (param_5 == 0) {
          drift::sort::
          <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                    (param_1,uVar14,param_3,param_4,1,param_7);
          return;
        }
        uVar10 = uVar14 >> 3;
        puVar8 = param_1 + uVar10 * 0xc;
        puVar9 = param_1 + uVar10 * 0x15;
        if (uVar14 < 0x40) {
          uVar10 = param_1[1];
          uVar15 = puVar8[1];
          if (uVar15 < (ulonglong)puVar9[1] != uVar10 < uVar15) {
            puVar8 = puVar9;
          }
          if (uVar10 < (ulonglong)puVar9[1] != uVar10 < uVar15) {
            puVar8 = param_1;
          }
        }
        else {
          puVar8 = (undefined8 *)
                   shared::pivot::median3_rec::
                   <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                             (param_1,puVar8,puVar9,uVar10,param_7);
        }
        param_5 = param_5 + -1;
        uVar10 = ((ulonglong)((longlong)puVar8 - (longlong)param_1) >> 3) * -0x5555555555555555;
        local_38 = puVar8[2];
        local_48 = *(undefined4 *)puVar8;
        uStack_44 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_40 = *(undefined4 *)(puVar8 + 1);
        uStack_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
        if ((local_58 != 0) && ((ulonglong)puVar8[1] <= *(ulonglong *)(local_58 + 8))) break;
        if (param_4 < uVar14) goto LAB_003f1ac7;
        lVar1 = param_3 + uVar14 * 0x18;
        param_2 = 0;
        puVar9 = param_1;
        lVar11 = lVar1;
        uVar15 = uVar10;
        while( true ) {
          for (; puVar9 < param_1 + uVar15 * 3; puVar9 = puVar9 + 3) {
            uVar12 = puVar9[1];
            lVar11 = lVar11 + -0x18;
            uVar13 = puVar8[1];
            lVar16 = lVar11;
            if (uVar12 < uVar13) {
              lVar16 = param_3;
            }
            *(undefined8 *)(lVar16 + 0x10 + param_2 * 0x18) = puVar9[2];
            uVar19 = *(undefined4 *)((longlong)puVar9 + 4);
            uVar4 = *(undefined4 *)(puVar9 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
            puVar2 = (undefined4 *)(lVar16 + param_2 * 0x18);
            *puVar2 = *(undefined4 *)puVar9;
            puVar2[1] = uVar19;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            param_2 = param_2 + (uVar12 < uVar13);
          }
          if (uVar15 == uVar14) break;
          *(undefined8 *)(lVar11 + -8 + param_2 * 0x18) = puVar9[2];
          uVar19 = *(undefined4 *)((longlong)puVar9 + 4);
          uVar4 = *(undefined4 *)(puVar9 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
          puVar2 = (undefined4 *)(lVar11 + -0x18 + param_2 * 0x18);
          *puVar2 = *(undefined4 *)puVar9;
          puVar2[1] = uVar19;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          lVar11 = lVar11 + -0x18;
          puVar9 = puVar9 + 3;
          uVar15 = uVar14;
        }
        uVar19 = (*(code *)PTR_memcpy_00799008)();
        uVar15 = uVar14 - param_2;
        if (uVar15 != 0) {
          puVar9 = param_1 + param_2 * 3;
          if (uVar14 == param_2 + 1) {
            uVar13 = 0;
          }
          else {
            puVar17 = (undefined8 *)(param_3 + -0x18 + uVar14 * 0x18);
            uVar12 = 0;
            puVar18 = puVar9;
            do {
              puVar18[2] = puVar17[2];
              uVar7 = puVar17[1];
              *puVar18 = *puVar17;
              puVar18[1] = uVar7;
              uVar13 = uVar12 + 2;
              puVar2 = (undefined4 *)(lVar1 + (uVar12 ^ 0x1ffffffffffffffe) * 0x18);
              uVar19 = *puVar2;
              uVar4 = puVar2[1];
              uVar5 = puVar2[2];
              uVar6 = puVar2[3];
              *(undefined4 *)(puVar18 + 3) = uVar19;
              *(undefined4 *)((longlong)puVar18 + 0x1c) = uVar4;
              *(undefined4 *)(puVar18 + 4) = uVar5;
              *(undefined4 *)((longlong)puVar18 + 0x24) = uVar6;
              puVar18[5] = *(undefined8 *)(lVar1 + 0x10 + (uVar12 ^ 0x1ffffffffffffffe) * 0x18);
              puVar18 = puVar18 + 6;
              puVar17 = puVar17 + -6;
              uVar12 = uVar13;
            } while ((uVar15 & 0xfffffffffffffffe) != uVar13);
            if ((uVar15 & 1) == 0) goto LAB_003f1882;
          }
          puVar9[uVar13 * 3 + 2] = *(undefined8 *)(lVar1 + 0x10 + ~uVar13 * 0x18);
          puVar2 = (undefined4 *)(lVar1 + ~uVar13 * 0x18);
          uVar19 = *puVar2;
          uVar4 = puVar2[1];
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          puVar9 = puVar9 + uVar13 * 3;
          *(undefined4 *)puVar9 = uVar19;
          *(undefined4 *)((longlong)puVar9 + 4) = uVar4;
          *(undefined4 *)(puVar9 + 1) = uVar5;
          *(undefined4 *)((longlong)puVar9 + 0xc) = uVar6;
        }
LAB_003f1882:
        if (param_2 == 0) break;
        if (uVar14 < param_2) {
          (*(code *)PTR_panic_fmt_007991a8)(uVar19,&PTR_s__rustc_48a229ceaefd4985c50990b14_00788008)
          ;
          goto LAB_003f1ae2;
        }
        <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                  (param_1 + param_2 * 3,uVar15,param_3,param_4,param_5,&local_48,param_7);
        uVar14 = param_2;
        if (param_2 < 0x21) goto LAB_003f1615;
      }
      if (param_4 < uVar14) {
LAB_003f1ac7:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar1 = param_3 + uVar14 * 0x18;
      uVar15 = 0;
      puVar9 = param_1;
      lVar11 = lVar1;
      while( true ) {
        for (; puVar9 < param_1 + uVar10 * 3; puVar9 = puVar9 + 3) {
          uVar12 = puVar8[1];
          lVar11 = lVar11 + -0x18;
          uVar13 = puVar9[1];
          lVar16 = lVar11;
          if (uVar12 >= uVar13) {
            lVar16 = param_3;
          }
          *(undefined8 *)(lVar16 + 0x10 + uVar15 * 0x18) = puVar9[2];
          uVar19 = *(undefined4 *)((longlong)puVar9 + 4);
          uVar4 = *(undefined4 *)(puVar9 + 1);
          uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
          puVar2 = (undefined4 *)(lVar16 + uVar15 * 0x18);
          *puVar2 = *(undefined4 *)puVar9;
          puVar2[1] = uVar19;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          uVar15 = (uVar15 + 1) - (ulonglong)(uVar12 < uVar13);
        }
        if (uVar10 == uVar14) break;
        lVar11 = lVar11 + -0x18;
        *(undefined8 *)(param_3 + 0x10 + uVar15 * 0x18) = puVar9[2];
        uVar19 = *(undefined4 *)((longlong)puVar9 + 4);
        uVar4 = *(undefined4 *)(puVar9 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar9 + 0xc);
        puVar2 = (undefined4 *)(param_3 + uVar15 * 0x18);
        *puVar2 = *(undefined4 *)puVar9;
        puVar2[1] = uVar19;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        uVar15 = uVar15 + 1;
        puVar9 = puVar9 + 3;
        uVar10 = uVar14;
      }
      (*(code *)PTR_memcpy_00799008)(lVar11,uVar15 * 0x18);
      param_2 = uVar14 - uVar15;
      if (param_2 == 0) {
        param_1 = param_1 + uVar14 * 3;
        param_2 = 0;
        break;
      }
      param_1 = param_1 + uVar15 * 3;
      if (uVar14 == uVar15 + 1) {
        uVar12 = 0;
LAB_003f1a41:
        param_1[uVar12 * 3 + 2] = *(undefined8 *)(lVar1 + 0x10 + ~uVar12 * 0x18);
        puVar2 = (undefined4 *)(lVar1 + ~uVar12 * 0x18);
        uVar19 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar8 = param_1 + uVar12 * 3;
        *(undefined4 *)puVar8 = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar19;
        *(undefined4 *)(puVar8 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
      }
      else {
        puVar8 = (undefined8 *)(param_3 + -0x18 + uVar14 * 0x18);
        uVar10 = 0;
        puVar9 = param_1;
        do {
          puVar9[2] = puVar8[2];
          uVar7 = puVar8[1];
          *puVar9 = *puVar8;
          puVar9[1] = uVar7;
          uVar12 = uVar10 + 2;
          puVar2 = (undefined4 *)(lVar1 + (uVar10 ^ 0x1ffffffffffffffe) * 0x18);
          uVar19 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          *(undefined4 *)(puVar9 + 3) = *puVar2;
          *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar19;
          *(undefined4 *)(puVar9 + 4) = uVar4;
          *(undefined4 *)((longlong)puVar9 + 0x24) = uVar5;
          puVar9[5] = *(undefined8 *)(lVar1 + 0x10 + (uVar10 ^ 0x1ffffffffffffffe) * 0x18);
          puVar9 = puVar9 + 6;
          puVar8 = puVar8 + -6;
          uVar10 = uVar12;
        } while ((param_2 & 0xfffffffffffffffe) != uVar12);
        if ((param_2 & 1) != 0) goto LAB_003f1a41;
      }
      if (uVar14 < uVar15) {
LAB_003f1ae2:
        (*(code *)PTR_slice_index_fail_007993c8)
                  (&PTR_s__rustc_48a229ceaefd4985c50990b14_00788020,uVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58 = 0;
    } while (0x20 < param_2);
  }
LAB_003f1615:
  shared::smallsort::small_sort_general_with_scratch::
  <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
            (param_1,param_2,param_3,param_4,param_7);
  return;
}


