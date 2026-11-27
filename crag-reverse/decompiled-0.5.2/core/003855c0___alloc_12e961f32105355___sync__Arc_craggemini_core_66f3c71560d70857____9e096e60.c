// 003855c0 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_3 != param_2) {
    plVar10 = param_1 + param_3;
    lVar6 = param_3 << 3;
    do {
      lVar12 = plVar10[-1];
      lVar1 = *plVar10;
      uVar2 = *(ulonglong *)(lVar1 + 0xf8);
      uVar3 = *(ulonglong *)(lVar12 + 0xf8);
      uVar7 = uVar3;
      if (uVar2 < uVar3) {
        uVar7 = uVar2;
      }
      iVar5 = (*(code *)PTR_memcmp_00799528)(param_4,uVar7);
      lVar9 = uVar2 - uVar3;
      if (iVar5 != 0) {
        lVar9 = (longlong)iVar5;
      }
      if (lVar9 < 0) {
        lVar9 = lVar6;
        do {
          *(longlong *)((longlong)param_1 + lVar9) = lVar12;
          if (lVar9 == 8) {
            plVar8 = param_1;
            goto LAB_003855fd;
          }
          lVar12 = *(longlong *)((longlong)param_1 + lVar9 + -0x10);
          uVar2 = *(ulonglong *)(lVar1 + 0xf8);
          uVar3 = *(ulonglong *)(lVar12 + 0xf8);
          uVar7 = uVar3;
          if (uVar2 < uVar3) {
            uVar7 = uVar2;
          }
          iVar5 = (*(code *)PTR_memcmp_00799528)(param_4,uVar7);
          lVar11 = uVar2 - uVar3;
          if (iVar5 != 0) {
            lVar11 = (longlong)iVar5;
          }
          lVar9 = lVar9 + -8;
        } while (lVar11 < 0);
        plVar8 = (longlong *)(lVar9 + (longlong)param_1);
LAB_003855fd:
        *plVar8 = lVar1;
      }
      plVar10 = plVar10 + 1;
      lVar6 = lVar6 + 8;
    } while (plVar10 != param_1 + param_2);
  }
  return;
}


