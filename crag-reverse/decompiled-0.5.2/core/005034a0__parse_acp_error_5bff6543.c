// 005034a0 parse_acp_error

/* WARNING: Type propagation algorithm not settling */
/* craggemini_core[66f3c71560d70857]::protocol::parse_acp_error */

undefined4 * __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_acp_error
          (undefined4 param_1,undefined4 *param_2,char *param_3,longlong param_4,undefined8 param_5,
          longlong param_6,undefined8 param_7,longlong param_8,undefined8 param_9,longlong param_10,
          undefined8 param_11,int param_12,undefined4 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  longlong *plVar23;
  char cVar24;
  byte bVar25;
  int iVar26;
  longlong lVar27;
  char *pcVar28;
  undefined8 *puVar29;
  char *pcVar30;
  longlong lVar31;
  byte bVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong *plVar38;
  undefined8 *puVar39;
  byte *pbVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar49;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  longlong local_3a8;
  char *local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined2 uStack_370;
  undefined2 uStack_36e;
  undefined4 uStack_36c;
  undefined2 local_368;
  undefined2 uStack_366;
  undefined4 uStack_364;
  short sStack_360;
  undefined1 uStack_35e;
  uint uStack_35d;
  undefined1 uStack_359;
  ulonglong local_358;
  ulonglong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined2 uStack_320;
  undefined2 uStack_31e;
  undefined4 uStack_31c;
  undefined2 local_318;
  undefined2 uStack_316;
  undefined4 uStack_314;
  short sStack_310;
  undefined1 uStack_30e;
  uint uStack_30d;
  undefined1 uStack_309;
  char *local_308;
  ulonglong local_300;
  longlong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  ulonglong local_2b0;
  longlong local_2a8;
  char *local_2a0;
  char *pcStack_298;
  longlong local_290;
  char *pcStack_288;
  char *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  longlong local_260;
  undefined4 *local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238 [3];
  undefined8 local_220;
  undefined8 local_208;
  undefined8 local_1f0;
  undefined8 local_1d8;
  undefined8 local_1c0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_150;
  undefined8 local_138;
  longlong local_120;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_78;
  undefined4 local_60;
  undefined1 local_58;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_238[0] = 0xffffffffffffffff;
  local_220 = 0xffffffffffffffff;
  local_208 = 0xffffffffffffffff;
  local_1f0 = 0xffffffffffffffff;
  local_1d8 = 0xffffffffffffffff;
  local_1c0 = 0xffffffffffffffff;
  local_2c8 = param_3;
  local_258 = param_2;
  if (param_4 == 0) {
    local_2e0 = 0;
  }
  else {
    auVar50 = ::<str>::trim_matches::<<char>::is_whitespace>(param_4,param_5);
    local_2f8 = auVar50._8_8_;
    local_2e0 = auVar50._0_8_;
    param_1 = extraout_XMM0_Da;
  }
  bVar41 = local_2e0 == 0;
  bVar42 = local_2f8 == 0;
  if (param_6 == 0) {
    auVar52._8_8_ = 0;
    auVar52._0_8_ = local_2f0;
    auVar50 = auVar52 << 0x40;
  }
  else {
    auVar50 = ::<str>::trim_matches::<<char>::is_whitespace>(param_6,param_7);
    param_1 = extraout_XMM0_Da_00;
  }
  local_2f0 = auVar50._8_8_;
  local_2d8 = auVar50._0_8_;
  bVar43 = local_2d8 == 0;
  bVar44 = local_2f0 == 0;
  local_260 = local_2d8;
  if (bVar44 || bVar43) {
    local_260 = 0;
  }
  if (param_8 == 0) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_2d0;
    auVar51 = auVar4 << 0x40;
  }
  else {
    auVar51 = ::<str>::trim_matches::<<char>::is_whitespace>(param_8,param_9);
    auVar50._8_8_ = local_2f0;
    auVar50._0_8_ = local_2d8;
    param_1 = extraout_XMM0_Da_01;
  }
  local_2d0 = auVar51._8_8_;
  local_2e8 = auVar51._0_8_;
  local_2f0 = auVar50._8_8_;
  local_2d8 = auVar50._0_8_;
  bVar45 = local_2e8 != 0;
  bVar46 = local_2d0 != 0;
  if (param_10 == 0) {
LAB_005036be:
    bVar47 = false;
  }
  else {
    auVar52 = ::<str>::trim_matches::<<char>::is_whitespace>(param_10,param_11);
    auVar16._8_8_ = local_2f0;
    auVar16._0_8_ = local_2d8;
    auVar15._8_8_ = local_2f0;
    auVar15._0_8_ = local_2d8;
    auVar14._8_8_ = local_2f0;
    auVar14._0_8_ = local_2d8;
    auVar13._8_8_ = local_2f0;
    auVar13._0_8_ = local_2d8;
    auVar12._8_8_ = local_2f0;
    auVar12._0_8_ = local_2d8;
    auVar11._8_8_ = local_2f0;
    auVar11._0_8_ = local_2d8;
    auVar50._8_8_ = local_2f0;
    auVar50._0_8_ = local_2d8;
    auVar10._8_8_ = local_2d0;
    auVar10._0_8_ = local_2e8;
    auVar9._8_8_ = local_2d0;
    auVar9._0_8_ = local_2e8;
    auVar8._8_8_ = local_2d0;
    auVar8._0_8_ = local_2e8;
    auVar7._8_8_ = local_2d0;
    auVar7._0_8_ = local_2e8;
    auVar6._8_8_ = local_2d0;
    auVar6._0_8_ = local_2e8;
    auVar5._8_8_ = local_2d0;
    auVar5._0_8_ = local_2e8;
    auVar51._8_8_ = local_2d0;
    auVar51._0_8_ = local_2e8;
    pbVar40 = auVar52._0_8_;
    param_1 = extraout_XMM0_Da_02;
    if (auVar52._8_8_ != 7) goto LAB_005036be;
    auVar51 = auVar5;
    auVar50 = auVar11;
    if ((byte)(((byte)(*pbVar40 + 0xbf) < 0x1a) << 5 | *pbVar40) != 0x72) goto LAB_005036be;
    auVar51 = auVar6;
    auVar50 = auVar12;
    if ((byte)(((byte)(pbVar40[1] + 0xbf) < 0x1a) << 5 | pbVar40[1]) != 0x65) goto LAB_005036be;
    auVar51 = auVar7;
    auVar50 = auVar13;
    if ((byte)(((byte)(pbVar40[2] + 0xbf) < 0x1a) << 5 | pbVar40[2]) != 0x66) goto LAB_005036be;
    auVar51 = auVar8;
    auVar50 = auVar14;
    if ((byte)(((byte)(pbVar40[3] + 0xbf) < 0x1a) << 5 | pbVar40[3]) != 0x75) goto LAB_005036be;
    auVar51 = auVar9;
    auVar50 = auVar15;
    if ((byte)(((byte)(pbVar40[4] + 0xbf) < 0x1a) << 5 | pbVar40[4]) != 0x73) goto LAB_005036be;
    auVar51 = auVar10;
    auVar50 = auVar16;
    if ((byte)(((byte)(pbVar40[5] + 0xbf) < 0x1a) << 5 | pbVar40[5]) != 0x61) goto LAB_005036be;
    bVar47 = (byte)(((byte)(pbVar40[6] + 0xbf) < 0x1a) << 5 | pbVar40[6]) == 0x6c;
  }
  local_2f0 = auVar50._8_8_;
  local_2d8 = auVar50._0_8_;
  local_2d0 = auVar51._8_8_;
  local_2e8 = auVar51._0_8_;
  if (bVar41 || bVar42) {
LAB_005038f9:
    local_2f0 = auVar50._8_8_;
    local_2d8 = auVar50._0_8_;
    local_2d0 = auVar51._8_8_;
    local_2e8 = auVar51._0_8_;
    if (local_2c8 != (char *)0x0) {
      pcVar30 = (char *)(*(code *)PTR_index_into_00799300)(param_1,local_2c8);
      auVar18._8_8_ = local_2f0;
      auVar18._0_8_ = local_2d8;
      auVar50._8_8_ = local_2f0;
      auVar50._0_8_ = local_2d8;
      auVar17._8_8_ = local_2d0;
      auVar17._0_8_ = local_2e8;
      auVar51._8_8_ = local_2d0;
      auVar51._0_8_ = local_2e8;
      pcVar28 = (char *)0x0;
      if ((pcVar30 != (char *)0x0) && (*pcVar30 == '\x05')) {
        pcVar28 = pcVar30;
      }
      if (pcVar28 == (char *)0x0) {
        pcVar28 = local_2c8;
      }
      if (*pcVar28 == '\x05') {
        uVar33 = *(ulonglong *)(pcVar28 + 8);
        local_300 = uVar33;
        auVar51 = auVar17;
        auVar50 = auVar18;
        if (uVar33 != 0) {
          local_3a8 = *(longlong *)(pcVar28 + 0x10);
          local_308 = pcVar28;
          while( true ) {
            local_358 = (ulonglong)*(ushort *)(uVar33 + 0x272);
            uVar34 = (ulonglong)((uint)*(ushort *)(uVar33 + 0x272) * 8);
            lVar27 = uVar34 * 3;
            uVar36 = 0xffffffffffffffff;
            lVar31 = uVar33 + 0x168;
            puVar29 = (undefined8 *)(uVar33 - 8);
            local_350 = uVar33;
            do {
              puVar39 = puVar29;
              if (lVar27 == 0) {
                uVar36 = local_358;
                goto LAB_00503a11;
              }
              uVar33 = *(ulonglong *)(lVar31 + 0x10);
              lVar37 = uVar33 - 4;
              if (3 < uVar33) {
                uVar33 = 4;
              }
              iVar26 = (*(code *)PTR_memcmp_00799528)(uVar34,uVar33);
              lVar37 = -lVar37;
              if (iVar26 != 0) {
                lVar37 = (longlong)iVar26;
              }
              bVar32 = (0 < lVar37) - (lVar37 < 0);
              uVar34 = (ulonglong)bVar32;
              uVar36 = uVar36 + 1;
              lVar27 = lVar27 + -0x18;
              lVar31 = lVar31 + 0x18;
              puVar29 = puVar39 + 4;
            } while (bVar32 == 1);
            if (bVar32 == 0) break;
LAB_00503a11:
            bVar48 = local_3a8 == 0;
            local_3a8 = local_3a8 + -1;
            if (bVar48) goto joined_r0x00503fb6;
            uVar33 = *(ulonglong *)(local_350 + 0x278 + uVar36 * 8);
          }
          if (*(char *)(puVar39 + 1) == '\x03') {
            cVar24 = text_has_structured_upstream_signal(puVar39[3],puVar39[4]);
            auVar50._8_8_ = local_2f0;
            auVar50._0_8_ = local_2d8;
            auVar51._8_8_ = local_2d0;
            auVar51._0_8_ = local_2e8;
            if (cVar24 != '\0') goto LAB_00503f78;
            uVar33 = *(ulonglong *)(local_308 + 8);
            goto joined_r0x00503b77;
          }
          if ((*(char *)(puVar39 + 1) == '\x05') && (uVar33 = puVar39[2], uVar33 != 0)) {
            local_3a8 = puVar39[3];
            local_358 = uVar33;
            local_2a8 = local_3a8;
            goto LAB_00503a83;
          }
joined_r0x00503fb6:
          auVar50._8_8_ = local_2f0;
          auVar50._0_8_ = local_2d8;
          auVar51._8_8_ = local_2d0;
          auVar51._0_8_ = local_2e8;
          uVar33 = local_300;
joined_r0x00503b77:
          local_300 = uVar33;
          if (uVar33 != 0) {
            local_3a8 = *(longlong *)(local_308 + 0x10);
            local_350 = local_3a8;
            do {
              local_308 = (char *)(ulonglong)*(ushort *)(uVar33 + 0x272);
              uVar36 = (ulonglong)((uint)*(ushort *)(uVar33 + 0x272) * 8);
              lVar27 = uVar36 * 3;
              pcVar28 = (char *)0xffffffffffffffff;
              lVar31 = uVar33 + 0x168;
              plVar23 = (longlong *)(uVar33 - 0x10);
              local_358 = uVar33;
              do {
                plVar38 = plVar23;
                if (lVar27 == 0) {
                  pcVar28 = local_308;
                  goto LAB_00503e34;
                }
                uVar33 = *(ulonglong *)(lVar31 + 0x10);
                lVar37 = uVar33 - 4;
                if (3 < uVar33) {
                  uVar33 = 4;
                }
                iVar26 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar33);
                lVar37 = -lVar37;
                if (iVar26 != 0) {
                  lVar37 = (longlong)iVar26;
                }
                bVar32 = (0 < lVar37) - (lVar37 < 0);
                uVar36 = (ulonglong)bVar32;
                pcVar28 = pcVar28 + 1;
                lVar27 = lVar27 + -0x18;
                lVar31 = lVar31 + 0x18;
                plVar23 = plVar38 + 4;
              } while (bVar32 == 1);
              if (bVar32 == 0) {
                bVar48 = true;
                if (((char)plVar38[2] == '\x02') && ((int)plVar38[3] == 1)) {
                  bVar48 = -1 < plVar38[4];
                }
                goto LAB_00503e71;
              }
LAB_00503e34:
              bVar48 = local_350 == 0;
              local_350 = local_350 + -1;
              if (bVar48) goto LAB_00503e6f;
              uVar33 = *(ulonglong *)(local_358 + 0x278 + (longlong)pcVar28 * 8);
            } while( true );
          }
        }
      }
    }
    goto LAB_00503fbc;
  }
  cVar24 = text_has_structured_upstream_signal(local_2e0,local_2f8);
  auVar50._8_8_ = local_2f0;
  auVar50._0_8_ = local_2d8;
  auVar51._8_8_ = local_2d0;
  auVar51._0_8_ = local_2e8;
  param_1 = extraout_XMM0_Da_03;
  if (cVar24 == '\0') goto LAB_005038f9;
  uVar49 = parse_upstream_error(&local_398,0,local_2e0,local_2f8,local_238);
  if ((bool)(bVar47 & sStack_360 == 0x1f6)) {
    sStack_360 = 0x1ad;
    if ((local_398 != (char *)0xffffffffffffffff) && (local_398 != (char *)0x0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar49,1);
    }
    local_398 = (char *)0xffffffffffffffff;
    uStack_390 = "gemini_quota_exhausted";
    local_388 = 0x16;
    lVar27 = <craggemini_core[66f3c71560d70857]::protocol::Failure>::ensure_upstream_mut(&local_398)
    ;
    *(undefined4 *)(lVar27 + 0x170) = 0x1ad0001;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar28 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar21 = s_RESOURCE_EXHAUSTED_00199c9b._12_4_;
    uVar20 = s_RESOURCE_EXHAUSTED_00199c9b._8_4_;
    uVar19 = s_RESOURCE_EXHAUSTED_00199c9b._4_4_;
    uVar49 = s_RESOURCE_EXHAUSTED_00199c9b._0_4_;
    if (pcVar28 == (char *)0x0) {
LAB_005049d6:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00504a08;
    }
    *(undefined4 *)pcVar28 = s_RESOURCE_EXHAUSTED_00199c9b._0_4_;
    *(undefined4 *)(pcVar28 + 4) = uVar19;
    *(undefined4 *)(pcVar28 + 8) = uVar20;
    *(undefined4 *)(pcVar28 + 0xc) = uVar21;
    pcVar28[0x10] = 'E';
    pcVar28[0x11] = 'D';
    if ((*(longlong *)(lVar27 + 0x10) != -1) && (*(longlong *)(lVar27 + 0x10) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar49,1);
    }
    *(undefined8 *)(lVar27 + 0x10) = 0x12;
    *(char **)(lVar27 + 0x18) = pcVar28;
    *(undefined8 *)(lVar27 + 0x20) = 0x12;
    if (*(longlong *)(lVar27 + 0x28) == -1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar29 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar29 == (undefined8 *)0x0) goto LAB_005049d6;
      *(undefined8 *)((longlong)puVar29 + 7) = 0x4445545355414858;
      *puVar29 = 0x58455f41544f5551;
      if ((*(longlong *)(lVar27 + 0x28) != -1) && (*(longlong *)(lVar27 + 0x28) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
      }
      *(undefined8 *)(lVar27 + 0x28) = 0xf;
      *(undefined8 **)(lVar27 + 0x30) = puVar29;
      *(undefined8 *)(lVar27 + 0x38) = 0xf;
    }
    uStack_35e = 1;
  }
  uStack_330 = (char *)CONCAT44(uStack_37c,uStack_380);
  local_328 = (char *)CONCAT44(uStack_374,local_378);
  pbVar40 = (byte *)CONCAT44(uStack_364,CONCAT22(uStack_366,local_368));
  uStack_31c = uStack_36c;
  local_338 = local_388;
  local_348 = local_398;
  uStack_340 = uStack_390;
  uStack_320 = uStack_370;
  uStack_31e = uStack_36e;
  local_318 = local_368;
  uStack_316 = uStack_366;
  uStack_314 = uStack_364;
  sStack_310 = sStack_360;
  uStack_30e = uStack_35e;
  uStack_30d = uStack_35d;
  uStack_309 = uStack_359;
joined_r0x00504967:
  if (pbVar40 != (byte *)0x0) goto LAB_005040d3;
LAB_0050449a:
  if (!(!bVar44 && !bVar43)) goto LAB_0050456f;
LAB_005044ad:
  uVar49 = extract_retry_from_text(&local_398,local_2d8,local_2f0);
  lVar27 = local_388;
  pcVar28 = uStack_390;
  uVar1 = CONCAT44(uStack_37c,uStack_380);
  uVar2 = CONCAT44(uStack_374,local_378);
  if ((int)local_398 == 1) {
    puVar29 = (undefined8 *)
              <craggemini_core[66f3c71560d70857]::protocol::Failure>::ensure_upstream_mut
                        (&local_348);
    *puVar29 = 1;
    puVar29[1] = pcVar28;
    pbVar40 = (byte *)CONCAT44(uStack_314,CONCAT22(uStack_316,local_318));
    uVar49 = extraout_XMM0_Da_06;
  }
  if ((pbVar40 == (byte *)0x0) || (*(longlong *)(pbVar40 + 0x88) == -1)) {
    if (lVar27 != -1) {
      lVar31 = <craggemini_core[66f3c71560d70857]::protocol::Failure>::ensure_upstream_mut
                         (&local_348);
      if ((*(longlong *)(lVar31 + 0x88) != -1) && (*(longlong *)(lVar31 + 0x88) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_07,1);
      }
      *(longlong *)(lVar31 + 0x88) = lVar27;
      *(undefined8 *)(lVar31 + 0x90) = uVar1;
      *(undefined8 *)(lVar31 + 0x98) = uVar2;
    }
  }
  else if (lVar27 - 1U < 0xfffffffffffffffe) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar49,1);
  }
  goto LAB_0050456f;
LAB_00503a83:
  local_2b0 = (ulonglong)*(ushort *)(uVar33 + 0x272);
  pcVar28 = (char *)(uVar33 - 0x20);
  uVar34 = (ulonglong)((uint)*(ushort *)(uVar33 + 0x272) * 8);
  lVar27 = uVar34 * 3;
  uVar36 = 0xffffffffffffffff;
  lVar31 = uVar33 + 0x168;
  local_350 = uVar33;
  do {
    if (lVar27 == 0) {
      uVar36 = local_2b0;
      goto LAB_00503b24;
    }
    uVar33 = *(ulonglong *)(lVar31 + 0x10);
    lVar37 = uVar33 - 5;
    if (4 < uVar33) {
      uVar33 = 5;
    }
    iVar26 = (*(code *)PTR_memcmp_00799528)(uVar34,uVar33);
    lVar37 = -lVar37;
    if (iVar26 != 0) {
      lVar37 = (longlong)iVar26;
    }
    bVar32 = (0 < lVar37) - (lVar37 < 0);
    uVar34 = (ulonglong)bVar32;
    pcVar28 = pcVar28 + 0x20;
    uVar36 = uVar36 + 1;
    lVar27 = lVar27 + -0x18;
    lVar31 = lVar31 + 0x18;
  } while (bVar32 == 1);
  if (bVar32 != 0) {
LAB_00503b24:
    bVar48 = local_3a8 == 0;
    local_3a8 = local_3a8 + -1;
    if (bVar48) goto LAB_00503b8b;
    uVar33 = *(ulonglong *)(local_350 + 0x278 + uVar36 * 8);
    goto LAB_00503a83;
  }
  if (*pcVar28 == '\x05') goto LAB_00503f78;
LAB_00503b8b:
  local_3a8 = local_2a8;
  local_350 = local_358;
  while( true ) {
    local_2b0 = (ulonglong)*(ushort *)(local_350 + 0x272);
    uVar36 = (ulonglong)((uint)*(ushort *)(local_350 + 0x272) * 8);
    lVar27 = uVar36 * 3;
    uVar33 = 0xffffffffffffffff;
    lVar31 = local_350 + 0x168;
    plVar23 = (longlong *)(local_350 - 0x10);
    do {
      plVar38 = plVar23;
      if (lVar27 == 0) {
        uVar33 = local_2b0;
        goto LAB_00503c44;
      }
      uVar34 = *(ulonglong *)(lVar31 + 0x10);
      lVar37 = uVar34 - 4;
      if (3 < uVar34) {
        uVar34 = 4;
      }
      iVar26 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar34);
      lVar37 = -lVar37;
      if (iVar26 != 0) {
        lVar37 = (longlong)iVar26;
      }
      bVar32 = (0 < lVar37) - (lVar37 < 0);
      uVar36 = (ulonglong)bVar32;
      uVar33 = uVar33 + 1;
      lVar27 = lVar27 + -0x18;
      lVar31 = lVar31 + 0x18;
      plVar23 = plVar38 + 4;
    } while (bVar32 == 1);
    if (bVar32 == 0) break;
LAB_00503c44:
    bVar48 = local_3a8 == 0;
    local_3a8 = local_3a8 + -1;
    if (bVar48) goto LAB_00503c96;
    local_350 = *(ulonglong *)(local_350 + 0x278 + uVar33 * 8);
  }
  if ((((char)plVar38[2] == '\x02') && (plVar38[3] == 0)) && (plVar38[4] - 400U < 200))
  goto LAB_00503f78;
LAB_00503c96:
  do {
    uVar33 = (ulonglong)*(ushort *)(local_358 + 0x272);
    pcVar28 = (char *)(local_358 - 0x20);
    uVar36 = (ulonglong)((uint)*(ushort *)(local_358 + 0x272) * 8);
    lVar27 = uVar36 * 3;
    uVar34 = 0xffffffffffffffff;
    lVar31 = local_358 + 0x168;
    do {
      if (lVar27 == 0) goto LAB_00503d31;
      uVar35 = *(ulonglong *)(lVar31 + 0x10);
      lVar37 = uVar35 - 6;
      if (5 < uVar35) {
        uVar35 = 6;
      }
      iVar26 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar35);
      lVar37 = -lVar37;
      if (iVar26 != 0) {
        lVar37 = (longlong)iVar26;
      }
      bVar32 = (0 < lVar37) - (lVar37 < 0);
      uVar36 = (ulonglong)bVar32;
      pcVar28 = pcVar28 + 0x20;
      uVar34 = uVar34 + 1;
      lVar27 = lVar27 + -0x18;
      lVar31 = lVar31 + 0x18;
    } while (bVar32 == 1);
    uVar33 = uVar34;
    if (bVar32 == 0) {
      if (*pcVar28 == '\x03') break;
      goto joined_r0x00503fb6;
    }
LAB_00503d31:
    bVar48 = local_2a8 == 0;
    local_2a8 = local_2a8 + -1;
    if (bVar48) goto joined_r0x00503fb6;
    local_358 = *(ulonglong *)(local_358 + 0x278 + uVar33 * 8);
  } while( true );
LAB_00503f78:
  build_failure_from_error_json(&local_348,0,local_2c8,local_238,4);
LAB_005040c2:
  pbVar40 = (byte *)CONCAT44(uStack_314,CONCAT22(uStack_316,local_318));
  if (pbVar40 == (byte *)0x0) goto LAB_0050449a;
LAB_005040d3:
  if (!((bVar44 || bVar43) || (*pbVar40 & 1) != 0)) goto LAB_005044ad;
  goto LAB_0050456f;
LAB_00503e6f:
  bVar48 = true;
LAB_00503e71:
  local_358 = CONCAT71(local_358._1_7_,bVar48);
  while( true ) {
    local_350 = (ulonglong)*(ushort *)(local_300 + 0x272);
    uVar36 = (ulonglong)((uint)*(ushort *)(local_300 + 0x272) * 8);
    lVar27 = uVar36 * 3;
    uVar33 = 0xffffffffffffffff;
    lVar31 = local_300 + 0x168;
    puVar29 = (undefined8 *)(local_300 - 8);
    do {
      puVar39 = puVar29;
      if (lVar27 == 0) {
        uVar33 = local_350;
        goto LAB_00503f21;
      }
      uVar34 = *(ulonglong *)(lVar31 + 0x10);
      lVar37 = uVar34 - 7;
      if (6 < uVar34) {
        uVar34 = 7;
      }
      iVar26 = (*(code *)PTR_memcmp_00799528)(uVar36,uVar34);
      auVar50._8_8_ = local_2f0;
      auVar50._0_8_ = local_2d8;
      auVar51._8_8_ = local_2d0;
      auVar51._0_8_ = local_2e8;
      lVar37 = -lVar37;
      if (iVar26 != 0) {
        lVar37 = (longlong)iVar26;
      }
      bVar32 = (0 < lVar37) - (lVar37 < 0);
      uVar36 = (ulonglong)bVar32;
      uVar33 = uVar33 + 1;
      lVar27 = lVar27 + -0x18;
      lVar31 = lVar31 + 0x18;
      puVar29 = puVar39 + 4;
    } while (bVar32 == 1);
    if (bVar32 == 0) break;
LAB_00503f21:
    auVar50._8_8_ = local_2f0;
    auVar50._0_8_ = local_2d8;
    auVar51._8_8_ = local_2d0;
    auVar51._0_8_ = local_2e8;
    bVar48 = local_3a8 == 0;
    local_3a8 = local_3a8 + -1;
    if (bVar48) goto LAB_00503fbc;
    local_300 = *(ulonglong *)(local_300 + 0x278 + uVar33 * 8);
  }
  if (*(char *)(puVar39 + 1) == '\x03') {
    uVar1 = puVar39[3];
    uVar2 = puVar39[4];
    bVar25 = text_has_structured_upstream_signal(uVar1,uVar2);
    bVar32 = (byte)local_358 | bVar25;
    local_358 = CONCAT71(local_358._1_7_,bVar32);
    if (bVar32 == 0) {
      bVar25 = is_acp_unknown_model_message(uVar1,uVar2);
    }
    auVar50._8_8_ = local_2f0;
    auVar50._0_8_ = local_2d8;
    auVar51._8_8_ = local_2d0;
    auVar51._0_8_ = local_2e8;
    if (bVar25 != 0) goto LAB_00503f78;
  }
LAB_00503fbc:
  local_2f0 = auVar50._8_8_;
  local_2d8 = auVar50._0_8_;
  local_2d0 = auVar51._8_8_;
  local_2e8 = auVar51._0_8_;
  if (!(bVar44 || bVar43)) {
    cVar24 = text_has_structured_upstream_signal(local_2d8,local_2f0);
    auVar50._8_8_ = local_2f0;
    auVar50._0_8_ = local_2d8;
    auVar51._8_8_ = local_2d0;
    auVar51._0_8_ = local_2e8;
    if (cVar24 != '\0') {
      parse_upstream_error(&local_348,0,local_2d8,local_2f0,local_238);
      goto LAB_005040c2;
    }
    if (bVar47) goto LAB_005040fb;
    if (!(bVar41 || bVar42)) goto LAB_00504644;
    if (local_2c8 != (char *)0x0) goto LAB_00504623;
    if (bVar45 && bVar46) goto LAB_00504894;
    parse_upstream_error(&local_398,0,local_2d8,local_2f0,local_238);
    uStack_35d = CONCAT31(uStack_35d._1_3_,3);
LAB_00504689:
    uStack_330 = (char *)CONCAT44(uStack_37c,uStack_380);
    local_328 = (char *)CONCAT44(uStack_374,local_378);
    pbVar40 = (byte *)CONCAT44(uStack_364,CONCAT22(uStack_366,local_368));
    uStack_31c = uStack_36c;
    local_338 = local_388;
    local_348 = local_398;
    uStack_340 = uStack_390;
    uStack_320 = uStack_370;
    uStack_31e = uStack_36e;
    local_318 = local_368;
    uStack_316 = uStack_366;
    uStack_314 = uStack_364;
    sStack_310 = sStack_360;
    uStack_30e = uStack_35e;
    uStack_30d = uStack_35d;
    uStack_309 = uStack_359;
    goto joined_r0x00504967;
  }
  if (bVar47) {
LAB_005040fb:
    local_2f0 = auVar50._8_8_;
    local_2d8 = auVar50._0_8_;
    local_2d0 = auVar51._8_8_;
    local_2e8 = auVar51._0_8_;
    if (bVar41 || bVar42) {
      uVar33 = local_2f0;
      lVar27 = local_260;
    }
    else {
      uVar33 = local_2f8;
      lVar27 = local_2e0;
    }
    lVar31 = 1;
    if (lVar27 == 0) {
      uVar33 = 0;
    }
    else {
      lVar31 = lVar27;
    }
    extract_retry_from_text(&local_398,lVar31,uVar33);
    lVar27 = local_388;
    local_2c8 = local_398;
    uStack_2c0 = (undefined4)uStack_390;
    uStack_2bc = uStack_390._4_4_;
    if (bVar41 || bVar42) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar28 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = s_y_quota_for_this_period__0019a5ca._8_8_;
      if (pcVar28 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00504a08;
      }
      *(undefined8 *)(pcVar28 + 0x20) = s_y_quota_for_this_period__0019a5ca._0_8_;
      *(undefined8 *)(pcVar28 + 0x28) = uVar1;
      uVar1 = s_your_Antigravit_0019a5ba._8_8_;
      *(undefined8 *)(pcVar28 + 0x10) = s_your_Antigravit_0019a5ba._0_8_;
      *(undefined8 *)(pcVar28 + 0x18) = uVar1;
      uVar20 = s_You_have_reached_0019a5aa._12_4_;
      uVar19 = s_You_have_reached_0019a5aa._8_4_;
      uVar49 = s_You_have_reached_0019a5aa._4_4_;
      *(undefined4 *)pcVar28 = s_You_have_reached_0019a5aa._0_4_;
      *(undefined4 *)(pcVar28 + 4) = uVar49;
      *(undefined4 *)(pcVar28 + 8) = uVar19;
      *(undefined4 *)(pcVar28 + 0xc) = uVar20;
      pcVar28[0x30] = ' ';
      pcVar28[0x31] = 'p';
      pcVar28[0x32] = 'e';
      pcVar28[0x33] = 'r';
      pcVar28[0x34] = 'i';
      pcVar28[0x35] = 'o';
      pcVar28[0x36] = 'd';
      pcVar28[0x37] = '.';
      local_2a0 = &DAT_00000038;
      local_290 = 0x38;
      pcStack_298 = pcVar28;
    }
    else {
      sanitize_blob_text(&local_398,local_2e0,local_2f8);
      auVar50 = ::<str>::trim_matches::<<char>::is_whitespace>(uStack_390,local_388);
      if (auVar50._8_8_ == 0) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar28 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        uVar1 = s_y_quota_for_this_period__0019a5ca._8_8_;
        if (pcVar28 == (char *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00504a08;
        }
        *(undefined8 *)(pcVar28 + 0x20) = s_y_quota_for_this_period__0019a5ca._0_8_;
        *(undefined8 *)(pcVar28 + 0x28) = uVar1;
        uVar1 = s_your_Antigravit_0019a5ba._8_8_;
        *(undefined8 *)(pcVar28 + 0x10) = s_your_Antigravit_0019a5ba._0_8_;
        *(undefined8 *)(pcVar28 + 0x18) = uVar1;
        uVar21 = s_You_have_reached_0019a5aa._12_4_;
        uVar20 = s_You_have_reached_0019a5aa._8_4_;
        uVar19 = s_You_have_reached_0019a5aa._4_4_;
        uVar49 = s_You_have_reached_0019a5aa._0_4_;
        *(undefined4 *)pcVar28 = s_You_have_reached_0019a5aa._0_4_;
        *(undefined4 *)(pcVar28 + 4) = uVar19;
        *(undefined4 *)(pcVar28 + 8) = uVar20;
        *(undefined4 *)(pcVar28 + 0xc) = uVar21;
        pcVar28[0x30] = ' ';
        pcVar28[0x31] = 'p';
        pcVar28[0x32] = 'e';
        pcVar28[0x33] = 'r';
        pcVar28[0x34] = 'i';
        pcVar28[0x35] = 'o';
        pcVar28[0x36] = 'd';
        pcVar28[0x37] = '.';
        local_2a0 = &DAT_00000038;
        local_290 = 0x38;
        pcStack_298 = pcVar28;
      }
      else {
        uVar49 = truncate_utf8(&local_2a0,auVar50._0_8_);
      }
      if (local_398 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar49,1);
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar28 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar20 = s_RESOURCE_EXHAUSTED_00199c9b._12_4_;
    uVar19 = s_RESOURCE_EXHAUSTED_00199c9b._8_4_;
    uVar49 = s_RESOURCE_EXHAUSTED_00199c9b._4_4_;
    if (pcVar28 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00504a08;
    }
    *(undefined4 *)pcVar28 = s_RESOURCE_EXHAUSTED_00199c9b._0_4_;
    *(undefined4 *)(pcVar28 + 4) = uVar49;
    *(undefined4 *)(pcVar28 + 8) = uVar19;
    *(undefined4 *)(pcVar28 + 0xc) = uVar20;
    pcVar28[0x10] = 'E';
    pcVar28[0x11] = 'D';
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar29 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar29 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00504a08;
    }
    *(undefined8 *)((longlong)puVar29 + 7) = 0x4445545355414858;
    *puVar29 = 0x58455f41544f5551;
    local_120 = lVar27;
    local_38 = 0x1ad0001;
    local_198 = 0x12;
    local_188 = 0x12;
    local_180 = 0xf;
    local_170 = 0xf;
    local_168 = 0xffffffffffffffff;
    local_150 = 0xffffffffffffffff;
    local_1a8 = (undefined4)local_2c8;
    uStack_1a4 = local_2c8._4_4_;
    uStack_1a0 = uStack_2c0;
    uStack_19c = uStack_2bc;
    local_138 = 0xffffffffffffffff;
    local_108 = 0xffffffffffffffff;
    local_f0 = 0xffffffffffffffff;
    local_d8 = 0xffffffffffffffff;
    local_c0 = 0xffffffffffffffff;
    local_a8 = 0xffffffffffffffff;
    local_34 = 0;
    local_32 = 0;
    local_90 = 0xffffffffffffffff;
    local_58 = 0xff;
    local_78 = 0xffffffffffffffff;
    local_60 = 0;
    local_190 = pcVar28;
    local_178 = puVar29;
    redact_error_secrets(&local_398,pcStack_298,local_290);
    lVar27 = local_388;
    pcVar30 = uStack_390;
    pcVar28 = local_398;
    local_32 = (undefined1)uStack_380;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar31 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar31 == 0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
      goto LAB_00504a08;
    }
    uVar49 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,0x178);
    sStack_310 = 0x1ad;
    uStack_30e = 1;
    uStack_30d = uStack_30d & 0xffffff00;
    local_348 = (char *)0xffffffffffffffff;
    uStack_340 = "gemini_quota_exhausted";
    local_338 = 0x16;
    uStack_330 = pcVar28;
    local_328 = pcVar30;
    uStack_320 = (undefined2)lVar27;
    uStack_31e = (undefined2)((ulonglong)lVar27 >> 0x10);
    uStack_31c = (undefined4)((ulonglong)lVar27 >> 0x20);
    local_318 = (undefined2)lVar31;
    uStack_316 = (undefined2)((ulonglong)lVar31 >> 0x10);
    uStack_314 = (undefined4)((ulonglong)lVar31 >> 0x20);
    if (local_2a0 != (char *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar49,1);
    }
    pbVar40 = (byte *)CONCAT44(uStack_314,CONCAT22(uStack_316,local_318));
    goto joined_r0x00504967;
  }
  if (!bVar41 && !bVar42) {
LAB_00504644:
    local_2f0 = auVar50._8_8_;
    local_2d8 = auVar50._0_8_;
    local_2d0 = auVar51._8_8_;
    local_2e8 = auVar51._0_8_;
    parse_upstream_error(&local_398,0,local_2e0,local_2f8,local_238);
    cVar24 = '\x04';
    if (sStack_360 != 0x1f6) {
      cVar24 = (char)uStack_35d;
    }
    if ((char)uStack_35d != '\0') {
      cVar24 = (char)uStack_35d;
    }
    uStack_35d = CONCAT31(uStack_35d._1_3_,cVar24);
    goto LAB_00504689;
  }
  if (local_2c8 != (char *)0x0) {
LAB_00504623:
    local_2f0 = auVar50._8_8_;
    local_2d8 = auVar50._0_8_;
    local_2d0 = auVar51._8_8_;
    local_2e8 = auVar51._0_8_;
    build_failure_from_error_json(&local_398,0,local_2c8,local_238,4);
    uStack_35d = CONCAT31(uStack_35d._1_3_,4);
    goto LAB_00504689;
  }
  if (bVar45 && bVar46) {
LAB_00504894:
    local_2f0 = auVar50._8_8_;
    local_2d8 = auVar50._0_8_;
    local_2d0 = auVar51._8_8_;
    local_2e8 = auVar51._0_8_;
    parse_upstream_error(&local_398,0,local_2e8,local_2d0,local_238);
    cVar24 = text_has_structured_upstream_signal(local_2e8,local_2d0);
    if (cVar24 == '\0') {
      uStack_35d = CONCAT31(uStack_35d._1_3_,3);
      if ((local_398 != (char *)0xffffffffffffffff) && (local_398 != (char *)0x0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_09,1);
      }
      local_398 = (char *)0xffffffffffffffff;
      uStack_390 = "acp_process_failed";
      local_388 = 0x12;
    }
    uStack_330 = (char *)CONCAT44(uStack_37c,uStack_380);
    local_328 = (char *)CONCAT44(uStack_374,local_378);
    pbVar40 = (byte *)CONCAT44(uStack_364,CONCAT22(uStack_366,local_368));
    uStack_31c = uStack_36c;
    local_338 = local_388;
    local_348 = local_398;
    uStack_340 = uStack_390;
    uStack_320 = uStack_370;
    uStack_31e = uStack_36e;
    local_318 = local_368;
    uStack_316 = uStack_366;
    uStack_314 = uStack_364;
    sStack_310 = sStack_360;
    uStack_30e = uStack_35e;
    uStack_30d = uStack_35d;
    uStack_309 = uStack_359;
    goto joined_r0x00504967;
  }
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
            (&local_398,0x1f6,"acp_turn_failed",0xf,
             "headless agy acp turn failed without upstream error details",0x3b);
  uStack_35d = CONCAT31(uStack_35d._1_3_,4);
  uStack_330 = (char *)CONCAT44(uStack_37c,uStack_380);
  local_328 = (char *)CONCAT44(uStack_374,local_378);
  uStack_320 = uStack_370;
  local_348 = local_398;
  uStack_340 = uStack_390;
  local_338 = local_388;
  uStack_31e = uStack_36e;
  uStack_31c = uStack_36c;
  local_318 = local_368;
  uStack_316 = uStack_366;
  uStack_314 = uStack_364;
  sStack_310 = sStack_360;
  uStack_309 = uStack_359;
  uStack_30d = uStack_35d;
  uStack_30e = 1;
LAB_0050456f:
  uVar33 = local_2d0;
  if ((param_12 == 0 && (!bVar45 || !bVar46)) ||
     ((lVar27 = CONCAT44(uStack_314,CONCAT22(uStack_316,local_318)), lVar27 != 0 &&
      (*(longlong *)(lVar27 + 0x130) != -1)))) goto LAB_005047b5;
  local_368 = local_318;
  uStack_366 = uStack_316;
  uStack_364 = uStack_314;
  sStack_360 = sStack_310;
  uStack_35e = uStack_30e;
  uStack_35d = uStack_30d;
  uStack_359 = uStack_309;
  local_378 = (undefined4)local_328;
  uStack_374 = local_328._4_4_;
  uStack_370 = uStack_320;
  uStack_36e = uStack_31e;
  uStack_36c = uStack_31c;
  local_388 = local_338;
  uStack_380 = (undefined4)uStack_330;
  uStack_37c = uStack_330._4_4_;
  local_398 = local_348;
  uStack_390 = uStack_340;
  if (!(!bVar45 || !bVar46)) {
    if (-1 < (longlong)local_2d0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_248 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_248 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_08,uVar33);
        local_250 = uVar33;
        local_240 = uVar33;
        goto LAB_00504756;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00504a08:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_250 = -1;
LAB_00504756:
  <craggemini_core[66f3c71560d70857]::protocol::Failure>::with_stderr_excerpt
            (&local_2a0,&local_398,&local_250,param_12,param_13);
  local_348 = local_2a0;
  uStack_340 = pcStack_298;
  local_338 = local_290;
  uStack_330 = pcStack_288;
  local_328 = local_280;
  uStack_320 = (undefined2)uStack_278;
  uStack_31e = (undefined2)((ulonglong)uStack_278 >> 0x10);
  uStack_31c = (undefined4)((ulonglong)uStack_278 >> 0x20);
  local_318 = (undefined2)local_270;
  uStack_316 = (undefined2)((ulonglong)local_270 >> 0x10);
  uStack_314 = (undefined4)((ulonglong)local_270 >> 0x20);
  sStack_310 = (short)uStack_268;
  uStack_30e = (undefined1)((ulonglong)uStack_268 >> 0x10);
  uStack_30d = (uint)((ulonglong)uStack_268 >> 0x18);
  uStack_309 = (undefined1)((ulonglong)uStack_268 >> 0x38);
LAB_005047b5:
  puVar22 = local_258;
  local_258[0xc] = CONCAT22(uStack_316,local_318);
  local_258[0xd] = uStack_314;
  local_258[0xe] = CONCAT13((undefined1)uStack_30d,CONCAT12(uStack_30e,sStack_310));
  local_258[0xf] = CONCAT13(uStack_309,uStack_30d._1_3_);
  local_258[8] = (undefined4)local_328;
  local_258[9] = local_328._4_4_;
  local_258[10] = CONCAT22(uStack_31e,uStack_320);
  local_258[0xb] = uStack_31c;
  local_258[4] = (undefined4)local_338;
  local_258[5] = local_338._4_4_;
  local_258[6] = (undefined4)uStack_330;
  local_258[7] = uStack_330._4_4_;
  *local_258 = (undefined4)local_348;
  local_258[1] = local_348._4_4_;
  local_258[2] = (undefined4)uStack_340;
  local_258[3] = uStack_340._4_4_;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(local_238);
  return puVar22;
}


