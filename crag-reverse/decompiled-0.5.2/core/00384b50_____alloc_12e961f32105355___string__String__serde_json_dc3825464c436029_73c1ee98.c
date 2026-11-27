// 00384b50 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::sort4_stable::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar15;
  ulonglong uVar14;
  longlong *plVar16;
  
  puVar4 = PTR_memcmp_00799528;
  uVar6 = *(ulonglong *)(param_1[2] + 0x10);
  uVar8 = *(ulonglong *)(*param_1 + 0x10);
  uVar7 = uVar8;
  if (uVar6 < uVar8) {
    uVar7 = uVar6;
  }
  iVar5 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar7);
  lVar10 = uVar6 - uVar8;
  if (iVar5 != 0) {
    lVar10 = (longlong)iVar5;
  }
  uVar6 = *(ulonglong *)(param_1[6] + 0x10);
  uVar8 = *(ulonglong *)(param_1[4] + 0x10);
  uVar7 = uVar8;
  if (uVar6 < uVar8) {
    uVar7 = uVar6;
  }
  iVar5 = (*(code *)puVar4)(uVar6,uVar7);
  uVar15 = (uint)(uVar6 - uVar8 >> 0x20);
  if (iVar5 != 0) {
    uVar15 = iVar5 >> 0x1f;
  }
  uVar8 = (ulonglong)((uint)((ulonglong)lVar10 >> 0x3f) << 4);
  plVar13 = (longlong *)((longlong)param_1 + uVar8);
  plVar3 = param_1 + (ulonglong)(-1 < lVar10) * 2;
  uVar6 = (ulonglong)((uVar15 >> 0x1f) << 4);
  plVar11 = (longlong *)((longlong)param_1 + uVar6 + 0x20);
  uVar14 = (ulonglong)((uVar15 >> 0x1f ^ 3) << 4);
  plVar1 = (longlong *)((longlong)param_1 + uVar14);
  lVar9 = *(longlong *)((longlong)param_1 + uVar8);
  uVar6 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar6 + 0x20) + 0x10);
  uVar8 = *(ulonglong *)(lVar9 + 0x10);
  uVar7 = uVar6;
  if (uVar8 <= uVar6) {
    uVar7 = uVar8;
  }
  iVar5 = (*(code *)PTR_memcmp_00799528)(lVar9,uVar7);
  puVar4 = PTR_memcmp_00799528;
  lVar9 = uVar6 - uVar8;
  if (iVar5 != 0) {
    lVar9 = (longlong)iVar5;
  }
  uVar6 = *(ulonglong *)(*(longlong *)((longlong)param_1 + uVar14) + 0x10);
  uVar8 = *(ulonglong *)(param_1[(ulonglong)(-1 < lVar10) * 2] + 0x10);
  uVar7 = uVar8;
  if (uVar6 < uVar8) {
    uVar7 = uVar6;
  }
  iVar5 = (*(code *)PTR_memcmp_00799528)(param_1[(ulonglong)(-1 < lVar10) * 2],uVar7);
  lVar10 = uVar6 - uVar8;
  if (iVar5 != 0) {
    lVar10 = (longlong)iVar5;
  }
  plVar16 = plVar3;
  if (lVar10 < 0) {
    plVar16 = plVar11;
  }
  plVar12 = plVar11;
  plVar2 = plVar13;
  if (lVar9 < 0) {
    plVar12 = plVar3;
    plVar2 = plVar11;
    plVar16 = plVar13;
  }
  if (lVar10 < 0) {
    plVar12 = plVar1;
  }
  else {
    plVar3 = plVar1;
  }
  uVar6 = *(ulonglong *)(*plVar12 + 0x10);
  uVar8 = *(ulonglong *)(*plVar16 + 0x10);
  uVar7 = uVar8;
  if (uVar6 < uVar8) {
    uVar7 = uVar6;
  }
  iVar5 = (*(code *)puVar4)(*plVar16,uVar7);
  lVar10 = uVar6 - uVar8;
  if (iVar5 != 0) {
    lVar10 = (longlong)iVar5;
  }
  plVar13 = plVar12;
  if (lVar10 < 0) {
    plVar13 = plVar16;
    plVar16 = plVar12;
  }
  lVar10 = plVar2[1];
  *param_2 = *plVar2;
  param_2[1] = lVar10;
  lVar10 = plVar16[1];
  param_2[2] = *plVar16;
  param_2[3] = lVar10;
  lVar10 = plVar13[1];
  param_2[4] = *plVar13;
  param_2[5] = lVar10;
  lVar10 = plVar3[1];
  param_2[6] = *plVar3;
  param_2[7] = lVar10;
  return;
}


