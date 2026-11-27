// 00385080 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  
  uVar6 = param_2 >> 1;
  local_68 = param_1 + (param_2 - 1);
  local_78 = param_1 + uVar6;
  plVar12 = param_1 + (uVar6 - 1);
  lVar7 = 0;
  plVar14 = param_3;
  local_70 = param_1;
  do {
    lVar10 = *local_78;
    lVar13 = *local_70;
    uVar1 = *(ulonglong *)(lVar10 + 0xf8);
    uVar2 = *(ulonglong *)(lVar13 + 0xf8);
    uVar8 = uVar2;
    if (uVar1 < uVar2) {
      uVar8 = uVar1;
    }
    iVar5 = (*(code *)PTR_memcmp_00799528)(lVar7,uVar8);
    lVar11 = uVar1 - uVar2;
    if (iVar5 != 0) {
      lVar11 = (longlong)iVar5;
    }
    if (-1 < lVar11) {
      lVar10 = lVar13;
    }
    *plVar14 = lVar10;
    local_78 = local_78 + -(lVar11 >> 0x3f);
    local_70 = local_70 + (-1 < lVar11);
    plVar14 = plVar14 + 1;
    lVar10 = *local_68;
    lVar13 = *plVar12;
    lVar11 = *(longlong *)(lVar10 + 0xf8);
    lVar3 = *(longlong *)(lVar13 + 0xf8);
    iVar5 = (*(code *)PTR_memcmp_00799528)();
    lVar11 = lVar11 - lVar3;
    if (iVar5 != 0) {
      lVar11 = (longlong)iVar5;
    }
    if (-1 < lVar11) {
      lVar13 = lVar10;
    }
    param_3[param_2 + lVar7 + -1] = lVar13;
    local_68 = local_68 + -(ulonglong)(-1 < lVar11);
    plVar12 = plVar12 + (lVar11 >> 0x3f);
    lVar7 = lVar7 + -1;
  } while (-uVar6 != lVar7);
  if ((param_2 & 1) != 0) {
    bVar15 = local_70 < plVar12 + 1;
    plVar9 = local_78;
    if (bVar15) {
      plVar9 = local_70;
    }
    *plVar14 = *plVar9;
    local_70 = local_70 + bVar15;
    local_78 = local_78 + !bVar15;
  }
  if (local_70 == plVar12 + 1) {
    if (local_78 == local_68 + 1) {
      return;
    }
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


