// 006a58e0 into_response_parts

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <[(http[56314f485c23ccf6]::header::name::HeaderName,
   http[56314f485c23ccf6]::header::value::HeaderValue); 1usize] as
   axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>::into_response_parts
    */

void __rustcall
<[(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue);1:usize]as_axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>
::into_response_parts(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ushort uVar12;
  longlong lVar13;
  code *pcVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  char cVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  char *pcVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  byte *pbVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  ushort uVar39;
  uint uVar40;
  bool bVar41;
  bool bVar42;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar43;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  byte local_198;
  undefined1 local_141;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  byte *local_e8;
  ulonglong *puStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ushort local_c8;
  undefined6 uStack_c6;
  longlong local_c0;
  char *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  ulonglong *puStack_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_80 = 1;
  pbVar34 = (byte *)*param_2;
  puVar9 = (ulonglong *)param_2[1];
  auVar45 = *(undefined1 (*) [16])(param_2 + 2);
  local_58 = (undefined4)param_2[4];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar25 = param_2[4];
  pauVar15 = (undefined1 (*) [16])(param_2 + 5);
  uStack_50 = (undefined4)*(longlong *)*pauVar15;
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar16 = *(longlong *)*pauVar15;
  local_48 = (undefined4)param_2[6];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar17 = param_2[6];
  auVar19 = *pauVar15;
  auVar20 = *pauVar15;
  uStack_40 = (undefined4)param_2[7];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  lVar18 = param_2[7];
  uVar36 = param_2[8];
  local_88 = 1;
  local_90 = param_1;
  local_78 = pbVar34;
  puStack_70 = puVar9;
  local_68 = auVar45;
  local_38 = uVar36;
  if ((uVar36 & 0xff) == 2) goto LAB_006a5fc9;
  local_68._0_8_ = auVar45._0_8_;
  uVar21 = local_68._0_8_;
  local_68._8_8_ = auVar45._8_8_;
  uVar44 = local_68._8_8_;
  cVar22 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one(param_3);
  if (cVar22 == '\0') {
    local_c0 = *param_3;
    local_198 = (byte)puVar9;
    if (local_c0 == 2) {
      local_108 = *(undefined1 (*) [16])(param_3 + 1);
      auVar45._0_8_ = local_108._0_8_;
      auVar45._8_4_ = local_108._0_4_;
      auVar45._12_4_ = local_108._4_4_;
      local_128 = auVar45 ^ _DAT_00183170;
      auVar46._0_8_ = local_108._8_8_;
      auVar46._8_4_ = local_108._8_4_;
      auVar46._12_4_ = local_108._12_4_;
      local_118 = auVar46 ^ _DAT_00182bf0;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (byte *)0x0;
      local_130 = (ulonglong)(pbVar34 != (byte *)0x0);
      <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>::
      write(local_128,&local_130,8);
      if (pbVar34 == (byte *)0x0) {
        local_130 = (ulonglong)puVar9 & 0xff;
        puVar27 = &local_130;
        uVar24 = 8;
      }
      else {
        uVar24 = uVar21;
        puVar27 = puVar9;
      }
      uVar43 = <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>
               ::write(local_128,puVar27,uVar24);
      uVar37 = local_f8._0_8_ << 0x38 | local_f8._8_8_;
      uVar28 = local_118._8_8_ ^ uVar37;
      uVar35 = local_128._0_8_ + local_118._0_8_;
      uVar24 = (local_118._0_8_ << 0xd | (ulonglong)local_118._0_8_ >> 0x33) ^ uVar35;
      uVar29 = (uVar28 << 0x10 | uVar28 >> 0x30) ^ local_128._8_8_ + uVar28;
      uVar31 = local_128._8_8_ + uVar28 + uVar24;
      uVar35 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar29;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar31;
      uVar28 = (uVar29 << 0x15 | uVar29 >> 0x2b) ^ uVar35;
      uVar35 = (uVar35 ^ uVar37) + uVar24;
      uVar29 = ((uVar31 << 0x20 | uVar31 >> 0x20) ^ 0xff) + uVar28;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar35;
      uVar28 = (uVar28 << 0x10 | uVar28 >> 0x30) ^ uVar29;
      uVar29 = uVar29 + uVar24;
      uVar31 = (uVar35 << 0x20 | uVar35 >> 0x20) + uVar28;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar29;
      uVar28 = (uVar28 << 0x15 | uVar28 >> 0x2b) ^ uVar31;
      uVar31 = uVar31 + uVar24;
      uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar28;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar31;
      uVar28 = (uVar28 << 0x10 | uVar28 >> 0x30) ^ uVar29;
      uVar29 = uVar29 + uVar24;
      uVar31 = (uVar31 << 0x20 | uVar31 >> 0x20) + uVar28;
      uVar24 = (uVar24 << 0x11 | uVar24 >> 0x2f) ^ uVar29;
      uVar28 = (uVar28 << 0x15 | uVar28 >> 0x2b) ^ uVar31;
      lVar32 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar28;
      uVar24 = (uVar24 << 0xd | uVar24 >> 0x33) ^ uVar31 + uVar24;
      lVar33 = lVar32 + uVar24;
      uVar40 = (uint)((ulonglong)lVar33 >> 0x20) ^ (uint)lVar33 ^
               ((uint)(uVar28 >> 0x10) ^ (uint)((ulonglong)lVar32 >> 0x20)) >> 0xb ^
               (uint)(uVar24 >> 0x2f);
    }
    else {
      uVar40 = (pbVar34 != (byte *)0x0 ^ 0x84222325) * 0xaef4a21;
      uVar43 = extraout_XMM0_Qa;
      if (pbVar34 == (byte *)0x0) {
        uVar40 = (local_198 ^ 0x281a39c5) * 0xaef4a21;
        pbVar34 = (byte *)0x0;
      }
      else if (uVar21 != 0) {
        uVar24 = (ulonglong)(byte)auVar45[0] & 7;
        puVar27 = puVar9;
        if (uVar24 != 0) {
          do {
            uVar28 = *puVar27;
            puVar27 = (ulonglong *)((longlong)puVar27 + 1);
            uVar40 = ((byte)uVar28 ^ uVar40) * 0x1b3;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        if (7 < (ulonglong)uVar21) {
          do {
            uVar24 = *puVar27;
            pbVar1 = (byte *)((longlong)puVar27 + 1);
            pbVar2 = (byte *)((longlong)puVar27 + 2);
            pbVar3 = (byte *)((longlong)puVar27 + 3);
            pbVar4 = (byte *)((longlong)puVar27 + 4);
            pbVar5 = (byte *)((longlong)puVar27 + 5);
            pbVar6 = (byte *)((longlong)puVar27 + 6);
            pbVar7 = (byte *)((longlong)puVar27 + 7);
            puVar27 = puVar27 + 1;
            uVar40 = ((uint)*pbVar7 ^
                     ((uint)*pbVar6 ^
                     ((uint)*pbVar5 ^
                     ((uint)*pbVar4 ^
                     ((uint)*pbVar3 ^
                     ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ ((byte)uVar24 ^ uVar40) * 0x1b3) * 0x1b3) *
                     0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
          } while (puVar27 != (ulonglong *)((longlong)puVar9 + uVar21));
        }
      }
    }
    puVar27 = (ulonglong *)(param_3 + 3);
    local_138 = (uVar36 >> 8 & 0xffffffff) << 8 | uVar36 & 0xffffff0000000000 | uVar36 & 0xff;
    uVar40 = uVar40 & 0x7fff;
    uVar24 = (ulonglong)*(ushort *)(param_3 + 0xb);
    uVar28 = (ulonglong)(uVar40 & *(ushort *)(param_3 + 0xb));
    uVar36 = param_3[10];
    lVar32 = param_3[9];
    lVar33 = param_3[4];
    local_140 = param_3[5];
    uVar29 = 0;
    do {
      uVar31 = local_140;
      bVar41 = uVar28 < uVar36;
      if (!bVar41) {
        uVar28 = 0;
      }
      if (!bVar41 && uVar36 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar35 = (ulonglong)*(ushort *)(lVar32 + uVar28 * 4);
      uVar39 = (ushort)uVar40;
      if (uVar35 == 0xffff) {
        if (0x7fff < local_140) {
          uVar44 = (**(code **)(lVar25 + 0x20))(bVar41 || uVar36 != 0,lVar17);
          goto joined_r0x006a6330;
        }
        local_d8 = uVar21;
        uStack_d0 = uVar44;
        local_118._8_8_ = lVar25;
        local_f8._8_8_ = local_138;
        local_f8._0_8_ = lVar18;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_128._8_8_;
        local_128 = auVar19 << 0x40;
        local_108 = auVar20;
        local_e8 = pbVar34;
        puStack_e0 = puVar9;
        local_c8 = uVar39;
        if (local_140 == *puVar27) {
          (*(code *)PTR_grow_one_0079a2e8)();
          lVar33 = param_3[4];
        }
        lVar25 = uVar31 * 0x68;
        *(ulonglong *)(lVar33 + 0x60 + lVar25) = CONCAT62(uStack_c6,local_c8);
        puVar9 = (ulonglong *)(lVar33 + 0x50 + lVar25);
        *puVar9 = local_d8;
        puVar9[1] = uStack_d0;
        plVar10 = (longlong *)(lVar33 + 0x40 + lVar25);
        *plVar10 = (longlong)local_e8;
        plVar10[1] = (longlong)puStack_e0;
        puVar8 = (undefined4 *)(lVar33 + 0x30 + lVar25);
        *puVar8 = local_f8._0_4_;
        puVar8[1] = local_f8._4_4_;
        puVar8[2] = local_f8._8_4_;
        puVar8[3] = local_f8._12_4_;
        puVar8 = (undefined4 *)(lVar33 + 0x20 + lVar25);
        *puVar8 = local_108._0_4_;
        puVar8[1] = local_108._4_4_;
        puVar8[2] = local_108._8_4_;
        puVar8[3] = local_108._12_4_;
        puVar11 = (undefined8 *)(lVar33 + 0x10 + lVar25);
        *puVar11 = local_118._0_8_;
        puVar11[1] = local_118._8_8_;
        *(undefined8 *)(lVar33 + lVar25) = local_128._0_8_;
        ((undefined8 *)(lVar33 + lVar25))[1] = local_128._8_8_;
        param_3[5] = uVar31 + 1;
        if ((ulonglong)param_3[10] <= uVar28) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (param_3,&
                             PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007918d8
                    );
          goto LAB_006a637f;
        }
        lVar25 = param_3[9];
        *(short *)(lVar25 + uVar28 * 4) = (short)uVar31;
        *(ushort *)(lVar25 + 2 + uVar28 * 4) = uVar39;
        goto LAB_006a5fc9;
      }
      uVar12 = *(ushort *)(lVar32 + 2 + uVar28 * 4);
      uVar26 = (uint)uVar12 & (uint)uVar24;
      if (((int)uVar28 - uVar26 & (uint)uVar24) < uVar29) {
        bVar41 = (int)local_c0 != 2;
        if (local_140 < 0x8000) {
          local_d8 = uVar21;
          uStack_d0 = uVar44;
          local_118._8_8_ = lVar25;
          local_f8._8_8_ = local_138;
          local_f8._0_8_ = lVar18;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = local_128._8_8_;
          local_128 = auVar20 << 0x40;
          local_108 = auVar19;
          local_e8 = pbVar34;
          puStack_e0 = puVar9;
          local_c8 = uVar39;
          if (local_140 == *puVar27) {
            (*(code *)PTR_grow_one_0079a2e8)();
            lVar33 = param_3[4];
          }
          lVar25 = uVar31 * 0x68;
          *(ulonglong *)(lVar33 + 0x60 + lVar25) = CONCAT62(uStack_c6,local_c8);
          puVar9 = (ulonglong *)(lVar33 + 0x50 + lVar25);
          *puVar9 = local_d8;
          puVar9[1] = uStack_d0;
          plVar10 = (longlong *)(lVar33 + 0x40 + lVar25);
          *plVar10 = (longlong)local_e8;
          plVar10[1] = (longlong)puStack_e0;
          puVar11 = (undefined8 *)(lVar33 + 0x30 + lVar25);
          *puVar11 = local_f8._0_8_;
          puVar11[1] = local_f8._8_8_;
          puVar11 = (undefined8 *)(lVar33 + 0x20 + lVar25);
          *puVar11 = local_108._0_8_;
          puVar11[1] = local_108._8_8_;
          puVar11 = (undefined8 *)(lVar33 + 0x10 + lVar25);
          *puVar11 = local_118._0_8_;
          puVar11[1] = local_118._8_8_;
          *(undefined8 *)(lVar33 + lVar25) = local_128._0_8_;
          ((undefined8 *)(lVar33 + lVar25))[1] = local_128._8_8_;
          param_3[5] = uVar31 + 1;
          lVar25 = param_3[9];
          uVar36 = param_3[10];
          uVar24 = 0;
          while( true ) {
            bVar42 = uVar36 <= uVar28;
            if (bVar42) {
              uVar28 = 0;
            }
            if (bVar42 && uVar36 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar39 = *(ushort *)(lVar25 + uVar28 * 4);
            if (uVar39 == 0xffff) break;
            uVar24 = uVar24 + 1;
            uVar12 = *(ushort *)(lVar25 + 2 + uVar28 * 4);
            *(short *)(lVar25 + uVar28 * 4) = (short)uVar31;
            *(short *)(lVar25 + 2 + uVar28 * 4) = (short)uVar40;
            uVar28 = uVar28 + 1;
            uVar40 = (uint)uVar12;
            uVar31 = (ulonglong)uVar39;
          }
          *(short *)(lVar25 + uVar28 * 4) = (short)uVar31;
          *(short *)(lVar25 + 2 + uVar28 * 4) = (short)uVar40;
          if ((bVar41 && 0x1ff < uVar29 || 0x7f < uVar24) && (*param_3 == 0)) {
            *param_3 = 1;
          }
          goto LAB_006a5fc9;
        }
        uVar44 = (**(code **)(lVar25 + 0x20))(uVar26,lVar17);
        goto joined_r0x006a6330;
      }
      if (uVar12 == uVar39) {
        if (local_140 <= uVar35) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar26,&
                            PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007918c0
                    );
          goto LAB_006a637f;
        }
        lVar38 = uVar35 * 0x68;
        lVar13 = *(longlong *)(lVar33 + 0x40 + lVar38);
        if ((pbVar34 == (byte *)0x0) != (lVar13 != 0)) {
          pcVar30 = (char *)(lVar33 + lVar38);
          if (lVar13 == 0) {
            if (pcVar30[0x48] == local_198) goto LAB_006a5dc3;
          }
          else if (*(ulonglong *)(pcVar30 + 0x50) == uVar21) {
            local_b8 = pcVar30;
            local_b0 = lVar38;
            local_a8 = uVar24;
            local_a0 = puVar27;
            local_98 = lVar33;
            iVar23 = (*(code *)PTR_bcmp_00799020)(pcVar30,uVar21);
            pcVar30 = local_b8;
            lVar33 = local_98;
            puVar27 = local_a0;
            uVar24 = local_a8;
            lVar38 = local_b0;
            uVar43 = extraout_XMM0_Qa_00;
            if (iVar23 == 0) goto LAB_006a5dc3;
          }
        }
      }
      uVar29 = uVar29 + 1;
      uVar28 = uVar28 + 1;
    } while( true );
  }
  uVar44 = (**(code **)(lVar25 + 0x20))(extraout_XMM0_Qa,lVar17);
joined_r0x006a6330:
  if (pbVar34 != (byte *)0x0) {
    (**(code **)(pbVar34 + 0x20))(uVar44,uVar21);
  }
  goto LAB_006a6348;
LAB_006a5dc3:
  uVar36 = local_140;
  if (*pcVar30 != '\0') {
    uVar43 = <http[56314f485c23ccf6]::header::map::HeaderMap>::remove_all_extra_values
                       (param_3,*(undefined8 *)(pcVar30 + 8));
    uVar36 = param_3[5];
  }
  if (uVar36 <= uVar35) {
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar43,&
                      PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791958
              );
    goto LAB_006a637f;
  }
  lVar32 = param_3[4];
  lVar33 = *(longlong *)(lVar32 + 0x18 + lVar38);
  uVar44 = *(undefined8 *)(lVar32 + 0x28 + lVar38);
  cVar22 = *(char *)(lVar32 + 0x38 + lVar38);
  *(longlong *)(lVar32 + 0x18 + lVar38) = lVar25;
  *(longlong *)(lVar32 + 0x20 + lVar38) = lVar16;
  *(longlong *)(lVar32 + 0x28 + lVar38) = lVar17;
  *(longlong *)(lVar32 + 0x30 + lVar38) = lVar18;
  *(ulonglong *)(lVar32 + 0x38 + lVar38) = local_138;
  if (pbVar34 != (byte *)0x0) {
    uVar43 = (**(code **)(pbVar34 + 0x20))(local_138,uVar21);
  }
  if (cVar22 == '\x02') {
LAB_006a5fc9:
    <[core[c0acaeba6ab4c2e0]::mem::maybe_uninit::MaybeUninit<(http[56314f485c23ccf6]::header::name::HeaderName,http[56314f485c23ccf6]::header::value::HeaderValue)>;1:usize]as_core[c0acaeba6ab4c2e0]::array::iter::iter_inner::PartialDrop>
    ::partial_drop(&local_78,1,1);
    lVar25 = param_3[0xf];
    local_90[0xe] = param_3[0xe];
    local_90[0xf] = lVar25;
    lVar25 = param_3[0xd];
    local_90[0xc] = param_3[0xc];
    local_90[0xd] = lVar25;
    lVar25 = param_3[0xb];
    local_90[10] = param_3[10];
    local_90[0xb] = lVar25;
    lVar25 = param_3[9];
    local_90[8] = param_3[8];
    local_90[9] = lVar25;
    lVar25 = *param_3;
    lVar16 = param_3[1];
    lVar17 = param_3[2];
    lVar18 = param_3[3];
    lVar32 = param_3[4];
    lVar33 = param_3[5];
    lVar13 = param_3[7];
    local_90[6] = param_3[6];
    local_90[7] = lVar13;
    local_90[4] = lVar32;
    local_90[5] = lVar33;
    local_90[2] = lVar17;
    local_90[3] = lVar18;
    *local_90 = lVar25;
    local_90[1] = lVar16;
    return;
  }
  if (cVar22 != -1) {
    (**(code **)(lVar33 + 0x20))(uVar43,uVar44);
    goto LAB_006a5fc9;
  }
LAB_006a6348:
  (*(code *)PTR_unwrap_failed_00799028)
            (&DAT_007918f0,&local_141,
             &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791970);
LAB_006a637f:
                    /* WARNING: Does not return */
  pcVar14 = (code *)invalidInstructionException();
  (*pcVar14)();
}


