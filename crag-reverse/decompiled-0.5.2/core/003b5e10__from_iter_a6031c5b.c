// 003b5e10 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String, usize)> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::string::String,
   usize),
   std[6c98fd8553dbae28]::collections::hash::map::Drain<alloc[12e961f32105355]::string::String,
   usize>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,usize)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::string::String,usize),std[6c98fd8553dbae28]::collections::hash::map::Drain<alloc[12e961f32105355]::string::String,usize>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  undefined *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ulonglong local_c0;
  longlong *plStack_b8;
  ulonglong local_b0;
  longlong local_a8;
  undefined1 (*pauStack_a0) [16];
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  ulonglong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  uVar2 = param_2[4];
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(param_2 + 3);
    lVar12 = *param_2;
    if (*(ushort *)(param_2 + 3) == 0) {
      pauVar16 = (undefined1 (*) [16])param_2[1];
      do {
        auVar1 = *pauVar16;
        lVar12 = lVar12 + -0x200;
        pauVar16 = pauVar16 + 1;
        uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      } while (uVar14 == 0);
      param_2[1] = (longlong)pauVar16;
      *param_2 = lVar12;
    }
    uVar8 = (ushort)uVar14;
    iVar6 = 0;
    for (; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      iVar6 = iVar6 + 1;
    }
    *(ushort *)(param_2 + 3) = uVar8 - 1 & uVar8;
    lVar12 = lVar12 - (ulonglong)(uint)(iVar6 << 5);
    lVar15 = uVar2 - 1;
    param_2[4] = lVar15;
    lVar17 = *(longlong *)(lVar12 + -0x20);
    lVar3 = *(longlong *)(lVar12 + -0x18);
    local_58 = *(undefined1 (*) [16])(lVar12 + -0x10);
    if (lVar17 != -1) {
      uVar11 = 4;
      if (4 < uVar2) {
        uVar11 = uVar2;
      }
      if (uVar11 * 0x20 < 0x7ffffffffffffff9 && uVar2 >> 0x3b == 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plVar10 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = lVar17;
          plVar10[1] = lVar3;
          plVar10[2] = local_58._0_8_;
          plVar10[3] = local_58._8_8_;
          local_b0 = 1;
          local_68 = param_2[8];
          plStack_60 = (longlong *)param_2[9];
          lVar12 = *param_2;
          pauVar16 = (undefined1 (*) [16])param_2[1];
          local_98 = param_2[2];
          lStack_90 = param_2[3];
          local_88 = param_2[4];
          lStack_80 = param_2[5];
          local_78 = param_2[6];
          lStack_70 = param_2[7];
          local_c0 = uVar11;
          plStack_b8 = plVar10;
          local_a8 = lVar12;
          pauStack_a0 = pauVar16;
          if (local_88 != 0) {
            uVar14 = (uint)(ushort)lStack_90;
            lVar15 = local_88;
            do {
              uVar2 = local_b0;
              puVar9 = PTR___rust_dealloc_00798fc8;
              if ((short)uVar14 == 0) {
                do {
                  auVar1 = *pauVar16;
                  lVar12 = lVar12 + -0x200;
                  pauVar16 = pauVar16 + 1;
                  uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                } while (uVar14 == 0);
              }
              iVar6 = 0;
              for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                iVar6 = iVar6 + 1;
              }
              uVar14 = uVar14 - 1 & uVar14;
              lVar13 = lVar12 - (ulonglong)(uint)(iVar6 << 5);
              lVar17 = lVar15 + -1;
              lVar3 = *(longlong *)(lVar13 + -0x20);
              lVar4 = *(longlong *)(lVar13 + -0x18);
              local_48 = *(undefined1 (*) [16])(lVar13 + -0x10);
              if (lVar3 == -1) {
                lStack_90 = CONCAT62(lStack_90._2_6_,(short)uVar14);
                local_88 = lVar17;
                local_a8 = lVar12;
                pauStack_a0 = pauVar16;
                for (; lVar17 != 0; lVar17 = lVar17 + -1) {
                  if ((short)uVar14 == 0) {
                    do {
                      auVar1 = *pauVar16;
                      lVar12 = lVar12 + -0x200;
                      pauVar16 = pauVar16 + 1;
                      uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                    } while (uVar14 == 0);
                  }
                  iVar6 = 0;
                  for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                    iVar6 = iVar6 + 1;
                  }
                  if (*(longlong *)((lVar12 - (ulonglong)(uint)(iVar6 << 5)) + -0x20) != 0) {
                    (*(code *)puVar9)((ulonglong)(uint)(iVar6 << 5),1);
                  }
                  uVar14 = uVar14 - 1 & uVar14;
                }
                break;
              }
              if (local_b0 == local_c0) {
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(&local_c0,local_b0,lVar15,8,0x20);
                plVar10 = plStack_b8;
              }
              plVar10[uVar2 * 4] = lVar3;
              plVar10[uVar2 * 4 + 1] = lVar4;
              plVar10[uVar2 * 4 + 2] = local_48._0_8_;
              (plVar10 + uVar2 * 4 + 2)[1] = local_48._8_8_;
              local_b0 = uVar2 + 1;
              lVar15 = lVar17;
            } while (lVar17 != 0);
          }
          uVar2 = local_78;
          if (local_78 != 0) {
            (*(code *)PTR_memset_00799090)();
          }
          uVar11 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
          if (uVar2 < 8) {
            uVar11 = uVar2;
          }
          plStack_60[2] = uVar11;
          plStack_60[3] = 0;
          *plStack_60 = lStack_80;
          plStack_60[1] = local_78;
          param_1[2] = local_b0;
          *param_1 = local_c0;
          param_1[1] = (ulonglong)plStack_b8;
          return param_1;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    puVar9 = PTR___rust_dealloc_00798fc8;
    if (lVar15 != 0) {
      uVar14 = (uint)*(ushort *)(param_2 + 3);
      lVar12 = *param_2;
      pauVar16 = (undefined1 (*) [16])param_2[1];
      do {
        if ((short)uVar14 == 0) {
          do {
            auVar1 = *pauVar16;
            lVar12 = lVar12 + -0x200;
            pauVar16 = pauVar16 + 1;
            uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar14 == 0);
        }
        iVar6 = 0;
        for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        if (*(longlong *)((lVar12 - (ulonglong)(uint)(iVar6 << 5)) + -0x20) != 0) {
          (*(code *)puVar9)((ulonglong)(uint)(iVar6 << 5),1);
        }
        uVar14 = uVar14 - 1 & uVar14;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  uVar2 = param_2[6];
  if (uVar2 != 0) {
    (*(code *)PTR_memset_00799090)();
  }
  uVar11 = (uVar2 + 1 & 0xfffffffffffffff8) - (uVar2 + 1 >> 3);
  if (uVar2 < 8) {
    uVar11 = uVar2;
  }
  param_2[8] = 0;
  param_2[7] = uVar11;
  plVar10 = (longlong *)param_2[9];
  lVar12 = param_2[6];
  lVar15 = param_2[7];
  lVar17 = param_2[8];
  *plVar10 = param_2[5];
  plVar10[1] = lVar12;
  plVar10[2] = lVar15;
  plVar10[3] = lVar17;
  return param_1;
}


