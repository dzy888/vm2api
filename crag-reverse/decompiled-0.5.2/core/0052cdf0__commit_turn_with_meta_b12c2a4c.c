// 0052cdf0 commit_turn_with_meta

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::commit_turn_with_meta */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::commit_turn_with_meta
          (longlong param_1,ulonglong param_2,longlong param_3,ulonglong *param_4,longlong param_5,
          longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  bool bVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined1 (**ppauVar9) [16];
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  code *pcVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar30;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined1 local_c9;
  longlong local_c8;
  longlong *local_c0;
  undefined1 (*local_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (**local_a8) [16];
  undefined1 (*local_a0) [16];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 *local_70;
  undefined1 (*local_68) [16];
  undefined1 (*pauStack_60) [16];
  undefined1 (**ppauStack_58) [16];
  longlong local_50;
  undefined1 (**local_48) [16];
  undefined1 (*local_40) [16];
  ulonglong local_38;
  
  bVar6 = true;
  uVar20 = param_2;
  local_c0 = param_6;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar28 = *(longlong *)(param_1 + 0x38);
    lVar11 = *(longlong *)(param_1 + 0x40) * 0x280 + lVar28;
    local_c8 = param_5;
    local_50 = param_1;
    do {
      if (*(longlong *)(lVar28 + 0x10) == param_3) {
        iVar10 = (*(code *)PTR_bcmp_00799020)(lVar28,param_3);
        uVar20 = param_2;
        if (iVar10 != 0) goto LAB_0052ce91;
LAB_0052cfd6:
        lVar11 = *(longlong *)(lVar28 + 0x270);
        if (lVar11 == 0) goto LAB_0052d049;
        uVar20 = *(ulonglong *)(lVar28 + 0xa0);
        if (param_4[2] < uVar20) {
          lVar11 = 0;
          goto LAB_0052d055;
        }
        if (uVar20 == 0) goto LAB_0052d055;
        uVar13 = param_4[1];
        lVar17 = *(longlong *)(lVar28 + 0x98);
        lVar12 = 0x10;
        goto LAB_0052d020;
      }
LAB_0052ce91:
      if ((*(longlong *)(lVar28 + 0x128) != -1) && (*(longlong *)(lVar28 + 0x138) == param_3)) {
        iVar10 = (*(code *)PTR_bcmp_00799020)();
        uVar20 = param_2;
        if (iVar10 == 0) goto LAB_0052cfd6;
      }
      uVar13 = *(ulonglong *)(lVar28 + 0xf0);
      if (uVar13 != 0) {
        uVar16 = *(ulonglong *)(lVar28 + 0xe8);
        uVar21 = *(ulonglong *)(lVar28 + 0xd8);
        uVar20 = uVar21;
        if (uVar16 < uVar21) {
          uVar20 = 0;
        }
        uVar22 = uVar16 - uVar20;
        uVar15 = uVar21 - uVar22;
        lVar17 = (uVar13 - uVar15) * 0x18;
        if (uVar13 <= uVar15) {
          lVar17 = 0;
        }
        lVar12 = *(longlong *)(lVar28 + 0xe0);
        uVar23 = uVar22 + uVar13;
        if (uVar15 < uVar13) {
          uVar23 = uVar21;
        }
        if (uVar22 != uVar23) {
          lVar24 = uVar20 * -0x18;
          if (uVar13 < uVar15) {
            uVar15 = uVar13;
          }
          lVar27 = 0;
          uVar20 = uVar20 * 0x18;
          do {
            if (*(longlong *)(uVar16 * 0x18 + lVar24 + lVar12 + 0x10 + lVar27) == param_3) {
              iVar10 = (*(code *)PTR_bcmp_00799020)();
              uVar20 = param_2;
              if (iVar10 == 0) goto LAB_0052cfd6;
            }
            lVar27 = lVar27 + 0x18;
          } while (uVar15 * 0x18 != lVar27);
        }
        if (lVar17 != 0) {
          lVar24 = 0;
          do {
            if (*(longlong *)(lVar12 + 0x10 + lVar24) == param_3) {
              iVar10 = (*(code *)PTR_bcmp_00799020)();
              uVar20 = param_2;
              if (iVar10 == 0) goto LAB_0052cfd6;
            }
            lVar24 = lVar24 + 0x18;
          } while (lVar17 != lVar24);
        }
      }
      lVar28 = lVar28 + 0x280;
    } while (lVar28 != lVar11);
    bVar6 = true;
    param_1 = local_50;
  }
  goto LAB_0052dac0;
LAB_0052d049:
  lVar11 = 0;
  goto LAB_0052d055;
  while( true ) {
    lVar12 = lVar12 + 0x18;
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) break;
LAB_0052d020:
    if ((*(longlong *)(uVar13 + lVar12) != *(longlong *)(lVar17 + lVar12)) ||
       (iVar10 = (*(code *)PTR_bcmp_00799020)(), iVar10 != 0)) goto LAB_0052d049;
  }
LAB_0052d055:
  lVar17 = local_c8;
  if (local_c8 != 0) {
    uVar20 = param_4[2];
    <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>::digest(&local_b8,local_c8);
    uVar13 = param_4[2];
    if (uVar13 == *param_4) {
      (*(code *)PTR_grow_one_00799328)();
    }
    uVar16 = param_4[1];
    *(undefined1 (***) [16])(uVar16 + 0x10 + uVar13 * 0x18) = local_a8;
    puVar2 = (ulonglong *)(uVar16 + uVar13 * 0x18);
    *puVar2 = (ulonglong)local_b8;
    puVar2[1] = (ulonglong)pauStack_b0;
    param_4[2] = uVar13 + 1;
    lVar12 = *(longlong *)(lVar17 + 0x88);
    if (lVar12 != 0) {
      lVar17 = *(longlong *)(lVar17 + 0x80);
      lVar24 = 0;
      do {
        if (*(longlong *)(lVar17 + 0x10 + lVar24) != 0) {
          uVar29 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                   ::digest::<&[u8]>(&local_b8,*(undefined8 *)(lVar17 + 8 + lVar24));
          local_40 = (undefined1 (*) [16])
                     <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                     ::fmt;
          local_48 = &local_b8;
          (*(code *)PTR_format_inner_00799048)(uVar29,&local_48);
          <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::insert(lVar28 + 0x230,&local_68,lVar11 + uVar20);
        }
        lVar24 = lVar24 + 0x18;
      } while (lVar12 * 0x18 != lVar24);
      lVar11 = local_c0[6];
      if (*(longlong *)(lVar28 + 0x110) == -1) {
        if (local_c0[5] == 0) goto LAB_0052d24a;
      }
      else if (local_c0[5] == 0) {
        lVar11 = *(longlong *)(lVar28 + 0x120);
      }
      if (lVar11 < 0) {
LAB_0052d198:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar26 = (code *)invalidInstructionException();
        (*pcVar26)();
      }
      if (lVar11 == 0) {
        lVar12 = 1;
        lVar17 = *(longlong *)(lVar28 + 0x140);
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar12 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar12 == 0) goto LAB_0052d198;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar11);
        lVar17 = *(longlong *)(lVar28 + 0x140);
      }
      if ((lVar17 != -1) && (lVar17 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(longlong *)(lVar28 + 0x140) = lVar11;
      *(longlong *)(lVar28 + 0x148) = lVar12;
      *(longlong *)(lVar28 + 0x150) = lVar11;
    }
  }
LAB_0052d24a:
  local_a8 = (undefined1 (**) [16])param_4[2];
  local_b8 = (undefined1 (*) [16])*param_4;
  pauStack_b0 = (undefined1 (*) [16])param_4[1];
  uVar30 = craggemini_core[66f3c71560d70857]::resume::store_digests_bounded(lVar28,&local_b8);
  uVar29 = _UNK_0078aa78;
  uVar20 = *(ulonglong *)(lVar28 + 0x248);
  if (0x80 < uVar20) {
    puVar1 = (undefined8 *)(lVar28 + 0x230);
    local_b8 = *(undefined1 (**) [16])(lVar28 + 0x230);
    local_a8 = (undefined1 (**) [16])(*local_b8 + *(longlong *)(lVar28 + 0x238) + 1);
    auVar4 = *local_b8;
    local_90 = *puVar1;
    uStack_88 = *(undefined8 *)(lVar28 + 0x238);
    local_80 = *(undefined4 *)(lVar28 + 0x240);
    uStack_7c = *(undefined4 *)(lVar28 + 0x244);
    uStack_78 = *(undefined4 *)(lVar28 + 0x248);
    uStack_74 = *(undefined4 *)(lVar28 + 0x24c);
    *puVar1 = anon_d4d3cd51d1d91a17bb767b00236b3a9b_4_llvm_17589326713533067298;
    *(undefined8 *)(lVar28 + 0x238) = uVar29;
    uVar29 = _UNK_0078aa88;
    *(undefined8 *)(lVar28 + 0x240) = _DAT_0078aa80;
    *(undefined8 *)(lVar28 + 0x248) = uVar29;
    pauStack_b0 = local_b8 + 1;
    local_a0 = (undefined1 (*) [16])
               CONCAT62(local_a0._2_6_,
                        ~((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar4[0xf] >> 7) << 0xf));
    local_98 = uVar20;
    local_70 = puVar1;
    uVar30 = <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,usize)>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<(alloc[12e961f32105355]::string::String,usize),std[6c98fd8553dbae28]::collections::hash::map::Drain<alloc[12e961f32105355]::string::String,usize>>>
             ::from_iter(&local_48,&local_b8);
    uVar20 = local_38;
    pauVar5 = local_40;
    local_b8 = (undefined1 (*) [16])&local_c9;
    if (1 < local_38) {
      if (local_38 < 0x15) {
        uVar30 = core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
                 <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
                           (local_40,local_38,1);
      }
      else {
        uVar30 = core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
                 <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,usize)>>
                           (local_40,local_38,&local_b8);
        puVar7 = PTR___rust_dealloc_00798fc8;
        if (0x7f < uVar20) {
          local_38 = 0x80;
          if (uVar20 != 0x80) {
            lVar11 = uVar20 - 0x80;
            pcVar26 = (code *)(pauVar5[0x100] + 8);
            do {
              if (*(longlong *)(pcVar26 + -8) != 0) {
                uVar30 = (*(code *)puVar7)(uVar30,1);
              }
              pcVar26 = pcVar26 + 0x20;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          uVar20 = 0x80;
        }
      }
    }
    ppauVar9 = local_48;
    lVar11 = uVar20 * 0x20;
    pauVar3 = pauVar5 + uVar20 * 2;
    local_a8 = local_48;
    local_b8 = pauVar5;
    pauStack_b0 = pauVar5;
    local_a0 = pauVar3;
    if (uVar20 == 0) {
LAB_0052d3be:
      puVar7 = PTR___rust_dealloc_00798fc8;
      if ((longlong)pauVar3 - (longlong)pauStack_b0 != 0) {
        uVar20 = (ulonglong)((longlong)pauVar3 - (longlong)pauStack_b0) >> 5;
        pcVar26 = (code *)(*pauStack_b0 + 8);
        do {
          if (*(longlong *)(pcVar26 + -8) != 0) {
            uVar30 = (*(code *)puVar7)(uVar30,1);
          }
          pcVar26 = pcVar26 + 0x20;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    else {
      do {
        pauVar25 = pauVar5 + 2;
        pauStack_b0 = pauVar25;
        if (*(undefined1 (**) [16])*pauVar5 == (undefined1 (*) [16])0xffffffffffffffff)
        goto LAB_0052d3be;
        pauStack_60 = *(undefined1 (**) [16])(*pauVar5 + 8);
        ppauStack_58 = *(undefined1 (***) [16])pauVar5[1];
        local_68 = *(undefined1 (**) [16])*pauVar5;
        uVar30 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::insert(puVar1,&local_68,*(undefined8 *)(pauVar5[1] + 8));
        lVar11 = lVar11 + -0x20;
        pauVar5 = pauVar25;
      } while (lVar11 != 0);
    }
    if (ppauVar9 != (undefined1 (**) [16])0x0) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
    }
  }
  plVar8 = local_c0;
  if (local_c0[3] == 0) {
LAB_0052d491:
    if (plVar8[5] != 0) {
      lVar11 = plVar8[6];
      if (lVar11 != 0) {
        if (-1 < lVar11) goto LAB_0052d4bc;
        goto LAB_0052d4b0;
      }
    }
  }
  else {
    lVar11 = local_c0[4];
    if (lVar11 == 0) goto LAB_0052d491;
    if (-1 < lVar11) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar17 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar17 != 0) {
        uVar30 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,lVar11);
        if (*(longlong *)(lVar28 + 0x30) != 0) {
          uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
        }
        *(longlong *)(lVar28 + 0x30) = lVar11;
        *(longlong *)(lVar28 + 0x38) = lVar17;
        *(longlong *)(lVar28 + 0x40) = lVar11;
        goto LAB_0052d491;
      }
    }
LAB_0052d4b0:
    do {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_0052d4bc:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar17 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar17 == 0);
    uVar30 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,lVar11);
    if ((*(longlong *)(lVar28 + 0x140) != -1) && (*(longlong *)(lVar28 + 0x140) != 0)) {
      uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,1);
    }
    *(longlong *)(lVar28 + 0x140) = lVar11;
    *(longlong *)(lVar28 + 0x148) = lVar17;
    *(longlong *)(lVar28 + 0x150) = lVar11;
  }
  lVar11 = plVar8[7];
  if ((lVar11 != 0) && (lVar17 = local_c0[8], lVar17 != 0)) {
    uVar20 = *(ulonglong *)(lVar28 + 0xf0);
    if (uVar20 != 0) {
      uVar13 = *(ulonglong *)(lVar28 + 0xe8);
      uVar16 = *(ulonglong *)(lVar28 + 0xd8);
      uVar21 = uVar16;
      if (uVar13 < uVar16) {
        uVar21 = 0;
      }
      uVar22 = uVar13 - uVar21;
      uVar15 = uVar16 - uVar22;
      lVar12 = (uVar20 - uVar15) * 0x18;
      if (uVar20 <= uVar15) {
        lVar12 = 0;
      }
      lVar24 = *(longlong *)(lVar28 + 0xe0);
      uVar23 = uVar22 + uVar20;
      if (uVar15 < uVar20) {
        uVar23 = uVar16;
      }
      if (uVar22 != uVar23) {
        if (uVar20 < uVar15) {
          uVar15 = uVar20;
        }
        lVar27 = 0;
        do {
          if (*(longlong *)(uVar13 * 0x18 + uVar21 * -0x18 + lVar24 + 0x10 + lVar27) == lVar17) {
            iVar10 = (*(code *)PTR_bcmp_00799020)(uVar30,lVar17);
            uVar30 = extraout_XMM0_Qa_04;
            if (iVar10 == 0) goto LAB_0052d79a;
          }
          lVar27 = lVar27 + 0x18;
        } while (uVar15 * 0x18 != lVar27);
      }
      if (lVar12 != 0) {
        lVar27 = 0;
        do {
          if (*(longlong *)(lVar24 + 0x10 + lVar27) == lVar17) {
            iVar10 = (*(code *)PTR_bcmp_00799020)(uVar30,lVar17);
            uVar30 = extraout_XMM0_Qa_02;
            if (iVar10 == 0) goto LAB_0052d79a;
          }
          lVar27 = lVar27 + 0x18;
        } while (lVar12 != lVar27);
      }
    }
    if (-1 < lVar17) goto LAB_0052d60f;
    do {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_0052d60f:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar12 = (*(code *)PTR___rust_alloc_00799000)();
    } while (lVar12 == 0);
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,lVar17);
    uVar20 = *(ulonglong *)(lVar28 + 0xd8);
    uVar13 = *(ulonglong *)(lVar28 + 0xf0);
    if (uVar13 == uVar20) {
      <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>
      ::grow(lVar28 + 0xd8,lVar11);
      uVar20 = *(ulonglong *)(lVar28 + 0xd8);
      uVar13 = *(ulonglong *)(lVar28 + 0xf0);
    }
    *(ulonglong *)(lVar28 + 0xf0) = uVar13 + 1;
    uVar13 = uVar13 + *(longlong *)(lVar28 + 0xe8);
    uVar16 = 0;
    if (uVar20 <= uVar13) {
      uVar16 = uVar20;
    }
    lVar24 = uVar13 - uVar16;
    lVar11 = *(longlong *)(lVar28 + 0xe0);
    *(longlong *)(lVar11 + lVar24 * 0x18) = lVar17;
    *(longlong *)(lVar11 + 8 + lVar24 * 0x18) = lVar12;
    *(longlong *)(lVar11 + 0x10 + lVar24 * 0x18) = lVar17;
    puVar7 = PTR___rust_dealloc_00798fc8;
    uVar20 = *(ulonglong *)(lVar28 + 0xf0);
    while (0x20 < uVar20) {
      lVar11 = *(longlong *)(lVar28 + 0xe8);
      uVar13 = *(ulonglong *)(lVar28 + 0xd8);
      if (lVar11 + 1U < uVar13) {
        uVar13 = 0;
      }
      *(ulonglong *)(lVar28 + 0xe8) = (lVar11 - uVar13) + 1;
      uVar20 = uVar20 - 1;
      *(ulonglong *)(lVar28 + 0xf0) = uVar20;
      if (*(longlong *)(*(longlong *)(lVar28 + 0xe0) + lVar11 * 0x18) - 1U < 0xfffffffffffffffe) {
        (*(code *)puVar7)(*(longlong *)(lVar28 + 0xe0),1);
        uVar20 = *(ulonglong *)(lVar28 + 0xf0);
      }
    }
  }
LAB_0052d79a:
  if (*local_c0 != -1) {
    <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone(&local_68);
    if (&DAT_00000020 < ppauStack_58) {
      local_a0 = (undefined1 (*) [16])(ppauStack_58 + -4);
      ppauStack_58 = (undefined1 (**) [16])0x0;
      pauStack_b0 = (undefined1 (*) [16])((longlong)pauStack_60 + (longlong)local_a0 * 200);
      local_98 = 0x20;
      local_b8 = pauStack_60;
      local_a8 = &local_68;
      <alloc[12e961f32105355]::vec::drain::Drain<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_b8);
    }
    local_a8 = ppauStack_58;
    local_b8 = local_68;
    pauStack_b0 = pauStack_60;
    lVar11 = *(longlong *)(lVar28 + 0x100);
    for (lVar17 = *(longlong *)(lVar28 + 0x108) + 1; lVar17 != 1; lVar17 = lVar17 + -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar11);
      lVar11 = lVar11 + 200;
    }
    if (*(ulonglong *)(lVar28 + 0xf8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 (***) [16])(lVar28 + 0x108) = local_a8;
    *(ulonglong *)(lVar28 + 0xf8) = (ulonglong)local_b8;
    *(undefined1 (**) [16])(lVar28 + 0x100) = pauStack_b0;
  }
  *(longlong *)(lVar28 + 0x268) = *(longlong *)(lVar28 + 0x268) + 1;
  *(undefined1 *)(lVar28 + 0x27a) = 0;
  lVar11 = *(longlong *)(lVar28 + 0xd0);
  *(undefined8 *)(lVar28 + 0xd0) = 0;
  puVar7 = PTR___rust_dealloc_00798fc8;
  if (lVar11 != 0) {
    lVar17 = *(longlong *)(lVar28 + 200) + 0x38;
    do {
      if (*(longlong *)(lVar17 + -0x38) != 0) {
        (*(code *)puVar7)();
      }
      if (*(longlong *)(lVar17 + -0x20) != 0) {
        (*(code *)puVar7)();
      }
      if (*(longlong *)(lVar17 + -8) != 0) {
        (*(code *)puVar7)();
      }
      lVar17 = lVar17 + 0x48;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((*(longlong *)(lVar28 + 0x1c0) != -1) && (*(longlong *)(lVar28 + 0x1c0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined8 *)(lVar28 + 0x1c0) = 0xffffffffffffffff;
  *(undefined2 *)(lVar28 + 0x278) = 0;
  lVar11 = *(longlong *)(lVar28 + 0x1d8);
  if (lVar11 != -1) {
    if ((*(longlong *)(lVar28 + 0x1f0) != -1) && (*(longlong *)(lVar28 + 0x1f0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (lVar11 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined8 *)(lVar28 + 0x1d8) = 0xffffffffffffffff;
  (*(code *)PTR_now_00799478)();
  uVar29 = <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>
           ::to_rfc3339(&local_b8,&local_68);
  if (*(longlong *)(lVar28 + 0x60) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,1);
  }
  *(undefined1 (***) [16])(lVar28 + 0x70) = local_a8;
  *(undefined1 (**) [16])(lVar28 + 0x60) = local_b8;
  *(undefined1 (**) [16])(lVar28 + 0x68) = pauStack_b0;
  (*(code *)PTR_now_00799478)();
  iVar18 = (int)(uint)local_b8 >> 0xd;
  iVar10 = iVar18 + -1;
  iVar14 = 0;
  if (iVar18 < 1) {
    iVar14 = (1U - iVar18) / 400 + 1;
    iVar10 = iVar10 + iVar14 * 400;
    iVar14 = iVar14 * -0x23ab1;
  }
  uVar19 = iVar10 / 100 >> 2;
  uVar20 = (ulonglong)uVar19;
  lVar11 = ((ulonglong)pauStack_b0 & 0xffffffff) / 1000000 +
           ((longlong)
            (int)(((((uint)local_b8 >> 4 & 0x1ff) + iVar14) - iVar10 / 100) + (iVar10 * 0x5b5 >> 2)
                  + uVar19 + -0xaf93b) * 0x15180 + ((ulonglong)local_b8 >> 0x20)) * 1000;
  bVar6 = false;
  if (lVar11 < 1) {
    lVar11 = 0;
  }
  *(longlong *)(lVar28 + 0x260) = lVar11;
  param_1 = local_50;
LAB_0052dac0:
  uVar20 = persist(param_1,uVar20);
  uVar29 = extraout_XMM0_Qa_05;
  if (((uVar20 != 0) && (1 < ((uint)uVar20 & 3) - 2)) && ((uVar20 & 3) != 0)) {
    pauStack_b0 = (undefined1 (*) [16])(uVar20 - 1);
    local_b8 = (undefined1 (*) [16])CONCAT71(local_b8._1_7_,3);
    uVar29 = (*(code *)PTR_drop_00799040)();
  }
  puVar7 = PTR___rust_dealloc_00798fc8;
  if (bVar6) {
    uVar20 = param_4[2];
    if (uVar20 != 0) {
      lVar28 = param_4[1] + 8;
      do {
        if (*(longlong *)(lVar28 + -8) != 0) {
          uVar29 = (*(code *)puVar7)(uVar29,1);
        }
        lVar28 = lVar28 + 0x18;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    if (*param_4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar29,8);
    }
  }
  return;
}


