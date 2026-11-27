// 00195510 verify_pair

/* craggemini[b21da2d71f2da7a3]::license::host::verify_pair */

undefined8 * __rustcall
craggemini[b21da2d71f2da7a3]::license::host::verify_pair
          (undefined8 *param_1,int *param_2,undefined1 *param_3,int *param_4,longlong param_5,
          undefined8 param_6,undefined8 param_7,longlong param_8,longlong param_9)

{
  uint uVar1;
  longlong lVar2;
  undefined5 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined6 uVar7;
  undefined6 uVar8;
  undefined *puVar9;
  int *piVar10;
  char cVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined1 uVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 *puVar29;
  char cVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined1 auVar32 [16];
  char local_469;
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
  int *local_3d0;
  char local_3c8;
  char cStack_3c7;
  undefined2 uStack_3c6;
  undefined2 uStack_3c4;
  undefined2 uStack_3c2;
  char cStack_3c0;
  char cStack_3bf;
  undefined2 uStack_3be;
  undefined1 uStack_3bc;
  undefined1 uStack_3bb;
  undefined2 uStack_3ba;
  undefined1 uStack_3b8;
  undefined4 uStack_3b7;
  undefined1 uStack_3b3;
  undefined2 uStack_3b2;
  undefined1 uStack_3b0;
  undefined1 uStack_3af;
  undefined4 uStack_3ae;
  undefined2 uStack_3aa;
  undefined1 uStack_3a8;
  undefined1 uStack_3a7;
  undefined4 local_3a6;
  undefined2 uStack_3a2;
  undefined1 uStack_3a0;
  undefined1 uStack_39f;
  undefined4 uStack_39e;
  undefined2 uStack_39a;
  undefined1 uStack_398;
  undefined4 uStack_397;
  undefined4 uStack_393;
  undefined4 uStack_38f;
  undefined4 uStack_38b;
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
  char cStack_1d7;
  undefined2 uStack_1d6;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  char cStack_1d0;
  undefined1 uStack_1cf;
  undefined2 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined1 uStack_1c8;
  undefined1 uStack_1c7;
  undefined2 uStack_1c6;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined2 uStack_1be;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined2 uStack_1b6;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined1 local_1b0;
  undefined1 uStack_1af;
  undefined2 uStack_1ae;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined1 uStack_1a8;
  undefined1 uStack_1a7;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined4 local_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  char local_70;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  uint uStack_63;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  uint uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar9 = PTR_memchr_aligned_00219d40;
  cVar16 = '\x03';
  cVar30 = '\x03';
  if (param_3 < (undefined1 *)0x7) goto LAB_0019632b;
  local_3d0 = param_4;
  if (*(int *)((longlong)param_2 + 3) == 0x2e324847 && *param_2 == 0x47415243) {
    if (&LAB_00180001 <= param_3) goto LAB_0019632b;
    param_3 = param_3 + -7;
    lVar25 = (longlong)param_2 + 7;
    puVar29 = (undefined1 *)0x0;
    do {
      uVar22 = (longlong)param_3 - (longlong)puVar29;
      if (uVar22 < 0x10) {
        uVar20 = 0;
        if (uVar22 == 0) break;
        while (puVar29[uVar20 + lVar25] != '.') {
          uVar20 = uVar20 + 1;
          if (uVar22 == uVar20) goto LAB_00196326;
        }
      }
      else {
        uVar20 = uVar22;
        lVar18 = (*(code *)puVar9)();
        if (lVar18 != 1) break;
      }
      puVar24 = puVar29 + uVar20 + 1;
      if ((puVar29 + uVar20 < param_3) && ((puVar29 + uVar20)[lVar25] == '.')) {
        base64[729f3f786a952ed7]::engine::Engine::decode::inner::
        <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                  (&local_3c8,&DAT_00119638,lVar25);
        lVar18 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar18 == -1) goto LAB_0019632b;
        uVar4 = CONCAT26(uStack_3ba,
                         CONCAT15(uStack_3bb,
                                  CONCAT14(uStack_3bc,
                                           CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0)))));
        uVar3 = CONCAT41(uStack_3b7,uStack_3b8);
        uVar6 = CONCAT26(uStack_3b2,CONCAT15(uStack_3b3,uVar3));
        uVar31 = decode::<64:usize>(&local_3c8,puVar24 + lVar25,
                                    (longlong)param_3 - (longlong)puVar24);
        cVar16 = cStack_3c7;
        if (local_3c8 == '\x01') goto LAB_00195ccd;
        uStack_414 = uStack_393;
        uStack_410 = uStack_38f;
        uStack_40c = uStack_38b;
        uStack_424 = CONCAT31(CONCAT12(uStack_3a0,uStack_3a2),(char)((uint)local_3a6 >> 0x18));
        uStack_420._1_3_ = (undefined3)uStack_39e;
        uStack_420 = CONCAT31(uStack_420._1_3_,uStack_39f);
        uStack_41c = CONCAT31(CONCAT12(uStack_398,uStack_39a),(char)((uint)uStack_39e >> 0x18));
        uStack_430._1_3_ = (undefined3)uStack_3ae;
        uStack_430 = CONCAT31(uStack_430._1_3_,uStack_3af);
        uStack_42c = CONCAT31(CONCAT12(uStack_3a8,uStack_3aa),(char)((uint)uStack_3ae >> 0x18));
        uStack_428 = CONCAT31((int3)local_3a6,uStack_3a7);
        cStack_447 = (char)uStack_3c6;
        uStack_446 = (undefined2)(CONCAT22(uStack_3c4,uStack_3c6) >> 8);
        uStack_444._0_1_ = (undefined1)((ushort)uStack_3c4 >> 8);
        uStack_444 = CONCAT31(CONCAT12(cStack_3c0,uStack_3c2),(undefined1)uStack_444);
        local_448 = cStack_3c7;
        cVar16 = verify_signature(param_6,"CRAGH2",7,uVar4,uVar6,&local_448);
        uVar31 = extraout_XMM0_Da_00;
        if (cVar16 != -1) goto LAB_00195ccd;
        uStack_444 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_440 = (undefined4)uVar3;
        uStack_43c = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>
                  (&local_3c8,&local_448);
        cVar16 = cStack_3c0;
        lVar25 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar25 == -1) {
          uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>
                             (CONCAT26(uStack_3ba,
                                       CONCAT15(uStack_3bb,
                                                CONCAT14(uStack_3bc,
                                                         CONCAT22(uStack_3be,
                                                                  CONCAT11(cStack_3bf,cStack_3c0))))
                                      ));
          goto LAB_001960e2;
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
        uStack_418 = uStack_38f;
        uStack_414 = uStack_38b;
        uStack_410 = uStack_387;
        uStack_40c = uStack_383;
        uStack_428 = (undefined4)CONCAT41(uStack_39e,uStack_39f);
        uStack_424 = (undefined4)
                     (CONCAT17(uStack_398,CONCAT25(uStack_39a,CONCAT41(uStack_39e,uStack_39f))) >>
                     0x20);
        uStack_420 = uStack_397;
        uStack_41c = uStack_393;
        uStack_438 = (undefined4)CONCAT41(uStack_3ae,uStack_3af);
        uStack_434 = (undefined4)
                     (CONCAT17(uStack_3a8,CONCAT25(uStack_3aa,CONCAT41(uStack_3ae,uStack_3af))) >>
                     0x20);
        uStack_430 = (undefined4)CONCAT41(local_3a6,uStack_3a7);
        uStack_42c = (undefined4)
                     (CONCAT17(uStack_3a0,CONCAT25(uStack_3a2,CONCAT41(local_3a6,uStack_3a7))) >>
                     0x20);
        uVar31 = CONCAT13(uStack_3bc,CONCAT21(uStack_3be,cStack_3bf));
        uStack_444 = CONCAT13(uStack_3b8,CONCAT21(uStack_3ba,uStack_3bb));
        uStack_43c = CONCAT13(uStack_3b0,CONCAT21(uStack_3b2,uStack_3b3));
        local_448 = cStack_3bf;
        cStack_447 = (char)uStack_3be;
        uStack_446 = (undefined2)((uint)uVar31 >> 0x10);
        uStack_440 = uStack_3b7;
        if (lVar18 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uVar31,1);
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
        uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar16);
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
        local_2c8 = lVar25;
        decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
        if (local_3c8 == '\x01') {
          cVar30 = cStack_3c7;
          goto LAB_00195b09;
        }
        cVar30 = '\x03';
        if ((((char)uStack_264 != '\x02') || (CONCAT44(uStack_2b4,uStack_2b8) != 10)) ||
           ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] != 0x696e ||
            *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) != 0x696d656767617263)) goto LAB_00195b09;
        if (CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) < 1)
        goto LAB_00195b09;
        if ((iStack_274 < 0) ||
           (CONCAT44(uStack_26c,uStack_270) <=
            CONCAT44(iStack_274,CONCAT31(uStack_277,uStack_27b._3_1_)))) goto LAB_00195b09;
        uVar22 = CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288));
        if (10000 < uVar22) goto LAB_00195b09;
        auVar32 = <std[6c98fd8553dbae28]::thread::local::LocalKey<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>
                  ::with::
                  <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::_closure_0_,std[6c98fd8553dbae28]::hash::random::RandomState>
                            (&PTR_call_once_00216380);
        <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
        <alloc[12e961f32105355]::alloc::Global>(&local_448,0x10,uVar22);
        uVar26 = uStack_268;
        uStack_3a8 = auVar32[0];
        uStack_3a7 = auVar32[1];
        local_3a6 = auVar32._2_4_;
        uStack_3a2 = auVar32._6_2_;
        uStack_3a0 = auVar32[8];
        uStack_39f = auVar32[9];
        uStack_39e = auVar32._10_4_;
        uStack_39a = auVar32._14_2_;
        local_3c8 = local_448;
        cStack_3c7 = cStack_447;
        uStack_3c6 = uStack_446;
        uStack_3c4 = (undefined2)uStack_444;
        uStack_3c2 = (undefined2)((uint)uStack_444 >> 0x10);
        cStack_3c0 = (char)uStack_440;
        cStack_3bf = (char)((uint)uStack_440 >> 8);
        uStack_3be = (undefined2)((uint)uStack_440 >> 0x10);
        uStack_3bc = (undefined1)uStack_43c;
        uStack_3bb = (undefined1)((uint)uStack_43c >> 8);
        uStack_3ba = (undefined2)((uint)uStack_43c >> 0x10);
        uStack_3b8 = (undefined1)uStack_438;
        uStack_3b7 = (undefined4)(CONCAT44(uStack_434,uStack_438) >> 8);
        uStack_3b3 = (undefined1)((uint)uStack_434 >> 8);
        uStack_3b2 = (undefined2)((uint)uStack_434 >> 0x10);
        uStack_3b0 = (undefined1)uStack_430;
        uStack_3af = (undefined1)((uint)uStack_430 >> 8);
        uStack_3ae = (undefined4)(CONCAT44(uStack_42c,uStack_430) >> 0x10);
        uStack_3aa = (undefined2)((uint)uStack_42c >> 0x10);
        if (uVar22 == 0) goto LAB_00196242;
        lVar25 = CONCAT44(iStack_28c,uStack_290);
        uVar27 = 0;
        if (uStack_268 == 0) {
          lVar18 = 0;
          cVar30 = '\x03';
          goto LAB_001961f2;
        }
        lVar18 = 0;
        cVar30 = '\x03';
        goto LAB_00195f19;
      }
      puVar29 = puVar24;
    } while (puVar24 <= param_3);
  }
  else if (*(int *)((longlong)param_2 + 3) == 0x2e334847 && *param_2 == 0x47415243) {
    if (&LAB_00180001 <= param_3) goto LAB_0019632b;
    param_3 = param_3 + -7;
    lVar25 = (longlong)param_2 + 7;
    puVar29 = (undefined1 *)0x0;
    do {
      uVar22 = (longlong)param_3 - (longlong)puVar29;
      if (uVar22 < 0x10) {
        uVar20 = 0;
        if (uVar22 == 0) break;
        while (puVar29[uVar20 + lVar25] != '.') {
          uVar20 = uVar20 + 1;
          if (uVar22 == uVar20) goto LAB_00196326;
        }
      }
      else {
        uVar20 = uVar22;
        lVar18 = (*(code *)puVar9)();
        if (lVar18 != 1) break;
      }
      puVar24 = puVar29 + uVar20 + 1;
      if ((puVar29 + uVar20 < param_3) && ((puVar29 + uVar20)[lVar25] == '.')) {
        base64[729f3f786a952ed7]::engine::Engine::decode::inner::
        <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                  (&local_3c8,&DAT_00119638,lVar25);
        uVar12 = uStack_3be;
        cVar11 = cStack_3bf;
        lVar18 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar18 == -1) goto LAB_0019632b;
        uVar4 = CONCAT26(uStack_3ba,
                         CONCAT15(uStack_3bb,
                                  CONCAT14(uStack_3bc,
                                           CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0)))));
        uVar3 = CONCAT41(uStack_3b7,uStack_3b8);
        uVar6 = CONCAT26(uStack_3b2,CONCAT15(uStack_3b3,uVar3));
        uVar31 = decode::<64:usize>(&local_3c8,puVar24 + lVar25,
                                    (longlong)param_3 - (longlong)puVar24);
        cVar16 = cStack_3c7;
        if (local_3c8 == '\x01') goto LAB_00195ccd;
        uStack_414 = uStack_393;
        uStack_410 = uStack_38f;
        uStack_40c = uStack_38b;
        uStack_424 = CONCAT31(CONCAT12(uStack_3a0,uStack_3a2),(char)((uint)local_3a6 >> 0x18));
        uStack_420._1_3_ = (undefined3)uStack_39e;
        uStack_420 = CONCAT31(uStack_420._1_3_,uStack_39f);
        uStack_41c = CONCAT31(CONCAT12(uStack_398,uStack_39a),(char)((uint)uStack_39e >> 0x18));
        uStack_430._1_3_ = (undefined3)uStack_3ae;
        uStack_430 = CONCAT31(uStack_430._1_3_,uStack_3af);
        uStack_42c = CONCAT31(CONCAT12(uStack_3a8,uStack_3aa),(char)((uint)uStack_3ae >> 0x18));
        uStack_428 = CONCAT31((int3)local_3a6,uStack_3a7);
        cStack_447 = (char)uStack_3c6;
        uStack_446 = (undefined2)(CONCAT22(uStack_3c4,uStack_3c6) >> 8);
        uStack_444._0_1_ = (undefined1)((ushort)uStack_3c4 >> 8);
        uStack_444 = CONCAT31(CONCAT12(cStack_3c0,uStack_3c2),(undefined1)uStack_444);
        local_448 = cStack_3c7;
        cVar16 = verify_signature(param_6,"CRAGH3",7,uVar4,uVar6,&local_448);
        uVar31 = extraout_XMM0_Da_01;
        if (cVar16 != -1) goto LAB_00195ccd;
        cStack_447 = cVar11;
        uStack_446 = uVar12;
        uStack_444 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_440 = (undefined4)uVar3;
        uStack_43c = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement>
                  (&local_3c8,&local_448);
        cVar16 = cStack_3c0;
        lVar25 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar25 == -1) {
          uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>
                             (CONCAT26(uStack_3ba,
                                       CONCAT15(uStack_3bb,
                                                CONCAT14(uStack_3bc,
                                                         CONCAT22(uStack_3be,
                                                                  CONCAT11(cStack_3bf,cStack_3c0))))
                                      ));
          goto LAB_001960e2;
        }
        uStack_2c0._1_3_ = CONCAT21(uStack_3be,cStack_3bf);
        uStack_2bc = (undefined4)
                     (CONCAT25(uStack_3ba,CONCAT14(uStack_3bb,CONCAT13(uStack_3bc,uStack_2c0._1_3_))
                              ) >> 0x18);
        uStack_2b8._1_3_ = (undefined3)uStack_3b7;
        uStack_2b8 = CONCAT31(uStack_2b8._1_3_,uStack_3b8);
        uStack_2b4 = (undefined4)(CONCAT25(uStack_3b2,CONCAT14(uStack_3b3,uStack_3b7)) >> 0x18);
        uStack_2b0._1_3_ = (undefined3)CONCAT41(uStack_3ae,uStack_3af);
        uStack_2b0 = CONCAT31(uStack_2b0._1_3_,uStack_3b0);
        uStack_2ac = (undefined4)(CONCAT25(uStack_3aa,CONCAT41(uStack_3ae,uStack_3af)) >> 0x18);
        uStack_2a8._1_3_ = (undefined3)CONCAT41(local_3a6,uStack_3a7);
        uStack_2a8 = CONCAT31(uStack_2a8._1_3_,uStack_3a8);
        uStack_2a4 = (undefined4)(CONCAT25(uStack_3a2,CONCAT41(local_3a6,uStack_3a7)) >> 0x18);
        uStack_2a0._1_3_ = (undefined3)CONCAT41(uStack_39e,uStack_39f);
        uStack_2a0 = CONCAT31(uStack_2a0._1_3_,uStack_3a0);
        uStack_29c = (undefined4)(CONCAT25(uStack_39a,CONCAT41(uStack_39e,uStack_39f)) >> 0x18);
        uStack_298._1_3_ = (undefined3)uStack_397;
        uStack_298 = CONCAT31(uStack_298._1_3_,uStack_398);
        uStack_294 = (undefined4)(CONCAT44(uStack_393,uStack_397) >> 0x18);
        uStack_290._1_3_ = (undefined3)uStack_38f;
        uStack_290 = CONCAT31(uStack_290._1_3_,(char)((uint)uStack_393 >> 0x18));
        iStack_28c = (int)(CONCAT44(uStack_38b,uStack_38f) >> 0x18);
        uStack_288 = (undefined1)((uint)uStack_38b >> 0x18);
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
        if (lVar18 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uStack_370,1);
        }
        uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar16);
        local_2c8 = lVar25;
        decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
        if (local_3c8 == '\x01') {
          cVar30 = cStack_3c7;
          goto LAB_00195de6;
        }
        cVar30 = '\x03';
        if ((((char)uStack_268 != '\x03') || (CONCAT44(uStack_2b4,uStack_2b8) != 10)) ||
           ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] != 0x696e ||
            *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) != 0x696d656767617263)) goto LAB_00195de6;
        if ((CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) < 1) ||
           (iStack_274 < 0)) goto LAB_00195de6;
        lVar25 = CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288));
        if (lVar25 - 0x2711U < 0xffffffffffffd8f0) goto LAB_00195de6;
        lVar28 = 0;
        lVar18 = 0;
        goto LAB_00196022;
      }
      puVar29 = puVar24;
    } while (puVar24 <= param_3);
  }
  else {
    if ((*(int *)((longlong)param_2 + 3) != 0x2e314847 || *param_2 != 0x47415243) ||
       ((undefined1 *)0x2000 < param_3)) goto LAB_0019632b;
    param_3 = param_3 + -7;
    lVar25 = (longlong)param_2 + 7;
    puVar29 = (undefined1 *)0x0;
    do {
      uVar22 = (longlong)param_3 - (longlong)puVar29;
      if (uVar22 < 0x10) {
        uVar20 = 0;
        if (uVar22 == 0) break;
        while (puVar29[uVar20 + lVar25] != '.') {
          uVar20 = uVar20 + 1;
          if (uVar22 == uVar20) goto LAB_00196326;
        }
      }
      else {
        uVar20 = uVar22;
        lVar18 = (*(code *)puVar9)();
        if (lVar18 != 1) break;
      }
      puVar24 = puVar29 + uVar20 + 1;
      if ((puVar29 + uVar20 < param_3) && ((puVar29 + uVar20)[lVar25] == '.')) {
        base64[729f3f786a952ed7]::engine::Engine::decode::inner::
        <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                  (&local_3c8,&DAT_00119638,lVar25);
        uVar12 = uStack_3be;
        cVar11 = cStack_3bf;
        lVar18 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar18 == -1) goto LAB_0019632b;
        uVar4 = CONCAT26(uStack_3ba,
                         CONCAT15(uStack_3bb,
                                  CONCAT14(uStack_3bc,
                                           CONCAT22(uStack_3be,CONCAT11(cStack_3bf,cStack_3c0)))));
        uVar3 = CONCAT41(uStack_3b7,uStack_3b8);
        uVar6 = CONCAT26(uStack_3b2,CONCAT15(uStack_3b3,uVar3));
        uVar31 = decode::<64:usize>(&local_3c8,puVar24 + lVar25,
                                    (longlong)param_3 - (longlong)puVar24);
        cVar16 = cStack_3c7;
        if (local_3c8 == '\x01') goto LAB_00195ccd;
        uStack_414 = uStack_393;
        uStack_410 = uStack_38f;
        uStack_40c = uStack_38b;
        uStack_424 = CONCAT31(CONCAT12(uStack_3a0,uStack_3a2),(char)((uint)local_3a6 >> 0x18));
        uStack_420._1_3_ = (undefined3)uStack_39e;
        uStack_420 = CONCAT31(uStack_420._1_3_,uStack_39f);
        uStack_41c = CONCAT31(CONCAT12(uStack_398,uStack_39a),(char)((uint)uStack_39e >> 0x18));
        uStack_430._1_3_ = (undefined3)uStack_3ae;
        uStack_430 = CONCAT31(uStack_430._1_3_,uStack_3af);
        uStack_42c = CONCAT31(CONCAT12(uStack_3a8,uStack_3aa),(char)((uint)uStack_3ae >> 0x18));
        uStack_428 = CONCAT31((int3)local_3a6,uStack_3a7);
        cStack_447 = (char)uStack_3c6;
        uStack_446 = (undefined2)(CONCAT22(uStack_3c4,uStack_3c6) >> 8);
        uStack_444._0_1_ = (undefined1)((ushort)uStack_3c4 >> 8);
        uStack_444 = CONCAT31(CONCAT12(cStack_3c0,uStack_3c2),(undefined1)uStack_444);
        local_448 = cStack_3c7;
        cVar16 = verify_signature(param_6,"CRAGH1",7,uVar4,uVar6,&local_448);
        uVar31 = extraout_XMM0_Da;
        if (cVar16 != -1) goto LAB_00195ccd;
        cStack_447 = cVar11;
        uStack_446 = uVar12;
        uStack_444 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_440 = (undefined4)uVar3;
        uStack_43c = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_438 = 0;
        uStack_434 = 0;
        uStack_430 = 0;
        uStack_42c = 0;
        serde_json[dc3825464c436029]::de::from_trait::
        <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::Entitlement>
                  (&local_3c8,&local_448);
        cVar16 = cStack_3c0;
        lVar25 = CONCAT26(uStack_3c2,
                          CONCAT24(uStack_3c4,CONCAT22(uStack_3c6,CONCAT11(cStack_3c7,local_3c8))));
        if (lVar25 == -1) {
          uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::error::Error>
                             (CONCAT26(uStack_3ba,
                                       CONCAT15(uStack_3bb,
                                                CONCAT14(uStack_3bc,
                                                         CONCAT22(uStack_3be,
                                                                  CONCAT11(cStack_3bf,cStack_3c0))))
                                      ));
LAB_001960e2:
          if (lVar18 != 0) {
            (*(code *)PTR___rust_dealloc_00219c40)(uVar31,1);
          }
          goto LAB_0019632b;
        }
        uStack_2c0._1_3_ = CONCAT21(uStack_3be,cStack_3bf);
        uStack_2bc = (undefined4)
                     (CONCAT25(uStack_3ba,CONCAT14(uStack_3bb,CONCAT13(uStack_3bc,uStack_2c0._1_3_))
                              ) >> 0x18);
        uStack_2b8._1_3_ = (undefined3)uStack_3b7;
        uStack_2b8 = CONCAT31(uStack_2b8._1_3_,uStack_3b8);
        uStack_2b4 = (undefined4)(CONCAT25(uStack_3b2,CONCAT14(uStack_3b3,uStack_3b7)) >> 0x18);
        uStack_2b0._1_3_ = (undefined3)CONCAT41(uStack_3ae,uStack_3af);
        uStack_2b0 = CONCAT31(uStack_2b0._1_3_,uStack_3b0);
        uStack_2ac = (undefined4)(CONCAT25(uStack_3aa,CONCAT41(uStack_3ae,uStack_3af)) >> 0x18);
        uStack_2a8._1_3_ = (undefined3)CONCAT41(local_3a6,uStack_3a7);
        uStack_2a8 = CONCAT31(uStack_2a8._1_3_,uStack_3a8);
        uStack_2a4 = (undefined4)(CONCAT25(uStack_3a2,CONCAT41(local_3a6,uStack_3a7)) >> 0x18);
        uStack_2a0._1_3_ = (undefined3)CONCAT41(uStack_39e,uStack_39f);
        uStack_2a0 = CONCAT31(uStack_2a0._1_3_,uStack_3a0);
        uStack_29c = (undefined4)(CONCAT25(uStack_39a,CONCAT41(uStack_39e,uStack_39f)) >> 0x18);
        uStack_298._1_3_ = (undefined3)uStack_397;
        uStack_298 = CONCAT31(uStack_298._1_3_,uStack_398);
        uStack_294 = (undefined4)(CONCAT44(uStack_393,uStack_397) >> 0x18);
        uStack_290._1_3_ = (undefined3)uStack_38f;
        uStack_290 = CONCAT31(uStack_290._1_3_,(char)((uint)uStack_393 >> 0x18));
        iStack_28c._1_3_ = (undefined3)uStack_38b;
        iStack_28c = CONCAT31(iStack_28c._1_3_,(char)((uint)uStack_38f >> 0x18));
        uStack_288 = (undefined1)((uint)uStack_38b >> 0x18);
        uStack_287 = uStack_387;
        uStack_283 = uStack_383;
        uStack_27f = (undefined4)uStack_37f;
        uStack_27b._0_3_ = (undefined3)((uint7)uStack_37f >> 0x20);
        if (lVar18 != 0) {
          (*(code *)PTR___rust_dealloc_00219c40)(uStack_38f,1);
        }
        uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar16);
        local_2c8 = lVar25;
        decode_hash(&local_3c8,CONCAT44(uStack_2a4,uStack_2a8),CONCAT44(uStack_29c,uStack_2a0));
        if (local_3c8 == '\x01') {
          cVar30 = cStack_3c7;
        }
        else {
          cVar30 = '\x03';
          if (((((uStack_27f._3_1_ == '\x01') && (CONCAT44(uStack_2b4,uStack_2b8) == 10)) &&
               ((short)((longlong *)CONCAT44(uStack_2bc,uStack_2c0))[1] == 0x696e &&
                *(longlong *)CONCAT44(uStack_2bc,uStack_2c0) == 0x696d656767617263)) &&
              ((0 < CONCAT44(uStack_294,uStack_298) && (-1 < iStack_28c)))) &&
             (CONCAT44(iStack_28c,uStack_290) <
              CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)))) {
            local_190 = uStack_288;
            uStack_18f = (undefined7)
                         (CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)) >> 8);
            uStack_188 = uStack_283._3_1_;
            uStack_187 = (undefined7)
                         (CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) >>
                         8);
            local_1a0 = uStack_298;
            uStack_19c = uStack_294;
            uStack_198 = uStack_290;
            iStack_194 = iStack_28c;
            local_1b0 = (undefined1)uStack_2a8;
            uStack_1af = (undefined1)((uint)uStack_2a8 >> 8);
            uStack_1ae = (undefined2)((uint)uStack_2a8 >> 0x10);
            uStack_1ac = (undefined2)uStack_2a4;
            uStack_1aa = (undefined2)((uint)uStack_2a4 >> 0x10);
            uStack_1a8 = (undefined1)uStack_2a0;
            uStack_1a7 = (undefined1)((uint)uStack_2a0 >> 8);
            uStack_1a6 = (undefined2)((uint)uStack_2a0 >> 0x10);
            uStack_1a4 = uStack_29c;
            uStack_1c0 = (undefined1)uStack_2b8;
            uStack_1bf = (undefined1)((uint)uStack_2b8 >> 8);
            uStack_1be = (undefined2)((uint)uStack_2b8 >> 0x10);
            uStack_1bc = (undefined2)uStack_2b4;
            uStack_1ba = (undefined2)((uint)uStack_2b4 >> 0x10);
            uStack_1b8 = (undefined1)uStack_2b0;
            uStack_1b7 = (undefined1)((uint)uStack_2b0 >> 8);
            uStack_1b6 = (undefined2)((uint)uStack_2b0 >> 0x10);
            uStack_1b4 = (undefined2)uStack_2ac;
            uStack_1b2 = (undefined2)((uint)uStack_2ac >> 0x10);
            cStack_1d0 = (char)local_2c8;
            uStack_1cf = (undefined1)((ulonglong)local_2c8 >> 8);
            uStack_1ce = (undefined2)((ulonglong)local_2c8 >> 0x10);
            uStack_1cc = (undefined2)((ulonglong)local_2c8 >> 0x20);
            uStack_1ca = (undefined2)((ulonglong)local_2c8 >> 0x30);
            uStack_1c8 = (undefined1)uStack_2c0;
            uStack_1c7 = (undefined1)((uint)uStack_2c0 >> 8);
            uStack_1c6 = (undefined2)((uint)uStack_2c0 >> 0x10);
            uStack_1c4 = (undefined2)uStack_2bc;
            uStack_1c2 = (undefined2)((uint)uStack_2bc >> 0x10);
            local_1d8 = '\0';
            cVar30 = '\0';
            goto LAB_001962d1;
          }
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini[b21da2d71f2da7a3]::license::host::Entitlement>(&local_2c8);
        goto LAB_0019632b;
      }
      puVar29 = puVar24;
    } while (puVar24 <= param_3);
  }
  goto LAB_00196326;
  while( true ) {
    decode_hash(&local_448,*(undefined8 *)(lVar25 + 8 + lVar18),
                *(undefined8 *)(lVar25 + 0x10 + lVar18));
    if (local_448 == '\x01') goto LAB_00196428;
    cVar16 = <hashbrown[b5c94476ffc33875]::map::HashMap<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::insert(&local_3c8,*(undefined8 *)(lVar25 + 8 + lVar18),
                      *(undefined8 *)(lVar25 + 0x10 + lVar18));
    if (cVar16 != '\0') goto LAB_0019642e;
    uVar27 = *(uint *)(lVar25 + 0x18 + lVar18);
    lVar18 = lVar18 + 0x20;
    if (uVar22 * 0x20 == lVar18) break;
LAB_00195f19:
    uVar1 = *(uint *)(lVar25 + 0x18 + lVar18);
    if ((uVar1 <= uVar27) || (uVar26 < uVar1)) goto LAB_0019642e;
  }
  goto LAB_00196242;
LAB_00196428:
  cVar30 = cStack_447;
LAB_0019642e:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_3c8);
LAB_00195b09:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>(&local_2c8);
  goto LAB_0019632b;
  while( true ) {
    lVar28 = lVar28 + 0x10;
    lVar18 = lVar2;
    if (lVar25 * 0x10 == lVar28) break;
LAB_00196022:
    lVar2 = *(longlong *)(CONCAT44(iStack_28c,uStack_290) + lVar28);
    if (lVar2 <= lVar18) goto LAB_00195de6;
  }
  if (CONCAT44(uStack_26c,uStack_270) != lVar2) {
LAB_00195de6:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement>(&local_2c8);
    goto LAB_0019632b;
  }
  uStack_16f = (undefined7)(CONCAT44(uStack_264,uStack_268) >> 8);
  local_180 = CONCAT31(uStack_277,uStack_27b._3_1_);
  iStack_17c = iStack_274;
  uStack_178 = uStack_270;
  uStack_174 = uStack_26c;
  local_190 = uStack_288;
  uStack_18f = (undefined7)(CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)) >> 8);
  uStack_188 = uStack_283._3_1_;
  uStack_187 = (undefined7)
               (CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) >> 8);
  local_1a0 = uStack_298;
  uStack_19c = uStack_294;
  uStack_198 = uStack_290;
  iStack_194 = iStack_28c;
  local_1b0 = (undefined1)uStack_2a8;
  uStack_1af = (undefined1)((uint)uStack_2a8 >> 8);
  uStack_1ae = (undefined2)((uint)uStack_2a8 >> 0x10);
  uStack_1ac = (undefined2)uStack_2a4;
  uStack_1aa = (undefined2)((uint)uStack_2a4 >> 0x10);
  uStack_1a8 = (undefined1)uStack_2a0;
  uStack_1a7 = (undefined1)((uint)uStack_2a0 >> 8);
  uStack_1a6 = (undefined2)((uint)uStack_2a0 >> 0x10);
  uStack_1a4 = uStack_29c;
  uStack_1c0 = (undefined1)uStack_2b8;
  uStack_1bf = (undefined1)((uint)uStack_2b8 >> 8);
  uStack_1be = (undefined2)((uint)uStack_2b8 >> 0x10);
  uStack_1bc = (undefined2)uStack_2b4;
  uStack_1ba = (undefined2)((uint)uStack_2b4 >> 0x10);
  uStack_1b8 = (undefined1)uStack_2b0;
  uStack_1b7 = (undefined1)((uint)uStack_2b0 >> 8);
  uStack_1b6 = (undefined2)((uint)uStack_2b0 >> 0x10);
  uStack_1b4 = (undefined2)uStack_2ac;
  uStack_1b2 = (undefined2)((uint)uStack_2ac >> 0x10);
  cStack_1d0 = (char)local_2c8;
  uStack_1cf = (undefined1)((ulonglong)local_2c8 >> 8);
  uStack_1ce = (undefined2)((ulonglong)local_2c8 >> 0x10);
  uStack_1cc = (undefined2)((ulonglong)local_2c8 >> 0x20);
  uStack_1ca = (undefined2)((ulonglong)local_2c8 >> 0x30);
  uStack_1c8 = (undefined1)uStack_2c0;
  uStack_1c7 = (undefined1)((uint)uStack_2c0 >> 8);
  uStack_1c6 = (undefined2)((uint)uStack_2c0 >> 0x10);
  uStack_1c4 = (undefined2)uStack_2bc;
  uStack_1c2 = (undefined2)((uint)uStack_2bc >> 0x10);
  local_1d8 = '\x02';
  cVar30 = '\x02';
  uStack_170 = 3;
  goto LAB_001962d1;
LAB_00195ccd:
  cVar30 = cVar16;
  if (lVar18 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar31,1);
  }
  goto LAB_0019632b;
  while( true ) {
    decode_hash(&local_448,*(undefined8 *)(lVar25 + 8 + lVar18),
                *(undefined8 *)(lVar25 + 0x10 + lVar18));
    if (local_448 != '\0') goto LAB_00196428;
    cVar16 = <hashbrown[b5c94476ffc33875]::map::HashMap<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::insert(&local_3c8,*(undefined8 *)(lVar25 + 8 + lVar18),
                      *(undefined8 *)(lVar25 + 0x10 + lVar18));
    if (cVar16 != '\0') goto LAB_0019642e;
    uVar27 = *(uint *)(lVar25 + 0x18 + lVar18);
    lVar18 = lVar18 + 0x20;
    if (uVar22 * 0x20 == lVar18) break;
LAB_001961f2:
    if (*(uint *)(lVar25 + 0x18 + lVar18) <= uVar27) goto LAB_0019642e;
  }
LAB_00196242:
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(&str,())>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(&local_3c8);
  cStack_1d0 = (char)local_2c8;
  uStack_1cf = (undefined1)((ulonglong)local_2c8 >> 8);
  uStack_1ce = (undefined2)((ulonglong)local_2c8 >> 0x10);
  uStack_1cc = (undefined2)((ulonglong)local_2c8 >> 0x20);
  uStack_1ca = (undefined2)((ulonglong)local_2c8 >> 0x30);
  uStack_1c8 = (undefined1)uStack_2c0;
  uStack_1c7 = (undefined1)((uint)uStack_2c0 >> 8);
  uStack_1c6 = (undefined2)((uint)uStack_2c0 >> 0x10);
  uStack_1c4 = (undefined2)uStack_2bc;
  uStack_1c2 = (undefined2)((uint)uStack_2bc >> 0x10);
  uStack_1c0 = (undefined1)uStack_2b8;
  uStack_1bf = (undefined1)((uint)uStack_2b8 >> 8);
  uStack_1be = (undefined2)((uint)uStack_2b8 >> 0x10);
  uStack_1bc = (undefined2)uStack_2b4;
  uStack_1ba = (undefined2)((uint)uStack_2b4 >> 0x10);
  uStack_1b8 = (undefined1)uStack_2b0;
  uStack_1b7 = (undefined1)((uint)uStack_2b0 >> 8);
  uStack_1b6 = (undefined2)((uint)uStack_2b0 >> 0x10);
  uStack_1b4 = (undefined2)uStack_2ac;
  uStack_1b2 = (undefined2)((uint)uStack_2ac >> 0x10);
  local_1b0 = (undefined1)uStack_2a8;
  uStack_1af = (undefined1)((uint)uStack_2a8 >> 8);
  uStack_1ae = (undefined2)((uint)uStack_2a8 >> 0x10);
  uStack_1ac = (undefined2)uStack_2a4;
  uStack_1aa = (undefined2)((uint)uStack_2a4 >> 0x10);
  uStack_1a8 = (undefined1)uStack_2a0;
  uStack_1a7 = (undefined1)((uint)uStack_2a0 >> 8);
  uStack_1a6 = (undefined2)((uint)uStack_2a0 >> 0x10);
  uStack_1a4 = uStack_29c;
  local_1a0 = uStack_298;
  uStack_19c = uStack_294;
  uStack_198 = uStack_290;
  iStack_194 = iStack_28c;
  local_190 = uStack_288;
  uStack_18f = (undefined7)(CONCAT35((undefined3)uStack_283,CONCAT41(uStack_287,uStack_288)) >> 8);
  uStack_188 = uStack_283._3_1_;
  uStack_187 = (undefined7)
               (CONCAT35((undefined3)uStack_27b,CONCAT41(uStack_27f,uStack_283._3_1_)) >> 8);
  local_180 = CONCAT31(uStack_277,uStack_27b._3_1_);
  iStack_17c = iStack_274;
  uStack_178 = uStack_270;
  uStack_174 = uStack_26c;
  uStack_170 = (undefined1)uStack_268;
  uStack_16f = (undefined7)(CONCAT44(uStack_264,uStack_268) >> 8);
  local_1d8 = '\x01';
  cVar30 = '\x01';
LAB_001962d1:
  uStack_1d2 = 0;
  uStack_1d4 = 0;
  uStack_1d6 = 0;
  cStack_1d7 = '\0';
  uStack_29c = uStack_1a4;
  uStack_298 = local_1a0;
  uStack_294 = uStack_19c;
  uStack_290 = uStack_198;
  iStack_28c = iStack_194;
  uStack_288 = local_190;
  if (CONCAT44(uStack_1a4,CONCAT22(uStack_1a6,CONCAT11(uStack_1a7,uStack_1a8))) == param_8) {
    iVar17 = (*(code *)PTR_bcmp_00219d38)();
    piVar10 = local_3d0;
    if (iVar17 == 0) {
      uStack_43c = (undefined4)
                   (CONCAT25(uStack_1ca,CONCAT23(uStack_1cc,CONCAT21(uStack_1ce,uStack_1cf))) >>
                   0x18);
      uStack_438 = CONCAT31(CONCAT21(uStack_1c6,uStack_1c7),uStack_1c8);
      uStack_434 = (undefined4)
                   (CONCAT25(uStack_1c2,CONCAT23(uStack_1c4,CONCAT21(uStack_1c6,uStack_1c7))) >>
                   0x18);
      uStack_430 = CONCAT31(CONCAT21(uStack_1be,uStack_1bf),uStack_1c0);
      uStack_42c = (undefined4)
                   (CONCAT25(uStack_1ba,CONCAT23(uStack_1bc,CONCAT21(uStack_1be,uStack_1bf))) >>
                   0x18);
      uStack_428 = CONCAT31(CONCAT21(uStack_1b6,uStack_1b7),uStack_1b8);
      uStack_424 = (undefined4)
                   (CONCAT25(uStack_1b2,CONCAT23(uStack_1b4,CONCAT21(uStack_1b6,uStack_1b7))) >>
                   0x18);
      uStack_420 = CONCAT31(CONCAT21(uStack_1ae,uStack_1af),local_1b0);
      uStack_41c = (undefined4)
                   (CONCAT25(uStack_1aa,CONCAT23(uStack_1ac,CONCAT21(uStack_1ae,uStack_1af))) >>
                   0x18);
      uStack_418 = CONCAT31(CONCAT21(uStack_1a6,uStack_1a7),uStack_1a8);
      uStack_414 = uStack_1a4;
      uStack_407 = CONCAT43(iStack_194,uStack_198._1_3_);
      uStack_410 = local_1a0;
      uStack_40c = uStack_19c;
      local_408 = (undefined1)uStack_198;
      uStack_400 = local_190;
      uStack_3ff = (undefined6)uStack_18f;
      uStack_3f9 = (undefined1)((uint7)uStack_18f >> 0x30);
      uStack_3f8 = uStack_188;
      uStack_3f7 = (undefined2)uStack_187;
      uStack_3f5 = (undefined4)((uint7)uStack_187 >> 0x10);
      uStack_3f1 = (undefined1)((uint7)uStack_187 >> 0x30);
      uStack_3f0 = (undefined1)local_180;
      uStack_3e7 = CONCAT13((undefined1)uStack_174,uStack_178._1_3_);
      uStack_3ef = (undefined2)((uint)local_180 >> 8);
      uStack_3ed = (undefined2)(CONCAT13((undefined1)iStack_17c,local_180._1_3_) >> 0x10);
      uStack_3eb = (undefined2)((uint)iStack_17c >> 8);
      uStack_3e9 = (undefined1)((uint)iStack_17c >> 0x18);
      uStack_3e8 = (undefined1)uStack_178;
      uStack_3e3 = CONCAT13(uStack_170,uStack_174._1_3_);
      uStack_3df = uStack_16f;
      cStack_447 = 0;
      uStack_446 = 0;
      uStack_444 = 0;
      uStack_440 = CONCAT31(CONCAT21(uStack_1ce,uStack_1cf),cStack_1d0);
      local_469 = '\x03';
      local_448 = cVar30;
      if ((0xffffffffffffe005 < param_5 - 0x2001U) &&
         (*(int *)((longlong)local_3d0 + 3) == 0x2e315347 && *local_3d0 == 0x47415243)) {
        uVar22 = param_5 - 7;
        lVar25 = (longlong)local_3d0 + 7;
        uVar20 = 0;
        do {
          uVar23 = uVar22 - uVar20;
          if (uVar23 < 0x10) {
            uVar21 = 0;
            if (uVar23 != 0) {
              do {
                if (*(char *)(uVar20 + lVar25 + uVar21) == '.') {
                  lVar18 = 1;
                  goto LAB_001964b0;
                }
                uVar21 = uVar21 + 1;
              } while (uVar23 != uVar21);
              uVar21 = uVar23;
            }
            lVar18 = 0;
          }
          else {
            uVar21 = uVar23;
            lVar18 = (*(code *)PTR_memchr_aligned_00219d40)();
          }
LAB_001964b0:
          if (lVar18 != 1) break;
          uVar23 = uVar21 + uVar20 + 1;
          if ((uVar21 + uVar20 < uVar22) && (*(char *)(lVar25 + uVar21 + uVar20) == '.')) {
            base64[729f3f786a952ed7]::engine::Engine::decode::inner::
            <base64[729f3f786a952ed7]::engine::general_purpose::GeneralPurpose>
                      (&local_1d8,&DAT_00119638,lVar25);
            uVar15 = uStack_1c8;
            cVar16 = cStack_1d0;
            lVar18 = CONCAT26(uStack_1d2,
                              CONCAT24(uStack_1d4,
                                       CONCAT22(uStack_1d6,CONCAT11(cStack_1d7,local_1d8))));
            if (lVar18 == -1) break;
            uVar7 = CONCAT24(uStack_1cc,CONCAT22(uStack_1ce,CONCAT11(uStack_1cf,cStack_1d0)));
            uVar4 = CONCAT26(uStack_1ca,uVar7);
            uVar8 = CONCAT24(uStack_1c4,CONCAT22(uStack_1c6,CONCAT11(uStack_1c7,uStack_1c8)));
            uVar6 = CONCAT26(uStack_1c2,uVar8);
            uVar31 = decode::<64:usize>(&local_1d8,lVar25 + uVar23,uVar22 - uVar23);
            local_469 = cStack_1d7;
            if (local_1d8 != '\x01') {
              uStack_6f = CONCAT22(uStack_1d4,uStack_1d6);
              uStack_6b = CONCAT13(uStack_1cf,CONCAT12(cStack_1d0,uStack_1d2));
              uStack_67 = CONCAT22(uStack_1cc,uStack_1ce);
              uStack_63 = CONCAT13(uStack_1c7,CONCAT12(uStack_1c8,uStack_1ca));
              uStack_5f = CONCAT22(uStack_1c4,uStack_1c6);
              uStack_5b = CONCAT13(uStack_1bf,CONCAT12(uStack_1c0,uStack_1c2));
              uStack_57 = CONCAT22(uStack_1bc,uStack_1be);
              uStack_53 = CONCAT13(uStack_1b7,CONCAT12(uStack_1b8,uStack_1ba));
              uStack_4f = CONCAT22(uStack_1b4,uStack_1b6);
              uStack_4b = CONCAT13(uStack_1af,CONCAT12(local_1b0,uStack_1b2));
              uStack_47 = CONCAT22(uStack_1ac,uStack_1ae);
              uStack_43 = CONCAT13(uStack_1a7,CONCAT12(uStack_1a8,uStack_1aa));
              uStack_3c = CONCAT13((undefined1)local_1a0,uStack_1a4._1_3_);
              uStack_38 = CONCAT13((undefined1)uStack_19c,local_1a0._1_3_);
              uStack_34 = CONCAT13((undefined1)uStack_198,uStack_19c._1_3_);
              uStack_3f = (undefined3)
                          (CONCAT13((undefined1)uStack_1a4,CONCAT21(uStack_1a6,uStack_1a7)) >> 8);
              local_70 = cStack_1d7;
              local_469 = verify_signature(param_6,"CRAGS1",7,uVar4,uVar6,&local_70);
              uVar31 = extraout_XMM0_Da_02;
              if (local_469 == -1) {
                local_70 = cVar16;
                uStack_6f = (undefined4)((uint6)uVar7 >> 8);
                uStack_6b = CONCAT13(uVar15,(int3)((ulonglong)uVar4 >> 0x28));
                uStack_67 = (undefined4)((uint6)uVar8 >> 8);
                uStack_63 = (uint)(uint3)((ulonglong)uVar6 >> 0x28);
                uStack_5f = 0;
                uStack_5b = 0;
                uStack_57 = 0;
                uStack_53 = uStack_53 & 0xff000000;
                uVar31 = serde_json[dc3825464c436029]::de::from_trait::
                         <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::SlotPermit>
                                   (&local_1d8,&local_70);
                uVar14 = uStack_1d2;
                uVar13 = uStack_1d4;
                uVar12 = uStack_1d6;
                cVar11 = cStack_1d7;
                cVar16 = local_1d8;
                lVar25 = CONCAT26(uStack_1d2,
                                  CONCAT24(uStack_1d4,
                                           CONCAT22(uStack_1d6,CONCAT11(cStack_1d7,local_1d8))));
                if (lVar25 == -1) {
                  local_469 = '\x03';
                  uVar31 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <serde_json[dc3825464c436029]::error::Error>
                                     (CONCAT26(uStack_1ca,
                                               CONCAT24(uStack_1cc,
                                                        CONCAT22(uStack_1ce,
                                                                 CONCAT11(uStack_1cf,cStack_1d0)))))
                  ;
                }
                else {
                  local_469 = cStack_1d0;
                  uVar31 = (*(code *)PTR_memcpy_00219c60)(uVar31,0xef);
                }
                if (lVar18 != 0) {
                  uVar31 = (*(code *)PTR___rust_dealloc_00219c40)(uVar31,1);
                }
                if (lVar25 != -1) {
                  (*(code *)PTR_memcpy_00219c60)(uVar31,0xef);
                  local_3c8 = cVar16;
                  cStack_3c7 = cVar11;
                  uStack_3c6 = uVar12;
                  uStack_3c4 = uVar13;
                  uStack_3c2 = uVar14;
                  cStack_3c0 = local_469;
                  if (((local_2d4 != '\x01') ||
                      (CONCAT26(uStack_3b2,CONCAT15(uStack_3b3,CONCAT41(uStack_3b7,uStack_3b8))) !=
                       10)) || (plVar5 = (longlong *)
                                         CONCAT26(uStack_3ba,
                                                  CONCAT15(uStack_3bb,
                                                           CONCAT14(uStack_3bc,
                                                                    CONCAT22(uStack_3be,
                                                                             CONCAT11(cStack_3bf,
                                                                                      local_469)))))
                               , local_2d8 == 0 ||
                                 ((short)plVar5[1] != 0x696e || *plVar5 != 0x696d656767617263))) {
                    *(undefined1 *)(param_1 + 1) = 3;
                    goto LAB_001967c3;
                  }
                  if ((((CONCAT26(uStack_39a,CONCAT42(uStack_39e,CONCAT11(uStack_39f,uStack_3a0)))
                         != CONCAT44(uStack_414,uStack_418)) ||
                       (iVar17 = (*(code *)PTR_bcmp_00219d38)(), iVar17 != 0)) ||
                      ((local_310 != *(longlong *)(param_9 + 0x28) ||
                       ((iVar17 = (*(code *)PTR_bcmp_00219d38)(), iVar17 != 0 ||
                        (local_2f8 != *(longlong *)(param_9 + 0x40))))))) ||
                     ((iVar17 = (*(code *)PTR_bcmp_00219d38)(), iVar17 != 0 ||
                      ((local_2e0 != *(longlong *)(param_9 + 0x70) ||
                       (iVar17 = (*(code *)PTR_bcmp_00219d38)(), iVar17 != 0))))))
                  goto LAB_001967ba;
                  if (cVar30 == '\0') {
                    uVar26 = CONCAT13((undefined1)uStack_3f5,CONCAT21(uStack_3f7,uStack_3f8));
                    if (!(uVar26 < local_2d8 && uVar26 != 0)) goto LAB_001968c6;
                    goto LAB_001967ba;
                  }
                  if (cVar30 == '\x01') {
                    <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                    ::digest::<&[u8]>(&local_1d8,piVar10,param_5);
                    hex(&local_2c8,&local_1d8,0x20);
                    cVar16 = <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>::
                             allows_permit(&uStack_440,local_2d8,CONCAT44(uStack_2bc,uStack_2c0),
                                           CONCAT44(uStack_2b4,uStack_2b8));
                    if (cVar16 == '\0') {
                      *(undefined1 *)(param_1 + 1) = 4;
                      *param_1 = 0xffffffffffffffff;
                      if (local_2c8 != 0) {
                        (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da_03,1);
                      }
                      goto LAB_001967cd;
                    }
                    if (local_2c8 != 0) {
                      (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da_03,1);
                    }
                    goto LAB_001968c6;
                  }
                  lVar25 = CONCAT17(uStack_3f9,CONCAT61(uStack_3ff,uStack_400));
                  if (lVar25 == 0) goto LAB_001967ba;
                  uVar26 = *(uint *)(CONCAT71(uStack_407,local_408) + 8);
                  if (lVar25 != 1) {
                    uVar22 = lVar25 - 1U & 0xfffffffffffffff;
                    puVar19 = (uint *)(CONCAT71(uStack_407,local_408) + 0x18);
                    do {
                      uVar27 = 0;
                      if ((uVar26 != 0) && (uVar1 = *puVar19, uVar1 != 0)) {
                        uVar27 = uVar26 + uVar1;
                        if (CARRY4(uVar26,uVar1)) {
                          uVar27 = 0xffffffff;
                        }
                        if (0x7ffffffe < uVar27) {
                          uVar27 = 0x7fffffff;
                        }
                      }
                      uVar26 = uVar27;
                      puVar19 = puVar19 + 4;
                      uVar22 = uVar22 - 1;
                    } while (uVar22 != 0);
                  }
                  if (uVar26 < local_2d8 && uVar26 != 0) {
LAB_001967ba:
                    *(undefined1 *)(param_1 + 1) = 4;
                  }
                  else {
LAB_001968c6:
                    unwrap_device_key(&local_1d8,(longlong)&uStack_383 + 3,
                                      CONCAT35((undefined3)uStack_38b,
                                               CONCAT41(uStack_38f,uStack_393._3_1_)),
                                      CONCAT35((undefined3)uStack_383,
                                               CONCAT41(uStack_387,uStack_38b._3_1_)),param_9);
                    cVar16 = cStack_1d7;
                    if (local_1d8 != '\x01') {
                      param_1[0x2f] =
                           CONCAT17(uStack_1c0,
                                    CONCAT25(uStack_1c2,
                                             CONCAT23(uStack_1c4,CONCAT21(uStack_1c6,uStack_1c7))));
                      param_1[0x30] =
                           CONCAT17(uStack_1b8,
                                    CONCAT25(uStack_1ba,
                                             CONCAT23(uStack_1bc,CONCAT21(uStack_1be,uStack_1bf))));
                      *(ulonglong *)((longlong)param_1 + 0x169) =
                           CONCAT17(uStack_1cf,
                                    CONCAT16(cStack_1d0,
                                             CONCAT24(uStack_1d2,CONCAT22(uStack_1d4,uStack_1d6))));
                      *(ulonglong *)((longlong)param_1 + 0x171) =
                           CONCAT17(uStack_1c7,
                                    CONCAT16(uStack_1c8,
                                             CONCAT24(uStack_1ca,CONCAT22(uStack_1cc,uStack_1ce))));
                      puVar9 = PTR_memcpy_00219c60;
                      uStack_178 = (undefined4)CONCAT41(uStack_3e7,uStack_3e8);
                      uStack_174 = (undefined4)
                                   (CONCAT35((undefined3)uStack_3e3,CONCAT41(uStack_3e7,uStack_3e8))
                                   >> 0x20);
                      uStack_170 = uStack_3e3._3_1_;
                      uStack_16f = uStack_3df;
                      uVar3 = CONCAT23(uStack_3ed,CONCAT21(uStack_3ef,uStack_3f0));
                      uStack_188 = uStack_3f8;
                      uStack_187 = (undefined7)
                                   (CONCAT17(uStack_3f1,
                                             CONCAT43(uStack_3f5,CONCAT21(uStack_3f7,uStack_3f8)))
                                   >> 8);
                      local_180 = (undefined4)uVar3;
                      iStack_17c = (int)(CONCAT17(uStack_3e9,CONCAT25(uStack_3eb,uVar3)) >> 0x20);
                      uStack_198 = (undefined4)CONCAT71(uStack_407,local_408);
                      iStack_194 = (int)((uint7)uStack_407 >> 0x18);
                      local_190 = uStack_400;
                      uStack_18f = (undefined7)
                                   (CONCAT17(uStack_3f9,CONCAT61(uStack_3ff,uStack_400)) >> 8);
                      uStack_1a8 = (undefined1)uStack_418;
                      uStack_1a7 = (undefined1)((uint)uStack_418 >> 8);
                      uStack_1a6 = (undefined2)((uint)uStack_418 >> 0x10);
                      uStack_1a4 = uStack_414;
                      local_1a0 = uStack_410;
                      uStack_19c = uStack_40c;
                      uStack_1b8 = (undefined1)uStack_428;
                      uStack_1b7 = (undefined1)((uint)uStack_428 >> 8);
                      uStack_1b6 = (undefined2)((uint)uStack_428 >> 0x10);
                      uStack_1b4 = (undefined2)uStack_424;
                      uStack_1b2 = (undefined2)((uint)uStack_424 >> 0x10);
                      local_1b0 = (undefined1)uStack_420;
                      uStack_1af = (undefined1)((uint)uStack_420 >> 8);
                      uStack_1ae = (undefined2)((uint)uStack_420 >> 0x10);
                      uStack_1ac = (undefined2)uStack_41c;
                      uStack_1aa = (undefined2)((uint)uStack_41c >> 0x10);
                      uStack_1c8 = (undefined1)uStack_438;
                      uStack_1c7 = (undefined1)((uint)uStack_438 >> 8);
                      uStack_1c6 = (undefined2)((uint)uStack_438 >> 0x10);
                      uStack_1c4 = (undefined2)uStack_434;
                      uStack_1c2 = (undefined2)((uint)uStack_434 >> 0x10);
                      uStack_1c0 = (undefined1)uStack_430;
                      uStack_1bf = (undefined1)((uint)uStack_430 >> 8);
                      uStack_1be = (undefined2)((uint)uStack_430 >> 0x10);
                      uStack_1bc = (undefined2)uStack_42c;
                      uStack_1ba = (undefined2)((uint)uStack_42c >> 0x10);
                      local_1d8 = local_448;
                      cStack_1d7 = cStack_447;
                      uStack_1d6 = uStack_446;
                      uStack_1d4 = (undefined2)uStack_444;
                      uStack_1d2 = (undefined2)((uint)uStack_444 >> 0x10);
                      cStack_1d0 = (char)uStack_440;
                      uStack_1cf = (undefined1)((uint)uStack_440 >> 8);
                      uStack_1ce = (undefined2)((uint)uStack_440 >> 0x10);
                      uStack_1cc = (undefined2)uStack_43c;
                      uStack_1ca = (undefined2)((uint)uStack_43c >> 0x10);
                      uVar31 = (*(code *)PTR_memcpy_00219c60)
                                         (CONCAT22(uStack_446,CONCAT11(cStack_447,local_448)),0xf8);
                      (*(code *)puVar9)(uVar31,0x168);
                      *(char *)(param_1 + 0x2d) = cVar16;
                      return param_1;
                    }
                    *(char *)(param_1 + 1) = cStack_1d7;
                  }
LAB_001967c3:
                  *param_1 = 0xffffffffffffffff;
LAB_001967cd:
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini[b21da2d71f2da7a3]::license::host::SlotPermit>(&local_3c8);
                  goto joined_r0x001967e2;
                }
                break;
              }
            }
            if (lVar18 != 0) {
              (*(code *)PTR___rust_dealloc_00219c40)(uVar31,1);
            }
            break;
          }
          uVar20 = uVar23;
        } while (uVar23 <= uVar22);
      }
      *(char *)(param_1 + 1) = local_469;
      *param_1 = 0xffffffffffffffff;
joined_r0x001967e2:
      if (cVar30 == '\0') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini[b21da2d71f2da7a3]::license::host::Entitlement>(&uStack_440);
        return param_1;
      }
      if (cVar30 == '\x01') {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>();
        return param_1;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement>();
      return param_1;
    }
  }
  if (cVar30 == '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini[b21da2d71f2da7a3]::license::host::Entitlement>(&cStack_1d0);
  }
  else if (cVar30 == '\x01') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>();
  }
  else {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <craggemini[b21da2d71f2da7a3]::license::host::GrantedEntitlement>();
  }
  cVar16 = '\x04';
LAB_00196326:
  cVar30 = cVar16;
LAB_0019632b:
  *(char *)(param_1 + 1) = cVar30;
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


