// 00530b50 feed_sse_frame

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::feed_sse_frame */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>::feed_sse_frame
          (longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined3 uVar36;
  undefined5 uVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [14];
  int iVar40;
  longlong *plVar41;
  char *pcVar42;
  undefined *puVar43;
  byte bVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong extraout_RDX;
  ulonglong uVar47;
  ulonglong extraout_RDX_00;
  ulonglong uVar48;
  longlong lVar49;
  undefined1 *puVar50;
  undefined8 uVar51;
  longlong lVar52;
  char *pcVar53;
  longlong lVar54;
  longlong lVar55;
  undefined8 *puVar56;
  uint uVar57;
  int *piVar58;
  ulonglong uVar59;
  longlong *plVar60;
  bool bVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  longlong lVar64;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  longlong local_268;
  longlong local_250;
  char *local_240;
  byte local_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  char cStack_224;
  char cStack_223;
  char cStack_222;
  char cStack_221;
  byte bStack_220;
  char cStack_21f;
  char cStack_21e;
  char cStack_21d;
  char cStack_21c;
  char cStack_21b;
  char cStack_21a;
  char cStack_219;
  undefined1 local_218 [16];
  ulonglong local_208;
  ulonglong uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ulonglong local_1c8;
  byte local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  undefined1 local_1b9;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  char *local_198;
  char *local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 uStack_170;
  ulonglong local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  byte local_120;
  undefined4 local_11f;
  undefined2 local_11b;
  undefined1 local_119;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_38;
  
  local_118 = ZEXT816(1) << 0x40;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = local_108._8_8_;
  local_108 = auVar68 << 0x40;
  (*(code *)PTR_new_00799a18)(&DAT_0019b9d2,param_3,2);
  auStack_130._8_8_ = local_1c8;
  auStack_130._0_8_ = uStack_1d0;
  auStack_140._8_8_ = local_1d8;
  auStack_140._0_8_ = uStack_1e0;
  local_188 = CONCAT17(cStack_221,
                       CONCAT16(cStack_222,
                                CONCAT15(cStack_223,
                                         CONCAT14(cStack_224,
                                                  CONCAT13(cStack_225,
                                                           CONCAT12(cStack_226,
                                                                    CONCAT11(cStack_227,local_228)))
                                                 ))));
  lStack_180 = CONCAT17(cStack_219,
                        CONCAT16(cStack_21a,
                                 CONCAT15(cStack_21b,
                                          CONCAT14(cStack_21c,
                                                   CONCAT13(cStack_21d,
                                                            CONCAT12(cStack_21e,
                                                                     CONCAT11(cStack_21f,bStack_220)
                                                                    ))))));
  local_158 = local_1f8;
  auStack_150._8_8_ = local_1e8;
  auStack_150._0_8_ = uStack_1f0;
  local_168 = local_208;
  uStack_160 = uStack_200;
  local_178 = local_218._0_8_;
  uStack_170 = local_218._8_8_;
  local_268 = 1;
  lVar54 = 0;
  lVar64 = 0;
  while( true ) {
    uVar62 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_228,&local_188);
    if (local_228 == 0) break;
    lVar55 = CONCAT17(cStack_219,
                      CONCAT16(cStack_21a,
                               CONCAT15(cStack_21b,
                                        CONCAT14(cStack_21c,
                                                 CONCAT13(cStack_21d,
                                                          CONCAT12(cStack_21e,
                                                                   CONCAT11(cStack_21f,bStack_220)))
                                                ))));
    uVar51 = local_218._0_8_;
    uVar48 = lVar55 - lVar64;
    if ((ulonglong)(local_118._0_8_ - lVar54) < uVar48) {
      uVar62 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(local_118,lVar54,uVar48,1,1);
      lVar54 = local_108._0_8_;
    }
    if (lVar55 != lVar64) {
      (*(code *)PTR_memcpy_00799008)(uVar62,uVar48);
    }
    lVar54 = lVar54 + uVar48;
    local_108._0_8_ = lVar54;
    if (local_118._0_8_ == lVar54) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(local_118,lVar54,1,1,1);
    }
    local_268 = local_118._8_8_;
    *(undefined1 *)(local_118._8_8_ + local_108._0_8_) = 10;
    lVar54 = local_108._0_8_ + 1;
    local_108._0_8_ = lVar54;
    lVar64 = uVar51;
  }
  uVar48 = param_3 - lVar64;
  if ((ulonglong)(local_118._0_8_ - lVar54) < uVar48) {
    uVar62 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(local_118,lVar54,uVar48,1,1);
    local_268 = local_118._8_8_;
    lVar54 = local_108._0_8_;
  }
  if (param_3 != lVar64) {
    (*(code *)PTR_memcpy_00799008)(uVar62,uVar48);
  }
  uStack_200 = lVar54 + uVar48;
  if (uStack_200 < 2) {
  }
  else if (*(short *)(local_268 + -2 + uStack_200) == 0xa0a) {
    uStack_200 = uStack_200 - 2;
  }
  uVar62 = local_118._0_8_;
  local_1b8 = 0;
  local_1b0 = 8;
  local_1a8 = 0;
  local_228 = 0;
  cStack_227 = '\0';
  cStack_226 = '\0';
  cStack_225 = '\0';
  cStack_224 = '\0';
  cStack_223 = '\0';
  cStack_222 = '\0';
  cStack_221 = '\0';
  bStack_220 = (byte)uStack_200;
  cStack_21f = (char)(uStack_200 >> 8);
  cStack_21e = (char)(uStack_200 >> 0x10);
  cStack_21d = (char)(uStack_200 >> 0x18);
  cStack_21c = (char)(uStack_200 >> 0x20);
  cStack_21b = (char)(uStack_200 >> 0x28);
  cStack_21a = (char)(uStack_200 >> 0x30);
  cStack_219 = (char)(uStack_200 >> 0x38);
  local_218._8_8_ = uStack_200;
  local_218._0_8_ = local_268;
  local_208 = 0;
  local_1f8 = 0xa0000000a;
  uStack_1f0 = CONCAT71(uStack_1f0._1_7_,1);
  local_1e8 = CONCAT62(local_1e8._2_6_,1);
  do {
    uVar51 = local_218._0_8_;
    uVar63 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
             ::next_match(&local_188,local_218);
    lVar54 = local_1a8;
    if ((int)local_188 == 1) {
      lVar64 = CONCAT17(cStack_221,
                        CONCAT16(cStack_222,
                                 CONCAT15(cStack_223,
                                          CONCAT14(cStack_224,
                                                   CONCAT13(cStack_225,
                                                            CONCAT12(cStack_226,
                                                                     CONCAT11(cStack_227,local_228))
                                                           )))));
      uVar48 = lStack_180 - lVar64;
      piVar58 = (int *)(uVar51 + lVar64);
      local_228 = (byte)local_178;
      cStack_227 = (char)((ulonglong)local_178 >> 8);
      cStack_226 = (char)((ulonglong)local_178 >> 0x10);
      cStack_225 = (char)((ulonglong)local_178 >> 0x18);
      cStack_224 = (char)((ulonglong)local_178 >> 0x20);
      cStack_223 = (char)((ulonglong)local_178 >> 0x28);
      cStack_222 = (char)((ulonglong)local_178 >> 0x30);
      cStack_221 = (char)((ulonglong)local_178 >> 0x38);
    }
    else {
      if (local_1e8._1_1_ != '\0') break;
      local_1e8._0_2_ = CONCAT11(1,(byte)local_1e8);
      lVar64 = CONCAT17(cStack_221,
                        CONCAT16(cStack_222,
                                 CONCAT15(cStack_223,
                                          CONCAT14(cStack_224,
                                                   CONCAT13(cStack_225,
                                                            CONCAT12(cStack_226,
                                                                     CONCAT11(cStack_227,local_228))
                                                           )))));
      uVar48 = CONCAT17(cStack_219,
                        CONCAT16(cStack_21a,
                                 CONCAT15(cStack_21b,
                                          CONCAT14(cStack_21c,
                                                   CONCAT13(cStack_21d,
                                                            CONCAT12(cStack_21e,
                                                                     CONCAT11(cStack_21f,bStack_220)
                                                                    )))))) - lVar64;
      if ((uVar48 != 0 | (byte)local_1e8) != 1) break;
      piVar58 = (int *)(lVar64 + local_218._0_8_);
    }
    if ((4 < uVar48) && ((char)piVar58[1] == ':' && *piVar58 == 0x61746164)) {
      lVar64 = (longlong)piVar58 + 5;
      if (uVar48 - 5 == 0) {
        lVar55 = 0;
      }
      else {
        lVar55 = uVar48 - 5;
        if (*(char *)((longlong)piVar58 + 5) == ' ') {
          lVar64 = (longlong)piVar58 + 6;
          lVar55 = uVar48 - 6;
        }
      }
      if (local_1a8 == local_1b8) {
        uVar63 = <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                 ::grow_one(&local_1b8);
      }
      lVar45 = lVar54 * 0x10;
      *(longlong *)(local_1b0 + lVar45) = lVar64;
      *(longlong *)(local_1b0 + 8 + lVar45) = lVar55;
      local_1a8 = lVar54 + 1;
    }
  } while (local_1e8._1_1_ == '\0');
  if (local_1a8 != 0) {
    alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
              (&local_228,local_1b0,local_1a8,
               &anon_ec7f14c74815bf4c93b295cfd0665412_166_llvm_7806621557641746444,1);
    lVar54 = CONCAT17(cStack_221,
                      CONCAT16(cStack_222,
                               CONCAT15(cStack_223,
                                        CONCAT14(cStack_224,
                                                 CONCAT13(cStack_225,
                                                          CONCAT12(cStack_226,
                                                                   CONCAT11(cStack_227,local_228))))
                                       )));
    local_208 = CONCAT17(cStack_219,
                         CONCAT16(cStack_21a,
                                  CONCAT15(cStack_21b,
                                           CONCAT14(cStack_21c,
                                                    CONCAT13(cStack_21d,
                                                             CONCAT12(cStack_21e,
                                                                      CONCAT11(cStack_21f,bStack_220
                                                                              )))))));
    uStack_200 = local_218._0_8_;
    local_228 = bStack_220;
    cStack_227 = cStack_21f;
    cStack_226 = cStack_21e;
    cStack_225 = cStack_21d;
    cStack_224 = cStack_21c;
    cStack_223 = cStack_21b;
    cStack_222 = cStack_21a;
    cStack_221 = cStack_219;
    bStack_220 = local_218[0];
    cStack_21f = local_218[1];
    cStack_21e = local_218[2];
    cStack_21d = local_218[3];
    cStack_21c = local_218[4];
    cStack_21b = local_218[5];
    cStack_21a = local_218[6];
    cStack_219 = local_218[7];
    local_218 = (undefined1  [16])0x0;
    serde_json[dc3825464c436029]::de::from_trait::
    <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
              (&local_188,&local_228);
    if ((char)local_188 == -1) {
      uVar63 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                         (&lStack_180);
      if (lVar54 != 0) {
        uVar63 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar63,1);
      }
    }
    else {
      local_68 = local_178;
      uStack_60 = uStack_170;
      local_78 = local_188;
      lStack_70 = lStack_180;
      lVar64 = local_188;
      if (lVar54 != 0) {
        lVar64 = (*(code *)PTR___rust_dealloc_00798fc8)(local_188,1);
      }
      plVar41 = (longlong *)(*(code *)PTR_index_into_00799300)(lVar64,&local_78);
      plVar60 = &local_78;
      if (plVar41 != (longlong *)0x0) {
        plVar60 = plVar41;
      }
      uVar51 = 10;
      pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa,plVar60);
      if (((pcVar42 != (char *)0x0) && (*pcVar42 == '\x04')) && (*(longlong *)(pcVar42 + 0x18) != 0)
         ) {
        uVar51 = 7;
        lVar54 = (*(code *)PTR_index_into_00799300)
                           (extraout_XMM0_Qa_00,*(undefined8 *)(pcVar42 + 0x10));
        if (lVar54 != 0) {
          uVar51 = 5;
          pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_01,lVar54);
          if ((pcVar42 != (char *)0x0) && (*pcVar42 == '\x04')) {
            local_48 = 0;
            local_38 = 0;
            local_50[0] = 5;
            if (*(longlong *)(pcVar42 + 0x18) != 0) {
              lVar54 = *(longlong *)(pcVar42 + 0x10);
              local_98 = *(longlong *)(pcVar42 + 0x18) * 0x20 + lVar54;
              local_a0 = param_1 + 9;
              local_b0 = param_1 + 3;
              local_a8 = param_1 + 6;
              uVar51 = extraout_XMM0_Qa_02;
LAB_005311cb:
              pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(uVar51,lVar54);
              uVar51 = extraout_XMM0_Qa_03;
              if (pcVar42 == (char *)0x0) {
                pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_03,lVar54);
                uVar51 = extraout_XMM0_Qa_04;
                if (pcVar42 != (char *)0x0) goto LAB_00531203;
              }
              else {
LAB_00531203:
                if ((*pcVar42 == '\x03') && (lVar64 = *(longlong *)(pcVar42 + 0x18), lVar64 != 0)) {
                  lVar55 = param_1[0xb];
                  if (lVar55 != 0) {
                    lVar45 = param_1[10];
                    lVar49 = 0;
                    do {
                      if (*(longlong *)(lVar45 + 0x10 + lVar49) == lVar64) {
                        iVar40 = (*(code *)PTR_bcmp_00799020)(uVar51,lVar64);
                        uVar51 = extraout_XMM0_Qa_05;
                        if (iVar40 == 0) goto LAB_005312f6;
                      }
                      lVar49 = lVar49 + 0x18;
                    } while (lVar55 * 0x18 != lVar49);
                  }
                  if (-1 < lVar64) {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    lVar55 = (*(code *)PTR___rust_alloc_00799000)();
                    if (lVar55 != 0) {
                      uVar51 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,lVar64);
                      lVar45 = param_1[0xb];
                      if (lVar45 == param_1[9]) {
                        uVar51 = (*(code *)PTR_grow_one_00799328)();
                      }
                      lVar49 = param_1[10];
                      *(longlong *)(lVar49 + lVar45 * 0x18) = lVar64;
                      *(longlong *)(lVar49 + 8 + lVar45 * 0x18) = lVar55;
                      *(longlong *)(lVar49 + 0x10 + lVar45 * 0x18) = lVar64;
                      param_1[0xb] = lVar45 + 1;
                      goto LAB_005312f6;
                    }
                  }
LAB_00531fdf:
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_00532010;
                }
              }
LAB_005312f6:
              pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(uVar51,lVar54);
              uVar51 = extraout_XMM0_Qa_07;
              if ((pcVar42 != (char *)0x0) && (*pcVar42 == '\x03')) {
                uVar48 = *(ulonglong *)(pcVar42 + 0x18);
                pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_07,lVar54);
                uVar51 = extraout_XMM0_Qa_08;
                if ((pcVar42 == (char *)0x0) || ((*pcVar42 != '\x01' || (pcVar42[1] == '\0')))) {
                  if (uVar48 != 0) {
                    *(undefined1 *)(param_1 + 0xc) = 1;
                  }
                  uVar47 = param_1[2];
                  puVar43 = (undefined *)(uVar47 + uVar48);
                  if (CARRY8(uVar47,uVar48)) {
                    puVar43 = (undefined *)0xffffffffffffffff;
                  }
                  if (puVar43 < &DAT_00400001) {
                    if (*param_1 - uVar47 < uVar48) {
                      uVar51 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                               do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                         (param_1,uVar47,uVar48,1,1);
LAB_00531393:
                      uVar51 = (*(code *)PTR_memcpy_00799008)(uVar51,uVar48);
                      uVar47 = param_1[2];
                    }
                    else if (uVar48 != 0) goto LAB_00531393;
                    param_1[2] = uVar47 + uVar48;
                  }
                }
              }
              pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(uVar51,lVar54);
              uVar51 = extraout_XMM0_Qa_09;
              if (pcVar42 == (char *)0x0) {
                pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_09,lVar54);
                uVar51 = extraout_XMM0_Qa_10;
                if (pcVar42 != (char *)0x0) goto LAB_005313ee;
              }
              else {
LAB_005313ee:
                if ((*pcVar42 == '\x05') && (lVar64 = *(longlong *)(pcVar42 + 8), lVar64 != 0)) {
                  local_240 = *(char **)(pcVar42 + 0x10);
                  lVar55 = lVar64;
                  local_198 = pcVar42;
                  local_190 = local_240;
                  while( true ) {
                    uVar48 = (ulonglong)*(ushort *)(lVar55 + 0x272);
                    uVar47 = (ulonglong)((uint)*(ushort *)(lVar55 + 0x272) * 8);
                    lVar45 = uVar47 * 3;
                    uVar59 = 0xffffffffffffffff;
                    lVar49 = lVar55 + 0x168;
                    plVar60 = (longlong *)(lVar55 + -8);
                    do {
                      plVar41 = plVar60;
                      if (lVar45 == 0) goto LAB_005314b9;
                      uVar46 = *(ulonglong *)(lVar49 + 0x10);
                      lVar52 = uVar46 - 4;
                      if (3 < uVar46) {
                        uVar46 = 4;
                      }
                      iVar40 = (*(code *)PTR_memcmp_00799528)(uVar47,uVar46);
                      lVar52 = -lVar52;
                      if (iVar40 != 0) {
                        lVar52 = (longlong)iVar40;
                      }
                      bVar44 = (0 < lVar52) - (lVar52 < 0);
                      uVar47 = (ulonglong)bVar44;
                      uVar59 = uVar59 + 1;
                      lVar45 = lVar45 + -0x18;
                      lVar49 = lVar49 + 0x18;
                      plVar60 = plVar41 + 4;
                      uVar51 = extraout_XMM0_Qa_11;
                    } while (bVar44 == 1);
                    uVar48 = uVar59;
                    if (bVar44 == 0) break;
LAB_005314b9:
                    bVar61 = local_240 == (char *)0x0;
                    local_240 = local_240 + -1;
                    if (bVar61) goto LAB_005315d7;
                    lVar55 = *(longlong *)(lVar55 + 0x278 + uVar48 * 8);
                  }
                  if (((char)plVar41[1] == '\x03') && (lVar55 = plVar41[4], lVar55 != 0)) {
                    local_c0 = plVar41[3];
                    local_b8 = lVar55;
                    goto LAB_00531510;
                  }
                }
              }
              goto LAB_005315d7;
            }
LAB_00531fba:
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_50);
            uVar63 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(&local_78);
            goto LAB_00531133;
          }
        }
      }
      uVar63 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                         (&local_78,uVar51);
    }
  }
LAB_00531133:
  if (local_1b8 != 0) {
    uVar63 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar63,8);
  }
  if (uVar62 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar63,1);
  }
  return;
LAB_00531510:
  uVar48 = (ulonglong)*(ushort *)(lVar64 + 0x272);
  uVar47 = (ulonglong)((uint)*(ushort *)(lVar64 + 0x272) * 8);
  lVar55 = uVar47 * 3;
  uVar59 = 0xffffffffffffffff;
  lVar45 = lVar64 + 0x168;
  plVar60 = (longlong *)(lVar64 + -8);
  do {
    plVar41 = plVar60;
    if (lVar55 == 0) goto LAB_005315a1;
    uVar46 = *(ulonglong *)(lVar45 + 0x10);
    lVar49 = uVar46 - 2;
    if (1 < uVar46) {
      uVar46 = 2;
    }
    iVar40 = (*(code *)PTR_memcmp_00799528)(uVar47,uVar46);
    pcVar42 = local_198;
    lVar49 = -lVar49;
    if (iVar40 != 0) {
      lVar49 = (longlong)iVar40;
    }
    bVar44 = (0 < lVar49) - (lVar49 < 0);
    uVar47 = (ulonglong)bVar44;
    plVar60 = plVar41 + 4;
    uVar59 = uVar59 + 1;
    lVar55 = lVar55 + -0x18;
    lVar45 = lVar45 + 0x18;
  } while (bVar44 == 1);
  uVar48 = uVar59;
  if (bVar44 == 0) {
    local_250 = 0xffffffffffffffff;
    if ((char)plVar41[1] != '\x03') goto LAB_00531d5b;
    lVar64 = *plVar60;
    uVar51 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                       (&local_228,lVar64,0,1,1);
    local_250 = CONCAT17(cStack_219,
                         CONCAT16(cStack_21a,
                                  CONCAT15(cStack_21b,
                                           CONCAT14(cStack_21c,
                                                    CONCAT13(cStack_21d,
                                                             CONCAT12(cStack_21e,
                                                                      CONCAT11(cStack_21f,bStack_220
                                                                              )))))));
    if (CONCAT13(cStack_225,CONCAT12(cStack_226,CONCAT11(cStack_227,local_228))) == 1)
    goto LAB_00531fdf;
    local_c8 = local_218._0_8_;
    if (lVar64 == 0) {
      local_1a0 = 0;
    }
    else {
      (*(code *)PTR_memcpy_00799008)(uVar51,lVar64);
      local_1a0 = lVar64;
    }
    goto LAB_00531d5b;
  }
LAB_005315a1:
  if (local_190 == (char *)0x0) goto LAB_00531d42;
  lVar64 = *(longlong *)(lVar64 + 0x278 + uVar48 * 8);
  local_190 = local_190 + -1;
  goto LAB_00531510;
LAB_00531d42:
  local_250 = 0xffffffffffffffff;
  pcVar42 = local_198;
LAB_00531d5b:
  lVar64 = *(longlong *)(pcVar42 + 8);
  if (lVar64 != 0) {
    local_240 = *(char **)(pcVar42 + 0x10);
    do {
      uVar48 = (ulonglong)*(ushort *)(lVar64 + 0x272);
      puVar50 = (undefined1 *)(lVar64 + -0x20);
      uVar47 = (ulonglong)((uint)*(ushort *)(lVar64 + 0x272) * 8);
      lVar55 = uVar47 * 3;
      uVar59 = 0xffffffffffffffff;
      lVar45 = lVar64 + 0x168;
      do {
        if (lVar55 == 0) goto LAB_00531e08;
        uVar46 = *(ulonglong *)(lVar45 + 0x10);
        lVar49 = uVar46 - 4;
        if (3 < uVar46) {
          uVar46 = 4;
        }
        iVar40 = (*(code *)PTR_memcmp_00799528)(uVar47,uVar46);
        lVar49 = -lVar49;
        if (iVar40 != 0) {
          lVar49 = (longlong)iVar40;
        }
        bVar44 = (0 < lVar49) - (lVar49 < 0);
        uVar47 = (ulonglong)bVar44;
        puVar50 = puVar50 + 0x20;
        uVar59 = uVar59 + 1;
        lVar55 = lVar55 + -0x18;
        lVar45 = lVar45 + 0x18;
      } while (bVar44 == 1);
      uVar48 = uVar59;
      if (bVar44 == 0) goto LAB_00531e4b;
LAB_00531e08:
      bVar61 = local_240 == (char *)0x0;
      local_240 = (char *)((longlong)local_240 + -1);
      if (bVar61) goto LAB_00531f8d;
      lVar64 = *(longlong *)(lVar64 + 0x278 + uVar48 * 8);
    } while( true );
  }
  puVar50 = (undefined1 *)0x0;
LAB_00531e4b:
  lVar64 = local_b8;
  if (puVar50 == (undefined1 *)0x0) {
    puVar50 = local_50;
  }
  local_118._8_8_ = local_c8;
  local_118._0_8_ = local_250;
  local_108._0_8_ = local_1a0;
  if (local_b8 < 0) {
LAB_00531ff2:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00532010:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar55 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar55 == 0) {
    local_d0 = lVar64;
    goto LAB_00531ff2;
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_15,lVar64);
  local_188 = lVar64;
  local_178 = lVar64;
  lStack_180 = lVar55;
  local_d0 = lVar55;
  <craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>::from_value
            (&local_228,local_118,&local_188,puVar50);
  lVar64 = param_1[5];
  if (lVar64 == param_1[3]) {
    <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>
    ::grow_one(local_b0);
  }
  lVar55 = param_1[4];
  lVar45 = lVar64 * 0x60;
  puVar1 = (undefined8 *)(lVar55 + 0x50 + lVar45);
  *puVar1 = local_1d8;
  puVar1[1] = uStack_1d0;
  puVar1 = (undefined8 *)(lVar55 + 0x40 + lVar45);
  *puVar1 = local_1e8;
  puVar1[1] = uStack_1e0;
  uVar51 = CONCAT17(cStack_221,
                    CONCAT16(cStack_222,
                             CONCAT15(cStack_223,
                                      CONCAT14(cStack_224,
                                               CONCAT13(cStack_225,
                                                        CONCAT12(cStack_226,
                                                                 CONCAT11(cStack_227,local_228))))))
                   );
  auVar69._8_8_ = uStack_200;
  auVar69._0_8_ = local_208;
  puVar1 = (undefined8 *)(lVar55 + 0x30 + lVar45);
  *puVar1 = local_1f8;
  puVar1[1] = uStack_1f0;
  *(undefined1 (*) [16])(lVar55 + 0x20 + lVar45) = auVar69;
  puVar1 = (undefined8 *)(lVar55 + 0x10 + lVar45);
  *puVar1 = local_218._0_8_;
  puVar1[1] = local_218._8_8_;
  *(undefined8 *)(lVar55 + lVar45) = uVar51;
  ((undefined8 *)(lVar55 + lVar45))[1] =
       CONCAT17(cStack_219,
                CONCAT16(cStack_21a,
                         CONCAT15(cStack_21b,
                                  CONCAT14(cStack_21c,
                                           CONCAT13(cStack_21d,
                                                    CONCAT12(cStack_21e,
                                                             CONCAT11(cStack_21f,bStack_220)))))));
  param_1[5] = lVar64 + 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
LAB_005315d7:
  pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(uVar51,lVar54);
  uVar51 = extraout_XMM0_Qa_12;
  if (pcVar42 == (char *)0x0) {
    pcVar42 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_12,lVar54);
    uVar51 = extraout_XMM0_Qa_13;
    if (pcVar42 == (char *)0x0) goto LAB_005311b4;
  }
  if (*pcVar42 == '\x05') {
    lVar64 = *(longlong *)(pcVar42 + 8);
    if (lVar64 != 0) {
      local_190 = pcVar42 + 8;
      local_250 = *(longlong *)(pcVar42 + 0x10);
      while( true ) {
        uVar48 = (ulonglong)*(ushort *)(lVar64 + 0x272);
        uVar47 = (ulonglong)((uint)*(ushort *)(lVar64 + 0x272) * 8);
        lVar55 = uVar47 * 3;
        uVar59 = 0xffffffffffffffff;
        lVar45 = lVar64 + 0x168;
        puVar1 = (undefined8 *)(lVar64 + -8);
        do {
          puVar56 = puVar1;
          if (lVar55 == 0) goto LAB_005316dd;
          uVar46 = *(ulonglong *)(lVar45 + 0x10);
          lVar49 = uVar46 - 4;
          if (3 < uVar46) {
            uVar46 = 4;
          }
          iVar40 = (*(code *)PTR_memcmp_00799528)(uVar47,uVar46);
          lVar49 = -lVar49;
          if (iVar40 != 0) {
            lVar49 = (longlong)iVar40;
          }
          bVar44 = (0 < lVar49) - (lVar49 < 0);
          uVar47 = (ulonglong)bVar44;
          uVar59 = uVar59 + 1;
          lVar55 = lVar55 + -0x18;
          lVar45 = lVar45 + 0x18;
          puVar1 = puVar56 + 4;
          uVar51 = extraout_XMM0_Qa_14;
        } while (bVar44 == 1);
        uVar48 = uVar59;
        if (bVar44 == 0) break;
LAB_005316dd:
        bVar61 = local_250 == 0;
        local_250 = local_250 + -1;
        if (bVar61) goto LAB_005311b4;
        lVar64 = *(longlong *)(lVar64 + 0x278 + uVar48 * 8);
      }
      uVar51 = extraout_XMM0_Qa_14;
      if (*(char *)(puVar56 + 1) == '\x03') {
        uVar63 = puVar56[3];
        uVar2 = puVar56[4];
        uVar51 = ::<str>::trim_matches::<<char>::is_whitespace>();
        if (extraout_RDX != 0) {
          lVar64 = *(longlong *)(pcVar42 + 8);
          if (lVar64 == 0) goto LAB_00531884;
          lVar55 = *(longlong *)(pcVar42 + 0x10);
          goto LAB_00531742;
        }
      }
    }
  }
LAB_005311b4:
  lVar54 = lVar54 + 0x20;
  if (lVar54 == local_98) goto LAB_00531fba;
  goto LAB_005311cb;
LAB_00531f8d:
  puVar50 = (undefined1 *)0x0;
  goto LAB_00531e4b;
LAB_00531742:
  local_198 = (char *)(ulonglong)*(ushort *)(lVar64 + 0x272);
  pcVar42 = (char *)(lVar64 + -0x20);
  uVar48 = (ulonglong)((uint)*(ushort *)(lVar64 + 0x272) * 8);
  lVar45 = uVar48 * 3;
  pcVar53 = (char *)0xffffffffffffffff;
  lVar49 = lVar64 + 0x168;
  do {
    if (lVar45 == 0) {
      pcVar53 = local_198;
      goto LAB_005317df;
    }
    uVar47 = *(ulonglong *)(lVar49 + 0x10);
    lVar52 = uVar47 - 8;
    if (7 < uVar47) {
      uVar47 = 8;
    }
    iVar40 = (*(code *)PTR_memcmp_00799528)(uVar48,uVar47);
    lVar52 = -lVar52;
    if (iVar40 != 0) {
      lVar52 = (longlong)iVar40;
    }
    bVar44 = (0 < lVar52) - (lVar52 < 0);
    uVar48 = (ulonglong)bVar44;
    pcVar42 = pcVar42 + 0x20;
    pcVar53 = pcVar53 + 1;
    lVar45 = lVar45 + -0x18;
    lVar49 = lVar49 + 0x18;
  } while (bVar44 == 1);
  if (bVar44 == 0) goto LAB_005318ad;
LAB_005317df:
  bVar61 = lVar55 == 0;
  lVar55 = lVar55 + -1;
  if (bVar61) goto LAB_00531884;
  lVar64 = *(longlong *)(lVar64 + 0x278 + (longlong)pcVar53 * 8);
  goto LAB_00531742;
LAB_00531884:
  pcVar42 = (char *)<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::get::<str>(local_190,&DAT_0019b5a6,9);
  if (pcVar42 == (char *)0x0) {
LAB_0053196c:
    uVar48 = 0x18;
LAB_005319c8:
    local_120 = 0;
    auStack_130 = (undefined1  [16])0x0;
    auStack_140 = (undefined1  [16])0x0;
    auStack_150 = (undefined1  [16])0x0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    local_188 = _DAT_0018cfe0;
    lStack_180 = _UNK_0018cfe8;
    local_178 = _DAT_0018cff0;
    uStack_170 = _UNK_0018cff8;
    uVar51 = (*(code *)PTR_memcpy_00799008)(_DAT_0018cfe0,uVar48);
  }
  else {
LAB_005318ad:
    if (*pcVar42 != '\x03') goto LAB_0053196c;
    uVar48 = *(ulonglong *)(pcVar42 + 0x18);
    auStack_130 = (undefined1  [16])0x0;
    auStack_140 = (undefined1  [16])0x0;
    auStack_150 = (undefined1  [16])0x0;
    uStack_160 = 0;
    local_158 = 0;
    local_120 = 0;
    local_178 = _DAT_0018cff0;
    uStack_170 = _UNK_0018cff8;
    local_188 = _DAT_0018cfe0;
    lStack_180 = _UNK_0018cfe8;
    if (uVar48 < 0x40) goto LAB_005319c8;
    local_168 = uVar48 >> 6;
    (*(code *)PTR_compress256_00799158)();
    uVar48 = (ulonglong)((uint)uVar48 & 0x3f);
    uVar51 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar48);
  }
  if (uVar48 == 0x3f) {
    auStack_130[0xf] = 0x3a;
    local_168 = local_168 + 1;
    local_120 = (char)uVar48;
    (*(code *)PTR_compress256_00799158)(uVar51,1);
    local_120 = 0;
  }
  else {
    auStack_150[uVar48 - 0x10] = 0x3a;
    local_120 = (char)uVar48 + 1;
  }
  uVar51 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar63,uVar2);
  bVar44 = local_120;
  uVar48 = 0x40 - (ulonglong)local_120;
  if (extraout_RDX_00 < uVar48) {
    (*(code *)PTR_memcpy_00799008)(uVar51,extraout_RDX_00);
    bVar44 = (char)extraout_RDX_00 + bVar44;
  }
  else {
    uVar47 = extraout_RDX_00;
    if ((ulonglong)local_120 != 0) {
      uVar51 = (*(code *)PTR_memcpy_00799008)(uVar51,uVar48);
      local_168 = local_168 + 1;
      (*(code *)PTR_compress256_00799158)(uVar51,1);
      uVar47 = extraout_RDX_00 - uVar48;
    }
    if (uVar47 >> 6 != 0) {
      local_168 = local_168 + (uVar47 >> 6);
      (*(code *)PTR_compress256_00799158)();
    }
    uVar57 = (uint)uVar47 & 0x3f;
    bVar44 = (byte)uVar57;
    (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar57);
  }
  lVar64 = local_188;
  local_1c8 = auStack_130._8_8_;
  local_1bf = local_11f;
  local_1bb = local_11b;
  local_1b9 = local_119;
  local_208 = local_168;
  uStack_200 = uStack_160;
  local_1d8 = auStack_140._8_8_;
  uStack_1d0 = auStack_130._0_8_;
  local_1e8 = auStack_150._8_8_;
  uStack_1e0 = auStack_140._0_8_;
  local_1f8 = local_158;
  uStack_1f0 = auStack_150._0_8_;
  local_218._8_8_ = uStack_170;
  local_218._0_8_ = local_178;
  local_228 = (byte)local_188;
  cStack_227 = (char)((ulonglong)local_188 >> 8);
  cStack_226 = (char)((ulonglong)local_188 >> 0x10);
  cStack_225 = (char)((ulonglong)local_188 >> 0x18);
  cStack_224 = (char)((ulonglong)local_188 >> 0x20);
  cStack_223 = (char)((ulonglong)local_188 >> 0x28);
  cStack_222 = (char)((ulonglong)local_188 >> 0x30);
  cStack_221 = (char)((ulonglong)local_188 >> 0x38);
  bStack_220 = (byte)lStack_180;
  cStack_21f = (char)((ulonglong)lStack_180 >> 8);
  cStack_21e = (char)((ulonglong)lStack_180 >> 0x10);
  cStack_21d = (char)((ulonglong)lStack_180 >> 0x18);
  cStack_21c = (char)((ulonglong)lStack_180 >> 0x20);
  cStack_21b = (char)((ulonglong)lStack_180 >> 0x28);
  cStack_21a = (char)((ulonglong)lStack_180 >> 0x30);
  cStack_219 = (char)((ulonglong)lStack_180 >> 0x38);
  uVar48 = local_168 << 9;
  uVar48 = (local_168 & 0x7fffffffffffff) >> 0x2f | (uVar48 & 0xff000000000000) >> 0x28 |
           (uVar48 & 0xff0000000000) >> 0x18 | (uVar48 & 0xff00000000) >> 8 |
           (uVar48 & 0xff000000) << 8 | (uVar48 & 0xff0000) << 0x18 |
           (((uint)bVar44 * 8 | uVar48) & 0xff00) << 0x28 | (ulonglong)((uint)bVar44 * 8) << 0x38;
  local_1c0 = bVar44;
  local_120 = bVar44;
  *(undefined1 *)((longlong)&uStack_200 + (ulonglong)bVar44) = 0x80;
  if ((bVar44 == 0x3f) ||
     (lVar64 = (*(code *)PTR_memset_00799090)(lVar64,(ulonglong)bVar44 ^ 0x3f), (bVar44 ^ 0x38) < 8)
     ) {
    (*(code *)PTR_compress256_00799158)(lVar64,1);
    local_f8 = (undefined1  [16])0x0;
    local_108 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    local_e8 = 0;
    local_e0 = uVar48;
    (*(code *)PTR_compress256_00799158)(0,1);
  }
  else {
    local_1c8 = uVar48;
    (*(code *)PTR_compress256_00799158)(lVar64,1);
  }
  uVar36 = CONCAT12(cStack_21f,CONCAT11(bStack_220,cStack_221));
  uVar57 = CONCAT13(cStack_21e,uVar36);
  uVar37 = CONCAT14(cStack_21d,uVar57);
  auVar39[5] = cStack_21c;
  auVar39._0_5_ = uVar37;
  auVar67[1] = 0;
  auVar67[0] = bStack_220;
  auVar67[2] = cStack_21f;
  auVar67[3] = 0;
  auVar67[4] = cStack_21e;
  auVar67[5] = 0;
  auVar67[6] = cStack_21d;
  auVar67[7] = 0;
  auVar67[8] = cStack_21c;
  auVar67[9] = 0;
  auVar67[10] = cStack_21b;
  auVar67[0xb] = 0;
  auVar67[0xc] = cStack_21a;
  auVar67[0xd] = 0;
  auVar67[0xe] = cStack_219;
  auVar67[0xf] = 0;
  auVar68 = pshuflw(auVar67,auVar67,0x1b);
  auVar69 = pshufhw(auVar68,auVar68,0x1b);
  auVar39._6_8_ = 0;
  auVar20[0xe] = cStack_221;
  auVar20._0_14_ = auVar39 << 0x38;
  auVar38._4_8_ = 0;
  auVar38._0_4_ = uVar57;
  auVar23._12_3_ = (int3)(CONCAT26(auVar20._13_2_,CONCAT15(cStack_222,uVar37)) >> 0x28);
  auVar23._0_12_ = auVar38 << 0x38;
  auVar26._10_5_ = (int5)(CONCAT44(auVar23._11_4_,CONCAT13(cStack_223,uVar36)) >> 0x18);
  auVar26._0_10_ = (unkuint10)CONCAT11(bStack_220,cStack_221) << 0x38;
  auVar30._7_8_ = 0;
  auVar30._0_7_ = (uint7)(CONCAT62(auVar26._9_6_,CONCAT11(cStack_224,cStack_221)) >> 8);
  auVar31._1_8_ = SUB158(auVar30 << 0x40,7);
  auVar31[0] = cStack_225;
  auVar31._9_6_ = 0;
  auVar32._1_10_ = SUB1510(auVar31 << 0x30,5);
  auVar32[0] = cStack_226;
  auVar32._11_4_ = 0;
  auVar65._3_12_ = SUB1512(auVar32 << 0x20,3);
  auVar65[2] = cStack_227;
  auVar65[1] = 0;
  auVar65[0] = local_228;
  auVar65[0xf] = 0;
  auVar68 = pshuflw(auVar65,auVar65,0x1b);
  auVar68 = pshufhw(auVar68,auVar68,0x1b);
  sVar4 = auVar68._0_2_;
  local_228 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[0] - (0xff < sVar4);
  sVar4 = auVar68._2_2_;
  cStack_227 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[2] - (0xff < sVar4);
  sVar4 = auVar68._4_2_;
  cStack_226 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[4] - (0xff < sVar4);
  sVar4 = auVar68._6_2_;
  cStack_225 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[6] - (0xff < sVar4);
  sVar4 = auVar68._8_2_;
  cStack_224 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[8] - (0xff < sVar4);
  sVar4 = auVar68._10_2_;
  cStack_223 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[10] - (0xff < sVar4);
  sVar4 = auVar68._12_2_;
  cStack_222 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[0xc] - (0xff < sVar4);
  sVar4 = auVar68._14_2_;
  cStack_221 = (0 < sVar4) * (sVar4 < 0x100) * auVar68[0xe] - (0xff < sVar4);
  sVar4 = auVar69._0_2_;
  bStack_220 = (0 < sVar4) * (sVar4 < 0x100) * auVar69[0] - (0xff < sVar4);
  sVar4 = auVar69._2_2_;
  cStack_21f = (0 < sVar4) * (sVar4 < 0x100) * auVar69[2] - (0xff < sVar4);
  sVar4 = auVar69._4_2_;
  cStack_21e = (0 < sVar4) * (sVar4 < 0x100) * auVar69[4] - (0xff < sVar4);
  sVar4 = auVar69._6_2_;
  cStack_21d = (0 < sVar4) * (sVar4 < 0x100) * auVar69[6] - (0xff < sVar4);
  sVar4 = auVar69._8_2_;
  cStack_21c = (0 < sVar4) * (sVar4 < 0x100) * auVar69[8] - (0xff < sVar4);
  sVar4 = auVar69._10_2_;
  cStack_21b = (0 < sVar4) * (sVar4 < 0x100) * auVar69[10] - (0xff < sVar4);
  sVar4 = auVar69._12_2_;
  cStack_21a = (0 < sVar4) * (sVar4 < 0x100) * auVar69[0xc] - (0xff < sVar4);
  sVar4 = auVar69._14_2_;
  cStack_219 = (0 < sVar4) * (sVar4 < 0x100) * auVar69[0xe] - (0xff < sVar4);
  auVar70[1] = 0;
  auVar70[0] = local_218[8];
  auVar70[2] = local_218[9];
  auVar70[3] = 0;
  auVar70[4] = local_218[10];
  auVar70[5] = 0;
  auVar70[6] = local_218[0xb];
  auVar70[7] = 0;
  auVar70[8] = local_218[0xc];
  auVar70[9] = 0;
  auVar70[10] = local_218[0xd];
  auVar70[0xb] = 0;
  auVar70[0xc] = local_218[0xe];
  auVar70[0xd] = 0;
  auVar70[0xe] = local_218[0xf];
  auVar70[0xf] = 0;
  auVar68 = pshuflw(auVar70,auVar70,0x1b);
  auVar69 = pshufhw(auVar68,auVar68,0x1b);
  auVar21[0xd] = 0;
  auVar21._0_13_ = local_218._0_13_;
  auVar21[0xe] = local_218[7];
  auVar22[0xc] = local_218[6];
  auVar22._0_12_ = local_218._0_12_;
  auVar22._13_2_ = auVar21._13_2_;
  auVar24[0xb] = 0;
  auVar24._0_11_ = local_218._0_11_;
  auVar24._12_3_ = auVar22._12_3_;
  auVar25[10] = local_218[5];
  auVar25._0_10_ = local_218._0_10_;
  auVar25._11_4_ = auVar24._11_4_;
  auVar27[9] = 0;
  auVar27._0_9_ = local_218._0_9_;
  auVar27._10_5_ = auVar25._10_5_;
  auVar28[8] = local_218[4];
  auVar28._0_8_ = local_218._0_8_;
  auVar28._9_6_ = auVar27._9_6_;
  auVar33._7_8_ = 0;
  auVar33._0_7_ = auVar28._8_7_;
  auVar34._1_8_ = SUB158(auVar33 << 0x40,7);
  auVar34[0] = local_218[3];
  auVar34._9_6_ = 0;
  auVar35._1_10_ = SUB1510(auVar34 << 0x30,5);
  auVar35[0] = local_218[2];
  auVar35._11_4_ = 0;
  auVar29[2] = local_218[1];
  auVar29._0_2_ = local_218._0_2_;
  auVar29._3_12_ = SUB1512(auVar35 << 0x20,3);
  auVar66._0_2_ = local_218._0_2_ & 0xff;
  auVar66._2_13_ = auVar29._2_13_;
  auVar66[0xf] = 0;
  auVar68 = pshuflw(auVar66,auVar66,0x1b);
  auVar68 = pshufhw(auVar68,auVar68,0x1b);
  sVar4 = auVar68._0_2_;
  sVar5 = auVar68._2_2_;
  sVar6 = auVar68._4_2_;
  sVar7 = auVar68._6_2_;
  sVar8 = auVar68._8_2_;
  sVar9 = auVar68._10_2_;
  sVar10 = auVar68._12_2_;
  sVar11 = auVar68._14_2_;
  sVar12 = auVar69._0_2_;
  sVar13 = auVar69._2_2_;
  sVar14 = auVar69._4_2_;
  sVar15 = auVar69._6_2_;
  sVar16 = auVar69._8_2_;
  sVar17 = auVar69._10_2_;
  sVar18 = auVar69._12_2_;
  sVar19 = auVar69._14_2_;
  local_218[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar68[2] - (0xff < sVar5);
  local_218[0] = (0 < sVar4) * (sVar4 < 0x100) * auVar68[0] - (0xff < sVar4);
  local_218[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar68[4] - (0xff < sVar6);
  local_218[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar68[6] - (0xff < sVar7);
  local_218[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar68[8] - (0xff < sVar8);
  local_218[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar68[10] - (0xff < sVar9);
  local_218[6] = (0 < sVar10) * (sVar10 < 0x100) * auVar68[0xc] - (0xff < sVar10);
  local_218[7] = (0 < sVar11) * (sVar11 < 0x100) * auVar68[0xe] - (0xff < sVar11);
  local_218[8] = (0 < sVar12) * (sVar12 < 0x100) * auVar69[0] - (0xff < sVar12);
  local_218[9] = (0 < sVar13) * (sVar13 < 0x100) * auVar69[2] - (0xff < sVar13);
  local_218[10] = (0 < sVar14) * (sVar14 < 0x100) * auVar69[4] - (0xff < sVar14);
  local_218[0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar69[6] - (0xff < sVar15);
  local_218[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar69[8] - (0xff < sVar16);
  local_218[0xd] = (0 < sVar17) * (sVar17 < 0x100) * auVar69[10] - (0xff < sVar17);
  local_218[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar69[0xc] - (0xff < sVar18);
  local_218[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar69[0xe] - (0xff < sVar19);
  local_118._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_118._0_8_ = &local_228;
  (*(code *)PTR_format_inner_00799048)();
  lVar64 = param_1[8];
  if (lVar64 == param_1[6]) {
    (*(code *)PTR_grow_one_00799328)();
  }
  lVar55 = param_1[7];
  *(undefined8 *)(lVar55 + 0x10 + lVar64 * 0x18) = local_80;
  puVar1 = (undefined8 *)(lVar55 + lVar64 * 0x18);
  *puVar1 = local_90;
  puVar1[1] = uStack_88;
  param_1[8] = lVar64 + 1;
  *(undefined1 *)(param_1 + 0xc) = 1;
  uVar51 = local_90;
  goto LAB_005311b4;
}


