// 005120a0 <craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>

/* craggemini_core[66f3c71560d70857]::resume::prune_lru_map::<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>
    */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::prune_lru_map::
<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>
          (undefined8 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_e9;
  longlong *local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined1 (*local_a0) [16];
  undefined1 (*local_98) [16];
  undefined1 *local_90;
  ushort local_88;
  undefined6 uStack_86;
  ulonglong local_80;
  undefined8 *local_78;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  
  uVar6 = param_1[3];
  if (param_2 < uVar6) {
    local_a0 = (undefined1 (*) [16])*param_1;
    local_90 = *local_a0 + param_1[1] + 1;
    auVar1 = *local_a0;
    local_88 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    local_98 = local_a0 + 1;
    local_78 = &local_d0;
    local_d0 = param_3;
    local_80 = uVar6;
    uVar9 = <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,u64)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,u64),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::{closure#0}>>>
            ::from_iter(&local_60,&local_a0);
    local_a0 = (undefined1 (*) [16])&local_e9;
    if (1 < local_50) {
      if (local_50 < 0x15) {
        uVar9 = core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
                <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                          (local_58,local_50,1,&local_a0);
      }
      else {
        uVar9 = core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
                <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,u64)>>
                          (local_58,local_50,&local_a0);
      }
    }
    plVar5 = local_58 + local_50 * 4;
    local_a8 = uVar6 - param_2;
    local_c8 = local_58;
    local_c0 = local_58;
    local_e0 = local_60;
    local_b8 = local_60;
    local_d8 = param_1;
    local_b0 = plVar5;
    if (local_a8 != 0) {
      lVar7 = local_a8 + -1;
      if (local_50 == 0) {
      }
      else {
        local_e8 = local_58;
        plVar8 = local_58;
        do {
          plVar4 = plVar8 + 4;
          lVar2 = *plVar8;
          local_58 = plVar4;
          if (lVar2 == -1) goto LAB_00512273;
          local_40 = plVar8[1];
          lStack_38 = plVar8[2];
          local_48 = lVar2;
          uVar9 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
                  ::remove::<alloc[12e961f32105355]::string::String>(&local_a0,local_d8,&local_48);
          if (local_a0 != (undefined1 (*) [16])0xffffffffffffffff) {
            if (local_a0 != (undefined1 (*) [16])0x0) {
              uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
            }
            if ((CONCAT62(uStack_86,local_88) != -1) && (CONCAT62(uStack_86,local_88) != 0)) {
              uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
            }
          }
          if (lVar2 != 0) {
            uVar9 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,1);
          }
          if (lVar7 == 0) {
            local_58 = plVar8 + 4;
            lVar7 = 0;
            goto LAB_00512273;
          }
          lVar7 = lVar7 + -1;
          plVar8 = plVar4;
        } while (plVar4 != plVar5);
        local_58 = plVar5;
      }
LAB_00512273:
      local_c0 = local_58;
      local_a8 = lVar7;
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    if ((longlong)plVar5 - (longlong)local_c0 != 0) {
      uVar6 = (ulonglong)((longlong)plVar5 - (longlong)local_c0) >> 5;
      plVar5 = local_c0 + 1;
      do {
        if (plVar5[-1] != 0) {
          uVar9 = (*(code *)puVar3)(uVar9,1);
        }
        plVar5 = plVar5 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (local_e0 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
    }
  }
  return;
}


