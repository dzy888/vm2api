// 00385410 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::bidirectional_merge::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  
  lVar11 = param_2 * 0x10;
  plVar17 = param_1 + param_2 * 2 + -2;
  uVar9 = param_2 * 8 & 0xfffffffffffffff0;
  plVar18 = (longlong *)((longlong)param_1 + uVar9);
  plVar14 = (longlong *)((longlong)param_1 + (uVar9 - 0x10));
  uVar16 = 0;
  do {
    puVar7 = PTR_memcmp_00799528;
    lVar11 = lVar11 + -0x10;
    uVar1 = *(ulonglong *)(*plVar18 + 0x10);
    uVar2 = *(ulonglong *)(*param_1 + 0x10);
    uVar12 = uVar2;
    if (uVar1 < uVar2) {
      uVar12 = uVar1;
    }
    iVar8 = (*(code *)PTR_memcmp_00799528)(*param_1,uVar12);
    lVar15 = uVar1 - uVar2;
    if (iVar8 != 0) {
      lVar15 = (longlong)iVar8;
    }
    plVar10 = plVar18;
    if (-1 < lVar15) {
      plVar10 = param_1;
    }
    uVar4 = *(undefined4 *)((longlong)plVar10 + 4);
    lVar6 = plVar10[1];
    uVar5 = *(undefined4 *)((longlong)plVar10 + 0xc);
    puVar13 = (undefined4 *)(param_3 + uVar16);
    *puVar13 = (int)*plVar10;
    puVar13[1] = uVar4;
    puVar13[2] = (int)lVar6;
    puVar13[3] = uVar5;
    plVar18 = (longlong *)((ulonglong)((uint)((ulonglong)lVar15 >> 0x3f) << 4) + (longlong)plVar18);
    param_1 = param_1 + (ulonglong)(-1 < lVar15) * 2;
    uVar1 = *(ulonglong *)(*plVar17 + 0x10);
    uVar2 = *(ulonglong *)(*plVar14 + 0x10);
    uVar12 = uVar2;
    if (uVar1 < uVar2) {
      uVar12 = uVar1;
    }
    iVar8 = (*(code *)puVar7)(*plVar14,uVar12);
    lVar15 = uVar1 - uVar2;
    if (iVar8 != 0) {
      lVar15 = (longlong)iVar8;
    }
    plVar10 = plVar14;
    if (-1 < lVar15) {
      plVar10 = plVar17;
    }
    uVar4 = *(undefined4 *)((longlong)plVar10 + 4);
    lVar6 = plVar10[1];
    uVar5 = *(undefined4 *)((longlong)plVar10 + 0xc);
    puVar13 = (undefined4 *)(param_3 + lVar11);
    *puVar13 = (int)*plVar10;
    puVar13[1] = uVar4;
    puVar13[2] = (int)lVar6;
    puVar13[3] = uVar5;
    plVar17 = plVar17 + (ulonglong)(-1 < lVar15) * -2;
    plVar14 = plVar14 + (lVar15 >> 0x3f) * 2;
    uVar16 = uVar16 + 0x10;
  } while (uVar9 != uVar16);
  if ((param_2 & 1) != 0) {
    puVar13 = (undefined4 *)(param_3 + uVar16);
    bVar19 = param_1 < plVar14 + 2;
    plVar10 = plVar18;
    if (bVar19) {
      plVar10 = param_1;
    }
    uVar4 = *(undefined4 *)((longlong)plVar10 + 4);
    lVar11 = plVar10[1];
    uVar5 = *(undefined4 *)((longlong)plVar10 + 0xc);
    *puVar13 = (int)*plVar10;
    puVar13[1] = uVar4;
    puVar13[2] = (int)lVar11;
    puVar13[3] = uVar5;
    param_1 = param_1 + (ulonglong)bVar19 * 2;
    plVar18 = plVar18 + (ulonglong)!bVar19 * 2;
  }
  if (param_1 == plVar14 + 2) {
    if (plVar18 == plVar17 + 2) {
      return;
    }
  }
  (*(code *)PTR_panic_on_ord_violation_007996f0)();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


