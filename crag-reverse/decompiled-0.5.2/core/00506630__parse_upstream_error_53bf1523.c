// 00506630 parse_upstream_error

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::protocol::parse_upstream_error */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_upstream_error
          (undefined8 *param_1,ushort param_2,undefined8 param_3,undefined8 param_4,byte **param_5)

{
  code *pcVar1;
  code cVar2;
  code *pcVar3;
  code cVar4;
  code cVar5;
  code cVar6;
  code cVar7;
  code cVar8;
  code cVar9;
  code cVar10;
  code cVar11;
  code cVar12;
  code cVar13;
  code cVar14;
  code cVar15;
  code cVar16;
  code cVar17;
  code cVar18;
  code cVar19;
  code cVar20;
  code cVar21;
  code cVar22;
  code cVar23;
  code cVar24;
  code cVar25;
  code cVar26;
  code cVar27;
  code cVar28;
  code cVar29;
  code cVar30;
  code cVar31;
  code cVar32;
  code cVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  char cVar65;
  undefined1 uVar66;
  undefined4 uVar67;
  byte **ppbVar68;
  longlong lVar69;
  ulonglong uVar70;
  byte **ppbVar71;
  uint uVar72;
  undefined8 uVar73;
  longlong extraout_RDX;
  byte **extraout_RDX_00;
  byte *pbVar74;
  uint uVar75;
  byte *pbVar76;
  uint uVar77;
  longlong lVar78;
  byte **ppbVar79;
  byte **ppbVar80;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar81;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [12];
  ushort local_3f2;
  byte **local_3f0;
  byte **local_3e8;
  byte **local_3e0;
  byte **local_3d8;
  byte **local_3d0;
  byte **local_3c8;
  longlong local_3c0;
  byte **local_3b8;
  byte **ppbStack_3b0;
  byte **local_3a8;
  undefined1 local_398 [16];
  byte **local_388;
  undefined8 local_378;
  longlong local_370;
  byte **local_368;
  byte **local_360;
  byte **local_358;
  undefined8 local_350;
  byte **ppbStack_348;
  byte **local_340;
  byte **local_338;
  byte **ppbStack_330;
  byte **local_328;
  byte **ppbStack_320;
  byte **local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined8 local_2e0;
  byte **local_2c8;
  byte **local_2c0;
  byte **local_2b8;
  byte **local_2b0;
  byte *pbStack_2a8;
  byte **local_2a0;
  undefined8 local_298;
  undefined8 local_280;
  longlong local_268;
  undefined8 local_260;
  byte **local_250;
  byte **local_248;
  byte **local_240;
  byte **local_238;
  byte **local_230;
  byte *pbStack_228;
  undefined8 local_220;
  undefined8 local_208;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined2 local_1c8;
  undefined2 local_1c6;
  undefined2 local_1c4;
  undefined1 local_1c2;
  byte **local_1b8;
  undefined8 *local_1b0;
  byte **local_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 local_198 [10];
  ushort uStack_18e;
  byte **local_188;
  byte **ppbStack_180;
  byte **local_178;
  undefined2 local_170;
  undefined1 local_16e;
  uint uStack_16d;
  undefined1 local_169;
  
  local_3f2 = param_2;
  auVar122 = ::<str>::trim_matches::<<char>::is_whitespace>(param_3,param_4);
  ppbVar79 = auVar122._8_8_;
  ppbVar80 = auVar122._0_8_;
  uVar72 = (uint)param_4;
  if (ppbVar79 < (byte **)0x10001) {
    if (ppbVar79 == (byte **)0x0) goto LAB_0050676f;
LAB_005066b2:
    cVar2 = *(code *)ppbVar80;
joined_r0x00506bc5:
    if (cVar2 == (code)0x7b) {
      _local_198 = (undefined1  [16])0x0;
      local_1a8 = ppbVar80;
      auStack_1a0 = (undefined1  [8])ppbVar79;
      local_188 = ppbVar80;
      ppbStack_180 = ppbVar79;
      serde_json[dc3825464c436029]::de::from_trait::
      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                (&local_338,&local_1a8);
      if ((char)local_338 == -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (&ppbStack_330);
      }
      else {
        local_1a8 = local_338;
        auStack_1a0 = (undefined1  [8])ppbStack_330;
        stack0xfffffffffffffe70 = (byte *)ppbStack_320;
        local_198._0_8_ = local_328;
        if ((char)local_338 == '\x05') {
          build_failure_from_error_json(param_1,local_3f2,&local_1a8,param_5,0);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_338);
          return param_1;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_338);
      }
    }
    uVar72 = 0x2600;
    ppbVar71 = ppbVar80;
    do {
      cVar2 = *(code *)ppbVar71;
      uVar77 = (uint)(byte)cVar2;
      if ((char)cVar2 < '\0') {
        uVar75 = (byte)cVar2 & 0x1f;
        uVar77 = (byte)*(code *)((longlong)ppbVar71 + 1) & 0x3f;
        if ((byte)cVar2 < 0xe0) {
          ppbVar71 = (byte **)((longlong)ppbVar71 + 2);
          uVar77 = uVar75 << 6 | uVar77;
        }
        else {
          uVar77 = (byte)*(code *)((longlong)ppbVar71 + 2) & 0x3f | uVar77 << 6;
          if ((byte)cVar2 < 0xf0) {
            ppbVar71 = (byte **)((longlong)ppbVar71 + 3);
            uVar77 = uVar77 | uVar75 << 0xc;
          }
          else {
            pcVar3 = (code *)((longlong)ppbVar71 + 3);
            ppbVar71 = (byte **)((longlong)ppbVar71 + 4);
            uVar77 = (byte)*pcVar3 & 0x3f | uVar77 << 6 | ((byte)cVar2 & 7) << 0x12;
          }
        }
      }
      else {
        ppbVar71 = (byte **)((longlong)ppbVar71 + 1);
      }
      if ((uVar77 - 0x7f < 0x21 || uVar77 < 0x20) &&
         ((0xd < uVar77 || ((0x2600U >> (uVar77 & 0x1f) & 1) == 0)))) {
        uVar72 = 0x2600;
        sanitize_blob_text(&local_370,ppbVar80,ppbVar79);
        local_3c0 = local_370;
        if (local_370 == -1) goto LAB_0050677e;
        ppbVar80 = local_368;
        ppbVar79 = local_360;
        goto LAB_00506787;
      }
    } while (ppbVar71 != (byte **)((longlong)ppbVar80 + (longlong)ppbVar79));
  }
  else {
    ppbVar79 = (byte **)0x10000;
    do {
      if (-0x41 < (char)*(code *)((longlong)ppbVar80 + (longlong)ppbVar79)) goto LAB_005066b2;
      if (-0x41 < (char)((code *)((longlong)ppbVar80 + -1))[(longlong)ppbVar79]) {
        ppbVar79 = (byte **)((longlong)ppbVar79 + -1);
        cVar2 = *(code *)ppbVar80;
        goto joined_r0x00506bc5;
      }
      if (-0x41 < (char)((code *)((longlong)ppbVar80 + -2))[(longlong)ppbVar79]) {
        ppbVar79 = (byte **)((longlong)ppbVar79 + -2);
        cVar2 = *(code *)ppbVar80;
        goto joined_r0x00506bc5;
      }
      if (-0x41 < (char)((code *)((longlong)ppbVar80 + -3))[(longlong)ppbVar79]) {
        ppbVar79 = (byte **)((longlong)ppbVar79 + -3);
        cVar2 = *(code *)ppbVar80;
        goto joined_r0x00506bc5;
      }
      ppbVar79 = (byte **)((longlong)ppbVar79 + -4);
    } while (ppbVar79 != (byte **)0x0);
LAB_0050676f:
    ppbVar79 = (byte **)0x0;
  }
  local_370 = -1;
LAB_0050677e:
  local_3c0 = -1;
LAB_00506787:
  extract_balanced_error_json(&local_338,ppbVar80,ppbVar79);
  if ((char)local_338 != -1) {
    local_198._0_8_ = local_328;
    local_1a8 = local_338;
    auStack_1a0 = (undefined1  [8])ppbStack_330;
    build_failure_from_error_json(param_1,local_3f2,&local_1a8,param_5,0);
    ppbVar80 = (byte **)core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_338);
    goto LAB_005067f4;
  }
  pbVar76 = param_5[3];
  if (pbVar76 == (byte *)0xffffffffffffffff) {
    local_3e0 = (byte **)0xffffffffffffffff;
    pbVar74 = param_5[5];
LAB_005068a7:
    pbVar76 = (byte *)0x0;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_3e0 = local_1a8;
    local_3f0 = (byte **)auStack_1a0;
    local_3e8 = (byte **)local_198._0_8_;
    pbVar74 = param_5[5];
    if (pbVar76 == (byte *)0xffffffffffffffff) goto LAB_005068a7;
    pbVar76 = param_5[4];
  }
  auVar122 = parse_retry_after_ms(pbVar76,pbVar74);
  local_3c8 = auVar122._0_8_;
  local_238 = (byte **)0xffffffffffffffff;
  local_1b0 = param_1;
  if (param_5[6] == (byte *)0xffffffffffffffff) {
    pbVar76 = param_5[0xf];
    local_250 = (byte **)0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    pbVar76 = param_5[0xf];
    local_250 = local_1a8;
    local_3d8 = (byte **)auStack_1a0;
    local_3d0 = (byte **)local_198._0_8_;
  }
  if (pbVar76 != (byte *)0xffffffffffffffff) {
    (*(code *)PTR_clone_00798fd0)();
    local_398._0_8_ = auStack_1a0;
    local_398._8_8_ = local_198._0_8_;
    local_238 = local_1a8;
  }
  local_1c8 = 0;
  local_328 = (byte **)0xffffffffffffffff;
  local_310 = -1;
  local_2f8 = 0xffffffffffffffff;
  local_2e0 = 0xffffffffffffffff;
  local_338 = local_3c8;
  local_2c8 = local_3e0;
  local_2c0 = local_3f0;
  local_2b8 = local_3e8;
  local_2b0 = (byte **)0xffffffffffffffff;
  local_298 = 0xffffffffffffffff;
  local_280 = 0xffffffffffffffff;
  local_268 = -1;
  local_248 = local_3d8;
  local_240 = local_3d0;
  local_230 = (byte **)local_398._0_8_;
  pbStack_228 = (byte *)local_398._8_8_;
  local_1c4 = 0;
  local_1c2 = 0;
  local_220 = 0xffffffffffffffff;
  local_1e8 = 0xff;
  local_208 = 0xffffffffffffffff;
  local_1f0 = 0;
  ppbStack_330 = auVar122._8_8_;
  parse_agy_text_error(&local_1a8,ppbVar80,ppbVar79);
  if (local_188 == (byte **)0xffffffffffffffff) {
    ::<str>::trim_matches::<<char>::is_whitespace>(ppbVar80,ppbVar79);
    if (extraout_RDX == 0) {
      if (param_5[0xc] != (byte *)0xffffffffffffffff) {
        ppbVar71 = (byte **)param_5[0xe];
        if (param_5[9] == (byte *)0xffffffffffffffff) {
          local_3f0 = (byte **)0xffffffffffffffff;
        }
        else {
          (*(code *)PTR_clone_00798fd0)();
          local_3f0 = local_1a8;
          local_3e8 = (byte **)auStack_1a0;
          param_5 = (byte **)local_198._0_8_;
        }
        if (-1 < (longlong)ppbVar71) {
          if (ppbVar71 == (byte **)0x0) goto LAB_0050711c;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          ppbVar68 = (byte **)(*(code *)PTR___rust_alloc_00799000)();
          uVar81 = extraout_XMM0_Qa_00;
          if (ppbVar68 != (byte **)0x0) goto LAB_00507108;
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00507bf3;
      }
      if (local_3f2 == 200) {
        local_398._0_8_ = "unknown";
        if (*param_5 != (byte *)0xffffffffffffffff) {
          local_398._0_8_ = param_5[1];
        }
        local_398._8_8_ = (byte *)0x7;
        if (*param_5 != (byte *)0xffffffffffffffff) {
          local_398._8_8_ = param_5[2];
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        ppbVar71 = (byte **)(*(code *)PTR___rust_alloc_00799000)();
        if (ppbVar71 == (byte **)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00507bf3;
        }
        uVar73 = 0x414c494156414e55;
        *ppbVar71 = (byte *)0x414c494156414e55;
        *(undefined4 *)((longlong)ppbVar71 + 7) = 0x454c4241;
        local_1a8 = (byte **)local_398;
        auStack_1a0 = (undefined1  [8])<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_3e8 = ppbVar71;
        uVar81 = (*(code *)PTR_format_inner_00799048)(0x414c494156414e55,&local_1a8);
        uVar70 = CONCAT71((int7)((ulonglong)uVar81 >> 8),1);
        uVar72 = (uint)CONCAT62((int6)((ulonglong)uVar73 >> 0x10),0x1f6);
        local_3f0 = (byte **)0xb;
        param_5 = (byte **)0xb;
      }
      else {
        if (param_5[9] == (byte *)0xffffffffffffffff) {
          local_3f0 = (byte **)0xffffffffffffffff;
        }
        else {
          (*(code *)PTR_clone_00798fd0)();
          local_3f0 = local_1a8;
          local_3e8 = (byte **)auStack_1a0;
          param_5 = (byte **)local_198._0_8_;
        }
        local_398 = default_http_reason_phrase(local_3f2);
        local_1a8 = (byte **)&local_3f2;
        auStack_1a0 = (undefined1  [8])PTR_fmt_00799c28;
        stack0xfffffffffffffe70 = (byte *)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_198._0_8_ = local_398;
        (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Qa_01,&local_1a8);
        uVar70 = 0;
      }
      goto LAB_00506acb;
    }
    if (param_5[9] == (byte *)0xffffffffffffffff) {
      local_3f0 = (byte **)0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_clone_00798fd0)();
      local_3f0 = local_1a8;
      local_3e8 = (byte **)auStack_1a0;
      param_5 = (byte **)local_198._0_8_;
    }
    ::<str>::trim_matches::<<char>::is_whitespace>(ppbVar80,ppbVar79);
    if ((longlong)extraout_RDX_00 < 0) {
LAB_00506d66:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00507bf3;
    }
    ppbVar71 = extraout_RDX_00;
    if (extraout_RDX_00 == (byte **)0x0) {
LAB_0050711c:
      ppbVar68 = (byte **)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      ppbVar68 = (byte **)(*(code *)PTR___rust_alloc_00799000)();
      uVar81 = extraout_XMM0_Qa;
      if (ppbVar68 == (byte **)0x0) goto LAB_00506d66;
LAB_00507108:
      (*(code *)PTR_memcpy_00799008)(uVar81,ppbVar71);
    }
    uVar70 = 0;
    local_3b8 = ppbVar71;
    ppbStack_3b0 = ppbVar68;
    local_3a8 = ppbVar71;
  }
  else {
    uVar70 = (ulonglong)local_198[8];
    uVar72 = (uint)uStack_18e;
    local_3f0 = local_1a8;
    local_3e8 = (byte **)auStack_1a0;
    local_3b8 = local_188;
    ppbStack_3b0 = ppbStack_180;
    local_3a8 = local_178;
    param_5 = (byte **)local_198._0_8_;
LAB_00506acb:
  }
  ppbVar71 = local_3a8;
  local_3e0 = (byte **)CONCAT44(local_3e0._4_4_,(uint)local_3f2);
  local_3d8 = local_3b8;
  local_3c8 = ppbStack_3b0;
  if ((local_3f2 < 400) &&
     (local_3e0 = (byte **)CONCAT44(local_3e0._4_4_,uVar72),
     ((byte)uVar70 & (uVar72 - 400 & 0xffff) < 200) == 0)) {
    if (local_3f0 == (byte **)0xffffffffffffffff) {
      uVar67 = (undefined4)CONCAT62((int6)(uVar70 >> 0x10),0x1f6);
    }
    else {
      auVar123 = http_status_from_grpc_status(local_3e8,param_5);
      uVar67 = 0x1f6;
      if ((auVar123._0_8_ & 1) != 0) {
        uVar67 = auVar123._8_4_;
      }
    }
    local_3e0 = (byte **)CONCAT44(local_3e0._4_4_,uVar67);
  }
  redact_error_secrets(&local_1a8,local_3c8,ppbVar71);
  local_3d0 = local_1a8;
  uVar66 = local_198[8];
  local_358 = (byte **)auStack_1a0;
  truncate_utf8(&local_350,auStack_1a0,local_198._0_8_);
  extract_retry_from_text(&local_1a8,ppbVar80,ppbVar79);
  local_388 = local_188;
  local_398._0_8_ = local_198._0_8_;
  local_398._8_8_ = stack0xfffffffffffffe70;
  if (local_338 == (byte **)0x0) {
    local_338 = local_1a8;
    ppbStack_330 = (byte **)auStack_1a0;
  }
  if ((local_2b0 != (byte **)0xffffffffffffffff) && (local_2b0 != (byte **)0x0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  local_2a0 = local_388;
  local_2b0 = (byte **)local_398._0_8_;
  pbStack_2a8 = (byte *)local_398._8_8_;
  if ((longlong)ppbVar79 < 0) {
LAB_00506e90:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00507bf3;
  }
  local_378 = CONCAT71(local_378._1_7_,uVar66);
  if (ppbVar79 == (byte **)0x0) {
    lVar69 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar69 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar69 == 0) goto LAB_00506e90;
    (*(code *)PTR_memcpy_00799008)();
    bVar64 = UNK_0018483f;
    bVar63 = UNK_0018483e;
    bVar62 = UNK_0018483d;
    bVar61 = UNK_0018483c;
    bVar60 = UNK_0018483b;
    bVar59 = UNK_0018483a;
    bVar58 = UNK_00184839;
    bVar57 = UNK_00184838;
    bVar56 = UNK_00184837;
    bVar55 = UNK_00184836;
    bVar54 = UNK_00184835;
    bVar53 = UNK_00184834;
    bVar52 = UNK_00184833;
    bVar51 = UNK_00184832;
    bVar50 = UNK_00184831;
    bVar49 = DAT_00184830;
    bVar89 = UNK_0018303f;
    bVar88 = UNK_0018303e;
    bVar87 = UNK_0018303d;
    bVar86 = UNK_0018303c;
    bVar85 = UNK_0018303b;
    bVar84 = UNK_0018303a;
    bVar83 = UNK_00183039;
    bVar82 = UNK_00183038;
    bVar41 = UNK_00183037;
    bVar40 = UNK_00183036;
    bVar39 = UNK_00183035;
    bVar38 = UNK_00183034;
    bVar37 = UNK_00183033;
    bVar36 = UNK_00183032;
    bVar35 = UNK_00183031;
    bVar34 = DAT_00183030;
    auVar122 = _DAT_00182cc0;
    if (&DAT_00000007 < ppbVar79) {
      if (ppbVar79 < &DAT_00000020) {
        ppbVar80 = (byte **)0x0;
LAB_00506f9c:
        cVar48 = s__001846a0[7];
        cVar47 = s__001846a0[6];
        cVar46 = s__001846a0[5];
        cVar45 = s__001846a0[4];
        cVar44 = s__001846a0[3];
        cVar43 = s__001846a0[2];
        cVar42 = s__001846a0[1];
        cVar65 = s__001846a0[0];
        bVar41 = UNK_001840c7;
        bVar40 = UNK_001840c6;
        bVar39 = UNK_001840c5;
        bVar38 = UNK_001840c4;
        bVar37 = UNK_001840c3;
        bVar36 = UNK_001840c2;
        bVar35 = UNK_001840c1;
        bVar34 = DAT_001840c0;
        auVar122 = _DAT_001830d0;
        ppbVar71 = (byte **)((ulonglong)ppbVar79 & 0x7ffffffffffffff8);
        do {
          pcVar3 = (code *)((longlong)ppbVar80 + lVar69);
          cVar2 = pcVar3[1];
          cVar4 = pcVar3[2];
          cVar5 = pcVar3[3];
          cVar6 = pcVar3[4];
          cVar7 = pcVar3[5];
          cVar8 = pcVar3[6];
          cVar9 = pcVar3[7];
          bVar82 = (char)*pcVar3 + auVar122[0];
          bVar83 = (char)cVar2 + auVar122[1];
          bVar84 = (char)cVar4 + auVar122[2];
          bVar85 = (char)cVar5 + auVar122[3];
          bVar86 = (char)cVar6 + auVar122[4];
          bVar87 = (char)cVar7 + auVar122[5];
          bVar88 = (char)cVar8 + auVar122[6];
          bVar89 = (char)cVar9 + auVar122[7];
          pcVar1 = (code *)((longlong)ppbVar80 + lVar69);
          *pcVar1 = (code)(~-((byte)((bVar82 < bVar34) * bVar34 | (bVar82 >= bVar34) * bVar82) ==
                             bVar82) & cVar65 ^ (byte)*pcVar3);
          pcVar1[1] = (code)(~-((byte)((bVar83 < bVar35) * bVar35 | (bVar83 >= bVar35) * bVar83) ==
                               bVar83) & cVar42 ^ (byte)cVar2);
          pcVar1[2] = (code)(~-((byte)((bVar84 < bVar36) * bVar36 | (bVar84 >= bVar36) * bVar84) ==
                               bVar84) & cVar43 ^ (byte)cVar4);
          pcVar1[3] = (code)(~-((byte)((bVar85 < bVar37) * bVar37 | (bVar85 >= bVar37) * bVar85) ==
                               bVar85) & cVar44 ^ (byte)cVar5);
          pcVar1[4] = (code)(~-((byte)((bVar86 < bVar38) * bVar38 | (bVar86 >= bVar38) * bVar86) ==
                               bVar86) & cVar45 ^ (byte)cVar6);
          pcVar1[5] = (code)(~-((byte)((bVar87 < bVar39) * bVar39 | (bVar87 >= bVar39) * bVar87) ==
                               bVar87) & cVar46 ^ (byte)cVar7);
          pcVar1[6] = (code)(~-((byte)((bVar88 < bVar40) * bVar40 | (bVar88 >= bVar40) * bVar88) ==
                               bVar88) & cVar47 ^ (byte)cVar8);
          pcVar1[7] = (code)(~-((byte)((bVar89 < bVar41) * bVar41 | (bVar89 >= bVar41) * bVar89) ==
                               bVar89) & cVar48 ^ (byte)cVar9);
          ppbVar80 = ppbVar80 + 1;
          if (ppbVar71 == ppbVar80) goto LAB_0050760f;
        } while( true );
      }
      ppbVar71 = (byte **)((ulonglong)ppbVar79 & 0x7fffffffffffffe0);
      ppbVar80 = (byte **)0x0;
      do {
        pcVar1 = (code *)((longlong)ppbVar80 + lVar69);
        cVar2 = pcVar1[1];
        cVar4 = pcVar1[2];
        cVar5 = pcVar1[3];
        cVar6 = pcVar1[4];
        cVar7 = pcVar1[5];
        cVar8 = pcVar1[6];
        cVar9 = pcVar1[7];
        cVar10 = pcVar1[8];
        cVar11 = pcVar1[9];
        cVar12 = pcVar1[10];
        cVar13 = pcVar1[0xb];
        cVar14 = pcVar1[0xc];
        cVar15 = pcVar1[0xd];
        cVar16 = pcVar1[0xe];
        cVar17 = pcVar1[0xf];
        pcVar3 = (code *)((longlong)ppbVar80 + lVar69 + 0x10);
        cVar18 = *pcVar3;
        cVar19 = pcVar3[1];
        cVar20 = pcVar3[2];
        cVar21 = pcVar3[3];
        cVar22 = pcVar3[4];
        cVar23 = pcVar3[5];
        cVar24 = pcVar3[6];
        cVar25 = pcVar3[7];
        cVar26 = pcVar3[8];
        cVar27 = pcVar3[9];
        cVar28 = pcVar3[10];
        cVar29 = pcVar3[0xb];
        cVar30 = pcVar3[0xc];
        cVar31 = pcVar3[0xd];
        cVar32 = pcVar3[0xe];
        cVar33 = pcVar3[0xf];
        bVar90 = (char)*pcVar1 + auVar122[0];
        bVar91 = (char)cVar2 + auVar122[1];
        bVar92 = (char)cVar4 + auVar122[2];
        bVar93 = (char)cVar5 + auVar122[3];
        bVar94 = (char)cVar6 + auVar122[4];
        bVar95 = (char)cVar7 + auVar122[5];
        bVar96 = (char)cVar8 + auVar122[6];
        bVar97 = (char)cVar9 + auVar122[7];
        bVar98 = (char)cVar10 + auVar122[8];
        bVar99 = (char)cVar11 + auVar122[9];
        bVar100 = (char)cVar12 + auVar122[10];
        bVar101 = (char)cVar13 + auVar122[0xb];
        bVar102 = (char)cVar14 + auVar122[0xc];
        bVar103 = (char)cVar15 + auVar122[0xd];
        bVar104 = (char)cVar16 + auVar122[0xe];
        bVar105 = (char)cVar17 + auVar122[0xf];
        bVar106 = (char)cVar18 + auVar122[0];
        bVar107 = (char)cVar19 + auVar122[1];
        bVar108 = (char)cVar20 + auVar122[2];
        bVar109 = (char)cVar21 + auVar122[3];
        bVar110 = (char)cVar22 + auVar122[4];
        bVar111 = (char)cVar23 + auVar122[5];
        bVar112 = (char)cVar24 + auVar122[6];
        bVar113 = (char)cVar25 + auVar122[7];
        bVar114 = (char)cVar26 + auVar122[8];
        bVar115 = (char)cVar27 + auVar122[9];
        bVar116 = (char)cVar28 + auVar122[10];
        bVar117 = (char)cVar29 + auVar122[0xb];
        bVar118 = (char)cVar30 + auVar122[0xc];
        bVar119 = (char)cVar31 + auVar122[0xd];
        bVar120 = (char)cVar32 + auVar122[0xe];
        bVar121 = (char)cVar33 + auVar122[0xf];
        pcVar3 = (code *)((longlong)ppbVar80 + lVar69);
        *pcVar3 = (code)(-((byte)((bVar34 < bVar90) * bVar34 | (bVar34 >= bVar90) * bVar90) ==
                          bVar90) & bVar49 ^ (byte)*pcVar1);
        pcVar3[1] = (code)(-((byte)((bVar35 < bVar91) * bVar35 | (bVar35 >= bVar91) * bVar91) ==
                            bVar91) & bVar50 ^ (byte)cVar2);
        pcVar3[2] = (code)(-((byte)((bVar36 < bVar92) * bVar36 | (bVar36 >= bVar92) * bVar92) ==
                            bVar92) & bVar51 ^ (byte)cVar4);
        pcVar3[3] = (code)(-((byte)((bVar37 < bVar93) * bVar37 | (bVar37 >= bVar93) * bVar93) ==
                            bVar93) & bVar52 ^ (byte)cVar5);
        pcVar3[4] = (code)(-((byte)((bVar38 < bVar94) * bVar38 | (bVar38 >= bVar94) * bVar94) ==
                            bVar94) & bVar53 ^ (byte)cVar6);
        pcVar3[5] = (code)(-((byte)((bVar39 < bVar95) * bVar39 | (bVar39 >= bVar95) * bVar95) ==
                            bVar95) & bVar54 ^ (byte)cVar7);
        pcVar3[6] = (code)(-((byte)((bVar40 < bVar96) * bVar40 | (bVar40 >= bVar96) * bVar96) ==
                            bVar96) & bVar55 ^ (byte)cVar8);
        pcVar3[7] = (code)(-((byte)((bVar41 < bVar97) * bVar41 | (bVar41 >= bVar97) * bVar97) ==
                            bVar97) & bVar56 ^ (byte)cVar9);
        pcVar3[8] = (code)(-((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) ==
                            bVar98) & bVar57 ^ (byte)cVar10);
        pcVar3[9] = (code)(-((byte)((bVar83 < bVar99) * bVar83 | (bVar83 >= bVar99) * bVar99) ==
                            bVar99) & bVar58 ^ (byte)cVar11);
        pcVar3[10] = (code)(-((byte)((bVar84 < bVar100) * bVar84 | (bVar84 >= bVar100) * bVar100) ==
                             bVar100) & bVar59 ^ (byte)cVar12);
        pcVar3[0xb] = (code)(-((byte)((bVar85 < bVar101) * bVar85 | (bVar85 >= bVar101) * bVar101)
                              == bVar101) & bVar60 ^ (byte)cVar13);
        pcVar3[0xc] = (code)(-((byte)((bVar86 < bVar102) * bVar86 | (bVar86 >= bVar102) * bVar102)
                              == bVar102) & bVar61 ^ (byte)cVar14);
        pcVar3[0xd] = (code)(-((byte)((bVar87 < bVar103) * bVar87 | (bVar87 >= bVar103) * bVar103)
                              == bVar103) & bVar62 ^ (byte)cVar15);
        pcVar3[0xe] = (code)(-((byte)((bVar88 < bVar104) * bVar88 | (bVar88 >= bVar104) * bVar104)
                              == bVar104) & bVar63 ^ (byte)cVar16);
        pcVar3[0xf] = (code)(-((byte)((bVar89 < bVar105) * bVar89 | (bVar89 >= bVar105) * bVar105)
                              == bVar105) & bVar64 ^ (byte)cVar17);
        pcVar3 = (code *)((longlong)ppbVar80 + lVar69 + 0x10);
        *pcVar3 = (code)(-((byte)((bVar34 < bVar106) * bVar34 | (bVar34 >= bVar106) * bVar106) ==
                          bVar106) & bVar49 ^ (byte)cVar18);
        pcVar3[1] = (code)(-((byte)((bVar35 < bVar107) * bVar35 | (bVar35 >= bVar107) * bVar107) ==
                            bVar107) & bVar50 ^ (byte)cVar19);
        pcVar3[2] = (code)(-((byte)((bVar36 < bVar108) * bVar36 | (bVar36 >= bVar108) * bVar108) ==
                            bVar108) & bVar51 ^ (byte)cVar20);
        pcVar3[3] = (code)(-((byte)((bVar37 < bVar109) * bVar37 | (bVar37 >= bVar109) * bVar109) ==
                            bVar109) & bVar52 ^ (byte)cVar21);
        pcVar3[4] = (code)(-((byte)((bVar38 < bVar110) * bVar38 | (bVar38 >= bVar110) * bVar110) ==
                            bVar110) & bVar53 ^ (byte)cVar22);
        pcVar3[5] = (code)(-((byte)((bVar39 < bVar111) * bVar39 | (bVar39 >= bVar111) * bVar111) ==
                            bVar111) & bVar54 ^ (byte)cVar23);
        pcVar3[6] = (code)(-((byte)((bVar40 < bVar112) * bVar40 | (bVar40 >= bVar112) * bVar112) ==
                            bVar112) & bVar55 ^ (byte)cVar24);
        pcVar3[7] = (code)(-((byte)((bVar41 < bVar113) * bVar41 | (bVar41 >= bVar113) * bVar113) ==
                            bVar113) & bVar56 ^ (byte)cVar25);
        pcVar3[8] = (code)(-((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114) ==
                            bVar114) & bVar57 ^ (byte)cVar26);
        pcVar3[9] = (code)(-((byte)((bVar83 < bVar115) * bVar83 | (bVar83 >= bVar115) * bVar115) ==
                            bVar115) & bVar58 ^ (byte)cVar27);
        pcVar3[10] = (code)(-((byte)((bVar84 < bVar116) * bVar84 | (bVar84 >= bVar116) * bVar116) ==
                             bVar116) & bVar59 ^ (byte)cVar28);
        pcVar3[0xb] = (code)(-((byte)((bVar85 < bVar117) * bVar85 | (bVar85 >= bVar117) * bVar117)
                              == bVar117) & bVar60 ^ (byte)cVar29);
        pcVar3[0xc] = (code)(-((byte)((bVar86 < bVar118) * bVar86 | (bVar86 >= bVar118) * bVar118)
                              == bVar118) & bVar61 ^ (byte)cVar30);
        pcVar3[0xd] = (code)(-((byte)((bVar87 < bVar119) * bVar87 | (bVar87 >= bVar119) * bVar119)
                              == bVar119) & bVar62 ^ (byte)cVar31);
        pcVar3[0xe] = (code)(-((byte)((bVar88 < bVar120) * bVar88 | (bVar88 >= bVar120) * bVar120)
                              == bVar120) & bVar63 ^ (byte)cVar32);
        pcVar3[0xf] = (code)(-((byte)((bVar89 < bVar121) * bVar89 | (bVar89 >= bVar121) * bVar121)
                              == bVar121) & bVar64 ^ (byte)cVar33);
        ppbVar80 = ppbVar80 + 4;
      } while (ppbVar71 != ppbVar80);
      if (ppbVar79 == ppbVar71) goto LAB_00507614;
      ppbVar80 = ppbVar71;
      if (((ulonglong)ppbVar79 & 0x18) != 0) goto LAB_00506f9c;
    }
    else {
      ppbVar71 = (byte **)0x0;
    }
    do {
      *(byte *)((longlong)ppbVar71 + lVar69) =
           ((byte)((char)*(code *)((longlong)ppbVar71 + lVar69) + 0x9fU) < 0x1a) << 5 ^
           (byte)*(code *)((longlong)ppbVar71 + lVar69);
      ppbVar71 = (byte **)((longlong)ppbVar71 + 1);
LAB_0050760f:
    } while (ppbVar79 != ppbVar71);
  }
LAB_00507614:
  lVar78 = 0x13;
  cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                     ("VALIDATION_REQUIRED",0x13,lVar69,ppbVar79);
  if (cVar65 == '\0') {
    lVar78 = 0xf;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("QUOTA_EXHAUSTED",0xf,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x18;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("MODEL_CAPACITY_EXHAUSTED",0x18,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x13;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("RATE_LIMIT_EXCEEDED",0x13,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x1f;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("INSUFFICIENT_G1_CREDITS_BALANCE",0x1f,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x12;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("UNSUPPORTED_REGION",0x12,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x16;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("LOCATION_NOT_SUPPORTED",0x16,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x12;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("UNSUPPORTED_CLIENT",0x12,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0xd;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("TOS_VIOLATION",0xd,lVar69,ppbVar79);
    if (cVar65 != '\0') goto LAB_00507794;
    lVar78 = 0x11;
    cVar65 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       ("ACCOUNT_SUSPENDED",0x11,lVar69,ppbVar79);
    uVar81 = extraout_XMM0_Qa_02;
    if (cVar65 != '\0') goto LAB_00507794;
  }
  else {
LAB_00507794:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar69 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar69 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00507bf3;
    }
    uVar81 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_03,lVar78);
    if ((local_310 != -1) && (local_310 != 0)) {
      uVar81 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar81,1);
    }
    local_310 = lVar78;
    local_308 = lVar69;
    local_300 = lVar78;
  }
  local_1c8 = 1;
  local_1c6 = SUB82(local_3e0,0);
  ppbVar80 = local_3e8;
  ppbVar71 = local_3f0;
  if (local_3f0 != (byte **)0xffffffffffffffff) goto LAB_0050792c;
  param_5 = (byte **)&DAT_00000007;
  switch(local_1c6) {
  case 400:
  case 0x19d:
  case 0x1a6:
    param_5 = (byte **)&DAT_00000010;
    break;
  case 0x191:
    param_5 = (byte **)&DAT_0000000f;
    break;
  case 0x193:
    goto LAB_005078e5;
  case 0x194:
    param_5 = (byte **)&DAT_00000009;
    break;
  case 0x199:
    break;
  case 0x1ad:
    param_5 = (byte **)0x12;
    break;
  case 499:
    param_5 = (byte **)&DAT_00000009;
    break;
  case 500:
    param_5 = (byte **)&DAT_00000008;
    break;
  case 0x1f5:
    param_5 = (byte **)&DAT_0000000d;
    break;
  case 0x1f7:
  case 0x211:
    param_5 = (byte **)0xb;
    break;
  case 0x1f8:
LAB_005078e5:
    param_5 = (byte **)&DAT_00000011;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  ppbVar80 = (byte **)(*(code *)PTR___rust_alloc_00799000)();
  if (ppbVar80 == (byte **)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    uVar81 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_04,param_5);
    ppbVar71 = param_5;
LAB_0050792c:
    if ((local_328 != (byte **)0xffffffffffffffff) && (local_328 != (byte **)0x0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar81,1);
    }
    ppbVar68 = ppbStack_348;
    local_328 = ppbVar71;
    ppbStack_320 = ppbVar80;
    local_318 = param_5;
    uVar66 = has_invalid_thinking_signature(ppbStack_348,local_340);
    ppbVar80 = local_3e0;
    local_1c4 = CONCAT11(uVar66,(undefined1)local_1c4);
    local_1c2 = (undefined1)local_378;
    ppbVar71 = (byte **)0x0;
    if (local_328 != (byte **)0xffffffffffffffff) {
      ppbVar71 = ppbStack_320;
    }
    lVar69 = 0;
    if (local_310 != -1) {
      lVar69 = local_308;
    }
    local_1b8 = ppbVar68;
    uVar81 = 0;
    if (local_268 != -1) {
      uVar81 = local_260;
    }
    auVar122 = classify_machine_code
                         ((ulonglong)local_3e0 & 0xffffffff,ppbVar71,local_318,lVar69,local_300,
                          uVar81,(undefined1)local_1c4,uVar66);
    local_378 = local_350;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_05,0x178);
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_178 = (byte **)(*(code *)PTR___rust_alloc_00799000)();
    if (local_178 != (byte **)0x0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_06,0x178);
      local_170 = SUB82(ppbVar80,0);
      local_1a8 = (byte **)0xffffffffffffffff;
      stack0xfffffffffffffe70 = (byte *)local_350;
      local_188 = ppbStack_348;
      ppbStack_180 = local_340;
      local_16e = 2;
      uStack_16d = uStack_16d & 0xffffff00;
      _auStack_1a0 = auVar122;
      local_16e = <craggemini_core[66f3c71560d70857]::protocol::Failure>::effective_retryable
                            (&local_1a8,&local_1a8);
      param_1 = local_1b0;
      *local_1b0 = local_1a8;
      *(undefined1 (*) [16])(local_1b0 + 1) = _auStack_1a0;
      local_1b0[3] = stack0xfffffffffffffe70;
      local_1b0[4] = local_188;
      local_1b0[5] = ppbStack_180;
      local_1b0[6] = local_178;
      *(undefined2 *)(local_1b0 + 7) = local_170;
      *(undefined1 *)((longlong)local_1b0 + 0x3a) = local_16e;
      *(uint *)((longlong)local_1b0 + 0x3b) = uStack_16d;
      *(undefined1 *)((longlong)local_1b0 + 0x3f) = local_169;
      ppbVar80 = local_1a8;
      if (ppbVar79 != (byte **)0x0) {
        ppbVar80 = (byte **)(*(code *)PTR___rust_dealloc_00798fc8)(local_1a8,1);
      }
      if (local_3d0 != (byte **)0x0) {
        ppbVar80 = (byte **)(*(code *)PTR___rust_dealloc_00798fc8)(ppbVar80,1);
      }
      if (local_3d8 != (byte **)0x0) {
        ppbVar80 = (byte **)(*(code *)PTR___rust_dealloc_00798fc8)(ppbVar80,1);
        local_3c0 = local_370;
      }
LAB_005067f4:
      if ((local_3c0 != -1) && (local_3c0 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(ppbVar80,1);
      }
      return param_1;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
LAB_00507bf3:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


