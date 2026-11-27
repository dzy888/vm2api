// 00542f70 normalize_turn_messages

/* craggemini_core[66f3c71560d70857]::resume::normalize_turn_messages */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::resume::normalize_turn_messages
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 *puStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  if (param_3 == 0) {
    local_190 = 0;
    local_188 = 8;
    local_180 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_005436fd:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_0054370d:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    local_180 = 0;
    local_148 = param_3 * 0x90 + param_2;
    local_190 = param_3;
    local_188 = lVar9;
    do {
      while( true ) {
        puVar7 = PTR_clone_00798fd0;
        plVar1 = *(longlong **)(param_2 + 8);
        if (*(longlong *)(param_2 + 0x10) == 5) break;
        if ((*(longlong *)(param_2 + 0x10) == 9) &&
           ((char)plVar1[1] == 't' && *plVar1 == 0x6e61747369737361)) goto LAB_00543218;
LAB_00543065:
        bVar6 = false;
LAB_00543067:
        (*(code *)PTR_clone_00798fd0)();
        (*(code *)puVar7)();
        <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>as_core[c0acaeba6ab4c2e0]::clone::Clone>
        ::clone(&local_110,param_2 + 0x30);
        <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>as_core[c0acaeba6ab4c2e0]::clone::Clone>
        ::clone(&local_f8,param_2 + 0x48);
        <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
        ::clone(&local_e0,param_2 + 0x60);
        <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
        ::clone(&local_178,param_2 + 0x78);
        local_b8 = local_130;
        local_c8 = local_140;
        puStack_c0 = puStack_138;
        local_a0 = local_118;
        local_b0 = local_128;
        uStack_a8 = uStack_120;
        local_88 = local_100;
        local_98 = local_110;
        uStack_90 = uStack_108;
        local_70 = local_e8;
        local_80 = local_f8;
        uStack_78 = uStack_f0;
        local_58 = local_d0;
        local_68 = local_e0;
        uStack_60 = uStack_d8;
        local_40 = local_168;
        local_50 = (undefined4)local_178;
        uStack_4c = local_178._4_4_;
        uStack_48 = (undefined4)uStack_170;
        uStack_44 = uStack_170._4_4_;
        uVar15 = (undefined4)local_178;
        if (bVar6) {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar10 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_0054370d;
          }
          *puVar10 = 0x6e61747369737361;
          *(undefined1 *)(puVar10 + 1) = 0x74;
          uVar15 = extraout_XMM0_Da;
          if (local_c8 != 0) {
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
          }
          local_c8 = 9;
          local_b8 = 9;
          puStack_c0 = puVar10;
        }
        lVar9 = local_180;
        if (local_180 == local_190) {
          uVar15 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>>
                   ::grow_one(&local_190);
        }
        (*(code *)PTR_memcpy_00799008)(uVar15,0x90);
        local_180 = lVar9 + 1;
        param_2 = param_2 + 0x90;
        if (param_2 == local_148) goto LAB_005436aa;
      }
      if (*(char *)((longlong)plVar1 + 4) != 'l' || (int)*plVar1 != 0x65646f6d) goto LAB_00543065;
LAB_00543218:
      bVar6 = true;
      if (local_180 == 0) goto LAB_00543067;
      lVar11 = local_180 * 0x90;
      plVar1 = *(longlong **)(local_188 + -0x88 + lVar11);
      lVar9 = *(longlong *)(local_188 + -0x80 + lVar11);
      if (lVar9 != 5) {
        if ((lVar9 == 9) && ((char)plVar1[1] == 't' && *plVar1 == 0x6e61747369737361))
        goto LAB_0054328d;
        goto LAB_00543067;
      }
      if (*(char *)((longlong)plVar1 + 4) != 'l' || (int)*plVar1 != 0x65646f6d) goto LAB_00543067;
LAB_0054328d:
      lVar11 = local_188 + lVar11;
      if ((*(longlong *)(lVar11 + -0x38) != 0) || (*(longlong *)(param_2 + 0x58) != 0))
      goto LAB_00543067;
      uVar2 = *(ulonglong *)(param_2 + 0x28);
      ::<str>::trim_matches::<<char>::is_whitespace>(*(undefined8 *)(param_2 + 0x20),uVar2);
      if (extraout_RDX != 0) {
        uVar15 = ::<str>::trim_matches::<<char>::is_whitespace>
                           (*(undefined8 *)(lVar11 + -0x70),*(undefined8 *)(lVar11 + -0x68));
        plVar1 = (longlong *)(lVar11 + -0x78);
        lVar9 = *(longlong *)(lVar11 + -0x68);
        if (extraout_RDX_00 != 0) {
          if (*plVar1 == lVar9) {
            uVar15 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                     do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                               (plVar1,lVar9,1,1,1);
          }
          *(undefined1 *)(*(longlong *)(lVar11 + -0x70) + lVar9) = 10;
          lVar9 = lVar9 + 1;
          *(longlong *)(lVar11 + -0x68) = lVar9;
        }
        if ((ulonglong)(*plVar1 - lVar9) < uVar2) {
          uVar15 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle
                   ::<alloc[12e961f32105355]::alloc::Global>(plVar1,lVar9,uVar2,1,1);
LAB_0054331b:
          (*(code *)PTR_memcpy_00799008)(uVar15,uVar2);
          lVar9 = *(longlong *)(lVar11 + -0x68);
        }
        else if (uVar2 != 0) goto LAB_0054331b;
        *(ulonglong *)(lVar11 + -0x68) = lVar9 + uVar2;
      }
      lVar9 = *(longlong *)(lVar11 + -0x50);
      if ((ulonglong)(*(longlong *)(lVar11 + -0x60) - lVar9) < *(ulonglong *)(param_2 + 0x40)) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>
                  (lVar11 + -0x60,lVar9,*(ulonglong *)(param_2 + 0x40),8,0x60);
        lVar9 = *(longlong *)(lVar11 + -0x50);
      }
      local_168 = *(undefined8 *)(lVar11 + -0x58);
      local_178 = (longlong *)(lVar11 + -0x50);
      uStack_170 = lVar9;
      uVar15 = <core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
               ::fold::
               <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::for_each::call<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall,<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>::extend_trusted<core[c0acaeba6ab4c2e0]::iter::adapters::cloned::Cloned<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>>::_closure_0_>::_closure_0_>
                         ();
      uVar2 = *(ulonglong *)(param_2 + 0x70);
      lVar9 = *(longlong *)(lVar11 + -0x20);
      local_160 = param_1;
      if ((ulonglong)(*(longlong *)(lVar11 + -0x30) - lVar9) < uVar2) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(lVar11 + -0x30,lVar9,uVar2,8,0x18);
        lVar9 = *(longlong *)(lVar11 + -0x20);
LAB_005433c9:
        puVar7 = PTR_clone_00798fd0;
        puVar12 = (undefined4 *)(lVar9 * 0x18 + *(longlong *)(lVar11 + -0x28));
        lVar13 = 0;
        do {
          (*(code *)puVar7)();
          *(undefined8 *)(puVar12 + 4) = local_168;
          *puVar12 = (undefined4)local_178;
          puVar12[1] = local_178._4_4_;
          puVar12[2] = (undefined4)uStack_170;
          puVar12[3] = uStack_170._4_4_;
          lVar13 = lVar13 + -1;
          puVar12 = puVar12 + 6;
        } while (-lVar13 != uVar2);
        lVar9 = lVar9 - lVar13;
        uVar15 = (undefined4)local_178;
      }
      else if (uVar2 != 0) goto LAB_005433c9;
      *(longlong *)(lVar11 + -0x20) = lVar9;
      if (*(longlong *)(param_2 + 0x88) != 0) {
        lVar9 = *(longlong *)(param_2 + 0x80);
        local_150 = lVar9 + *(longlong *)(param_2 + 0x88) * 0x18;
        local_158 = lVar11 + -0x18;
        do {
          lVar13 = *(longlong *)(lVar9 + 0x10);
          if (lVar13 != 0) {
            lVar3 = *(longlong *)(lVar11 + -8);
            if (lVar3 != 0) {
              lVar4 = *(longlong *)(lVar11 + -0x10);
              lVar14 = 0;
              do {
                if ((*(longlong *)(lVar4 + 0x10 + lVar14) == lVar13) &&
                   (iVar8 = (*(code *)PTR_bcmp_00799020)(uVar15,lVar13),
                   uVar15 = extraout_XMM0_Da_00, iVar8 == 0)) goto LAB_00543492;
                lVar14 = lVar14 + 0x18;
              } while (lVar3 * 0x18 != lVar14);
            }
            (*(code *)PTR_clone_00798fd0)();
            lVar13 = *(longlong *)(lVar11 + -8);
            if (lVar13 == *(longlong *)(lVar11 + -0x18)) {
              (*(code *)PTR_grow_one_00799328)();
            }
            lVar3 = *(longlong *)(lVar11 + -0x10);
            *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x18) = local_168;
            puVar12 = (undefined4 *)(lVar3 + lVar13 * 0x18);
            *puVar12 = (undefined4)local_178;
            puVar12[1] = local_178._4_4_;
            puVar12[2] = (undefined4)uStack_170;
            puVar12[3] = uStack_170._4_4_;
            *(longlong *)(lVar11 + -8) = lVar13 + 1;
            uVar15 = (undefined4)local_178;
          }
LAB_00543492:
          lVar9 = lVar9 + 0x18;
        } while (lVar9 != local_150);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      param_1 = local_160;
      if (puVar10 == (undefined8 *)0x0) goto LAB_005436fd;
      *puVar10 = 0x6e61747369737361;
      *(undefined1 *)(puVar10 + 1) = 0x74;
      if (*(longlong *)(lVar11 + -0x90) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_01,1);
      }
      *(undefined8 *)(lVar11 + -0x90) = 9;
      *(undefined8 **)(lVar11 + -0x88) = puVar10;
      *(undefined8 *)(lVar11 + -0x80) = 9;
      param_2 = param_2 + 0x90;
    } while (param_2 != local_148);
  }
LAB_005436aa:
  param_1[2] = local_180;
  *param_1 = local_190;
  param_1[1] = local_188;
  return param_1;
}


