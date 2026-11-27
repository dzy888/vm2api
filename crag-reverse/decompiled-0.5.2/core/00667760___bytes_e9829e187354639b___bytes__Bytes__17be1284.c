// 00667760 <bytes[e9829e187354639b]::bytes::Bytes>

/* WARNING: Removing unreachable block (ram,0x006685f5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_trailers::<bytes[e9829e187354639b]::bytes::Bytes>
    */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::encode::Encoder>::encode_trailers::
<bytes[e9829e187354639b]::bytes::Bytes>
          (undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  byte bVar10;
  ushort uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  char cVar16;
  int iVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong *plVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong in_R11;
  undefined2 uVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong local_2c0;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_298;
  byte *******pppppppbStack_290;
  undefined1 local_288 [16];
  undefined1 local_271;
  longlong local_270;
  ulonglong local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong uStack_250;
  longlong lStack_248;
  longlong local_240;
  ulonglong local_238;
  longlong *local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  byte *******local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  byte *******local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  undefined6 uStack_176;
  ulonglong local_170;
  uint local_168;
  undefined4 local_164;
  ulonglong local_160;
  ulonglong uStack_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined1 local_130 [16];
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ushort local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  byte *******local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  byte *******pppppppbStack_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong uStack_50;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_164 = param_4;
  if ((*param_2 < -0x7ffffffffffffffe) || (*param_2 == -1)) {
    *param_1 = 0xffffffffffffffff;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (param_3);
  }
  else {
    lVar23 = param_2[1];
    lVar34 = param_2[2];
    local_d0 = param_1;
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
      local_1b8._0_8_ = *(longlong *)(in_FS_OFFSET + -0x38);
      lVar25 = *(longlong *)(in_FS_OFFSET + -0x30);
    }
    else {
      lVar25 = param_3;
      local_1b8._0_8_ = (*(code *)PTR_hashmap_random_keys_00799248)();
      *(undefined8 *)(in_FS_OFFSET + -0x38) = local_1b8._0_8_;
      *(longlong *)(in_FS_OFFSET + -0x30) = lVar25;
      *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
    }
    *(longlong *)(in_FS_OFFSET + -0x38) = local_1b8._0_8_ + 1;
    local_1d8._8_8_ = _UNK_00790c50;
    local_1d8._0_8_ =
         PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_00790c48;
    local_1c8._8_8_ = _UNK_00790c60;
    local_1c8._0_8_ = _DAT_00790c58;
    local_1b8._8_8_ = lVar25;
    if (lVar34 != 0) {
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(&http[56314f485c23ccf6]::header::name::HeaderName,())>>
      ::reserve_rehash::
      <hashbrown[b5c94476ffc33875]::map::make_hasher<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
                ();
      do {
        <hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
        ::insert(local_1d8,lVar23);
        lVar23 = lVar23 + 0x20;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    local_88 = local_1b8._0_8_;
    local_80 = local_1b8._8_8_;
    local_98 = local_1c8;
    local_a8 = local_1d8._0_8_;
    lStack_a0 = local_1d8._8_8_;
    bVar15 = false;
    local_e0 = 0;
    local_f0 = 2;
    local_e8 = 0;
    local_120 = 0;
    local_118 = 8;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 8;
    local_f8 = 0;
    local_138 = 0;
    uVar37 = *(undefined8 *)(param_3 + 0x18);
    plVar27 = *(longlong **)(param_3 + 0x20);
    local_38 = *(ulonglong *)(param_3 + 0x40);
    local_48 = *(longlong *)(param_3 + 0x30);
    lStack_40 = *(longlong *)(param_3 + 0x38);
    local_1e8 = plVar27 + *(longlong *)(param_3 + 0x28) * 0xd;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(local_1e8,2);
    }
    local_258 = 0;
    uStack_250 = uStack_50;
    lStack_248 = local_48;
    local_240 = lStack_40;
    local_238 = local_38;
    local_218 = local_1e8;
    uVar20 = uStack_50;
    plVar32 = local_1e8;
    local_230 = plVar27;
    local_228 = plVar27;
    local_220 = uVar37;
LAB_006679e0:
    plVar33 = plVar32;
    if (plVar27 != plVar32) {
      plVar33 = plVar27 + 0xd;
      if (*plVar27 != 2) {
        uVar20 = plVar27[1];
        uVar21 = plVar27[3];
        local_2a8 = plVar27[4];
        lVar23 = plVar27[5];
        local_2b0 = plVar27[6];
        local_1e0 = plVar27[7];
        local_2c0 = (ulonglong)((uint)*plVar27 & 1);
        local_78 = plVar27[8];
        pppppppbStack_70 = (byte *******)plVar27[9];
        local_68 = plVar27[10];
        lStack_60 = plVar27[0xb];
        if ((bVar15) && (local_298 != 0)) {
          (**(code **)(local_298 + 0x20))(local_1e0,local_288._0_8_);
        }
        bVar15 = true;
        local_288._8_8_ = lStack_60;
        local_288._0_8_ = local_68;
        local_298 = local_78;
        pppppppbStack_290 = pppppppbStack_70;
LAB_00667adf:
        cVar16 = <hashbrown[b5c94476ffc33875]::map::HashMap<&http[56314f485c23ccf6]::header::name::HeaderName,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::contains_key::<http[56314f485c23ccf6]::header::name::HeaderName>
                           (&local_a8,&local_298);
        if (cVar16 != '\0') {
          if (local_298 == 0) {
            if (((byte)pppppppbStack_290 - 0x10 < 0x36) &&
               ((0x3a000080402543U >> ((ulonglong)((byte)pppppppbStack_290 - 0x10) & 0x3f) & 1) != 0
               )) goto LAB_00667c55;
          }
          uStack_158 = local_2a8;
          local_148 = local_2b0;
          local_140 = local_1e0;
          local_270 = lVar23;
          local_268 = uVar21;
          local_160 = uVar21;
          local_150 = lVar23;
          cVar16 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one(&local_138);
          lVar34 = local_298;
          if (cVar16 == '\0') {
            local_c8 = local_138;
            local_1f0 = uVar20;
            if (local_138 == 2) {
              auVar38._0_8_ = local_130._0_8_;
              auVar38._8_4_ = local_130._0_4_;
              auVar38._12_4_ = local_130._4_4_;
              local_1d8 = auVar38 ^ _DAT_00183170;
              auVar39._0_8_ = local_130._8_8_;
              auVar39._8_4_ = local_130._8_4_;
              auVar39._12_4_ = local_130._12_4_;
              local_1c8 = auVar39 ^ _DAT_00182bf0;
              local_1b8 = local_130;
              local_1a8 = (undefined1  [16])0x0;
              local_198 = (byte *******)0x0;
              local_210 = (byte *******)(ulonglong)(local_298 != 0);
              pppppppbVar18 = (byte *******)&local_210;
              <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
              ::write(local_1d8,pppppppbVar18,8);
              if (lVar34 == 0) {
                pppppppbVar19 = (byte *******)((ulonglong)pppppppbStack_290 & 0xff);
                uVar37 = 8;
                local_210 = pppppppbVar19;
              }
              else {
                uVar37 = local_288._0_8_;
                pppppppbVar19 = pppppppbStack_290;
                pppppppbVar18 = pppppppbStack_290;
              }
              <core[c0acaeba6ab4c2e0]::hash::sip::Hasher<core[c0acaeba6ab4c2e0]::hash::sip::Sip13Rounds>as_core[c0acaeba6ab4c2e0]::hash::Hasher>
              ::write(local_1d8,pppppppbVar18,uVar37);
              uVar29 = local_1a8._0_8_ << 0x38 | local_1a8._8_8_;
              uVar21 = local_1c8._8_8_ ^ uVar29;
              uVar28 = local_1d8._0_8_ + local_1c8._0_8_;
              uVar20 = (local_1c8._0_8_ << 0xd | (ulonglong)local_1c8._0_8_ >> 0x33) ^ uVar28;
              uVar22 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ local_1d8._8_8_ + uVar21;
              uVar24 = local_1d8._8_8_ + uVar21 + uVar20;
              uVar28 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar22;
              uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar24;
              uVar21 = (uVar22 << 0x15 | uVar22 >> 0x2b) ^ uVar28;
              uVar28 = (uVar28 ^ uVar29) + uVar20;
              uVar22 = ((uVar24 << 0x20 | uVar24 >> 0x20) ^ 0xff) + uVar21;
              uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar28;
              uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
              uVar22 = uVar22 + uVar20;
              uVar24 = (uVar28 << 0x20 | uVar28 >> 0x20) + uVar21;
              uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar22;
              uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar24;
              uVar24 = uVar24 + uVar20;
              uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
              uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar24;
              uVar21 = (uVar21 << 0x10 | uVar21 >> 0x30) ^ uVar22;
              uVar22 = uVar22 + uVar20;
              uVar24 = (uVar24 << 0x20 | uVar24 >> 0x20) + uVar21;
              uVar20 = (uVar20 << 0x11 | uVar20 >> 0x2f) ^ uVar22;
              uVar21 = (uVar21 << 0x15 | uVar21 >> 0x2b) ^ uVar24;
              lVar25 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar21;
              uVar20 = (uVar20 << 0xd | uVar20 >> 0x33) ^ uVar24 + uVar20;
              lVar26 = lVar25 + uVar20;
              uVar30 = (uint)((ulonglong)lVar26 >> 0x20) ^ (uint)lVar26 ^
                       ((uint)(uVar21 >> 0x10) ^ (uint)((ulonglong)lVar25 >> 0x20)) >> 0xb ^
                       (uint)(uVar20 >> 0x2f);
              in_R11 = CONCAT71((int7)((ulonglong)lVar23 >> 8),lVar34 == 0) & 0xffffffff;
            }
            else {
              uVar30 = (local_298 != 0 ^ 0x84222325) * 0xaef4a21;
              if (local_298 == 0) {
                pppppppbVar19 = (byte *******)((ulonglong)pppppppbStack_290 & 0xff);
                uVar30 = ((uint)pppppppbVar19 ^ 0x281a39c5) * 0xaef4a21;
                in_R11 = CONCAT71((int7)(in_R11 >> 8),1);
              }
              else {
                pppppppbVar19 = pppppppbStack_290;
                if (local_288._0_8_ == 0) {
                  in_R11 = 0;
                }
                else {
                  uVar20 = (ulonglong)(byte)local_288[0] & 7;
                  pppppppbVar18 = pppppppbStack_290;
                  if (uVar20 != 0) {
                    do {
                      bVar10 = *(byte *)pppppppbVar18;
                      pppppppbVar18 = (byte *******)((longlong)pppppppbVar18 + 1);
                      uVar30 = (bVar10 ^ uVar30) * 0x1b3;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                  if (7 < (ulonglong)local_288._0_8_) {
                    do {
                      bVar10 = *(byte *)pppppppbVar18;
                      pbVar1 = (byte *)((longlong)pppppppbVar18 + 1);
                      pbVar2 = (byte *)((longlong)pppppppbVar18 + 2);
                      pbVar3 = (byte *)((longlong)pppppppbVar18 + 3);
                      pbVar4 = (byte *)((longlong)pppppppbVar18 + 4);
                      pbVar5 = (byte *)((longlong)pppppppbVar18 + 5);
                      pbVar6 = (byte *)((longlong)pppppppbVar18 + 6);
                      pbVar7 = (byte *)((longlong)pppppppbVar18 + 7);
                      pppppppbVar18 = pppppppbVar18 + 1;
                      uVar30 = ((uint)*pbVar7 ^
                               ((uint)*pbVar6 ^
                               ((uint)*pbVar5 ^
                               ((uint)*pbVar4 ^
                               ((uint)*pbVar3 ^
                               ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar10 ^ uVar30) * 0x1b3) * 0x1b3)
                               * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
                    } while (pppppppbVar18 !=
                             (byte *******)((longlong)pppppppbStack_290 + local_288._0_8_));
                  }
                  in_R11 = 0;
                }
              }
            }
            uVar21 = local_e8;
            lVar23 = local_f0;
            local_260 = (ulonglong)(uVar30 & 0x7fff);
            uVar22 = (ulonglong)local_e0;
            uVar24 = (ulonglong)(uVar30 & 0x7fff & (uint)local_e0);
            local_170 = local_110;
            local_d8 = local_288._0_8_;
            uVar28 = 0;
            pppppppbVar18 = pppppppbStack_290;
            lVar34 = local_118;
            do {
              uVar20 = local_1f0;
              bVar36 = uVar21 <= uVar24;
              if (bVar36) {
                uVar24 = 0;
              }
              if (bVar36 && uVar21 == 0) {
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
              uVar29 = (ulonglong)*(ushort *)(lVar23 + uVar24 * 4);
              if (uVar29 == 0xffff) {
                uVar37 = (*(code *)PTR_from_0079a2e0)();
                uVar21 = local_110;
                if (0x7fff < local_110) {
                  local_258 = local_2c0;
                  uStack_250 = uVar20;
                  local_228 = plVar33;
                  uVar37 = (**(code **)(local_268 + 0x20))(uVar37,local_270);
                  if (local_210 != (byte *******)0x0) {
                    (*(code *)local_210[4])(uVar37,local_200);
                  }
                  goto LAB_0066871f;
                }
                uVar31 = (undefined2)local_260;
                local_188 = local_200;
                uStack_180 = uStack_1f8;
                local_198 = local_210;
                uStack_190 = uStack_208;
                local_1c8._8_8_ = local_268;
                local_1b8._8_8_ = local_270;
                local_1b8._0_8_ = local_2a8;
                local_1a8._8_8_ = local_1e0;
                local_1a8._0_8_ = local_2b0;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = local_1d8._8_8_;
                local_1d8 = auVar13 << 0x40;
                local_178 = uVar31;
                if (local_110 == local_120) {
                  (*(code *)PTR_grow_one_0079a2e8)();
                }
                lVar23 = uVar21 * 0x68;
                *(ulonglong *)(local_118 + 0x60 + lVar23) = CONCAT62(uStack_176,local_178);
                puVar9 = (undefined8 *)(local_118 + 0x50 + lVar23);
                *puVar9 = local_188;
                puVar9[1] = uStack_180;
                puVar9 = (undefined8 *)(local_118 + 0x40 + lVar23);
                *puVar9 = local_198;
                puVar9[1] = uStack_190;
                puVar8 = (undefined4 *)(local_118 + 0x30 + lVar23);
                *puVar8 = local_1a8._0_4_;
                puVar8[1] = local_1a8._4_4_;
                puVar8[2] = local_1a8._8_4_;
                puVar8[3] = local_1a8._12_4_;
                puVar8 = (undefined4 *)(local_118 + 0x20 + lVar23);
                *puVar8 = local_1b8._0_4_;
                puVar8[1] = local_1b8._4_4_;
                puVar8[2] = local_1b8._8_4_;
                puVar8[3] = local_1b8._12_4_;
                *(undefined1 (*) [16])(local_118 + 0x10 + lVar23) = local_1c8;
                *(undefined8 *)(local_118 + lVar23) = local_1d8._0_8_;
                ((undefined8 *)(local_118 + lVar23))[1] = local_1d8._8_8_;
                local_110 = uVar21 + 1;
                if (uVar24 < local_e8) {
                  *(short *)(local_f0 + uVar24 * 4) = (short)local_170;
                  *(undefined2 *)(local_f0 + 2 + uVar24 * 4) = uVar31;
                  plVar32 = local_1e8;
                  uVar37 = local_1d8._0_8_;
                  goto LAB_00667c66;
                }
                local_258 = local_2c0;
                uStack_250 = uVar20;
                local_228 = plVar33;
                (*(code *)PTR_panic_bounds_check_00799520)
                          (lVar23,&
                                  PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790948
                          );
                goto LAB_006687d5;
              }
              uVar11 = *(ushort *)(lVar23 + 2 + uVar24 * 4);
              uVar30 = (uint)uVar11 & (uint)uVar22;
              if (((int)uVar24 - uVar30 & (uint)uVar22) < uVar28) {
                bVar36 = (int)local_c8 != 2;
                uVar37 = (*(code *)PTR_from_0079a2e0)();
                uVar21 = local_110;
                if (local_110 < 0x8000) {
                  local_178 = (undefined2)local_260;
                  local_188 = local_200;
                  uStack_180 = uStack_1f8;
                  local_198 = local_210;
                  uStack_190 = uStack_208;
                  local_1c8._8_8_ = local_268;
                  local_1b8._8_8_ = local_270;
                  local_1b8._0_8_ = local_2a8;
                  local_1a8._8_8_ = local_1e0;
                  local_1a8._0_8_ = local_2b0;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = local_1d8._8_8_;
                  local_1d8 = auVar14 << 0x40;
                  if (local_110 == local_120) {
                    (*(code *)PTR_grow_one_0079a2e8)();
                  }
                  lVar23 = uVar21 * 0x68;
                  *(ulonglong *)(local_118 + 0x60 + lVar23) = CONCAT62(uStack_176,local_178);
                  puVar9 = (undefined8 *)(local_118 + 0x50 + lVar23);
                  *puVar9 = local_188;
                  puVar9[1] = uStack_180;
                  puVar9 = (undefined8 *)(local_118 + 0x40 + lVar23);
                  *puVar9 = local_198;
                  puVar9[1] = uStack_190;
                  puVar9 = (undefined8 *)(local_118 + 0x30 + lVar23);
                  *puVar9 = local_1a8._0_8_;
                  puVar9[1] = local_1a8._8_8_;
                  puVar9 = (undefined8 *)(local_118 + 0x20 + lVar23);
                  *puVar9 = local_1b8._0_8_;
                  puVar9[1] = local_1b8._8_8_;
                  *(undefined1 (*) [16])(local_118 + 0x10 + lVar23) = local_1c8;
                  *(undefined8 *)(local_118 + lVar23) = local_1d8._0_8_;
                  ((undefined8 *)(local_118 + lVar23))[1] = local_1d8._8_8_;
                  local_110 = uVar21 + 1;
                  uVar22 = 0;
                  while( true ) {
                    bVar35 = local_e8 <= uVar24;
                    if (bVar35) {
                      uVar24 = 0;
                    }
                    if (bVar35 && local_e8 == 0) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    uVar11 = *(ushort *)(local_f0 + uVar24 * 4);
                    uVar31 = (undefined2)local_260;
                    if (uVar11 == 0xffff) break;
                    uVar22 = uVar22 + 1;
                    local_260 = (ulonglong)*(ushort *)(local_f0 + 2 + uVar24 * 4);
                    *(short *)(local_f0 + uVar24 * 4) = (short)uVar21;
                    *(undefined2 *)(local_f0 + 2 + uVar24 * 4) = uVar31;
                    uVar24 = uVar24 + 1;
                    uVar21 = (ulonglong)uVar11;
                  }
                  *(short *)(local_f0 + uVar24 * 4) = (short)uVar21;
                  *(undefined2 *)(local_f0 + 2 + uVar24 * 4) = uVar31;
                  if ((bVar36 && 0x1ff < uVar28 || 0x7f < uVar22) && (local_138 == 0)) {
                    local_138 = 1;
                  }
                  plVar32 = local_1e8;
                  uVar37 = local_1d8._0_8_;
                  goto LAB_00667c66;
                }
                local_258 = local_2c0;
                uStack_250 = uVar20;
                local_228 = plVar33;
                uVar37 = (**(code **)(local_268 + 0x20))(uVar37,local_270);
                if (local_210 != (byte *******)0x0) {
                  (*(code *)local_210[4])(uVar37,local_200);
                }
                goto LAB_0066871f;
              }
              if (uVar11 != (ushort)local_260) goto LAB_00667f50;
              if (local_170 <= uVar29) {
                local_258 = local_2c0;
                uStack_250 = local_1f0;
                local_228 = plVar33;
                (*(code *)PTR_panic_bounds_check_00799520)
                          (uVar30,&
                                  PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790930
                          );
                goto LAB_006687d5;
              }
              lVar25 = *(longlong *)(lVar34 + 0x40 + uVar29 * 0x68);
              if ((bool)(char)in_R11 != (lVar25 != 0)) {
                lVar26 = uVar29 * 0x68 + lVar34;
                if (lVar25 == 0) {
                  if (*(char *)(lVar26 + 0x48) == (char)pppppppbVar19) goto LAB_00668046;
                }
                else if (*(longlong *)(lVar26 + 0x50) == local_d8) {
                  local_168 = (uint)in_R11;
                  local_c0 = pppppppbVar18;
                  local_b8 = lVar34;
                  local_b0 = uVar22;
                  iVar17 = (*(code *)PTR_bcmp_00799020)
                                     (CONCAT31((int3)(uVar30 >> 8),lVar25 != 0),local_d8);
                  in_R11 = (ulonglong)local_168;
                  pppppppbVar19 = (byte *******)((ulonglong)local_c0 & 0xffffffff);
                  pppppppbVar18 = local_c0;
                  uVar22 = local_b0;
                  lVar34 = local_b8;
                  if (iVar17 == 0) goto LAB_00668046;
                }
              }
LAB_00667f50:
              uVar28 = uVar28 + 1;
              uVar24 = uVar24 + 1;
            } while( true );
          }
          local_258 = local_2c0;
          uStack_250 = uVar20;
          local_228 = plVar33;
          (**(code **)(local_268 + 0x20))(extraout_XMM0_Qa_00,local_270);
LAB_0066871f:
          (*(code *)PTR_unwrap_failed_00799028)
                    (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_271,
                     &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00790900
                    );
          goto LAB_006687d5;
        }
LAB_00667c55:
        uVar37 = (**(code **)(uVar21 + 0x20))(extraout_XMM0_Qa,lVar23);
        goto LAB_00667c66;
      }
    }
    local_258 = 0;
    uStack_250 = uVar20;
    local_228 = plVar33;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <http[56314f485c23ccf6]::header::map::IntoIter<http[56314f485c23ccf6]::header::value::HeaderValue>>
              (&local_258);
    param_1 = local_d0;
    local_160 = 0;
    uStack_158 = 1;
    local_150 = 0;
    if ((char)local_164 == '\0') {
      uVar37 = (*(code *)PTR_write_headers_0079a2f8)();
    }
    else {
      uVar37 = (*(code *)PTR_write_headers_title_case_0079a2f0)();
    }
    if (local_150 == 0) {
      *param_1 = 0xffffffffffffffff;
      if (local_160 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar37,1);
      }
      uVar37 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <http[56314f485c23ccf6]::header::map::HeaderMap>(&local_138);
      if ((bVar15) && (local_298 != 0)) {
        uVar37 = (**(code **)(local_298 + 0x20))(uVar37,local_288._0_8_);
      }
    }
    else {
      lStack_248 = local_150;
      local_258 = local_160;
      uStack_250 = uStack_158;
      (*(code *)PTR_from_00799a68)();
      param_1[5] = local_1c8._0_8_;
      param_1[6] = local_1c8._8_8_;
      param_1[3] = local_1d8._0_8_;
      param_1[4] = local_1d8._8_8_;
      *param_1 = 4;
      param_1[1] = "0\r\n";
      param_1[2] = 3;
      param_1[7] = "\r\n";
      param_1[8] = 2;
      uVar37 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <http[56314f485c23ccf6]::header::map::HeaderMap>(&local_138,&local_258);
      if ((bVar15) && (local_298 != 0)) {
        uVar37 = (**(code **)(local_298 + 0x20))(uVar37,local_288._0_8_);
      }
    }
    if ((lStack_a0 != 0) && (lStack_a0 + (lStack_a0 * 8 + 0x17U & 0xfffffffffffffff0) != -0x11)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar37,0x10);
    }
  }
  return param_1;
LAB_00668046:
  uVar20 = local_1f0;
  uVar37 = http[56314f485c23ccf6]::header::map::append_value::
           <http[56314f485c23ccf6]::header::value::HeaderValue>
                     (uVar29,lVar26,&uStack_108,&local_160);
  plVar32 = local_1e8;
LAB_00667c66:
  plVar27 = plVar33;
  if (local_2c0 != 1) goto LAB_006679e0;
  if (local_238 <= uVar20) {
    local_258 = 1;
    uStack_250 = uVar20;
    local_228 = plVar33;
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar37,&
                      PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00791808
              );
LAB_006687d5:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  lVar34 = local_240 + uVar20 * 0x48;
  bVar36 = *(char *)(local_240 + 0x10 + uVar20 * 0x48) != '\0';
  if (bVar36) {
    uVar20 = *(ulonglong *)(lVar34 + 0x18);
  }
  local_2c0 = (ulonglong)bVar36;
  uVar21 = *(ulonglong *)(lVar34 + 0x20);
  local_2a8 = *(longlong *)(lVar34 + 0x28);
  lVar23 = *(longlong *)(lVar34 + 0x30);
  local_2b0 = *(longlong *)(lVar34 + 0x38);
  local_1e0 = *(longlong *)(lVar34 + 0x40);
  goto LAB_00667adf;
}


