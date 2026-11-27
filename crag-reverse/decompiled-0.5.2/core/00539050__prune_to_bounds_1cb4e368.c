// 00539050 prune_to_bounds

/* <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds(longlong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 local_f9;
  ulonglong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined1 (*local_e0) [16];
  undefined1 (*local_d8) [16];
  undefined1 *local_d0;
  ushort local_c8;
  ulonglong local_c0;
  code **local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  code *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong local_48;
  longlong local_40;
  longlong lStack_38;
  
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar10 = *(longlong *)(param_1 + 0x90);
  craggemini_core[66f3c71560d70857]::resume::prune_lru_map::
  <craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>
            (param_1 + 0x18,*(undefined8 *)(param_1 + 0xa8),
             <<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,)>>
             ::call_once);
  uVar5 = *(ulonglong *)(param_1 + 0xb0);
  local_90 = <<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,)>>
             ::call_once;
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  if (uVar5 < uVar2) {
    local_e0 = *(undefined1 (**) [16])(param_1 + 0x48);
    local_d0 = *local_e0 + *(longlong *)(param_1 + 0x50) + 1;
    auVar1 = *local_e0;
    local_c8 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
    local_d8 = local_e0 + 1;
    local_b8 = &local_90;
    local_c0 = uVar2;
    local_a8 = lVar7;
    uVar11 = <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,u64)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,u64),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#0}>>>
             ::from_iter(&local_60,&local_e0);
    local_e0 = (undefined1 (*) [16])&local_f9;
    if (1 < local_50) {
      local_f8 = local_50;
      if (local_50 < 0x15) {
        uVar11 = core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
                 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>::_closure_1_>::_closure_0_>
                           (local_58,local_50,1,&local_e0);
        local_50 = local_f8;
      }
      else {
        uVar11 = core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
                 <(alloc[12e961f32105355]::string::String,u64),<[(alloc[12e961f32105355]::string::String,u64)]>::sort_by_key<u64,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,u64)>>
                           (local_58,local_50,&local_e0);
        local_50 = local_f8;
      }
    }
    plVar9 = local_58 + local_50 * 4;
    local_68 = uVar2 - uVar5;
    local_88 = local_58;
    local_e8 = local_58;
    local_80 = local_58;
    local_b0 = local_60;
    local_78 = local_60;
    local_a0 = lVar6;
    local_98 = lVar10;
    local_70 = plVar9;
    if (local_68 != 0) {
      lVar7 = local_68 + -1;
      if (local_50 == 0) {
      }
      else {
        local_f8 = param_1 + 0x48;
        plVar4 = local_58;
        local_f0 = param_1;
        do {
          plVar8 = plVar4 + 4;
          lVar6 = *plVar4;
          local_58 = plVar8;
          if (lVar6 == -1) goto LAB_00539260;
          local_40 = plVar4[1];
          lStack_38 = plVar4[2];
          local_48 = lVar6;
          uVar11 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::remove::<alloc[12e961f32105355]::string::String>(&local_e0,local_f8,&local_48);
          if ((local_e0 < (undefined1 (*) [16])0xfffffffffffffffe) &&
             (local_e0 != (undefined1 (*) [16])0x0)) {
            uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          if (lVar6 != 0) {
            uVar11 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          if (lVar7 == 0) {
            local_58 = plVar4 + 4;
            lVar7 = 0;
            goto LAB_00539260;
          }
          lVar7 = lVar7 + -1;
          plVar4 = plVar8;
        } while (plVar8 != plVar9);
        local_58 = plVar9;
LAB_00539260:
        param_1 = local_f0;
      }
      local_80 = local_58;
      local_68 = lVar7;
    }
    lVar7 = local_a8;
    puVar3 = PTR___rust_dealloc_00798fc8;
    if ((longlong)plVar9 - (longlong)local_80 != 0) {
      uVar5 = (ulonglong)((longlong)plVar9 - (longlong)local_80) >> 5;
      plVar9 = local_80 + 1;
      do {
        if (plVar9[-1] != 0) {
          uVar11 = (*(code *)puVar3)(uVar11,1);
        }
        plVar9 = plVar9 + 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (local_b0 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
    }
    lVar6 = local_a0;
    lVar10 = local_98;
  }
  craggemini_core[66f3c71560d70857]::resume::prune_lru_map::
  <craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry>
            (param_1 + 0x78,*(undefined8 *)(param_1 + 0xb8),
             <<craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,)>>
             ::call_once);
  if (((*(longlong *)(param_1 + 0x30) != lVar7) || (*(longlong *)(param_1 + 0x60) != lVar6)) ||
     (*(longlong *)(param_1 + 0x90) != lVar10)) {
    *(undefined1 *)(param_1 + 200) = 1;
  }
  return;
}


