// 005f57e0 verify_pair

/* craggemini_core[66f3c71560d70857]::license::host::verify_pair */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::license::host::verify_pair
          (undefined8 *param_1,int *param_2,undefined *param_3,int *param_4,longlong param_5,
          undefined8 param_6,undefined8 param_7,longlong param_8,longlong param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined5 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined6 uVar11;
  undefined6 uVar12;
  undefined *puVar13;
  char cVar14;
  char cVar15;
  undefined2 uVar16;
  int *piVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined1 uVar20;
  char cVar21;
  char cVar22;
  int iVar23;
  uint *puVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar32 [16];
  char local_448;
  char cStack_447;
  undefined2 uStack_446;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408;
  undefined7 uStack_407;
  undefined1 uStack_400;
  undefined6 uStack_3ff;
  undefined1 uStack_3f9;
  undefined1 uStack_3f8;
  undefined2 uStack_3f7;
  undefined4 uStack_3f5;
  undefined1 uStack_3f1;
  undefined1 uStack_3f0;
  undefined2 uStack_3ef;
  undefined2 uStack_3ed;
  undefined2 uStack_3eb;
  undefined1 uStack_3e9;
  undefined1 uStack_3e8;
  undefined4 uStack_3e7;
  undefined4 uStack_3e3;
  undefined7 uStack_3df;
  longlong local_3d8;
  undefined4 local_3d0;
  undefined2 local_3cc;
  char local_3c8;
  char cStack_3c7;
  undefined2 uStack_3c6;
  undefined1 uStack_3c4;
  undefined1 uStack_3c3;
  undefined1 uStack_3c2;
  undefined1 uStack_3c1;
  char cStack_3c0;
  char cStack_3bf;
  undefined2 uStack_3be;
  undefined1 uStack_3bc;
  undefined1 uStack_3bb;
  undefined1 uStack_3ba;
  char cStack_3b9;
  undefined1 uStack_3b8;
  undefined4 uStack_3b7;
  undefined1 uStack_3b3;
  undefined1 uStack_3b2;
  undefined1 uStack_3b1;
  char cStack_3b0;
  char cStack_3af;
  undefined4 uStack_3ae;
  undefined1 uStack_3aa;
  char cStack_3a9;
  undefined1 local_3a8;
  undefined1 uStack_3a7;
  undefined4 uStack_3a6;
  undefined1 uStack_3a2;
  undefined1 uStack_3a1;
  undefined1 uStack_3a0;
  undefined1 uStack_39f;
  undefined4 uStack_39e;
  undefined1 uStack_39a;
  undefined1 uStack_399;
  undefined1 uStack_398;
  undefined1 uStack_397;
  undefined1 uStack_396;
  undefined2 uStack_395;
  undefined2 uStack_393;
  undefined1 uStack_391;
  undefined1 uStack_390;
  undefined2 uStack_38f;
  undefined2 uStack_38d;
  undefined2 uStack_38b;
  undefined1 uStack_389;
  undefined1 uStack_388;
  undefined4 uStack_387;
  undefined4 uStack_383;
  undefined7 uStack_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  uint uStack_368;
  undefined4 uStack_364;
  longlong local_310;
  longlong local_2f8;
  longlong local_2e0;
  uint local_2d8;
  char local_2d4;
  int *local_2d0;
  longlong local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int iStack_28c;
  undefined1 uStack_288;
  undefined4 uStack_287;
  undefined4 uStack_283;
  undefined4 uStack_27f;
  undefined4 uStack_27b;
  undefined3 uStack_277;
  int iStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  char local_1d8;
  undefined4 uStack_1d7;
  undefined4 uStack_1d3;
  undefined4 uStack_1cf;
  undefined4 uStack_1cb;
  undefined4 uStack_1c7;
  undefined4 uStack_1c3;
  undefined4 uStack_1bf;
  uint uStack_1bb;
  undefined4 uStack_1b7;
  undefined4 uStack_1b3;
  undefined4 uStack_1af;
  undefined4 uStack_1ab;
  undefined3 uStack_1a7;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  char local_198;
  char cStack_197;
  undefined2 uStack_196;
  undefined2 uStack_194;
  undefined2 uStack_192;
  char cStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  undefined1 uStack_188;
  undefined1 uStack_187;
  undefined2 uStack_186;
  undefined2 uStack_184;
  undefined2 uStack_182;
  char cStack_180;
  undefined1 uStack_17f;
  undefined2 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined2 uStack_176;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined1 local_170;
  undefined1 uStack_16f;
  undefined2 uStack_16e;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined4 local_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  
  cVar22 = '\x03';
  cVar21 = '\x03';
  if (param_3 < (undefined *)0x7) goto LAB_005f60a7;
  local_3d8 = param_5;
  local_2d0 = param_4;
  if (*(int *)((longlong)param_2 + 3) == 0x2e324847 && *param_2 == 0x47415243) {
    if (&DAT_00180001 <= param_3) goto LAB_005f60a7;
    param_3 = param_3 + -7;
    lVar28 = (longlong)param_2 + 7;
    local_3c8 = (char)lVar28;
    cStack_3c7 = (char)((ulonglong)lVar28 >> 8);
    uStack_3c6 = (undefined2)((ulonglong)lVar28 >> 0x10);
    uStack_3c4 = (undefined1)((ulonglong)lVar28 >> 0x20);
    uStack_3c3 = (undefined1)((ulonglong)lVar28 >> 0x28);
    uStack_3c2 = (undefined1)((ulonglong)lVar28 >> 0x30);
    uStack_3c1 = (undefined1)((ulonglong)lVar28 >> 0x38);
    cStack_3c0 = (char)param_3;
    cStack_3bf = (char)((ulonglong)param_3 >> 8);
    uStack_3be = (undefined2)((ulonglong)param_3 >> 0x10);
    uStack_3bc = (undefined1)((ulonglong)param_3 >> 0x20);
    uStack_3bb = (undefined1)((ulonglong)param_3 >> 0x28);
    uStack_3ba = (undefined1)((ulonglong)param_3 >> 0x30);
    cStack_3b9 = (char)((ulonglong)param_3 >> 0x38);
    uStack_3b8 = 0;
    uStack_3b7 = 0;
    uStack_3b3 = 0;
    uStack_3b2 = 0;
    uStack_3b1 = 0;
    uStack_3ae = (undefined4)((ulonglong)param_3 >> 0x10);
    uStack_3a0 = 1;
    local_3a8 = 0x2e;
    uStack_3a7 = 0;
    uStack_3a6 = 0x2e0000;
    uStack_3a2 = 0;
    uStack_3a1 = 0;
    cStack_3b0 = cStack_3c0;
    cStack_3af = cStack_3bf;
    uStack_3aa = uStack_3ba;
    cStack_3a9 = cStack_3b9;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_448,&local_3c8);
    cVar21 = cVar22;
    if (local_448 == '\0') goto LAB_005f60a7;
    lVar30 = CONCAT44(uStack_434,uStack_438);
    base64[729f3f786a952ed7]::engine::Engine::decode::inner::
    <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
              (&local_3c8,&DAT_0019dabc,lVar28,CONCAT44(uStack_43c,uStack_440));
    uVar16 = uStack_3be;
    cVar15 = cStack_3bf;
    cVar14 = cStack_3c0;
    lVar29 = CONCAT17(uStack_3c1,
                      CONCAT16(uStack_3c2,
                               CONCAT15(uStack_3c3,
                                        CONCAT14(uStack_3c4,
                                                 CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))
                                                ))));
    if (lVar29 == -1) goto LAB_005f60a7;
    uVar7 = CONCAT17(cStack_3b9,
                     CONCAT16(uStack_3ba,
                              CONCAT15(uStack_3bb,
                                       CONCAT14(uStack_3bc,
                                                CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0))
                                               ))));
    uVar6 = CONCAT41(uStack_3b7,uStack_3b8);
    uVar9 = CONCAT17(uStack_3b1,CONCAT16(uStack_3b2,CONCAT15(uStack_3b3,uVar6)));
    uVar31 = base64[729f3f786a952ed7]::engine::Engine::decode::inner::
             <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                       (&local_1d8,"",lVar28 + lVar30,(longlong)param_3 - lVar30);
    lVar28 = CONCAT35((undefined3)uStack_1d3,CONCAT41(uStack_1d7,local_1d8));
    if (lVar28 != -1) {
      pcVar10 = (char *)CONCAT35((uint3)uStack_1cb,CONCAT41(uStack_1cf,uStack_1d3._3_1_));
      if (CONCAT35((undefined3)uStack_1c3,CONCAT41(uStack_1c7,uStack_1cb._3_1_)) == 0x40) {
        cVar21 = *pcVar10;
        local_3cc = *(undefined2 *)(pcVar10 + 5);
        local_3d0 = *(undefined4 *)(pcVar10 + 1);
        uVar2 = *(undefined8 *)(pcVar10 + 7);
        uVar3 = *(undefined8 *)(pcVar10 + 0xf);
        uVar4 = *(undefined8 *)(pcVar10 + 0x17);
        uStack_428 = CONCAT31(uStack_428._1_3_,pcVar10[0x3f]);
        uStack_438 = (undefined4)*(undefined8 *)(pcVar10 + 0x2f);
        uStack_434 = (undefined4)((ulonglong)*(undefined8 *)(pcVar10 + 0x2f) >> 0x20);
        uStack_430 = (undefined4)*(undefined8 *)(pcVar10 + 0x37);
        uStack_42c = (undefined4)((ulonglong)*(undefined8 *)(pcVar10 + 0x37) >> 0x20);
        uVar31 = *(undefined4 *)(pcVar10 + 0x1f);
        uStack_444 = *(undefined4 *)(pcVar10 + 0x23);
        uStack_440 = *(undefined4 *)(pcVar10 + 0x27);
        uStack_43c = *(undefined4 *)(pcVar10 + 0x2b);
        local_448 = (char)uVar31;
        cStack_447 = (char)((uint)uVar31 >> 8);
        uStack_446 = (undefined2)((uint)uVar31 >> 0x10);
        if (lVar28 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(cVar21,1);
        }
        uStack_3c3 = (undefined1)local_3cc;
        uStack_3c2 = (undefined1)((ushort)local_3cc >> 8);
        cStack_3c7 = (char)local_3d0;
        uStack_3c6 = (undefined2)((uint)local_3d0 >> 8);
        uStack_3c4 = (undefined1)((uint)local_3d0 >> 0x18);
        cStack_3a9 = local_448;
        local_3a8 = cStack_447;
        uStack_3a7 = (undefined1)uStack_446;
        uStack_3a6._0_1_ = (undefined1)((ushort)uStack_446 >> 8);
        uStack_3a6._1_3_ = (undefined3)uStack_444;
        uStack_3a2 = (undefined1)((uint)uStack_444 >> 0x18);
        uStack_3a1 = (undefined1)uStack_440;
        uStack_3a0 = (undefined1)((uint)uStack_440 >> 8);
        uStack_39f = (undefined1)((uint)uStack_440 >> 0x10);
        uStack_39e._1_3_ = (undefined3)uStack_43c;
        uStack_39e = CONCAT31(uStack_39e._1_3_,(char)((uint)uStack_440 >> 0x18));
        uStack_39a = (undefined1)((uint)uStack_43c >> 0x18);
        uStack_399 = (undefined1)uStack_438;
        uStack_398 = (undefined1)((uint)uStack_438 >> 8);
        uStack_397 = (undefined1)((uint)uStack_438 >> 0x10);
        uStack_396 = (undefined1)((uint)uStack_438 >> 0x18);
        uStack_395 = (undefined2)uStack_434;
        uStack_393 = (undefined2)((uint)uStack_434 >> 0x10);
        uStack_391 = (undefined1)uStack_430;
        uStack_390 = (undefined1)((uint)uStack_430 >> 8);
        uStack_38f = (undefined2)((uint)uStack_430 >> 0x10);
        uStack_38d = (undefined2)uStack_42c;
        uStack_38b = (undefined2)((uint)uStack_42c >> 0x10);
        uStack_389 = (undefined1)uStack_428;
        uStack_3c1 = (undefined1)uVar2;
        cStack_3c0 = (char)((ulonglong)uVar2 >> 8);
        cStack_3bf = (char)((ulonglong)uVar2 >> 0x10);
        uStack_3be = (undefined2)((ulonglong)uVar2 >> 0x18);
        uStack_3bc = (undefined1)((ulonglong)uVar2 >> 0x28);
        uStack_3bb = (undefined1)((ulonglong)uVar2 >> 0x30);
        uStack_3ba = (undefined1)((ulonglong)uVar2 >> 0x38);
        cStack_3b9 = (char)uVar3;
        uStack_3b8 = (undefined1)((ulonglong)uVar3 >> 8);
        uStack_3b7 = (undefined4)((ulonglong)uVar3 >> 0x10);
        uStack_3b3 = (undefined1)((ulonglong)uVar3 >> 0x30);
        uStack_3b2 = (undefined1)((ulonglong)uVar3 >> 0x38);
        uStack_3b1 = (undefined1)uVar4;
        cStack_3b0 = (char)((ulonglong)uVar4 >> 8);
        cStack_3af = (char)((ulonglong)uVar4 >> 0x10);
        uStack_3ae = (undefined4)((ulonglong)uVar4 >> 0x18);
        uStack_3aa = (undefined1)((ulonglong)uVar4 >> 0x38);
        local_3c8 = cVar21;
        cVar21 = verify_signature(param_6,"CRAGH2",7,uVar7,uVar9,&local_3c8);
        uVar31 = extraout_XMM0_Da_00;
        if (cVar21 == -1) {
          local_448 = cVar14;
          cStack_447 = cVar15;
          uStack_446 = uVar16;
          uStack_444 = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_440 = (undefined4)uVar6;
          uStack_43c = (undefined4)((ulonglong)uVar9 >> 0x20);
          uStack_438 = 0;
          uStack_434 = 0;
          uStack_430 = 0;
          uStack_42c = 0;
          serde_json[dc3825464c436029]::de::from_trait::
          <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>
                    (&local_3c8,&local_448);
          cVar21 = cStack_3c0;
          lVar28 = CONCAT17(uStack_3c1,
                            CONCAT16(uStack_3c2,
                                     CONCAT15(uStack_3c3,
                                              CONCAT14(uStack_3c4,
                                                       CONCAT22(uStack_3c6,
                                                                CONCAT11(cStack_3c7,local_3c8))))));
          if (lVar28 == -1) {
            uStack_444 = CONCAT13(cStack_3b9,CONCAT12(uStack_3ba,CONCAT11(uStack_3bb,uStack_3bc)));
            local_448 = cStack_3c0;
            cStack_447 = cStack_3bf;
            uStack_446 = uStack_3be;
            uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::error::Error>(&local_448);
            goto LAB_005f63c7;
          }
          uStack_3f8 = (undefined1)((uint)uStack_370 >> 8);
          uStack_3f7 = (undefined2)((uint)uStack_370 >> 0x10);
          uStack_3f5 = uStack_36c;
          uStack_3f1 = (undefined1)uStack_368;
          uStack_3f0 = (undefined1)(uStack_368 >> 8);
          uStack_3ef = (undefined2)(uStack_368 >> 0x10);
          uStack_3ed = (undefined2)uStack_364;
          uStack_3eb = (undefined2)((uint)uStack_364 >> 0x10);
          local_408 = (undefined1)uStack_37f;
          uStack_407 = (undefined7)(CONCAT17(uStack_378,uStack_37f) >> 8);
          uStack_400 = (undefined1)uStack_377;
          uStack_3ff = (undefined6)((uint7)uStack_377 >> 8);
          uStack_3f9 = (undefined1)uStack_370;
          uStack_418 = CONCAT22(uStack_38d,uStack_38f);
          uStack_414 = (undefined4)
                       (CONCAT17(uStack_388,CONCAT16(uStack_389,CONCAT24(uStack_38b,uStack_418))) >>
                       0x20);
          uStack_410 = uStack_387;
          uStack_40c = uStack_383;
          uStack_420 = CONCAT22(uStack_395,CONCAT11(uStack_396,uStack_397));
          uStack_428 = (undefined4)CONCAT41(uStack_39e,uStack_39f);
          uStack_424 = (undefined4)
                       (CONCAT17(uStack_398,
                                 CONCAT16(uStack_399,
                                          CONCAT15(uStack_39a,CONCAT41(uStack_39e,uStack_39f)))) >>
                       0x20);
          uStack_41c = (undefined4)
                       (CONCAT17(uStack_390,CONCAT16(uStack_391,CONCAT24(uStack_393,uStack_420))) >>
                       0x20);
          uStack_438 = (undefined4)CONCAT41(uStack_3ae,cStack_3af);
          uStack_434 = (undefined4)
                       (CONCAT17(local_3a8,
                                 CONCAT16(cStack_3a9,
                                          CONCAT15(uStack_3aa,CONCAT41(uStack_3ae,cStack_3af)))) >>
                       0x20);
          uStack_430 = (undefined4)CONCAT41(uStack_3a6,uStack_3a7);
          uStack_42c = (undefined4)
                       (CONCAT17(uStack_3a0,
                                 CONCAT16(uStack_3a1,
                                          CONCAT15(uStack_3a2,CONCAT41(uStack_3a6,uStack_3a7)))) >>
                       0x20);
          uVar31 = CONCAT13(uStack_3bc,CONCAT21(uStack_3be,cStack_3bf));
          uStack_444 = CONCAT13(uStack_3b8,CONCAT12(cStack_3b9,CONCAT11(uStack_3ba,uStack_3bb)));
          uStack_43c = CONCAT13(cStack_3b0,CONCAT12(uStack_3b1,CONCAT11(uStack_3b2,uStack_3b3)));
          local_448 = cStack_3bf;
          cStack_447 = (char)uStack_3be;
          uStack_446 = (undefined2)((uint)uVar31 >> 0x10);
          uStack_440 = uStack_3b7;
          if (lVar29 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
          }
          uVar31 = CONCAT22(uStack_446,CONCAT11(cStack_447,local_448));
          uStack_2ac._1_3_ = (undefined3)uStack_434;
          uStack_2ac = CONCAT31(uStack_2ac._1_3_,(char)((uint)uStack_438 >> 0x18));
          uStack_2a8._1_3_ = (undefined3)uStack_430;
          uStack_2a8 = CONCAT31(uStack_2a8._1_3_,(char)((uint)uStack_434 >> 0x18));
          uStack_2a4._1_3_ = (undefined3)uStack_42c;
          uStack_2a4 = CONCAT31(uStack_2a4._1_3_,(char)((uint)uStack_430 >> 0x18));
          uStack_2a0._1_3_ = (undefined3)uStack_428;
          uStack_2a0 = CONCAT31(uStack_2a0._1_3_,(char)((uint)uStack_42c >> 0x18));
          uStack_29c._1_3_ = (undefined3)uStack_424;
          uStack_29c = CONCAT31(uStack_29c._1_3_,(char)((uint)uStack_428 >> 0x18));
          uStack_298._1_3_ = (undefined3)uStack_420;
          uStack_298 = CONCAT31(uStack_298._1_3_,(char)((uint)uStack_424 >> 0x18));
          uStack_294._1_3_ = (undefined3)uStack_41c;
          uStack_294 = CONCAT31(uStack_294._1_3_,(char)((uint)uStack_420 >> 0x18));
          uStack_2c0._1_3_ = (undefined3)uVar31;
          uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar21);
          uStack_2bc = (undefined4)(CONCAT44(uStack_444,uVar31) >> 0x18);
          uStack_2b8._1_3_ = (undefined3)uStack_440;
          uStack_2b8 = CONCAT31(uStack_2b8._1_3_,(char)((uint)uStack_444 >> 0x18));
          uStack_2b4 = (undefined4)(CONCAT44(uStack_43c,uStack_440) >> 0x18);
          uStack_2b0._0_1_ = (undefined1)((uint)uStack_43c >> 0x18);
          uStack_2b0 = CONCAT31((int3)uStack_438,(undefined1)uStack_2b0);
          uStack_290._1_3_ = (undefined3)uStack_418;
          uStack_290 = CONCAT31(uStack_290._1_3_,(char)((uint)uStack_41c >> 0x18));
          iStack_28c._1_3_ = (undefined3)uStack_414;
          iStack_28c = CONCAT31(iStack_28c._1_3_,(char)((uint)uStack_418 >> 0x18));
          uStack_288 = (undefined1)((uint)uStack_414 >> 0x18);
          uStack_287 = uStack_410;
          uStack_283 = uStack_40c;
          uStack_27f = (undefined4)CONCAT71(uStack_407,local_408);
          uStack_27b = (undefined4)((uint7)uStack_407 >> 0x18);
          uStack_277 = (undefined3)CONCAT61(uStack_3ff,uStack_400);
          iStack_274 = (int)((uint6)uStack_3ff >> 0x10);
          uStack_270 = CONCAT22(uStack_3f7,CONCAT11(uStack_3f8,uStack_3f9));
          uStack_268 = CONCAT22(uStack_3ef,CONCAT11(uStack_3f0,uStack_3f1));
          uStack_264 = CONCAT22(uStack_3eb,uStack_3ed);
          uStack_26c = uStack_3f5;
          local_2c8 = lVar28;
          decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
          if (local_3c8 == '\x01') {
            cVar21 = cStack_3c7;
          }
          else {
            cVar21 = '\x03';
            if ((((char)uStack_264 == '\x02') && (CONCAT44(uStack_2b4,uStack_2b8) == 10)) &&
               ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] == 0x696e &&
                *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) == 0x696d656767617263)) {
              if (0 < CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_))) {
                if ((-1 < iStack_274) &&
                   (CONCAT44(iStack_274,CONCAT31(uStack_277,uStack_27b._3_1_)) <
                    CONCAT44(uStack_26c,uStack_270))) {
                  uVar25 = CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288));
                  if (uVar25 < 0x2711) {
                    auVar32 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                              ::with::
                              <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                                        (&
                                         anon_30b5cef53457a6ea696e8d7e9f6273d6_237_llvm_8436237269785592069
                                        );
                    <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
                    <alloc[12e961f32105355]::alloc::Global>(&local_448,0x10,uVar25);
                    uVar26 = uStack_268;
                    local_3a8 = auVar32[0];
                    uStack_3a7 = auVar32[1];
                    uStack_3a6 = auVar32._2_4_;
                    uStack_3a2 = auVar32[6];
                    uStack_3a1 = auVar32[7];
                    uStack_3a0 = auVar32[8];
                    uStack_39f = auVar32[9];
                    uStack_39e = auVar32._10_4_;
                    uStack_39a = auVar32[0xe];
                    uStack_399 = auVar32[0xf];
                    local_3c8 = local_448;
                    cStack_3c7 = cStack_447;
                    uStack_3c6 = uStack_446;
                    uStack_3c4 = (undefined1)uStack_444;
                    uStack_3c3 = (undefined1)((uint)uStack_444 >> 8);
                    uStack_3c2 = (undefined1)((uint)uStack_444 >> 0x10);
                    uStack_3c1 = (undefined1)((uint)uStack_444 >> 0x18);
                    cStack_3c0 = (char)uStack_440;
                    cStack_3bf = (char)((uint)uStack_440 >> 8);
                    uStack_3be = (undefined2)((uint)uStack_440 >> 0x10);
                    uStack_3bc = (undefined1)uStack_43c;
                    uStack_3bb = (undefined1)((uint)uStack_43c >> 8);
                    uStack_3ba = (undefined1)((uint)uStack_43c >> 0x10);
                    cStack_3b9 = (char)((uint)uStack_43c >> 0x18);
                    uStack_3b8 = (undefined1)uStack_438;
                    uStack_3b7 = (undefined4)(CONCAT44(uStack_434,uStack_438) >> 8);
                    uStack_3b3 = (undefined1)((uint)uStack_434 >> 8);
                    uStack_3b2 = (undefined1)((uint)uStack_434 >> 0x10);
                    uStack_3b1 = (undefined1)((uint)uStack_434 >> 0x18);
                    cStack_3b0 = (char)uStack_430;
                    cStack_3af = (char)((uint)uStack_430 >> 8);
                    uStack_3ae = (undefined4)(CONCAT44(uStack_42c,uStack_430) >> 0x10);
                    uStack_3aa = (undefined1)((uint)uStack_42c >> 0x10);
                    cStack_3a9 = (char)((uint)uStack_42c >> 0x18);
                    if (uVar25 != 0) {
                      lVar28 = CONCAT44(iStack_28c,uStack_290);
                      uVar27 = 0;
                      if (uStack_268 == 0) {
                        lVar30 = 0;
                        cVar21 = '\x03';
                        do {
                          if (*(uint *)(lVar28 + 0x18 + lVar30) <= uVar27) goto LAB_005f687e;
                          decode_hash(&local_448,*(undefined8 *)(lVar28 + 8 + lVar30),
                                      *(undefined8 *)(lVar28 + 0x10 + lVar30));
                          if (local_448 != '\0') goto LAB_005f6879;
                          cVar22 = <hashbrown[b5c94476ffc33875]::map::HashMap<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                                   ::insert(&local_3c8,*(undefined8 *)(lVar28 + 8 + lVar30),
                                            *(undefined8 *)(lVar28 + 0x10 + lVar30));
                          if (cVar22 != '\0') goto LAB_005f687e;
                          uVar27 = *(uint *)(lVar28 + 0x18 + lVar30);
                          lVar30 = lVar30 + 0x20;
                        } while (uVar25 * 0x20 != lVar30);
                      }
                      else {
                        lVar30 = 0;
                        cVar21 = '\x03';
                        do {
                          uVar1 = *(uint *)(lVar28 + 0x18 + lVar30);
                          if ((uVar1 <= uVar27) || (uVar26 < uVar1)) goto LAB_005f687e;
                          decode_hash(&local_448,*(undefined8 *)(lVar28 + 8 + lVar30),
                                      *(undefined8 *)(lVar28 + 0x10 + lVar30));
                          if (local_448 == '\x01') goto LAB_005f6879;
                          cVar22 = <hashbrown[b5c94476ffc33875]::map::HashMap<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
                                   ::insert(&local_3c8,*(undefined8 *)(lVar28 + 8 + lVar30),
                                            *(undefined8 *)(lVar28 + 0x10 + lVar30));
                          if (cVar22 != '\0') goto LAB_005f687e;
                          uVar27 = *(uint *)(lVar28 + 0x18 + lVar30);
                          lVar30 = lVar30 + 0x20;
                        } while (uVar25 * 0x20 != lVar30);
                      }
                    }
                    <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                    ::drop(&local_3c8);
                    cStack_190 = (char)local_2c8;
                    uStack_18f = (undefined1)((ulonglong)local_2c8 >> 8);
                    uStack_18e = (undefined2)((ulonglong)local_2c8 >> 0x10);
                    uStack_18c = (undefined2)((ulonglong)local_2c8 >> 0x20);
                    uStack_18a = (undefined2)((ulonglong)local_2c8 >> 0x30);
                    uStack_188 = (undefined1)uStack_2c0;
                    uStack_187 = (undefined1)((uint)uStack_2c0 >> 8);
                    uStack_186 = (undefined2)((uint)uStack_2c0 >> 0x10);
                    uStack_184 = (undefined2)uStack_2bc;
                    uStack_182 = (undefined2)((uint)uStack_2bc >> 0x10);
                    cStack_180 = (char)uStack_2b8;
                    uStack_17f = (undefined1)((uint)uStack_2b8 >> 8);
                    uStack_17e = (undefined2)((uint)uStack_2b8 >> 0x10);
                    uStack_17c = (undefined2)uStack_2b4;
                    uStack_17a = (undefined2)((uint)uStack_2b4 >> 0x10);
                    uStack_178 = (undefined1)uStack_2b0;
                    uStack_177 = (undefined1)((uint)uStack_2b0 >> 8);
                    uStack_176 = (undefined2)((uint)uStack_2b0 >> 0x10);
                    uStack_174 = (undefined2)uStack_2ac;
                    uStack_172 = (undefined2)((uint)uStack_2ac >> 0x10);
                    local_170 = (undefined1)uStack_2a8;
                    uStack_16f = (undefined1)((uint)uStack_2a8 >> 8);
                    uStack_16e = (undefined2)((uint)uStack_2a8 >> 0x10);
                    uStack_16c = (undefined2)uStack_2a4;
                    uStack_16a = (undefined2)((uint)uStack_2a4 >> 0x10);
                    uStack_168 = (undefined1)uStack_2a0;
                    uStack_167 = (undefined1)((uint)uStack_2a0 >> 8);
                    uStack_166 = (undefined2)((uint)uStack_2a0 >> 0x10);
                    uStack_164 = uStack_29c;
                    local_160 = uStack_298;
                    uStack_15c = uStack_294;
                    uStack_158 = uStack_290;
                    iStack_154 = iStack_28c;
                    local_150 = uStack_288;
                    uStack_14f = (undefined7)
                                 (CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288))
                                 >> 8);
                    uStack_148 = uStack_283._3_1_;
                    uStack_147 = (undefined7)
                                 (CONCAT35((undefined3)uStack_27b,
                                           CONCAT41(uStack_27f,uStack_283._3_1_)) >> 8);
                    local_140 = CONCAT31(uStack_277,uStack_27b._3_1_);
                    iStack_13c = iStack_274;
                    uStack_138 = uStack_270;
                    uStack_134 = uStack_26c;
                    uStack_130 = (undefined1)uStack_268;
                    uStack_12f = (undefined7)(CONCAT44(uStack_264,uStack_268) >> 8);
                    local_198 = '\x01';
                    cVar21 = '\x01';
                    goto LAB_005f65b2;
                  }
                }
              }
            }
          }
          goto LAB_005f5df8;
        }
        goto LAB_005f608a;
      }
      if (lVar28 != 0) {
        uVar31 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
      }
    }
    cVar21 = '\x03';
  }
  else if (*(int *)((longlong)param_2 + 3) == 0x2e334847 && *param_2 == 0x47415243) {
    if (&DAT_00180001 <= param_3) goto LAB_005f60a7;
    param_3 = param_3 + -7;
    lVar28 = (longlong)param_2 + 7;
    local_3c8 = (char)lVar28;
    cStack_3c7 = (char)((ulonglong)lVar28 >> 8);
    uStack_3c6 = (undefined2)((ulonglong)lVar28 >> 0x10);
    uStack_3c4 = (undefined1)((ulonglong)lVar28 >> 0x20);
    uStack_3c3 = (undefined1)((ulonglong)lVar28 >> 0x28);
    uStack_3c2 = (undefined1)((ulonglong)lVar28 >> 0x30);
    uStack_3c1 = (undefined1)((ulonglong)lVar28 >> 0x38);
    cStack_3c0 = (char)param_3;
    cStack_3bf = (char)((ulonglong)param_3 >> 8);
    uStack_3be = (undefined2)((ulonglong)param_3 >> 0x10);
    uStack_3bc = (undefined1)((ulonglong)param_3 >> 0x20);
    uStack_3bb = (undefined1)((ulonglong)param_3 >> 0x28);
    uStack_3ba = (undefined1)((ulonglong)param_3 >> 0x30);
    cStack_3b9 = (char)((ulonglong)param_3 >> 0x38);
    uStack_3b8 = 0;
    uStack_3b7 = 0;
    uStack_3b3 = 0;
    uStack_3b2 = 0;
    uStack_3b1 = 0;
    uStack_3ae = (undefined4)((ulonglong)param_3 >> 0x10);
    uStack_3a0 = 1;
    local_3a8 = 0x2e;
    uStack_3a7 = 0;
    uStack_3a6 = 0x2e0000;
    uStack_3a2 = 0;
    uStack_3a1 = 0;
    cStack_3b0 = cStack_3c0;
    cStack_3af = cStack_3bf;
    uStack_3aa = uStack_3ba;
    cStack_3a9 = cStack_3b9;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_448,&local_3c8);
    cVar21 = cVar22;
    if (local_448 == '\0') goto LAB_005f60a7;
    lVar30 = CONCAT44(uStack_434,uStack_438);
    base64[729f3f786a952ed7]::engine::Engine::decode::inner::
    <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
              (&local_3c8,&DAT_0019dabc,lVar28,CONCAT44(uStack_43c,uStack_440));
    uVar16 = uStack_3be;
    cVar15 = cStack_3bf;
    cVar14 = cStack_3c0;
    lVar29 = CONCAT17(uStack_3c1,
                      CONCAT16(uStack_3c2,
                               CONCAT15(uStack_3c3,
                                        CONCAT14(uStack_3c4,
                                                 CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))
                                                ))));
    if (lVar29 == -1) goto LAB_005f60a7;
    uVar7 = CONCAT17(cStack_3b9,
                     CONCAT16(uStack_3ba,
                              CONCAT15(uStack_3bb,
                                       CONCAT14(uStack_3bc,
                                                CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0))
                                               ))));
    uVar6 = CONCAT41(uStack_3b7,uStack_3b8);
    uVar9 = CONCAT17(uStack_3b1,CONCAT16(uStack_3b2,CONCAT15(uStack_3b3,uVar6)));
    uVar31 = decode::<64:usize>(&local_3c8,lVar28 + lVar30,(longlong)param_3 - lVar30);
    cVar21 = cStack_3c7;
    if (local_3c8 != '\x01') {
      uStack_414 = CONCAT13(uStack_390,CONCAT12(uStack_391,uStack_393));
      uStack_424 = CONCAT31(CONCAT12(uStack_3a0,CONCAT11(uStack_3a1,uStack_3a2)),
                            (char)((uint)uStack_3a6 >> 0x18));
      uStack_420._1_3_ = (undefined3)uStack_39e;
      uStack_420 = CONCAT31(uStack_420._1_3_,uStack_39f);
      uStack_41c = CONCAT31(CONCAT12(uStack_398,CONCAT11(uStack_399,uStack_39a)),
                            (char)((uint)uStack_39e >> 0x18));
      uStack_418._1_3_ = (undefined3)(CONCAT22(uStack_395,CONCAT11(uStack_396,uStack_397)) >> 8);
      uStack_418 = CONCAT31(uStack_418._1_3_,uStack_397);
      uStack_434 = CONCAT31(CONCAT12(cStack_3b0,CONCAT11(uStack_3b1,uStack_3b2)),uStack_3b3);
      uStack_430._1_3_ = (undefined3)uStack_3ae;
      uStack_430 = CONCAT31(uStack_430._1_3_,cStack_3af);
      uStack_42c = CONCAT31(CONCAT12(local_3a8,CONCAT11(cStack_3a9,uStack_3aa)),
                            (char)((uint)uStack_3ae >> 0x18));
      uStack_428 = CONCAT31((int3)uStack_3a6,uStack_3a7);
      cStack_447 = (char)uStack_3c6;
      uStack_446 = (undefined2)(CONCAT12(uStack_3c4,uStack_3c6) >> 8);
      uStack_444 = CONCAT31(CONCAT12(cStack_3c0,CONCAT11(uStack_3c1,uStack_3c2)),uStack_3c3);
      uStack_440 = CONCAT31(CONCAT12(uStack_3bc,uStack_3be),cStack_3bf);
      uStack_43c = CONCAT31(CONCAT12(uStack_3b8,CONCAT11(cStack_3b9,uStack_3ba)),uStack_3bb);
      uStack_438 = uStack_3b7;
      local_448 = cStack_3c7;
      cVar21 = verify_signature(param_6,"CRAGH3",7,uVar7,uVar9,&local_448);
      uVar31 = extraout_XMM0_Da_01;
      if (cVar21 == -1) {
        local_448 = cVar14;
        cStack_447 = cVar15;
        uStack_446 = uVar16;
        uStack_444 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_440 = (undefined4)uVar6;
        uStack_43c = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::GrantedEntitlement>
                  (&local_3c8,&local_448);
        cVar21 = cStack_3c0;
        lVar28 = CONCAT17(uStack_3c1,
                          CONCAT16(uStack_3c2,
                                   CONCAT15(uStack_3c3,
                                            CONCAT14(uStack_3c4,
                                                     CONCAT22(uStack_3c6,
                                                              CONCAT11(cStack_3c7,local_3c8))))));
        if (lVar28 != -1) {
          uStack_2c0._1_3_ = CONCAT21(uStack_3be,cStack_3bf);
          uStack_2bc = (undefined4)
                       (CONCAT16(cStack_3b9,
                                 CONCAT15(uStack_3ba,
                                          CONCAT14(uStack_3bb,CONCAT13(uStack_3bc,uStack_2c0._1_3_))
                                         )) >> 0x18);
          uStack_2b8._1_3_ = (undefined3)uStack_3b7;
          uStack_2b8 = CONCAT31(uStack_2b8._1_3_,uStack_3b8);
          uStack_2b4 = (undefined4)
                       (CONCAT16(uStack_3b1,CONCAT15(uStack_3b2,CONCAT14(uStack_3b3,uStack_3b7))) >>
                       0x18);
          uStack_2b0._1_3_ = (undefined3)CONCAT41(uStack_3ae,cStack_3af);
          uStack_2b0 = CONCAT31(uStack_2b0._1_3_,cStack_3b0);
          uStack_2ac = (undefined4)
                       (CONCAT16(cStack_3a9,CONCAT15(uStack_3aa,CONCAT41(uStack_3ae,cStack_3af))) >>
                       0x18);
          uStack_2a8._1_3_ = (undefined3)CONCAT41(uStack_3a6,uStack_3a7);
          uStack_2a8 = CONCAT31(uStack_2a8._1_3_,local_3a8);
          uStack_2a4 = (undefined4)
                       (CONCAT16(uStack_3a1,CONCAT15(uStack_3a2,CONCAT41(uStack_3a6,uStack_3a7))) >>
                       0x18);
          uVar31 = CONCAT22(uStack_395,CONCAT11(uStack_396,uStack_397));
          uStack_2a0._1_3_ = (undefined3)CONCAT41(uStack_39e,uStack_39f);
          uStack_2a0 = CONCAT31(uStack_2a0._1_3_,uStack_3a0);
          uStack_29c = (undefined4)
                       (CONCAT16(uStack_399,CONCAT15(uStack_39a,CONCAT41(uStack_39e,uStack_39f))) >>
                       0x18);
          uStack_298._1_3_ = (undefined3)uVar31;
          uStack_298 = CONCAT31(uStack_298._1_3_,uStack_398);
          uStack_294 = (undefined4)(CONCAT16(uStack_391,CONCAT24(uStack_393,uVar31)) >> 0x18);
          uStack_290._1_3_ = (undefined3)CONCAT22(uStack_38d,uStack_38f);
          uStack_290 = CONCAT31(uStack_290._1_3_,uStack_390);
          iStack_28c = (int)(CONCAT16(uStack_389,
                                      CONCAT24(uStack_38b,CONCAT22(uStack_38d,uStack_38f))) >> 0x18)
          ;
          uStack_288 = uStack_388;
          uStack_287 = uStack_387;
          uStack_283 = uStack_383;
          uStack_27f = (undefined4)uStack_37f;
          uStack_27b = (undefined4)(CONCAT17(uStack_378,uStack_37f) >> 0x20);
          uStack_277 = (undefined3)uStack_377;
          iStack_274 = (int)((uint7)uStack_377 >> 0x18);
          uStack_270 = uStack_370;
          uStack_26c = uStack_36c;
          uStack_268 = uStack_368;
          uStack_264 = uStack_364;
          if (lVar29 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uStack_370,1);
          }
          uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar21);
          local_2c8 = lVar28;
          decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
          if (local_3c8 == '\x01') {
            cVar21 = cStack_3c7;
          }
          else {
            cVar21 = '\x03';
            if ((((char)uStack_268 == '\x03') && (CONCAT44(uStack_2b4,uStack_2b8) == 10)) &&
               ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] == 0x696e &&
                *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) == 0x696d656767617263)) {
              if ((0 < CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_))) &&
                 (-1 < iStack_274)) {
                lVar28 = CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288));
                if (0xffffffffffffd8ef < lVar28 - 0x2711U) {
                  lVar29 = 0;
                  lVar30 = 0;
                  do {
                    lVar5 = *(longlong *)(CONCAT44(iStack_28c,uStack_290) + lVar29);
                    if (lVar5 <= lVar30) goto LAB_005f6068;
                    lVar29 = lVar29 + 0x10;
                    lVar30 = lVar5;
                  } while (lVar28 * 0x10 != lVar29);
                  if (CONCAT44(uStack_26c,uStack_270) == lVar5) {
                    uStack_12f = (undefined7)(CONCAT44(uStack_264,uStack_268) >> 8);
                    local_140 = CONCAT31(uStack_277,uStack_27b._3_1_);
                    iStack_13c = iStack_274;
                    uStack_138 = uStack_270;
                    uStack_134 = uStack_26c;
                    local_150 = uStack_288;
                    uStack_14f = (undefined7)
                                 (CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288))
                                 >> 8);
                    uStack_148 = uStack_283._3_1_;
                    uStack_147 = (undefined7)
                                 (CONCAT35((undefined3)uStack_27b,
                                           CONCAT41(uStack_27f,uStack_283._3_1_)) >> 8);
                    local_160 = uStack_298;
                    uStack_15c = uStack_294;
                    uStack_158 = uStack_290;
                    iStack_154 = iStack_28c;
                    local_170 = (undefined1)uStack_2a8;
                    uStack_16f = (undefined1)((uint)uStack_2a8 >> 8);
                    uStack_16e = (undefined2)((uint)uStack_2a8 >> 0x10);
                    uStack_16c = (undefined2)uStack_2a4;
                    uStack_16a = (undefined2)((uint)uStack_2a4 >> 0x10);
                    uStack_168 = (undefined1)uStack_2a0;
                    uStack_167 = (undefined1)((uint)uStack_2a0 >> 8);
                    uStack_166 = (undefined2)((uint)uStack_2a0 >> 0x10);
                    uStack_164 = uStack_29c;
                    cStack_180 = (char)uStack_2b8;
                    uStack_17f = (undefined1)((uint)uStack_2b8 >> 8);
                    uStack_17e = (undefined2)((uint)uStack_2b8 >> 0x10);
                    uStack_17c = (undefined2)uStack_2b4;
                    uStack_17a = (undefined2)((uint)uStack_2b4 >> 0x10);
                    uStack_178 = (undefined1)uStack_2b0;
                    uStack_177 = (undefined1)((uint)uStack_2b0 >> 8);
                    uStack_176 = (undefined2)((uint)uStack_2b0 >> 0x10);
                    uStack_174 = (undefined2)uStack_2ac;
                    uStack_172 = (undefined2)((uint)uStack_2ac >> 0x10);
                    cStack_190 = (char)local_2c8;
                    uStack_18f = (undefined1)((ulonglong)local_2c8 >> 8);
                    uStack_18e = (undefined2)((ulonglong)local_2c8 >> 0x10);
                    uStack_18c = (undefined2)((ulonglong)local_2c8 >> 0x20);
                    uStack_18a = (undefined2)((ulonglong)local_2c8 >> 0x30);
                    uStack_188 = (undefined1)uStack_2c0;
                    uStack_187 = (undefined1)((uint)uStack_2c0 >> 8);
                    uStack_186 = (undefined2)((uint)uStack_2c0 >> 0x10);
                    uStack_184 = (undefined2)uStack_2bc;
                    uStack_182 = (undefined2)((uint)uStack_2bc >> 0x10);
                    local_198 = '\x02';
                    cVar21 = '\x02';
                    uStack_130 = 3;
                    goto LAB_005f65b2;
                  }
                }
              }
            }
          }
LAB_005f6068:
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <craggemini_core[66f3c71560d70857]::license::host::GrantedEntitlement>(&local_2c8);
          goto LAB_005f60a7;
        }
        uStack_444 = CONCAT13(cStack_3b9,CONCAT12(uStack_3ba,CONCAT11(uStack_3bb,uStack_3bc)));
        local_448 = cStack_3c0;
        cStack_447 = cStack_3bf;
        uStack_446 = uStack_3be;
        uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::error::Error>(&local_448);
LAB_005f63c7:
        cVar21 = cVar22;
        if (lVar29 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
        }
        goto LAB_005f60a7;
      }
    }
  }
  else {
    if ((*(int *)((longlong)param_2 + 3) != 0x2e314847 || *param_2 != 0x47415243) ||
       ((undefined *)0x2000 < param_3)) goto LAB_005f60a7;
    param_3 = param_3 + -7;
    lVar28 = (longlong)param_2 + 7;
    local_3c8 = (char)lVar28;
    cStack_3c7 = (char)((ulonglong)lVar28 >> 8);
    uStack_3c6 = (undefined2)((ulonglong)lVar28 >> 0x10);
    uStack_3c4 = (undefined1)((ulonglong)lVar28 >> 0x20);
    uStack_3c3 = (undefined1)((ulonglong)lVar28 >> 0x28);
    uStack_3c2 = (undefined1)((ulonglong)lVar28 >> 0x30);
    uStack_3c1 = (undefined1)((ulonglong)lVar28 >> 0x38);
    cStack_3c0 = (char)param_3;
    cStack_3bf = (char)((ulonglong)param_3 >> 8);
    uStack_3be = (undefined2)((ulonglong)param_3 >> 0x10);
    uStack_3bc = (undefined1)((ulonglong)param_3 >> 0x20);
    uStack_3bb = (undefined1)((ulonglong)param_3 >> 0x28);
    uStack_3ba = (undefined1)((ulonglong)param_3 >> 0x30);
    cStack_3b9 = (char)((ulonglong)param_3 >> 0x38);
    uStack_3b8 = 0;
    uStack_3b7 = 0;
    uStack_3b3 = 0;
    uStack_3b2 = 0;
    uStack_3b1 = 0;
    uStack_3ae = (undefined4)((ulonglong)param_3 >> 0x10);
    uStack_3a0 = 1;
    local_3a8 = 0x2e;
    uStack_3a7 = 0;
    uStack_3a6 = 0x2e0000;
    uStack_3a2 = 0;
    uStack_3a1 = 0;
    cStack_3b0 = cStack_3c0;
    cStack_3af = cStack_3bf;
    uStack_3aa = uStack_3ba;
    cStack_3a9 = cStack_3b9;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_448,&local_3c8);
    cVar21 = cVar22;
    if (local_448 == '\0') goto LAB_005f60a7;
    lVar30 = CONCAT44(uStack_434,uStack_438);
    base64[729f3f786a952ed7]::engine::Engine::decode::inner::
    <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
              (&local_3c8,&DAT_0019dabc,lVar28,CONCAT44(uStack_43c,uStack_440));
    uVar16 = uStack_3be;
    cVar15 = cStack_3bf;
    cVar14 = cStack_3c0;
    lVar29 = CONCAT17(uStack_3c1,
                      CONCAT16(uStack_3c2,
                               CONCAT15(uStack_3c3,
                                        CONCAT14(uStack_3c4,
                                                 CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))
                                                ))));
    if (lVar29 == -1) goto LAB_005f60a7;
    uVar7 = CONCAT17(cStack_3b9,
                     CONCAT16(uStack_3ba,
                              CONCAT15(uStack_3bb,
                                       CONCAT14(uStack_3bc,
                                                CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0))
                                               ))));
    uVar6 = CONCAT41(uStack_3b7,uStack_3b8);
    uVar9 = CONCAT17(uStack_3b1,CONCAT16(uStack_3b2,CONCAT15(uStack_3b3,uVar6)));
    uVar31 = decode::<64:usize>(&local_3c8,lVar28 + lVar30,(longlong)param_3 - lVar30);
    cVar21 = cStack_3c7;
    if (local_3c8 != '\x01') {
      uStack_414 = CONCAT13(uStack_390,CONCAT12(uStack_391,uStack_393));
      uStack_424 = CONCAT31(CONCAT12(uStack_3a0,CONCAT11(uStack_3a1,uStack_3a2)),
                            (char)((uint)uStack_3a6 >> 0x18));
      uStack_420._1_3_ = (undefined3)uStack_39e;
      uStack_420 = CONCAT31(uStack_420._1_3_,uStack_39f);
      uStack_41c = CONCAT31(CONCAT12(uStack_398,CONCAT11(uStack_399,uStack_39a)),
                            (char)((uint)uStack_39e >> 0x18));
      uStack_418._1_3_ = (undefined3)(CONCAT22(uStack_395,CONCAT11(uStack_396,uStack_397)) >> 8);
      uStack_418 = CONCAT31(uStack_418._1_3_,uStack_397);
      uStack_434 = CONCAT31(CONCAT12(cStack_3b0,CONCAT11(uStack_3b1,uStack_3b2)),uStack_3b3);
      uStack_430._1_3_ = (undefined3)uStack_3ae;
      uStack_430 = CONCAT31(uStack_430._1_3_,cStack_3af);
      uStack_42c = CONCAT31(CONCAT12(local_3a8,CONCAT11(cStack_3a9,uStack_3aa)),
                            (char)((uint)uStack_3ae >> 0x18));
      uStack_428 = CONCAT31((int3)uStack_3a6,uStack_3a7);
      cStack_447 = (char)uStack_3c6;
      uStack_446 = (undefined2)(CONCAT12(uStack_3c4,uStack_3c6) >> 8);
      uStack_444 = CONCAT31(CONCAT12(cStack_3c0,CONCAT11(uStack_3c1,uStack_3c2)),uStack_3c3);
      uStack_440 = CONCAT31(CONCAT12(uStack_3bc,uStack_3be),cStack_3bf);
      uStack_43c = CONCAT31(CONCAT12(uStack_3b8,CONCAT11(cStack_3b9,uStack_3ba)),uStack_3bb);
      uStack_438 = uStack_3b7;
      local_448 = cStack_3c7;
      cVar21 = verify_signature(param_6,"CRAGH1",7,uVar7,uVar9,&local_448);
      uVar31 = extraout_XMM0_Da;
      if (cVar21 == -1) {
        local_448 = cVar14;
        cStack_447 = cVar15;
        uStack_446 = uVar16;
        uStack_444 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_440 = (undefined4)uVar6;
        uStack_43c = (undefined4)((ulonglong)uVar9 >> 0x20);
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::Entitlement>
                  (&local_3c8,&local_448);
        cVar21 = cStack_3c0;
        lVar28 = CONCAT17(uStack_3c1,
                          CONCAT16(uStack_3c2,
                                   CONCAT15(uStack_3c3,
                                            CONCAT14(uStack_3c4,
                                                     CONCAT22(uStack_3c6,
                                                              CONCAT11(cStack_3c7,local_3c8))))));
        if (lVar28 == -1) {
          uStack_444 = CONCAT13(cStack_3b9,CONCAT12(uStack_3ba,CONCAT11(uStack_3bb,uStack_3bc)));
          local_448 = cStack_3c0;
          cStack_447 = cStack_3bf;
          uStack_446 = uStack_3be;
          uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>(&local_448);
          goto LAB_005f63c7;
        }
        uStack_2c0._1_3_ = CONCAT21(uStack_3be,cStack_3bf);
        uStack_2bc = (undefined4)
                     (CONCAT16(cStack_3b9,
                               CONCAT15(uStack_3ba,
                                        CONCAT14(uStack_3bb,CONCAT13(uStack_3bc,uStack_2c0._1_3_))))
                     >> 0x18);
        uStack_2b8._1_3_ = (undefined3)uStack_3b7;
        uStack_2b8 = CONCAT31(uStack_2b8._1_3_,uStack_3b8);
        uStack_2b4 = (undefined4)
                     (CONCAT16(uStack_3b1,CONCAT15(uStack_3b2,CONCAT14(uStack_3b3,uStack_3b7))) >>
                     0x18);
        uStack_2b0._1_3_ = (undefined3)CONCAT41(uStack_3ae,cStack_3af);
        uStack_2b0 = CONCAT31(uStack_2b0._1_3_,cStack_3b0);
        uStack_2ac = (undefined4)
                     (CONCAT16(cStack_3a9,CONCAT15(uStack_3aa,CONCAT41(uStack_3ae,cStack_3af))) >>
                     0x18);
        uStack_2a8._1_3_ = (undefined3)CONCAT41(uStack_3a6,uStack_3a7);
        uStack_2a8 = CONCAT31(uStack_2a8._1_3_,local_3a8);
        uStack_2a4 = (undefined4)
                     (CONCAT16(uStack_3a1,CONCAT15(uStack_3a2,CONCAT41(uStack_3a6,uStack_3a7))) >>
                     0x18);
        uVar31 = CONCAT22(uStack_395,CONCAT11(uStack_396,uStack_397));
        uStack_2a0._1_3_ = (undefined3)CONCAT41(uStack_39e,uStack_39f);
        uStack_2a0 = CONCAT31(uStack_2a0._1_3_,uStack_3a0);
        uStack_29c = (undefined4)
                     (CONCAT16(uStack_399,CONCAT15(uStack_39a,CONCAT41(uStack_39e,uStack_39f))) >>
                     0x18);
        uStack_298._1_3_ = (undefined3)uVar31;
        uStack_298 = CONCAT31(uStack_298._1_3_,uStack_398);
        uStack_294 = (undefined4)(CONCAT16(uStack_391,CONCAT24(uStack_393,uVar31)) >> 0x18);
        uStack_290._1_3_ = (undefined3)CONCAT22(uStack_38d,uStack_38f);
        uStack_290 = CONCAT31(uStack_290._1_3_,uStack_390);
        iStack_28c = CONCAT31(CONCAT12(uStack_389,uStack_38b),(char)((ushort)uStack_38d >> 8));
        uStack_288 = uStack_388;
        uStack_287 = uStack_387;
        uStack_283 = uStack_383;
        uStack_27f = (undefined4)uStack_37f;
        uStack_27b._0_3_ = (undefined3)((uint7)uStack_37f >> 0x20);
        if (lVar29 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(CONCAT22(uStack_38d,uStack_38f),1);
        }
        uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar21);
        local_2c8 = lVar28;
        decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
        if (local_3c8 == '\x01') {
          cVar21 = cStack_3c7;
        }
        else {
          cVar21 = '\x03';
          if (((((uStack_27f._3_1_ == '\x01') && (CONCAT44(uStack_2b4,uStack_2b8) == 10)) &&
               ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] == 0x696e &&
                *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) == 0x696d656767617263)) &&
              ((0 < CONCAT44(uStack_294,uStack_298) && (-1 < iStack_28c)))) &&
             (CONCAT44(iStack_28c,uStack_290) <
              CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)))) {
            local_150 = uStack_288;
            uStack_14f = (undefined7)
                         (CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)) >> 8);
            uStack_148 = uStack_283._3_1_;
            uStack_147 = (undefined7)
                         (CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) >>
                         8);
            local_160 = uStack_298;
            uStack_15c = uStack_294;
            uStack_158 = uStack_290;
            iStack_154 = iStack_28c;
            local_170 = (undefined1)uStack_2a8;
            uStack_16f = (undefined1)((uint)uStack_2a8 >> 8);
            uStack_16e = (undefined2)((uint)uStack_2a8 >> 0x10);
            uStack_16c = (undefined2)uStack_2a4;
            uStack_16a = (undefined2)((uint)uStack_2a4 >> 0x10);
            uStack_168 = (undefined1)uStack_2a0;
            uStack_167 = (undefined1)((uint)uStack_2a0 >> 8);
            uStack_166 = (undefined2)((uint)uStack_2a0 >> 0x10);
            uStack_164 = uStack_29c;
            cStack_180 = (char)uStack_2b8;
            uStack_17f = (undefined1)((uint)uStack_2b8 >> 8);
            uStack_17e = (undefined2)((uint)uStack_2b8 >> 0x10);
            uStack_17c = (undefined2)uStack_2b4;
            uStack_17a = (undefined2)((uint)uStack_2b4 >> 0x10);
            uStack_178 = (undefined1)uStack_2b0;
            uStack_177 = (undefined1)((uint)uStack_2b0 >> 8);
            uStack_176 = (undefined2)((uint)uStack_2b0 >> 0x10);
            uStack_174 = (undefined2)uStack_2ac;
            uStack_172 = (undefined2)((uint)uStack_2ac >> 0x10);
            cStack_190 = (char)local_2c8;
            uStack_18f = (undefined1)((ulonglong)local_2c8 >> 8);
            uStack_18e = (undefined2)((ulonglong)local_2c8 >> 0x10);
            uStack_18c = (undefined2)((ulonglong)local_2c8 >> 0x20);
            uStack_18a = (undefined2)((ulonglong)local_2c8 >> 0x30);
            uStack_188 = (undefined1)uStack_2c0;
            uStack_187 = (undefined1)((uint)uStack_2c0 >> 8);
            uStack_186 = (undefined2)((uint)uStack_2c0 >> 0x10);
            uStack_184 = (undefined2)uStack_2bc;
            uStack_182 = (undefined2)((uint)uStack_2bc >> 0x10);
            local_198 = '\0';
            cVar21 = '\0';
LAB_005f65b2:
            uStack_192 = 0;
            uStack_194 = 0;
            uStack_196 = 0;
            cStack_197 = '\0';
            uStack_29c = uStack_164;
            uStack_298 = local_160;
            uStack_294 = uStack_15c;
            uStack_290 = uStack_158;
            iStack_28c = iStack_154;
            uStack_288 = local_150;
            if (CONCAT44(uStack_164,CONCAT22(uStack_166,CONCAT11(uStack_167,uStack_168))) == param_8
               ) {
              iVar23 = (*(code *)PTR_bcmp_00799020)();
              piVar17 = local_2d0;
              if (iVar23 == 0) {
                uStack_43c = (undefined4)
                             (CONCAT25(uStack_18a,
                                       CONCAT23(uStack_18c,CONCAT21(uStack_18e,uStack_18f))) >> 0x18
                             );
                uStack_438 = CONCAT31(CONCAT21(uStack_186,uStack_187),uStack_188);
                uStack_434 = (undefined4)
                             (CONCAT25(uStack_182,
                                       CONCAT23(uStack_184,CONCAT21(uStack_186,uStack_187))) >> 0x18
                             );
                uStack_430 = CONCAT31(CONCAT21(uStack_17e,uStack_17f),cStack_180);
                uStack_42c = (undefined4)
                             (CONCAT25(uStack_17a,
                                       CONCAT23(uStack_17c,CONCAT21(uStack_17e,uStack_17f))) >> 0x18
                             );
                uStack_428 = CONCAT31(CONCAT21(uStack_176,uStack_177),uStack_178);
                uStack_424 = (undefined4)
                             (CONCAT25(uStack_172,
                                       CONCAT23(uStack_174,CONCAT21(uStack_176,uStack_177))) >> 0x18
                             );
                uStack_420 = CONCAT31(CONCAT21(uStack_16e,uStack_16f),local_170);
                uStack_41c = (undefined4)
                             (CONCAT25(uStack_16a,
                                       CONCAT23(uStack_16c,CONCAT21(uStack_16e,uStack_16f))) >> 0x18
                             );
                uStack_418 = CONCAT31(CONCAT21(uStack_166,uStack_167),uStack_168);
                uStack_414 = uStack_164;
                uStack_407 = CONCAT43(iStack_154,uStack_158._1_3_);
                uStack_410 = local_160;
                uStack_40c = uStack_15c;
                local_408 = (undefined1)uStack_158;
                uStack_400 = local_150;
                uStack_3ff = (undefined6)uStack_14f;
                uStack_3f9 = (undefined1)((uint7)uStack_14f >> 0x30);
                uStack_3f8 = uStack_148;
                uStack_3f7 = (undefined2)uStack_147;
                uStack_3f5 = (undefined4)((uint7)uStack_147 >> 0x10);
                uStack_3f1 = (undefined1)((uint7)uStack_147 >> 0x30);
                uStack_3f0 = (undefined1)local_140;
                uStack_3e7 = CONCAT13((undefined1)uStack_134,uStack_138._1_3_);
                uStack_3ef = (undefined2)((uint)local_140 >> 8);
                uStack_3ed = (undefined2)(CONCAT13((undefined1)iStack_13c,local_140._1_3_) >> 0x10);
                uStack_3eb = (undefined2)((uint)iStack_13c >> 8);
                uStack_3e9 = (undefined1)((uint)iStack_13c >> 0x18);
                uStack_3e8 = (undefined1)uStack_138;
                uStack_3e3 = CONCAT13(uStack_130,uStack_134._1_3_);
                uStack_3df = uStack_12f;
                cStack_447 = 0;
                uStack_446 = 0;
                uStack_444 = 0;
                uStack_440 = CONCAT31(CONCAT21(uStack_18e,uStack_18f),cStack_190);
                cVar22 = '\x03';
                local_448 = cVar21;
                if ((0xffffffffffffe005 < local_3d8 - 0x2001U) &&
                   (*(int *)((longlong)local_2d0 + 3) == 0x2e315347 && *local_2d0 == 0x47415243)) {
                  lVar28 = local_3d8 + -7;
                  lVar30 = (longlong)local_2d0 + 7;
                  local_198 = (char)lVar30;
                  cStack_197 = (char)((ulonglong)lVar30 >> 8);
                  uStack_196 = (undefined2)((ulonglong)lVar30 >> 0x10);
                  uStack_194 = (undefined2)((ulonglong)lVar30 >> 0x20);
                  uStack_192 = (undefined2)((ulonglong)lVar30 >> 0x30);
                  cStack_190 = (char)lVar28;
                  uStack_18f = (undefined1)((ulonglong)lVar28 >> 8);
                  uStack_18e = (undefined2)((ulonglong)lVar28 >> 0x10);
                  uStack_18c = (undefined2)((ulonglong)lVar28 >> 0x20);
                  uStack_18a = (undefined2)((ulonglong)lVar28 >> 0x30);
                  uStack_188 = 0;
                  uStack_187 = 0;
                  uStack_186 = 0;
                  uStack_184 = 0;
                  uStack_182 = 0;
                  local_170 = 1;
                  uStack_178 = 0x2e;
                  uStack_177 = 0;
                  uStack_176 = 0;
                  uStack_174 = 0x2e;
                  uStack_172 = 0;
                  cStack_180 = cStack_190;
                  uStack_17f = uStack_18f;
                  uStack_17e = uStack_18e;
                  uStack_17c = uStack_18c;
                  uStack_17a = uStack_18a;
                  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                  ::next_match(&local_1d8,&local_198);
                  if (local_1d8 != '\0') {
                    lVar29 = CONCAT35((undefined3)uStack_1c3,CONCAT41(uStack_1c7,uStack_1cb._3_1_));
                    base64[729f3f786a952ed7]::engine::Engine::decode::inner::
                    <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                              (&local_198,&DAT_0019dabc,lVar30,
                               CONCAT35((uint3)uStack_1cb,CONCAT41(uStack_1cf,uStack_1d3._3_1_)));
                    uVar20 = uStack_188;
                    cVar14 = cStack_190;
                    lVar5 = CONCAT26(uStack_192,
                                     CONCAT24(uStack_194,
                                              CONCAT22(uStack_196,CONCAT11(cStack_197,local_198))));
                    if (lVar5 != -1) {
                      uVar11 = CONCAT24(uStack_18c,
                                        CONCAT22(uStack_18e,CONCAT11(uStack_18f,cStack_190)));
                      uVar7 = CONCAT26(uStack_18a,uVar11);
                      uVar12 = CONCAT24(uStack_184,
                                        CONCAT22(uStack_186,CONCAT11(uStack_187,uStack_188)));
                      uVar9 = CONCAT26(uStack_182,uVar12);
                      uVar31 = decode::<64:usize>(&local_198,lVar30 + lVar29,lVar28 - lVar29);
                      cVar22 = cStack_197;
                      if (local_198 != '\x01') {
                        uStack_1d7 = CONCAT22(uStack_194,uStack_196);
                        uStack_1d3 = CONCAT13(uStack_18f,CONCAT12(cStack_190,uStack_192));
                        uStack_1cf = CONCAT22(uStack_18c,uStack_18e);
                        uStack_1cb = CONCAT13(uStack_187,CONCAT12(uStack_188,uStack_18a));
                        uStack_1c7 = CONCAT22(uStack_184,uStack_186);
                        uStack_1c3 = CONCAT13(uStack_17f,CONCAT12(cStack_180,uStack_182));
                        uStack_1bf = CONCAT22(uStack_17c,uStack_17e);
                        uStack_1bb = CONCAT13(uStack_177,CONCAT12(uStack_178,uStack_17a));
                        uStack_1b7 = CONCAT22(uStack_174,uStack_176);
                        uStack_1b3 = CONCAT13(uStack_16f,CONCAT12(local_170,uStack_172));
                        uStack_1af = CONCAT22(uStack_16c,uStack_16e);
                        uStack_1ab = CONCAT13(uStack_167,CONCAT12(uStack_168,uStack_16a));
                        uStack_1a4 = CONCAT13((undefined1)local_160,uStack_164._1_3_);
                        uStack_1a0 = CONCAT13((undefined1)uStack_15c,local_160._1_3_);
                        uStack_19c = CONCAT13((undefined1)uStack_158,uStack_15c._1_3_);
                        uStack_1a7 = (undefined3)
                                     (CONCAT13((undefined1)uStack_164,
                                               CONCAT21(uStack_166,uStack_167)) >> 8);
                        local_1d8 = cStack_197;
                        cVar22 = verify_signature(param_6,"CRAGS1",7,uVar7,uVar9,&local_1d8);
                        uVar31 = extraout_XMM0_Da_02;
                        if (cVar22 == -1) {
                          local_1d8 = cVar14;
                          uStack_1d7 = (undefined4)((uint6)uVar11 >> 8);
                          uStack_1d3._0_3_ = (undefined3)((ulonglong)uVar7 >> 0x28);
                          uStack_1d3 = CONCAT13(uVar20,(undefined3)uStack_1d3);
                          uStack_1cf = (undefined4)((uint6)uVar12 >> 8);
                          uStack_1cb._0_3_ = (uint3)((ulonglong)uVar9 >> 0x28);
                          uStack_1cb = (uint)(uint3)uStack_1cb;
                          uStack_1c7 = 0;
                          uStack_1c3 = 0;
                          uStack_1bf = 0;
                          uStack_1bb = uStack_1bb & 0xff000000;
                          uVar31 = serde_json[dc3825464c436029]::de::from_trait::
                                   <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::SlotPermit>
                                             (&local_198,&local_1d8);
                          cVar22 = cStack_190;
                          uVar19 = uStack_192;
                          uVar18 = uStack_194;
                          uVar16 = uStack_196;
                          cVar15 = cStack_197;
                          cVar14 = local_198;
                          lVar28 = CONCAT26(uStack_192,
                                            CONCAT24(uStack_194,
                                                     CONCAT22(uStack_196,
                                                              CONCAT11(cStack_197,local_198))));
                          if (lVar28 == -1) {
                            uVar11 = CONCAT24(uStack_18c,
                                              CONCAT22(uStack_18e,CONCAT11(uStack_18f,cStack_190)));
                            local_1d8 = cStack_190;
                            uStack_1d7 = (undefined4)((uint6)uVar11 >> 8);
                            uStack_1d3._0_3_ = (undefined3)(CONCAT26(uStack_18a,uVar11) >> 0x28);
                            uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                     <serde_json[dc3825464c436029]::error::Error>(&local_1d8);
                            cVar22 = '\x03';
                          }
                          else {
                            uVar31 = (*(code *)PTR_memcpy_00799008)(uVar31,0xef);
                          }
                          if (lVar5 != 0) {
                            uVar31 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
                          }
                          if (lVar28 == -1) goto LAB_005f6846;
                          (*(code *)PTR_memcpy_00799008)(uVar31,0xef);
                          local_3c8 = cVar14;
                          cStack_3c7 = cVar15;
                          uStack_3c6 = uVar16;
                          uStack_3c4 = (undefined1)uVar18;
                          uStack_3c3 = (undefined1)((ushort)uVar18 >> 8);
                          uStack_3c2 = (undefined1)uVar19;
                          uStack_3c1 = (undefined1)((ushort)uVar19 >> 8);
                          cStack_3c0 = cVar22;
                          if (((local_2d4 == '\x01') &&
                              (CONCAT17(uStack_3b1,
                                        CONCAT16(uStack_3b2,
                                                 CONCAT15(uStack_3b3,CONCAT41(uStack_3b7,uStack_3b8)
                                                         ))) == 10)) &&
                             (plVar8 = (longlong *)
                                       CONCAT17(cStack_3b9,
                                                CONCAT16(uStack_3ba,
                                                         CONCAT15(uStack_3bb,
                                                                  CONCAT14(uStack_3bc,
                                                                           CONCAT22(uStack_3be,
                                                                                    CONCAT11(
                                                  cStack_3bf,cVar22)))))),
                             local_2d8 != 0 &&
                             ((short)plVar8[1] == 0x696e && *plVar8 == 0x696d656767617263))) {
                            if ((((CONCAT17(uStack_399,
                                            CONCAT16(uStack_39a,
                                                     CONCAT42(uStack_39e,
                                                              CONCAT11(uStack_39f,uStack_3a0)))) !=
                                   CONCAT44(uStack_414,uStack_418)) ||
                                 (iVar23 = (*(code *)PTR_bcmp_00799020)(), iVar23 != 0)) ||
                                ((local_310 != *(longlong *)(param_9 + 0x28) ||
                                 ((iVar23 = (*(code *)PTR_bcmp_00799020)(), iVar23 != 0 ||
                                  (local_2f8 != *(longlong *)(param_9 + 0x40))))))) ||
                               ((iVar23 = (*(code *)PTR_bcmp_00799020)(), iVar23 != 0 ||
                                ((local_2e0 != *(longlong *)(param_9 + 0x70) ||
                                 (iVar23 = (*(code *)PTR_bcmp_00799020)(), iVar23 != 0)))))) {
LAB_005f6a6f:
                              *(undefined1 *)(param_1 + 1) = 4;
                              goto LAB_005f6a77;
                            }
                            if (cVar21 == '\0') {
                              uVar26 = CONCAT13((undefined1)uStack_3f5,
                                                CONCAT21(uStack_3f7,uStack_3f8));
                              if (local_2d8 <= uVar26 || uVar26 == 0) {
LAB_005f6b7e:
                                unwrap_device_key(&local_198,(longlong)&uStack_383 + 3,
                                                  CONCAT17(uStack_389,
                                                           CONCAT25(uStack_38b,
                                                                    CONCAT23(uStack_38d,
                                                                             CONCAT21(uStack_38f,
                                                                                      uStack_390))))
                                                  ,CONCAT35((undefined3)uStack_383,
                                                            CONCAT41(uStack_387,uStack_388)),param_9
                                                 );
                                cVar22 = cStack_197;
                                if (local_198 != '\x01') {
                                  param_1[0x2f] =
                                       CONCAT17(cStack_180,
                                                CONCAT25(uStack_182,
                                                         CONCAT23(uStack_184,
                                                                  CONCAT21(uStack_186,uStack_187))))
                                  ;
                                  param_1[0x30] =
                                       CONCAT17(uStack_178,
                                                CONCAT25(uStack_17a,
                                                         CONCAT23(uStack_17c,
                                                                  CONCAT21(uStack_17e,uStack_17f))))
                                  ;
                                  *(ulonglong *)((longlong)param_1 + 0x169) =
                                       CONCAT17(uStack_18f,
                                                CONCAT16(cStack_190,
                                                         CONCAT24(uStack_192,
                                                                  CONCAT22(uStack_194,uStack_196))))
                                  ;
                                  *(ulonglong *)((longlong)param_1 + 0x171) =
                                       CONCAT17(uStack_187,
                                                CONCAT16(uStack_188,
                                                         CONCAT24(uStack_18a,
                                                                  CONCAT22(uStack_18c,uStack_18e))))
                                  ;
                                  puVar13 = PTR_memcpy_00799008;
                                  uStack_138 = (undefined4)CONCAT41(uStack_3e7,uStack_3e8);
                                  uStack_134 = (undefined4)
                                               (CONCAT35((undefined3)uStack_3e3,
                                                         CONCAT41(uStack_3e7,uStack_3e8)) >> 0x20);
                                  uStack_130 = uStack_3e3._3_1_;
                                  uStack_12f = uStack_3df;
                                  uVar6 = CONCAT23(uStack_3ed,CONCAT21(uStack_3ef,uStack_3f0));
                                  uStack_148 = uStack_3f8;
                                  uStack_147 = (undefined7)
                                               (CONCAT17(uStack_3f1,
                                                         CONCAT43(uStack_3f5,
                                                                  CONCAT21(uStack_3f7,uStack_3f8)))
                                               >> 8);
                                  local_140 = (undefined4)uVar6;
                                  iStack_13c = (int)(CONCAT17(uStack_3e9,CONCAT25(uStack_3eb,uVar6))
                                                    >> 0x20);
                                  uStack_158 = (undefined4)CONCAT71(uStack_407,local_408);
                                  iStack_154 = (int)((uint7)uStack_407 >> 0x18);
                                  local_150 = uStack_400;
                                  uStack_14f = (undefined7)
                                               (CONCAT17(uStack_3f9,CONCAT61(uStack_3ff,uStack_400))
                                               >> 8);
                                  uStack_168 = (undefined1)uStack_418;
                                  uStack_167 = (undefined1)((uint)uStack_418 >> 8);
                                  uStack_166 = (undefined2)((uint)uStack_418 >> 0x10);
                                  uStack_164 = uStack_414;
                                  local_160 = uStack_410;
                                  uStack_15c = uStack_40c;
                                  uStack_178 = (undefined1)uStack_428;
                                  uStack_177 = (undefined1)((uint)uStack_428 >> 8);
                                  uStack_176 = (undefined2)((uint)uStack_428 >> 0x10);
                                  uStack_174 = (undefined2)uStack_424;
                                  uStack_172 = (undefined2)((uint)uStack_424 >> 0x10);
                                  local_170 = (undefined1)uStack_420;
                                  uStack_16f = (undefined1)((uint)uStack_420 >> 8);
                                  uStack_16e = (undefined2)((uint)uStack_420 >> 0x10);
                                  uStack_16c = (undefined2)uStack_41c;
                                  uStack_16a = (undefined2)((uint)uStack_41c >> 0x10);
                                  uStack_188 = (undefined1)uStack_438;
                                  uStack_187 = (undefined1)((uint)uStack_438 >> 8);
                                  uStack_186 = (undefined2)((uint)uStack_438 >> 0x10);
                                  uStack_184 = (undefined2)uStack_434;
                                  uStack_182 = (undefined2)((uint)uStack_434 >> 0x10);
                                  cStack_180 = (char)uStack_430;
                                  uStack_17f = (undefined1)((uint)uStack_430 >> 8);
                                  uStack_17e = (undefined2)((uint)uStack_430 >> 0x10);
                                  uStack_17c = (undefined2)uStack_42c;
                                  uStack_17a = (undefined2)((uint)uStack_42c >> 0x10);
                                  local_198 = local_448;
                                  cStack_197 = cStack_447;
                                  uStack_196 = uStack_446;
                                  uStack_194 = (undefined2)uStack_444;
                                  uStack_192 = (undefined2)((uint)uStack_444 >> 0x10);
                                  cStack_190 = (char)uStack_440;
                                  uStack_18f = (undefined1)((uint)uStack_440 >> 8);
                                  uStack_18e = (undefined2)((uint)uStack_440 >> 0x10);
                                  uStack_18c = (undefined2)uStack_43c;
                                  uStack_18a = (undefined2)((uint)uStack_43c >> 0x10);
                                  uVar31 = (*(code *)PTR_memcpy_00799008)
                                                     (CONCAT22(uStack_446,
                                                               CONCAT11(cStack_447,local_448)),0xf8)
                                  ;
                                  (*(code *)puVar13)(uVar31,0x168);
                                  *(char *)(param_1 + 0x2d) = cVar22;
                                  return param_1;
                                }
                                *(char *)(param_1 + 1) = cStack_197;
                                goto LAB_005f6a77;
                              }
                              goto LAB_005f6a6f;
                            }
                            if (cVar21 != '\x01') {
                              lVar28 = CONCAT17(uStack_3f9,CONCAT61(uStack_3ff,uStack_400));
                              if (lVar28 != 0) {
                                uVar26 = *(uint *)(CONCAT71(uStack_407,local_408) + 8);
                                if (lVar28 != 1) {
                                  uVar25 = lVar28 - 1U & 0xfffffffffffffff;
                                  puVar24 = (uint *)(CONCAT71(uStack_407,local_408) + 0x18);
                                  do {
                                    uVar27 = 0;
                                    if ((uVar26 != 0) && (uVar1 = *puVar24, uVar1 != 0)) {
                                      uVar27 = uVar26 + uVar1;
                                      if (CARRY4(uVar26,uVar1)) {
                                        uVar27 = 0xffffffff;
                                      }
                                      if (0x7ffffffe < uVar27) {
                                        uVar27 = 0x7fffffff;
                                      }
                                    }
                                    uVar26 = uVar27;
                                    puVar24 = puVar24 + 4;
                                    uVar25 = uVar25 - 1;
                                  } while (uVar25 != 0);
                                }
                                if (local_2d8 <= uVar26 || uVar26 == 0) goto LAB_005f6b7e;
                              }
                              goto LAB_005f6a6f;
                            }
                            <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                            ::digest::<&[u8]>(&local_198,piVar17,local_3d8);
                            hex(&local_2c8,&local_198,0x20);
                            cVar22 = <craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>
                                     ::allows_permit(&uStack_440,local_2d8,
                                                     CONCAT44(uStack_2bc,uStack_2c0),
                                                     CONCAT44(uStack_2b4,uStack_2b8));
                            if (cVar22 != '\0') {
                              if (local_2c8 != 0) {
                                (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_03,1);
                              }
                              goto LAB_005f6b7e;
                            }
                            *(undefined1 *)(param_1 + 1) = 4;
                            *param_1 = 0xffffffffffffffff;
                            if (local_2c8 != 0) {
                              (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_03,1);
                            }
                          }
                          else {
                            *(undefined1 *)(param_1 + 1) = 3;
LAB_005f6a77:
                            *param_1 = 0xffffffffffffffff;
                          }
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <craggemini_core[66f3c71560d70857]::license::host::SlotPermit>(&local_3c8)
                          ;
                          goto joined_r0x005f6a96;
                        }
                      }
                      if (lVar5 != 0) {
                        (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
                      }
                    }
                  }
                }
LAB_005f6846:
                *(char *)(param_1 + 1) = cVar22;
                *param_1 = 0xffffffffffffffff;
joined_r0x005f6a96:
                if (cVar21 == '\0') {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::license::host::Entitlement>(&uStack_440);
                  return param_1;
                }
                if (cVar21 == '\x01') {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>();
                  return param_1;
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::license::host::GrantedEntitlement>();
                return param_1;
              }
            }
            if (cVar21 == '\0') {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::license::host::Entitlement>(&cStack_190);
              cVar21 = '\x04';
            }
            else if (cVar21 == '\x01') {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>();
              cVar21 = '\x04';
            }
            else {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini_core[66f3c71560d70857]::license::host::GrantedEntitlement>();
              cVar21 = '\x04';
            }
            goto LAB_005f60a7;
          }
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::license::host::Entitlement>(&local_2c8);
        goto LAB_005f60a7;
      }
    }
  }
LAB_005f608a:
  if (lVar29 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar31,1);
  }
LAB_005f60a7:
  *(char *)(param_1 + 1) = cVar21;
  *param_1 = 0xffffffffffffffff;
  return param_1;
LAB_005f6879:
  cVar21 = cStack_447;
LAB_005f687e:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_3c8);
LAB_005f5df8:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::license::host::RosterEntitlement>(&local_2c8);
  goto LAB_005f60a7;
}


