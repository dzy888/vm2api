// 0053f640 build_delta

/* craggemini_core[66f3c71560d70857]::resume::build_delta */

void __rustcall
craggemini_core[66f3c71560d70857]::resume::build_delta
          (undefined1 (*param_1) [16],longlong param_2,ulonglong param_3,ulonglong param_4,
          byte param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 ***pppuVar10;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  undefined8 ***pppuVar11;
  longlong extraout_RDX_01;
  code *pcVar12;
  undefined8 ***pppuVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar18 [16];
  undefined1 local_188 [16];
  undefined8 ***local_178;
  undefined1 local_168 [16];
  undefined8 ***local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined1 local_138 [16];
  undefined8 ***local_128;
  code *local_120;
  undefined8 ***local_118;
  code *local_110;
  undefined1 *local_108;
  code *local_100;
  undefined8 **local_f0;
  undefined8 **local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 ***local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 (*local_b8) [16];
  longlong local_b0;
  undefined8 ***local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (((param_4 <= param_3 && param_3 - param_4 != 0) & param_4 != 0 & param_5) == 0) {
    if (param_3 == 0) {
      *(undefined8 *)*param_1 = 0;
      *(undefined8 *)(*param_1 + 8) = 1;
      *(undefined8 *)param_1[1] = 0;
    }
    else {
      lVar8 = (param_3 - 1) * 0x90 + param_2;
      if (param_3 - 1 != 0) {
        local_150 = 0;
        local_148 = 8;
        local_140 = 0;
        local_b0 = (param_3 - 1) * 0x90 + param_2;
        pcVar12 = (code *)PTR___rust_dealloc_00798fc8;
        local_d8 = lVar8;
        local_b8 = param_1;
        do {
          plVar2 = *(longlong **)(param_2 + 8);
          lVar8 = *(longlong *)(param_2 + 0x10);
          if (lVar8 == 4) {
            if ((int)*plVar2 != 0x6c6f6f74) goto LAB_0053f7a7;
            local_c0 = 4;
            local_c8 = "Tool";
          }
          else {
            if (lVar8 == 5) {
              if (*(char *)((longlong)plVar2 + 4) != 'l' || (int)*plVar2 != 0x65646f6d)
              goto LAB_0053f7a7;
            }
            else if ((lVar8 != 9) || ((char)plVar2[1] != 't' || *plVar2 != 0x6e61747369737361)) {
LAB_0053f7a7:
              local_c0 = 4;
              local_c8 = &DAT_0018e060;
              goto LAB_0053f7b3;
            }
            local_c0 = 9;
            local_c8 = &DAT_0019bab9;
          }
LAB_0053f7b3:
          uVar3 = *(undefined8 *)(param_2 + 0x20);
          uVar4 = *(undefined8 *)(param_2 + 0x28);
          ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
          if (extraout_RDX_00 != 0) {
            auVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar3,uVar4);
            local_138._0_8_ = &local_c8;
            local_138._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_120 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_128 = (undefined8 ***)local_188;
            local_188 = auVar18;
            (*(code *)PTR_format_inner_00799048)(local_188,local_138);
            lVar8 = local_140;
            if (local_140 == local_150) {
              (*(code *)PTR_grow_one_00799328)();
            }
            *(undefined8 *)(local_148 + 0x10 + lVar8 * 0x18) = local_90;
            puVar1 = (undefined4 *)(local_148 + lVar8 * 0x18);
            *puVar1 = local_a0;
            puVar1[1] = uStack_9c;
            puVar1[2] = uStack_98;
            puVar1[3] = uStack_94;
            local_140 = lVar8 + 1;
          }
          local_e0 = param_2;
          if (*(longlong *)(param_2 + 0x40) != 0) {
            pppuVar13 = *(undefined8 ****)(param_2 + 0x38);
            local_a8 = pppuVar13 + *(longlong *)(param_2 + 0x40) * 0xc;
            do {
              local_138._0_8_ = &local_c8;
              local_138._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
              local_120 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
              local_128 = pppuVar13;
              (*(code *)PTR_format_inner_00799048)(param_2,local_138);
              auVar18 = local_188;
              local_158 = local_178;
              local_168 = local_188;
              if ((pppuVar13[6] != (undefined8 **)0xffffffffffffffff) &&
                 (pppuVar13[8] != (undefined8 **)0x0)) {
                local_f0 = pppuVar13[7];
                local_188._0_8_ = &local_f0;
                local_188._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                local_e8 = pppuVar13[8];
                local_168 = auVar18;
                uVar17 = (*(code *)PTR_format_inner_00799048)(local_f0,local_188);
                pppuVar11 = local_128;
                uVar3 = local_138._0_8_;
                if ((undefined8 ***)(local_168._0_8_ - (longlong)local_158) < local_128) {
                  uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                           do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                     (local_168,local_158,local_128,1,1);
LAB_0053f9b9:
                  pppuVar10 = local_158;
                  uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppuVar11);
                }
                else {
                  pppuVar10 = local_158;
                  if (local_128 != (undefined8 ***)0x0) goto LAB_0053f9b9;
                }
                pcVar12 = (code *)PTR___rust_dealloc_00798fc8;
                local_158 = (undefined8 ***)((longlong)pppuVar10 + (longlong)pppuVar11);
                if ((char **)uVar3 != (char **)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
                }
              }
              auVar18._8_8_ = local_138._8_8_;
              auVar18._0_8_ = local_138._0_8_;
              if ((pppuVar13[9] != (undefined8 **)0xffffffffffffffff) &&
                 (local_138 = auVar18, pppuVar13[0xb] != (undefined8 **)0x0)) {
                auVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(pppuVar13[10]);
                pppuVar11 = auVar18._8_8_;
                if (&DAT_0000001f < pppuVar11) {
                  uVar9 = (*(code *)PTR_do_count_chars_00799d00)();
                  uVar17 = extraout_XMM0_Da_00;
                }
                else {
                  uVar9 = (*(code *)PTR_char_count_general_case_00799cf8)();
                  uVar17 = extraout_XMM0_Da;
                }
                if (uVar9 < 0x201) {
                  if ((longlong)pppuVar11 < 0) {
LAB_0053fff4:
                    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
                    pcVar12 = (code *)invalidInstructionException();
                    (*pcVar12)();
                  }
                  if (pppuVar11 == (undefined8 ***)0x0) {
                    pppuVar10 = (undefined8 ***)0x1;
                  }
                  else {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pppuVar10 = (undefined8 ***)(*(code *)PTR___rust_alloc_00799000)();
                    if (pppuVar10 == (undefined8 ***)0x0) {
                      local_d0 = pppuVar11;
                      goto LAB_0053fff4;
                    }
                    uVar17 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,pppuVar11);
                  }
                  auVar6._8_8_ = pppuVar10;
                  auVar6._0_8_ = pppuVar11;
                  local_128 = pppuVar11;
                  local_d0 = pppuVar10;
                }
                else {
                  local_138._8_8_ = (longlong)auVar18._0_8_ + (longlong)pppuVar11;
                  local_128 = (undefined8 ***)0x1fd;
                  local_138._0_8_ = auVar18._0_8_;
                  <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::FromIterator<char>>
                  ::from_iter::
                  <core[c0acaeba6ab4c2e0]::iter::adapters::take::Take<core[c0acaeba6ab4c2e0]::str::iter::Chars>>
                            (local_188,local_138);
                  auVar6 = local_188;
                  auVar18 = local_168;
                  if ((ulonglong)(local_188._0_8_ - (longlong)local_178) < 3) {
                    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                    do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                              (local_188,local_178,3,1,1);
                    auVar6 = local_188;
                    auVar18 = local_168;
                  }
                  local_188._8_8_ = auVar6._8_8_;
                  *(undefined1 *)(local_188._8_8_ + 2 + (longlong)local_178) = 0x2e;
                  *(undefined2 *)(local_188._8_8_ + (longlong)local_178) = 0x2e2e;
                  local_188._0_4_ = auVar6._0_4_;
                  uVar17 = local_188._0_4_;
                  local_128 = (undefined8 ***)((longlong)local_178 + 3);
                  local_188 = auVar6;
                  local_168 = auVar18;
                }
                local_e8 = (undefined8 **)
                           <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                           ::fmt;
                local_f0 = (undefined8 **)local_138;
                local_138 = auVar6;
                uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,&local_f0);
                if ((undefined8 *)local_138._0_8_ != (undefined8 *)0x0) {
                  uVar17 = (*pcVar12)(uVar17,1);
                }
                pppuVar11 = local_178;
                uVar3 = local_188._0_8_;
                if ((undefined8 ***)(local_168._0_8_ - (longlong)local_158) < local_178) {
                  uVar17 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                           do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                     (local_168,local_158,local_178,1,1);
LAB_0053fb64:
                  pppuVar10 = local_158;
                  uVar17 = (*(code *)PTR_memcpy_00799008)(uVar17,pppuVar11);
                }
                else {
                  pppuVar10 = local_158;
                  if (local_178 != (undefined8 ***)0x0) goto LAB_0053fb64;
                }
                local_158 = (undefined8 ***)((longlong)pppuVar10 + (longlong)pppuVar11);
                if ((undefined8 **)uVar3 != (undefined8 **)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
                }
              }
              lVar8 = local_140;
              pppuVar11 = local_158;
              uVar4 = local_168._8_8_;
              uVar3 = local_168._0_8_;
              if (local_140 == local_150) {
                (*(code *)PTR_grow_one_00799328)();
              }
              param_2 = lVar8 * 3;
              *(undefined8 *)(local_148 + lVar8 * 0x18) = uVar3;
              *(undefined8 *)(local_148 + 8 + lVar8 * 0x18) = uVar4;
              *(undefined8 ****)(local_148 + 0x10 + lVar8 * 0x18) = pppuVar11;
              local_140 = lVar8 + 1;
              pppuVar13 = pppuVar13 + 0xc;
              pcVar12 = (code *)PTR___rust_dealloc_00798fc8;
            } while (pppuVar13 != local_a8);
          }
          if (*(longlong *)(local_e0 + 0x58) != 0) {
            lVar8 = *(longlong *)(local_e0 + 0x58) * 0x58;
            lVar15 = *(longlong *)(local_e0 + 0x50) + 0x30;
            do {
              if (*(longlong *)(lVar15 + -0x18) == -1) {
                local_58 = &anon_ec7f14c74815bf4c93b295cfd0665412_119_llvm_7806621557641746444;
                local_50 = 4;
                if (*(longlong *)(lVar15 + -0x30) != -1) goto LAB_0053fcc3;
LAB_0053fd20:
                local_158 = (undefined8 ***)0x0;
                local_168 = ZEXT816(1) << 0x40;
              }
              else {
                local_58 = *(undefined4 **)(lVar15 + -0x10);
                local_50 = *(undefined8 *)(lVar15 + -8);
                if (*(longlong *)(lVar15 + -0x30) == -1) goto LAB_0053fd20;
LAB_0053fcc3:
                local_168._8_8_ = *(longlong *)(lVar15 + -0x20);
                if (local_168._8_8_ == 0) goto LAB_0053fd20;
                local_168._0_8_ = *(undefined8 *)(lVar15 + -0x28);
                local_188._0_8_ = local_168;
                local_188._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                (*(code *)PTR_format_inner_00799048)(local_168._0_8_,local_188);
                local_158 = local_128;
                local_168 = local_138;
              }
              bVar16 = *(char *)(lVar15 + 0x20) != '\0';
              local_f0 = (undefined8 **)0x1;
              if (bVar16) {
                local_f0 = (undefined8 **)&DAT_0019bac2;
              }
              local_e8 = (undefined8 **)0x0;
              if (bVar16) {
                local_e8 = (undefined8 **)0x6;
              }
              compact_json_preview(local_188,lVar15,0x800);
              local_138._0_8_ = &local_58;
              local_138._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
              local_128 = (undefined8 ***)local_168;
              local_120 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
              local_118 = &local_f0;
              local_110 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
              local_100 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                          ::fmt;
              local_108 = local_188;
              (*(code *)PTR_format_inner_00799048)
                        (<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt,local_138);
              lVar7 = local_140;
              if (local_140 == local_150) {
                (*(code *)PTR_grow_one_00799328)();
              }
              *(undefined8 *)(local_148 + 0x10 + lVar7 * 0x18) = local_78;
              puVar1 = (undefined4 *)(local_148 + lVar7 * 0x18);
              *puVar1 = local_88;
              puVar1[1] = uStack_84;
              puVar1[2] = uStack_80;
              puVar1[3] = uStack_7c;
              local_140 = lVar7 + 1;
              uVar17 = local_88;
              if ((undefined8 **)local_188._0_8_ != (undefined8 **)0x0) {
                uVar17 = (*pcVar12)(lVar7 * 3,1);
              }
              if ((undefined8 **)local_168._0_8_ != (undefined8 **)0x0) {
                (*pcVar12)(uVar17,1);
              }
              lVar15 = lVar15 + 0x58;
              lVar8 = lVar8 + -0x58;
            } while (lVar8 != 0);
          }
          param_2 = local_e0;
          ppuVar5 = *(undefined8 ***)(local_e0 + 0x70);
          if (ppuVar5 != (undefined8 **)0x0) {
            <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,craggemini_core[66f3c71560d70857]::resume::format_history_preamble::{closure#4}>>>
            ::from_iter(local_168,*(longlong *)(local_e0 + 0x68),
                        *(longlong *)(local_e0 + 0x68) + (longlong)ppuVar5 * 0x18);
            pppuVar13 = local_158;
            uVar3 = local_168._8_8_;
            local_f0 = ppuVar5;
            alloc[12e961f32105355]::str::join_generic_copy::
            <str,u8,alloc[12e961f32105355]::string::String>
                      (local_138,local_168._8_8_,local_158,&DAT_0019bac8,2);
            auVar18 = local_138;
            local_178 = local_128;
            uVar17 = local_138._0_4_;
            local_138._0_8_ = &local_c8;
            local_138._8_8_ = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            local_128 = &local_f0;
            local_120 = (code *)PTR_fmt_007991f0;
            local_110 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                        ::fmt;
            local_118 = (undefined8 ***)local_188;
            local_188 = auVar18;
            uVar17 = (*(code *)PTR_format_inner_00799048)(uVar17,local_138);
            if ((undefined8 **)local_188._0_8_ != (undefined8 **)0x0) {
              (*pcVar12)(uVar17,1);
            }
            lVar8 = local_140;
            if (local_140 == local_150) {
              (*(code *)PTR_grow_one_00799328)();
            }
            *(undefined8 *)(local_148 + 0x10 + lVar8 * 0x18) = local_60;
            puVar1 = (undefined4 *)(local_148 + lVar8 * 0x18);
            *puVar1 = local_70;
            puVar1[1] = uStack_6c;
            puVar1[2] = uStack_68;
            puVar1[3] = uStack_64;
            local_140 = lVar8 + 1;
            uVar17 = local_70;
            if (pppuVar13 != (undefined8 ***)0x0) {
              lVar8 = uVar3 + 8;
              do {
                if (*(longlong *)(lVar8 + -8) != 0) {
                  uVar17 = (*pcVar12)(uVar17,1);
                }
                lVar8 = lVar8 + 0x18;
                pppuVar13 = (undefined8 ***)((longlong)pppuVar13 + -1);
              } while (pppuVar13 != (undefined8 ***)0x0);
            }
            if ((undefined8 **)local_168._0_8_ != (undefined8 **)0x0) {
              (*pcVar12)(uVar17,8);
            }
          }
          param_2 = param_2 + 0x90;
          if (param_2 == local_b0) {
            uVar17 = alloc[12e961f32105355]::str::join_generic_copy::
                     <str,u8,alloc[12e961f32105355]::string::String>
                               (local_138,local_148,local_140,
                                &anon_ec7f14c74815bf4c93b295cfd0665412_166_llvm_7806621557641746444,
                                1);
            pppuVar13 = local_128;
            uVar4 = local_138._8_8_;
            uVar3 = local_138._0_8_;
            if (local_140 != 0) {
              lVar15 = local_148 + 8;
              lVar8 = local_140;
              do {
                if (*(longlong *)(lVar15 + -8) != 0) {
                  uVar17 = (*pcVar12)(uVar17,1);
                }
                lVar15 = lVar15 + 0x18;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            if (local_150 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,8);
            }
            ::<str>::trim_matches::<<char>::is_whitespace>
                      (*(undefined8 *)(local_d8 + 0x20),*(undefined8 *)(local_d8 + 0x28));
            if ((extraout_RDX_01 == 0) && (*(longlong *)(local_d8 + 0x58) != 0)) {
              uVar17 = format_messages_for_delta(local_138,local_d8,1);
            }
            else {
              uVar17 = (*(code *)PTR_clone_00798fd0)();
            }
            if (pppuVar13 == (undefined8 ***)0x0) {
              puVar14 = (undefined8 *)0xffffffffffffffff;
              if ((undefined8 *)uVar3 != (undefined8 *)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
              }
            }
            else {
              puVar14 = (undefined8 *)uVar3;
            }
            *(undefined8 ****)local_b8[1] = local_128;
            *local_b8 = local_138;
            *(undefined8 **)(local_b8[1] + 8) = puVar14;
            *(undefined8 *)local_b8[2] = uVar4;
            *(undefined8 ****)(local_b8[2] + 8) = pppuVar13;
            return;
          }
        } while( true );
      }
      ::<str>::trim_matches::<<char>::is_whitespace>
                (*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28));
      if ((extraout_RDX == 0) && (*(longlong *)(lVar8 + 0x58) != 0)) {
        format_messages_for_delta(&local_48,lVar8,1);
      }
      else {
        (*(code *)PTR_clone_00798fd0)();
      }
      *(undefined8 *)param_1[1] = local_38;
      *(ulonglong *)*param_1 = local_48;
      *(undefined8 *)(*param_1 + 8) = uStack_40;
    }
  }
  else {
    format_messages_for_delta(param_1,param_2 + param_4 * 0x90,param_3 - param_4);
  }
  *(undefined8 *)(param_1[1] + 8) = 0xffffffffffffffff;
  return;
}


