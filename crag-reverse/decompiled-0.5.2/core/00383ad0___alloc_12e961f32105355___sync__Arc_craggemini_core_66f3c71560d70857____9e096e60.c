// 00383ad0 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
          (longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  puVar6 = PTR_memcmp_00799528;
  uVar9 = *(ulonglong *)(param_1[1] + 0xf8);
  uVar1 = *(ulonglong *)(*param_1 + 0xf8);
  uVar15 = uVar1;
  if (uVar9 < uVar1) {
    uVar15 = uVar9;
  }
  iVar7 = (*(code *)PTR_memcmp_00799528)(uVar9,uVar15);
  lVar14 = uVar9 - uVar1;
  if (iVar7 != 0) {
    lVar14 = (longlong)iVar7;
  }
  uVar17 = (ulonglong)(-1 < lVar14);
  uVar9 = *(ulonglong *)(param_1[3] + 0xf8);
  uVar1 = *(ulonglong *)(param_1[2] + 0xf8);
  uVar15 = uVar1;
  if (uVar9 < uVar1) {
    uVar15 = uVar9;
  }
  iVar8 = (*(code *)puVar6)(uVar9,uVar15);
  iVar7 = (int)(uVar9 - uVar1 >> 0x20);
  if (iVar8 != 0) {
    iVar7 = iVar8 >> 0x1f;
  }
  uVar4 = -(iVar7 >> 0x1f);
  uVar11 = uVar4 + 2;
  lVar2 = param_1[uVar11];
  lVar16 = param_1[-(lVar14 >> 0x3f)];
  uVar9 = *(ulonglong *)(lVar2 + 0xf8);
  uVar1 = *(ulonglong *)(lVar16 + 0xf8);
  uVar15 = uVar1;
  if (uVar9 < uVar1) {
    uVar15 = uVar9;
  }
  iVar7 = (*(code *)puVar6)(lVar16,uVar15);
  lVar13 = uVar9 - uVar1;
  if (iVar7 != 0) {
    lVar13 = (longlong)iVar7;
  }
  uVar9 = *(ulonglong *)(param_1[uVar4 ^ 3] + 0xf8);
  uVar1 = *(ulonglong *)(param_1[uVar17] + 0xf8);
  uVar15 = uVar1;
  if (uVar9 < uVar1) {
    uVar15 = uVar9;
  }
  iVar7 = (*(code *)PTR_memcmp_00799528)(param_1[uVar17],uVar15);
  lVar18 = uVar9 - uVar1;
  if (iVar7 != 0) {
    lVar18 = (longlong)iVar7;
  }
  uVar9 = (ulonglong)uVar11;
  if (lVar13 < 0) {
    uVar9 = uVar17;
  }
  uVar1 = (ulonglong)(uVar4 ^ 3);
  uVar5 = (uint)(-1 < lVar14);
  if (lVar18 < 0) {
    uVar9 = (ulonglong)uVar4 ^ 3;
    uVar1 = uVar17;
    uVar5 = uVar11;
  }
  uVar15 = -(lVar14 >> 0x3f) & 0xffffffff;
  if (-1 < lVar13) {
    uVar15 = (ulonglong)uVar5;
  }
  uVar17 = *(ulonglong *)(param_1[uVar9] + 0xf8);
  uVar3 = *(ulonglong *)(param_1[uVar15] + 0xf8);
  if (-1 >= lVar13) {
    lVar16 = lVar2;
  }
  uVar12 = uVar3;
  if (uVar17 < uVar3) {
    uVar12 = uVar17;
  }
  iVar7 = (*(code *)PTR_memcmp_00799528)(param_1[uVar15],uVar12);
  lVar14 = uVar17 - uVar3;
  if (iVar7 != 0) {
    lVar14 = (longlong)iVar7;
  }
  *param_2 = lVar16;
  plVar10 = param_1 + uVar15;
  if (lVar14 < 0) {
    plVar10 = param_1 + uVar9;
  }
  param_2[1] = *plVar10;
  plVar10 = param_1 + uVar9;
  if (lVar14 < 0) {
    plVar10 = param_1 + uVar15;
  }
  param_2[2] = *plVar10;
  param_2[3] = param_1[uVar1];
  return;
}


