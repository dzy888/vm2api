// 00389980 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::small_sort_general_with_scratch::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
          (longlong *param_1,ulonglong param_2,longlong *param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong local_68;
  
  if (1 < param_2) {
    if (param_4 < param_2 + 0x10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uVar16 = param_2 >> 1;
    if (param_2 < 0x10) {
      plVar20 = param_1 + uVar16 * 2;
      plVar17 = param_3 + uVar16 * 2;
      if (param_2 < 8) {
        lVar4 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = lVar4;
        uVar6 = *(undefined4 *)((longlong)plVar20 + 4);
        lVar4 = plVar20[1];
        uVar7 = *(undefined4 *)((longlong)plVar20 + 0xc);
        *(int *)plVar17 = (int)*plVar20;
        *(undefined4 *)((longlong)plVar17 + 4) = uVar6;
        *(int *)(plVar17 + 1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar17 + 0xc) = uVar7;
        uVar19 = 1;
      }
      else {
        sort4_stable::
        <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                  (param_1,param_3);
        sort4_stable::
        <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                  (plVar20,plVar17);
        uVar19 = 4;
      }
    }
    else {
      sort4_stable::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_1,param_3 + param_2 * 2);
      sort4_stable::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_1 + 8,param_3 + param_2 * 2 + 8);
      bidirectional_merge::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_3 + param_2 * 2,8,param_3);
      sort4_stable::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_1 + uVar16 * 2,param_3 + param_2 * 2 + 0x10);
      uVar19 = 8;
      sort4_stable::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_1 + uVar16 * 2 + 8,param_3 + param_2 * 2 + 0x18);
      bidirectional_merge::
      <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
                (param_3 + param_2 * 2 + 0x10,8,param_3 + uVar16 * 2);
    }
    if (uVar19 < uVar16) {
      local_68 = (ulonglong)(uint)((int)uVar19 << 4);
      uVar18 = uVar19;
      do {
        plVar20 = param_1 + uVar18 * 2;
        uVar6 = *(undefined4 *)((longlong)plVar20 + 4);
        lVar4 = plVar20[1];
        uVar7 = *(undefined4 *)((longlong)plVar20 + 0xc);
        plVar17 = param_3 + uVar18 * 2;
        *(int *)plVar17 = (int)*plVar20;
        *(undefined4 *)((longlong)plVar17 + 4) = uVar6;
        *(int *)(plVar17 + 1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar17 + 0xc) = uVar7;
        lVar4 = param_3[uVar18 * 2];
        uVar21 = *(ulonglong *)(lVar4 + 0x10);
        uVar12 = *(ulonglong *)(param_3[uVar18 * 2 + -2] + 0x10);
        uVar13 = uVar12;
        if (uVar21 < uVar12) {
          uVar13 = uVar21;
        }
        iVar10 = (*(code *)PTR_memcmp_00799528)(uVar21,uVar13);
        lVar14 = uVar21 - uVar12;
        if (iVar10 != 0) {
          lVar14 = (longlong)iVar10;
        }
        if (lVar14 < 0) {
          lVar14 = param_3[uVar18 * 2 + 1];
          uVar21 = local_68;
          do {
            puVar2 = (undefined4 *)((longlong)param_3 + (uVar21 - 0x10));
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            puVar1 = (undefined4 *)((longlong)param_3 + uVar21);
            *puVar1 = *puVar2;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            if (uVar21 == 0x10) {
              plVar20 = param_3;
              goto LAB_00389ad0;
            }
            uVar12 = *(ulonglong *)(lVar4 + 0x10);
            uVar13 = *(ulonglong *)(*(longlong *)((longlong)param_3 + (uVar21 - 0x20)) + 0x10);
            uVar11 = uVar13;
            if (uVar12 < uVar13) {
              uVar11 = uVar12;
            }
            iVar10 = (*(code *)PTR_memcmp_00799528)(uVar12,uVar11);
            lVar15 = uVar12 - uVar13;
            if (iVar10 != 0) {
              lVar15 = (longlong)iVar10;
            }
            uVar21 = uVar21 - 0x10;
          } while (lVar15 < 0);
          plVar20 = (longlong *)(uVar21 + (longlong)param_3);
LAB_00389ad0:
          *plVar20 = lVar4;
          plVar20[1] = lVar14;
        }
        uVar18 = uVar18 + 1;
        local_68 = local_68 + 0x10;
      } while (uVar18 != uVar16);
    }
    if (uVar19 < param_2 - uVar16) {
      plVar20 = param_3 + uVar16 * 2;
      local_68 = (ulonglong)(uint)((int)uVar19 << 4);
      do {
        plVar17 = param_1 + uVar16 * 2 + uVar19 * 2;
        uVar6 = *(undefined4 *)((longlong)plVar17 + 4);
        lVar4 = plVar17[1];
        uVar7 = *(undefined4 *)((longlong)plVar17 + 0xc);
        plVar3 = plVar20 + uVar19 * 2;
        *(int *)plVar3 = (int)*plVar17;
        *(undefined4 *)((longlong)plVar3 + 4) = uVar6;
        *(int *)(plVar3 + 1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uVar7;
        lVar4 = plVar20[uVar19 * 2];
        uVar18 = *(ulonglong *)(lVar4 + 0x10);
        uVar21 = *(ulonglong *)(plVar20[uVar19 * 2 + -2] + 0x10);
        uVar12 = uVar21;
        if (uVar18 < uVar21) {
          uVar12 = uVar18;
        }
        iVar10 = (*(code *)PTR_memcmp_00799528)(uVar18,uVar12);
        puVar9 = PTR_memcmp_00799528;
        lVar14 = uVar18 - uVar21;
        if (iVar10 != 0) {
          lVar14 = (longlong)iVar10;
        }
        if (lVar14 < 0) {
          lVar14 = plVar20[uVar19 * 2 + 1];
          uVar18 = local_68;
          do {
            puVar1 = (undefined4 *)((longlong)plVar20 + (uVar18 - 0x10));
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined4 *)((longlong)plVar20 + uVar18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = uVar7;
            puVar2[3] = uVar8;
            if (uVar18 == 0x10) {
              plVar17 = plVar20;
              goto LAB_00389bd8;
            }
            uVar21 = *(ulonglong *)(lVar4 + 0x10);
            uVar12 = *(ulonglong *)(*(longlong *)((longlong)plVar20 + (uVar18 - 0x20)) + 0x10);
            uVar13 = uVar12;
            if (uVar21 < uVar12) {
              uVar13 = uVar21;
            }
            iVar10 = (*(code *)puVar9)(uVar21,uVar13);
            lVar15 = uVar21 - uVar12;
            if (iVar10 != 0) {
              lVar15 = (longlong)iVar10;
            }
            uVar18 = uVar18 - 0x10;
          } while (lVar15 < 0);
          plVar17 = (longlong *)(uVar18 + (longlong)plVar20);
LAB_00389bd8:
          *plVar17 = lVar4;
          plVar17[1] = lVar14;
        }
        uVar19 = uVar19 + 1;
        local_68 = local_68 + 0x10;
      } while (uVar19 != param_2 - uVar16);
    }
    bidirectional_merge::
    <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
              (param_3,param_2,param_1);
  }
  return;
}


