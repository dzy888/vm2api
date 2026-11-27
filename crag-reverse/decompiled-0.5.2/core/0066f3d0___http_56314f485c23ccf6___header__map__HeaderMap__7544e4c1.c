// 0066f3d0 <http[56314f485c23ccf6]::header::map::HeaderMap>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <http[56314f485c23ccf6]::header::map::HeaderMap as
   core[c0acaeba6ab4c2e0]::iter::traits::collect::Extend<(core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::name::HeaderName>,
   http[56314f485c23ccf6]::header::value::HeaderValue)>>::extend::<http[56314f485c23ccf6]::header::map::HeaderMap>
    */

void __rustcall
<http[56314f485c23ccf6]::header::map::HeaderMap_as_core[c0acaeba6ab4c2e0]::iter::traits::collect::Extend<(core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::name::HeaderName>,http[56314f485c23ccf6]::header::value::HeaderValue)>>
::extend::<http[56314f485c23ccf6]::header::map::HeaderMap>(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  char cVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  ulonglong *puVar33;
  longlong *plVar34;
  undefined2 uVar35;
  bool bVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 local_189;
  longlong *local_188;
  ulonglong local_180;
  longlong local_178;
  longlong *local_170;
  ulonglong *local_168;
  ulonglong local_160;
  longlong *local_158;
  longlong *local_150;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulonglong local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  undefined8 local_118;
  ulonglong *local_110;
  ulonglong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  longlong *plStack_a0;
  undefined2 local_98;
  undefined6 uStack_96;
  ulonglong *local_90;
  ulonglong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  ulonglong uStack_60;
  longlong local_58 [2];
  undefined8 local_48;
  
  local_118 = *(undefined8 *)(param_2 + 0x18);
  local_128 = *(ulonglong **)(param_2 + 0x20);
  uVar25 = *(ulonglong *)(param_2 + 0x28);
  local_110 = local_128 + uVar25 * 0xd;
  local_130 = *(ulonglong *)(param_2 + 0x40);
  local_140 = *(undefined4 *)(param_2 + 0x30);
  uStack_13c = *(undefined4 *)(param_2 + 0x34);
  uStack_138 = *(undefined4 *)(param_2 + 0x38);
  uStack_134 = *(undefined4 *)(param_2 + 0x3c);
  local_150 = (longlong *)0x0;
  local_178 = param_1;
  local_120 = local_128;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_128,2);
  }
  uVar28 = *(ulonglong *)(local_178 + 0x28);
  uVar26 = uVar25 + 1 >> 1;
  if (uVar28 == 0) {
    uVar26 = uVar25;
  }
  uVar25 = 0;
  if (uVar28 < 0x6001) {
    uVar25 = 0x6000 - uVar28;
  }
  if (uVar26 <= uVar25) {
    uVar25 = uVar26;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar25 + uVar28;
  auVar12._8_8_ = 2;
  auVar12._0_8_ = 0xaaaaaaaaaaaaaaab;
  uVar25 = SUB168(auVar10 * auVar12,8) >> 1;
  if (*(ulonglong *)(local_178 + 0x50) < uVar25) {
    lVar23 = 0x3f;
    if (uVar25 - 1 != 0) {
      for (; uVar25 - 1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar30 = 0xffffffffffffffff >> (~(byte)lVar23 & 0x3f);
    uVar26 = 0;
    if (1 < uVar25) {
      uVar26 = uVar30;
    }
    if (uVar26 < 0x8000) {
      uVar31 = uVar26 + 1;
      if (uVar28 == 0) {
        *(short *)(local_178 + 0x58) = (short)uVar26;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar21 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        uVar15 = _UNK_0018264c;
        uVar14 = _UNK_00182648;
        uVar13 = _UNK_00182644;
        uVar38 = _DAT_00182640;
        if (puVar21 != (undefined4 *)0x0) {
          puVar22 = puVar21;
          uVar28 = 1;
          uVar37 = extraout_XMM0_Da;
          if (1 < uVar25) {
            lVar23 = 1;
            uVar37 = extraout_XMM0_Da;
            if (7 < uVar30) {
              uVar25 = uVar30 & 0xfffffffffffffff8;
              puVar22 = puVar21 + uVar25;
              lVar23 = uVar25 + 1;
              uVar28 = 0;
              do {
                puVar1 = puVar21 + uVar28;
                *puVar1 = uVar38;
                puVar1[1] = uVar13;
                puVar1[2] = uVar14;
                puVar1[3] = uVar15;
                puVar1 = puVar21 + uVar28 + 4;
                *puVar1 = uVar38;
                puVar1[1] = uVar13;
                puVar1[2] = uVar14;
                puVar1[3] = uVar15;
                uVar28 = uVar28 + 8;
                uVar37 = uVar38;
              } while (uVar25 != uVar28);
            }
            lVar23 = (uVar30 - lVar23) + 1;
            do {
              *puVar22 = 0xffff;
              puVar22 = puVar22 + 1;
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            uVar28 = uVar31;
          }
          *puVar22 = 0xffff;
          if (*(longlong *)(local_178 + 0x50) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar37,2);
          }
          *(undefined4 **)(local_178 + 0x48) = puVar21;
          *(ulonglong *)(local_178 + 0x50) = uVar28;
          uVar31 = uVar31 - (uVar31 >> 2);
          if (uVar31 < 0x13b13b13b13b13c) {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar24 = (*(code *)PTR___rust_alloc_00799000)();
            lVar23 = local_178;
            if (lVar24 != 0) {
              uVar38 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
                                 (*(undefined8 *)(local_178 + 0x20),
                                  *(undefined8 *)(local_178 + 0x28));
              if (*(longlong *)(lVar23 + 0x18) != 0) {
                uVar38 = (*(code *)PTR___rust_dealloc_00798fc8)(local_178,8);
                lVar23 = local_178;
              }
              *(ulonglong *)(lVar23 + 0x18) = uVar31;
              *(longlong *)(lVar23 + 0x20) = lVar24;
              *(undefined8 *)(lVar23 + 0x28) = 0;
              if ((int)local_150 == 1) {
                if (local_148 < local_130) {
                  uVar25 = CONCAT44(uStack_134,uStack_138);
                  bVar36 = *(char *)(uVar25 + 0x10 + local_148 * 0x48) == '\0';
                  if (!bVar36) {
                    uVar25 = *(ulonglong *)(uVar25 + local_148 * 0x48 + 0x18);
                  }
                  local_150 = (longlong *)(ulonglong)!bVar36;
                  local_148 = uVar25;
                  (*(code *)PTR_panic_fmt_007991a8)
                            (uVar25,&
                                    PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790c00
                            );
                }
                else {
                  (*(code *)PTR_panic_bounds_check_00799520)
                            (uVar38,&
                                    PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791808
                            );
                }
                goto LAB_0066fe31;
              }
              goto LAB_0066f68f;
            }
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0066fe31;
      }
      cVar20 = ::<http[56314f485c23ccf6]::header::map::HeaderMap>::try_grow(local_178,uVar31);
      if (cVar20 == '\0') goto LAB_0066f68f;
    }
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_189,
               &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790be8);
LAB_0066fe31:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
LAB_0066f68f:
  local_90 = local_110;
  puVar32 = local_120;
  if (local_120 != local_110) {
    puVar32 = local_120 + 0xd;
    uVar25 = *local_120;
    if (uVar25 != 2) {
      uVar28 = local_120[1];
      local_68 = local_120[10];
      uStack_60 = local_120[0xb];
      local_78 = (undefined4)local_120[8];
      uStack_74 = *(undefined4 *)((longlong)local_120 + 0x44);
      uStack_70 = (undefined4)local_120[9];
      uStack_6c = *(undefined4 *)((longlong)local_120 + 0x4c);
      plVar29 = (longlong *)local_120[3];
      local_170 = (longlong *)local_120[4];
      plVar27 = (longlong *)local_120[5];
      local_188 = (longlong *)local_120[6];
      local_158 = (longlong *)local_120[7];
      local_80 = CONCAT44(uStack_134,uStack_138);
      local_108 = local_130;
      local_148 = uVar28;
      local_120 = puVar32;
      while( true ) {
        ::<http[56314f485c23ccf6]::header::map::HeaderMap>::try_entry2::
        <http[56314f485c23ccf6]::header::name::HeaderName>(&local_f8,local_178,&local_78);
        plVar19 = local_c8;
        plVar34 = plStack_d0;
        plVar18 = plStack_e0;
        plVar9 = local_e8;
        plVar17 = uStack_f0;
        plVar16 = local_f8;
        if (local_c8._2_1_ == -1) break;
        local_168 = puVar32;
        if (local_c8._2_1_ == '\x02') {
          uStack_f0 = local_170;
          plStack_e0 = local_188;
          local_d8 = local_158;
          local_f8 = plVar29;
          local_e8 = plVar27;
          uVar38 = ::<http[56314f485c23ccf6]::header::map::HeaderMap>::insert_occupied
                             (local_58,plVar16,plVar9,&local_f8);
          uVar38 = (**(code **)(local_58[0] + 0x20))(uVar38,local_48);
          local_170 = plVar9;
        }
        else {
          plVar9 = (longlong *)local_f8[5];
          local_180 = uVar28;
          local_160 = uVar25;
          if ((longlong *)0x7fff < plVar9) {
            local_150 = (longlong *)(ulonglong)((uint)uVar25 & 1);
            local_148 = uVar28;
            local_120 = puVar32;
            uVar38 = (*(code *)plVar29[4])();
            if (plVar17 != (longlong *)0x0) {
              (*(code *)plVar17[4])(uVar38,plVar18);
            }
            (*(code *)PTR_unwrap_failed_00799028)
                      (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_189
                       ,&
                        PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790c30
                      );
            goto LAB_0066fe31;
          }
          uVar35 = (undefined2)local_c8;
          local_98 = (undefined2)local_c8;
          local_b8 = uStack_f0;
          plStack_b0 = local_e8;
          local_a8 = plStack_e0;
          plStack_a0 = local_d8;
          local_d8 = local_170;
          local_c8 = local_188;
          plStack_c0 = local_158;
          local_f8 = (longlong *)0x0;
          plStack_e0 = plVar29;
          plStack_d0 = plVar27;
          if (plVar9 == (longlong *)plVar16[3]) {
            (*(code *)PTR_grow_one_0079a2e8)();
          }
          lVar23 = plVar16[4];
          lVar24 = (longlong)plVar9 * 0x68;
          *(ulonglong *)(lVar23 + 0x60 + lVar24) = CONCAT62(uStack_96,local_98);
          puVar2 = (undefined8 *)(lVar23 + 0x50 + lVar24);
          *puVar2 = local_a8;
          puVar2[1] = plStack_a0;
          puVar2 = (undefined8 *)(lVar23 + 0x40 + lVar24);
          *puVar2 = local_b8;
          puVar2[1] = plStack_b0;
          puVar2 = (undefined8 *)(lVar23 + 0x30 + lVar24);
          *puVar2 = local_c8;
          puVar2[1] = plStack_c0;
          puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar24);
          *puVar2 = local_d8;
          puVar2[1] = plStack_d0;
          puVar2 = (undefined8 *)(lVar23 + 0x10 + lVar24);
          *puVar2 = local_e8;
          puVar2[1] = plStack_e0;
          puVar21 = (undefined4 *)(lVar23 + lVar24);
          *puVar21 = (undefined4)local_f8;
          puVar21[1] = local_f8._4_4_;
          puVar21[2] = (undefined4)uStack_f0;
          puVar21[3] = uStack_f0._4_4_;
          plVar16[5] = (longlong)plVar9 + 1;
          lVar23 = plVar16[9];
          plVar29 = (longlong *)plVar16[10];
          uVar26 = 0;
          uVar25 = (ulonglong)plVar9 & 0xffffffff;
          while( true ) {
            bVar36 = plVar29 <= plVar34;
            if (bVar36) {
              plVar34 = (longlong *)0x0;
            }
            if (bVar36 && plVar29 == (longlong *)0x0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar3 = *(ushort *)(lVar23 + (longlong)plVar34 * 4);
            if (uVar3 == 0xffff) break;
            uVar26 = uVar26 + 1;
            uVar4 = *(undefined2 *)(lVar23 + 2 + (longlong)plVar34 * 4);
            *(short *)(lVar23 + (longlong)plVar34 * 4) = (short)uVar25;
            *(undefined2 *)(lVar23 + 2 + (longlong)plVar34 * 4) = uVar35;
            plVar34 = (longlong *)((longlong)plVar34 + 1);
            uVar25 = (ulonglong)uVar3;
            uVar35 = uVar4;
          }
          *(short *)(lVar23 + (longlong)plVar34 * 4) = (short)uVar25;
          *(undefined2 *)(lVar23 + 2 + (longlong)plVar34 * 4) = uVar35;
          uVar28 = local_180;
          puVar32 = local_168;
          uVar25 = local_160;
          uVar38 = (undefined4)local_f8;
          local_170 = plVar9;
          if ((!(((ulonglong)plVar19 & 0x10000) == 0 && uVar26 < 0x80)) && (*plVar16 == 0)) {
            *plVar16 = 1;
          }
        }
        puVar33 = puVar32;
        if ((uVar25 & 1) != 0) {
          if (local_108 <= uVar28) {
LAB_0066fcf5:
            local_150 = (longlong *)0x1;
            local_148 = uVar28;
            local_120 = puVar32;
            (*(code *)PTR_panic_bounds_check_00799520)
                      (uVar38,&
                              PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791808
                      );
            goto LAB_0066fe31;
          }
          local_100 = plVar16 + 6;
          local_158 = plVar16;
          while( true ) {
            lVar24 = uVar28 * 9;
            lVar23 = local_80 + uVar28 * 0x48;
            bVar36 = *(char *)(local_80 + 0x10 + uVar28 * 0x48) != '\0';
            if (bVar36) {
              local_180 = *(ulonglong *)(lVar23 + 0x18);
              lVar24 = 1;
            }
            local_188 = (longlong *)(ulonglong)bVar36;
            uVar5 = *(undefined8 *)(lVar23 + 0x20);
            uVar6 = *(undefined8 *)(lVar23 + 0x28);
            uVar7 = *(undefined8 *)(lVar23 + 0x30);
            uVar8 = *(undefined8 *)(lVar23 + 0x38);
            if ((longlong *)local_158[5] <= local_170) {
              local_148 = local_180;
              local_150 = local_188;
              local_120 = puVar32;
              (*(code *)PTR_panic_bounds_check_00799520)
                        (lVar24,&anon_d3057478e380898db632effa827bd31f_372_llvm_2674179329317868992)
              ;
              goto LAB_0066fe31;
            }
            local_160 = *(ulonglong *)(lVar23 + 0x40);
            puVar2 = (undefined8 *)(local_158[4] + (longlong)local_170 * 0x68);
            if (*(int *)(local_158[4] + (longlong)local_170 * 0x68) == 1) {
              local_88 = puVar2[2];
              uVar25 = local_158[8];
              if (uVar25 == local_158[6]) {
                uVar38 = (*(code *)PTR_grow_one_0079a388)();
              }
              lVar23 = local_158[7];
              *(undefined8 *)(lVar23 + uVar25 * 0x48) = 1;
              *(ulonglong *)(lVar23 + 8 + uVar25 * 0x48) = local_88;
              *(undefined8 *)(lVar23 + 0x10 + uVar25 * 0x48) = 0;
              *(longlong **)(lVar23 + 0x18 + uVar25 * 0x48) = local_170;
              *(undefined8 *)(lVar23 + 0x20 + uVar25 * 0x48) = uVar5;
              *(undefined8 *)(lVar23 + 0x28 + uVar25 * 0x48) = uVar6;
              *(undefined8 *)(lVar23 + 0x30 + uVar25 * 0x48) = uVar7;
              *(undefined8 *)(lVar23 + 0x38 + uVar25 * 0x48) = uVar8;
              *(ulonglong *)(lVar23 + 0x40 + uVar25 * 0x48) = local_160;
              local_158[8] = uVar25 + 1;
              if (uVar25 < local_88) {
                local_120 = local_168;
                local_148 = local_180;
                local_150 = local_188;
                (*(code *)PTR_panic_bounds_check_00799520)
                          (uVar25 * 9,
                           &
                           PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790a38
                          );
                goto LAB_0066fe31;
              }
              lVar23 = local_158[7];
              *(undefined8 *)(lVar23 + 0x10 + local_88 * 0x48) = 1;
              *(ulonglong *)(lVar23 + 0x18 + local_88 * 0x48) = uVar25;
              *puVar2 = 1;
            }
            else {
              uVar25 = local_158[8];
              if (uVar25 == local_158[6]) {
                uVar38 = (*(code *)PTR_grow_one_0079a388)();
              }
              lVar23 = local_158[7];
              *(undefined8 *)(lVar23 + uVar25 * 0x48) = 0;
              *(longlong **)(lVar23 + 8 + uVar25 * 0x48) = local_170;
              *(undefined8 *)(lVar23 + 0x10 + uVar25 * 0x48) = 0;
              *(longlong **)(lVar23 + 0x18 + uVar25 * 0x48) = local_170;
              *(undefined8 *)(lVar23 + 0x20 + uVar25 * 0x48) = uVar5;
              *(undefined8 *)(lVar23 + 0x28 + uVar25 * 0x48) = uVar6;
              *(undefined8 *)(lVar23 + 0x30 + uVar25 * 0x48) = uVar7;
              *(undefined8 *)(lVar23 + 0x38 + uVar25 * 0x48) = uVar8;
              *(ulonglong *)(lVar23 + 0x40 + uVar25 * 0x48) = local_160;
              local_158[8] = uVar25 + 1;
              *puVar2 = 1;
              puVar2[1] = uVar25;
            }
            puVar2[2] = uVar25;
            uVar28 = local_180;
            puVar33 = local_168;
            if (local_188 == (longlong *)0x0) break;
            puVar32 = local_168;
            if (local_108 <= local_180) goto LAB_0066fcf5;
          }
        }
        puVar32 = puVar33;
        if (puVar33 == local_90) {
LAB_0066fc75:
          local_150 = (longlong *)0x0;
          local_148 = uVar28;
          goto LAB_0066f6bb;
        }
        puVar32 = puVar33 + 0xd;
        uVar25 = *puVar33;
        if (uVar25 == 2) goto LAB_0066fc75;
        uVar28 = puVar33[1];
        local_68 = puVar33[10];
        uStack_60 = puVar33[0xb];
        local_78 = (undefined4)puVar33[8];
        uStack_74 = *(undefined4 *)((longlong)puVar33 + 0x44);
        uStack_70 = (undefined4)puVar33[9];
        uStack_6c = *(undefined4 *)((longlong)puVar33 + 0x4c);
        plVar29 = (longlong *)puVar33[3];
        local_170 = (longlong *)puVar33[4];
        plVar27 = (longlong *)puVar33[5];
        local_188 = (longlong *)puVar33[6];
        local_158 = (longlong *)puVar33[7];
      }
      local_150 = (longlong *)(ulonglong)((uint)uVar25 & 1);
      local_148 = uVar28;
      local_120 = puVar32;
      (*(code *)PTR_unwrap_failed_00799028)
                (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_189,
                 &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790c18);
      goto LAB_0066fe31;
    }
  }
LAB_0066f6bb:
  local_120 = puVar32;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <http[56314f485c23ccf6]::header::map::IntoIter<http[56314f485c23ccf6]::header::value::HeaderValue>>
            (&local_150);
  return;
}


