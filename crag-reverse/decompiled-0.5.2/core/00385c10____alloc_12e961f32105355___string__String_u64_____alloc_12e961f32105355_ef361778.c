// 00385c10 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#1}>::{closure#0}>
   core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::<(alloc[12e961f32105355]::string::String,
   u64), <[(alloc[12e961f32105355]::string::String, u64)]>::sort_by_key<u64,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#1}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
<(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
          (undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  if (param_2 <= param_3 - 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (param_3 != param_2) {
    lVar12 = param_3 * 0x20;
    puVar11 = param_1 + param_3 * 4;
    do {
      uVar2 = puVar11[3];
      if (uVar2 < (ulonglong)puVar11[-1]) {
        uVar3 = puVar11[2];
        uVar5 = *puVar11;
        uVar6 = puVar11[1];
        lVar10 = lVar12;
        do {
          lVar14 = lVar10;
          puVar13 = (undefined8 *)((longlong)param_1 + lVar14 + -0x20);
          uVar7 = *puVar13;
          uVar8 = puVar13[1];
          puVar13 = (undefined8 *)((longlong)param_1 + lVar14 + -0x10);
          uVar9 = puVar13[1];
          puVar1 = (undefined8 *)((longlong)param_1 + lVar14 + 0x10);
          *puVar1 = *puVar13;
          puVar1[1] = uVar9;
          *(undefined8 *)((longlong)param_1 + lVar14) = uVar7;
          ((undefined8 *)((longlong)param_1 + lVar14))[1] = uVar8;
          if (lVar14 == 0x20) {
            puVar13 = param_1;
            goto LAB_00385c43;
          }
          lVar10 = lVar14 + -0x20;
        } while (uVar2 < *(ulonglong *)((longlong)param_1 + lVar14 + -0x28));
        puVar13 = (undefined8 *)(lVar14 + -0x20 + (longlong)param_1);
LAB_00385c43:
        puVar13[2] = uVar3;
        *puVar13 = uVar5;
        puVar13[1] = uVar6;
        *(ulonglong *)((longlong)param_1 + lVar14 + -8) = uVar2;
      }
      puVar11 = puVar11 + 4;
      lVar12 = lVar12 + 0x20;
    } while (puVar11 != param_1 + param_2 * 4);
  }
  return;
}


