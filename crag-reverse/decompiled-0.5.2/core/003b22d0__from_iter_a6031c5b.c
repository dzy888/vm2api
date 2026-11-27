// 003b22d0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String, u64)> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,
   u64), 
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>,
   craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,u64)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,u64),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<std[6c98fd8553dbae28]::collections::hash::map::Iter<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>,craggemini_core[66f3c71560d70857]::resume::prune_lru_map<craggemini_core[66f3c71560d70857]::resume::CachedThinkingMeta>::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  ulonglong uVar11;
  longlong local_80;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  ulonglong *local_40;
  undefined8 *local_38;
  
  uVar2 = param_2[4];
  if (uVar2 != 0) {
    uVar7 = (uint)*(ushort *)(param_2 + 3);
    lVar10 = *param_2;
    if (*(ushort *)(param_2 + 3) == 0) {
      pauVar9 = (undefined1 (*) [16])param_2[1];
      do {
        auVar1 = *pauVar9;
        lVar10 = lVar10 + -0x400;
        pauVar9 = pauVar9 + 1;
        uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar7 == 0);
      param_2[1] = (longlong)pauVar9;
      *param_2 = lVar10;
    }
    iVar5 = 0;
    for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      iVar5 = iVar5 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7;
    *(short *)(param_2 + 3) = (short)uVar7;
    local_80 = uVar2 - 1;
    param_2[4] = local_80;
    puVar3 = (undefined8 *)param_2[5];
    (*(code *)PTR_clone_00798fd0)(iVar5 << 6);
    local_38 = puVar3;
    lVar10 = (*(code *)*puVar3)();
    if (local_70 != -1) {
      uVar11 = 4;
      if (4 < uVar2) {
        uVar11 = uVar2;
      }
      local_40 = param_1;
      if (uVar11 * 0x20 < 0x7ffffffffffffff9 && uVar2 >> 0x3b == 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plVar8 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = local_70;
          plVar8[1] = local_68;
          plVar8[2] = local_60;
          plVar8[3] = lVar10;
          local_48 = 1;
          local_58 = uVar11;
          local_50 = plVar8;
          if (local_80 != 0) {
            pauVar9 = (undefined1 (*) [16])param_2[1];
            do {
              uVar2 = local_48;
              if ((short)uVar7 == 0) {
                do {
                  auVar1 = *pauVar9;
                  pauVar9 = pauVar9 + 1;
                  uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar7 == 0);
              }
              for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              }
              (*(code *)PTR_clone_00798fd0)();
              lVar10 = (*(code *)*local_38)();
              if (local_70 == -1) break;
              if (uVar2 == local_58) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_58,uVar2,local_80,8,0x20);
                plVar8 = local_50;
              }
              uVar7 = uVar7 - 1 & uVar7;
              local_80 = local_80 + -1;
              plVar8[uVar2 * 4] = local_70;
              plVar8[uVar2 * 4 + 1] = local_68;
              plVar8[uVar2 * 4 + 2] = local_60;
              plVar8[uVar2 * 4 + 3] = lVar10;
              local_48 = uVar2 + 1;
            } while (local_80 != 0);
          }
          local_40[2] = local_48;
          *local_40 = local_58;
          local_40[1] = (ulonglong)local_50;
          return local_40;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


