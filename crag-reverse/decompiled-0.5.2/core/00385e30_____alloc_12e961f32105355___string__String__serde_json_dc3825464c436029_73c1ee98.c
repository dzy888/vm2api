// 00385e30 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (param_3 != param_2) {
    lVar17 = param_3 * 0x10;
    plVar15 = param_1 + param_3 * 2;
    do {
      lVar3 = *plVar15;
      uVar4 = *(ulonglong *)(lVar3 + 0x10);
      uVar5 = *(ulonglong *)(plVar15[-2] + 0x10);
      uVar11 = uVar5;
      if (uVar4 < uVar5) {
        uVar11 = uVar4;
      }
      iVar10 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
      lVar13 = uVar4 - uVar5;
      if (iVar10 != 0) {
        lVar13 = (longlong)iVar10;
      }
      if (lVar13 < 0) {
        lVar13 = plVar15[1];
        lVar14 = lVar17;
        do {
          puVar2 = (undefined4 *)((longlong)param_1 + lVar14 + -0x10);
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          puVar1 = (undefined4 *)((longlong)param_1 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          if (lVar14 == 0x10) {
            plVar12 = param_1;
            goto LAB_00385e81;
          }
          uVar4 = *(ulonglong *)(lVar3 + 0x10);
          uVar5 = *(ulonglong *)(*(longlong *)((longlong)param_1 + lVar14 + -0x20) + 0x10);
          uVar11 = uVar5;
          if (uVar4 < uVar5) {
            uVar11 = uVar4;
          }
          iVar10 = (*(code *)PTR_memcmp_00799528)(uVar4,uVar11);
          lVar16 = uVar4 - uVar5;
          if (iVar10 != 0) {
            lVar16 = (longlong)iVar10;
          }
          lVar14 = lVar14 + -0x10;
        } while (lVar16 < 0);
        plVar12 = (longlong *)(lVar14 + (longlong)param_1);
LAB_00385e81:
        *plVar12 = lVar3;
        plVar12[1] = lVar13;
      }
      plVar15 = plVar15 + 2;
      lVar17 = lVar17 + 0x10;
    } while (plVar15 != param_1 + param_2 * 2);
  }
  return;
}


