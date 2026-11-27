// 003b2c10 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<std[6c98fd8553dbae28]::collections::hash::map::Values<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  longlong *local_40;
  ulonglong *local_38;
  
  uVar3 = param_2[4];
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  uVar9 = (uint)*(ushort *)(param_2 + 3);
  lVar12 = *param_2;
  if (*(ushort *)(param_2 + 3) == 0) {
    pauVar10 = (undefined1 (*) [16])param_2[1];
    do {
      auVar2 = *pauVar10;
      lVar12 = lVar12 + -0x200;
      pauVar10 = pauVar10 + 1;
      uVar9 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
    } while (uVar9 == 0);
    param_2[1] = (longlong)pauVar10;
    *param_2 = lVar12;
  }
  iVar6 = 0;
  for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    iVar6 = iVar6 + 1;
  }
  uVar9 = uVar9 - 1 & uVar9;
  *(short *)(param_2 + 3) = (short)uVar9;
  lVar13 = uVar3 - 1;
  param_2[4] = lVar13;
  plVar4 = *(longlong **)((lVar12 - (ulonglong)(uint)(iVar6 << 5)) + -8);
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  local_38 = param_1;
  if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
    uVar11 = 4;
    if (4 < uVar3) {
      uVar11 = uVar3;
    }
    if (uVar11 * 8 < 0x7ffffffffffffff9 && uVar3 >> 0x3d == 0) {
      local_40 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = plVar4;
        local_48 = 1;
        local_58 = uVar11;
        local_50 = puVar8;
        if (lVar13 != 0) {
          pauVar10 = (undefined1 (*) [16])local_40[1];
          do {
            uVar3 = local_48;
            if ((short)uVar9 == 0) {
              do {
                auVar2 = *pauVar10;
                lVar12 = lVar12 + -0x200;
                pauVar10 = pauVar10 + 1;
                uVar9 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar9 == 0);
            }
            iVar6 = 0;
            for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              iVar6 = iVar6 + 1;
            }
            plVar4 = *(longlong **)((lVar12 - (ulonglong)(uint)(iVar6 << 5)) + -8);
            LOCK();
            lVar1 = *plVar4;
            *plVar4 = *plVar4 + 1;
            UNLOCK();
            if (*plVar4 == 0 || SCARRY8(lVar1,1) != *plVar4 < 0) goto LAB_003b2ccb;
            if (local_48 == local_58) {
              <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_58,local_48,lVar13,8,8);
              puVar8 = local_50;
            }
            uVar9 = uVar9 - 1 & uVar9;
            lVar13 = lVar13 + -1;
            puVar8[uVar3] = plVar4;
            local_48 = uVar3 + 1;
          } while (lVar13 != 0);
        }
        local_38[2] = local_48;
        *local_38 = local_58;
        local_38[1] = (ulonglong)local_50;
        return local_38;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_003b2ccb:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


