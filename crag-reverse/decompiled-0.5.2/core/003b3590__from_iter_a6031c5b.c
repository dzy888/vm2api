// 003b3590 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,
   std[6c98fd8553dbae28]::collections::hash::map::IntoValues<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::collections::hash::map::IntoValues<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>>
::from_iter(ulonglong *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  longlong local_238;
  longlong lStack_230;
  ushort local_208;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong *local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  
  uVar11 = *(ulonglong *)(param_2[3] + 8);
  pauVar15 = param_2;
  if (uVar11 != 0) {
    uVar13 = (uint)*(ushort *)param_2[3];
    lVar10 = *(longlong *)(param_2[1] + 8);
    if (*(ushort *)param_2[3] == 0) {
      pauVar15 = *(undefined1 (**) [16])param_2[2];
      do {
        auVar1 = *pauVar15;
        lVar10 = lVar10 + -0xe00;
        pauVar15 = pauVar15 + 1;
        uVar13 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      } while (uVar13 == 0);
      *(undefined1 (**) [16])param_2[2] = pauVar15;
      *(longlong *)(param_2[1] + 8) = lVar10;
    }
    uVar8 = (ushort)uVar13;
    uVar6 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    *(ushort *)param_2[3] = uVar8 - 1 & uVar8;
    pauVar15 = (undefined1 (*) [16])-(ulonglong)uVar6;
    lVar14 = (ulonglong)uVar6 * -0xe0;
    *(ulonglong *)(param_2[3] + 8) = uVar11 - 1;
    pauVar3 = *(undefined1 (**) [16])(lVar10 + -0xe0 + lVar14);
    if (pauVar3 != (undefined1 (*) [16])0xffffffffffffffff) {
      lVar17 = *(longlong *)(lVar10 + -200 + lVar14);
      local_1e0 = param_1;
      uVar18 = (*(code *)PTR_memmove_00799258)(lVar14,0xc0);
      pauVar15 = (undefined1 (*) [16])(lVar10 + lVar14 + -0xc0);
      if (pauVar3 != (undefined1 (*) [16])0x0) {
        uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
        pauVar15 = pauVar3;
      }
      param_1 = local_1e0;
      if (lVar17 != -1) {
        local_1b8 = lVar17;
        uVar18 = (*(code *)PTR_memcpy_00799008)(uVar18,0xc0);
        uVar16 = 4;
        if (4 < uVar11) {
          uVar16 = uVar11;
        }
        if (0xa3d70a3d70a3d7 < uVar11) {
LAB_003b36c2:
          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar16 * 200 == 0) {
          uVar11 = 8;
          uVar16 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar11 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar11 == 0) goto LAB_003b36c2;
          uVar18 = extraout_XMM0_Qa;
        }
        (*(code *)PTR_memcpy_00799008)(uVar18,200);
        local_1e8 = 1;
        auVar1 = *param_2;
        lVar10 = *(longlong *)(param_2[1] + 8);
        pauVar15 = *(undefined1 (**) [16])param_2[2];
        local_1f8 = uVar16;
        uStack_1f0 = uVar11;
        if (*(longlong *)(param_2[3] + 8) != 0) {
          local_208 = (ushort)*(undefined8 *)param_2[3];
          uVar13 = (uint)local_208;
          lVar14 = *(longlong *)(param_2[3] + 8);
          do {
            if ((short)uVar13 == 0) {
              do {
                auVar2 = *pauVar15;
                lVar10 = lVar10 + -0xe00;
                pauVar15 = pauVar15 + 1;
                uVar13 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
              } while (uVar13 == 0);
            }
            uVar6 = 0;
            for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar13 = uVar13 - 1 & uVar13;
            lVar12 = (ulonglong)uVar6 * -0xe0;
            lVar17 = lVar14 + -1;
            lVar4 = *(longlong *)(lVar10 + -0xe0 + lVar12);
            local_1c0 = uVar11;
            if (lVar4 == -1) goto LAB_003b390b;
            local_1d0 = *(undefined8 *)(lVar10 + -0xd8 + lVar12);
            lVar12 = *(longlong *)(lVar10 + -200 + lVar12);
            local_1d8 = lVar14;
            local_1c8 = local_1e8;
            uVar18 = (*(code *)PTR_memmove_00799258)(local_1d0,0xc0);
            if (lVar4 != 0) {
              uVar18 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar18,1);
            }
            if (lVar12 == -1) goto LAB_003b390b;
            local_1b8 = lVar12;
            uVar18 = (*(code *)PTR_memcpy_00799008)(uVar18,0xc0);
            uVar16 = local_1c8;
            uVar11 = local_1c0;
            if (local_1c8 == local_1f8) {
              uVar18 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                       do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                 (&local_1f8,local_1c8,local_1d8,8,200);
              uVar11 = uStack_1f0;
            }
            (*(code *)PTR_memcpy_00799008)(uVar18,200);
            local_1e8 = uVar16 + 1;
            lVar14 = lVar17;
          } while (lVar17 != 0);
          lVar17 = 0;
LAB_003b390b:
          puVar9 = PTR___rust_dealloc_00798fc8;
          if (lVar17 != 0) {
            do {
              if ((short)uVar13 == 0) {
                do {
                  auVar2 = *pauVar15;
                  lVar10 = lVar10 + -0xe00;
                  pauVar15 = pauVar15 + 1;
                  uVar13 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
                } while (uVar13 == 0);
              }
              uVar6 = 0;
              for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              uVar13 = uVar13 - 1 & uVar13;
              lVar14 = (ulonglong)uVar6 * -0xe0;
              lVar17 = lVar17 + -1;
              if (*(longlong *)(lVar10 + -0xe0 + lVar14) != 0) {
                (*(code *)puVar9)(-(ulonglong)uVar6,1);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar10 + lVar14 + -200)
              ;
            } while (lVar17 != 0);
          }
        }
        local_238 = auVar1._0_8_;
        if ((local_238 != 0) && (lStack_230 = auVar1._8_8_, lStack_230 != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        local_1e0[2] = local_1e8;
        *local_1e0 = local_1f8;
        local_1e0[1] = uStack_1f0;
        return local_1e0;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  <hashbrown[b5c94476ffc33875]::raw::RawIntoIter<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_2,pauVar15);
  return param_1;
}


