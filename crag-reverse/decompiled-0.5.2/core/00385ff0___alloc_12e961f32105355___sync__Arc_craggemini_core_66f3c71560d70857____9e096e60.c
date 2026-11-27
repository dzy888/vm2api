// 00385ff0 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong local_60;
  
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar5 = param_2 >> 1;
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        *param_3 = *param_1;
        param_3[uVar5] = param_1[uVar5];
        uVar11 = 1;
      }
      else {
        sort4_stable::
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                  (param_1,param_3);
        sort4_stable::
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                  (param_1 + uVar5,param_3 + uVar5);
        uVar11 = 4;
      }
    }
    else {
      sort4_stable::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1,param_3 + param_2);
      sort4_stable::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1 + 4,param_3 + param_2 + 4);
      uVar11 = 8;
      bidirectional_merge::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_3 + param_2,8,param_3);
      sort4_stable::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1 + uVar5,param_3 + param_2 + 8);
      sort4_stable::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_1 + uVar5 + 4,param_3 + param_2 + 0xc);
      bidirectional_merge::
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
                (param_3 + param_2 + 8,8,param_3 + uVar5);
    }
    if (uVar11 < uVar5) {
      local_60 = (ulonglong)(uint)((int)uVar11 * 8);
      uVar8 = uVar11;
      do {
        lVar1 = param_1[uVar8];
        param_3[uVar8] = lVar1;
        lVar9 = param_3[uVar8 - 1];
        lVar10 = *(longlong *)(lVar1 + 0xf8);
        lVar2 = *(longlong *)(lVar9 + 0xf8);
        iVar4 = (*(code *)PTR_memcmp_00799528)();
        lVar10 = lVar10 - lVar2;
        if (iVar4 != 0) {
          lVar10 = (longlong)iVar4;
        }
        if (lVar10 < 0) {
          uVar7 = local_60;
          do {
            *(longlong *)((longlong)param_3 + uVar7) = lVar9;
            if (uVar7 == 8) {
              plVar6 = param_3;
              goto LAB_00386128;
            }
            lVar9 = *(longlong *)((longlong)param_3 + (uVar7 - 0x10));
            lVar10 = *(longlong *)(lVar1 + 0xf8);
            lVar2 = *(longlong *)(lVar9 + 0xf8);
            iVar4 = (*(code *)PTR_memcmp_00799528)();
            lVar10 = lVar10 - lVar2;
            if (iVar4 != 0) {
              lVar10 = (longlong)iVar4;
            }
            uVar7 = uVar7 - 8;
          } while (lVar10 < 0);
          plVar6 = (longlong *)(uVar7 + (longlong)param_3);
LAB_00386128:
          *plVar6 = lVar1;
        }
        uVar8 = uVar8 + 1;
        local_60 = local_60 + 8;
      } while (uVar8 != uVar5);
    }
    if (uVar11 < param_2 - uVar5) {
      plVar6 = param_3 + uVar5;
      uVar8 = (ulonglong)(uint)((int)uVar11 * 8);
      do {
        lVar1 = param_1[uVar5 + uVar11];
        plVar6[uVar11] = lVar1;
        lVar9 = plVar6[uVar11 - 1];
        lVar10 = *(longlong *)(lVar1 + 0xf8);
        lVar2 = *(longlong *)(lVar9 + 0xf8);
        iVar4 = (*(code *)PTR_memcmp_00799528)();
        lVar10 = lVar10 - lVar2;
        if (iVar4 != 0) {
          lVar10 = (longlong)iVar4;
        }
        if (lVar10 < 0) {
          uVar7 = uVar8;
          do {
            *(longlong *)((longlong)plVar6 + uVar7) = lVar9;
            if (uVar7 == 8) {
              plVar12 = plVar6;
              goto LAB_0038622c;
            }
            lVar9 = *(longlong *)((longlong)plVar6 + (uVar7 - 0x10));
            lVar10 = *(longlong *)(lVar1 + 0xf8);
            lVar2 = *(longlong *)(lVar9 + 0xf8);
            iVar4 = (*(code *)PTR_memcmp_00799528)();
            lVar10 = lVar10 - lVar2;
            if (iVar4 != 0) {
              lVar10 = (longlong)iVar4;
            }
            uVar7 = uVar7 - 8;
          } while (lVar10 < 0);
          plVar12 = (longlong *)(uVar7 + (longlong)plVar6);
LAB_0038622c:
          *plVar12 = lVar1;
        }
        uVar11 = uVar11 + 1;
        uVar8 = uVar8 + 8;
      } while (uVar11 != param_2 - uVar5);
    }
    bidirectional_merge::
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
              (param_3,param_2,param_1);
  }
  return;
}


