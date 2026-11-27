// 00385f50 <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>), <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_3 != param_2) {
    lVar7 = param_3 * 0x18;
    puVar8 = param_1 + param_3 * 3;
    do {
      uVar1 = puVar8[1];
      if (uVar1 < (ulonglong)puVar8[-2]) {
        uVar2 = *puVar8;
        uVar3 = puVar8[2];
        lVar6 = lVar7;
        do {
          lVar10 = lVar6;
          *(undefined8 *)((longlong)param_1 + lVar10 + 0x10) =
               *(undefined8 *)((longlong)param_1 + lVar10 + -8);
          puVar9 = (undefined8 *)((longlong)param_1 + lVar10 + -0x18);
          uVar5 = puVar9[1];
          *(undefined8 *)((longlong)param_1 + lVar10) = *puVar9;
          ((undefined8 *)((longlong)param_1 + lVar10))[1] = uVar5;
          if (lVar10 == 0x18) {
            puVar9 = param_1;
            goto LAB_00385f83;
          }
          lVar6 = lVar10 + -0x18;
        } while (uVar1 < *(ulonglong *)((longlong)param_1 + lVar10 + -0x28));
        puVar9 = (undefined8 *)(lVar10 + -0x18 + (longlong)param_1);
LAB_00385f83:
        *puVar9 = uVar2;
        *(ulonglong *)((longlong)param_1 + lVar10 + -0x10) = uVar1;
        *(undefined8 *)((longlong)param_1 + lVar10 + -8) = uVar3;
      }
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + 0x18;
    } while (puVar8 != param_1 + param_2 * 3);
  }
  return;
}


