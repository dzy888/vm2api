// 00636320 is_contained_in

/* WARNING: Type propagation algorithm not settling */
/* <&str as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

ulonglong __rustcall
<&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (byte *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ushort uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  undefined3 uVar20;
  char cVar21;
  byte bVar22;
  undefined2 uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 in_RAX;
  undefined8 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined *puVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong *plVar35;
  undefined *puVar36;
  longlong *plVar37;
  longlong *plVar38;
  undefined *puVar39;
  undefined *puVar40;
  uint uVar41;
  longlong lVar42;
  char *pcVar43;
  undefined1 uVar44;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  char cVar52;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  undefined1 auVar53 [16];
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  char cVar81;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  undefined1 auVar82 [16];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  longlong lStack_348;
  longlong lStack_340;
  longlong lStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  longlong lStack_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong lStack_300;
  longlong lStack_2f8;
  longlong *plStack_2f0;
  longlong lStack_2e8;
  char cStack_2e0;
  undefined1 uStack_2df;
  undefined4 uStack_2de;
  undefined2 uStack_2da;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  longlong *plStack_268;
  longlong lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong *plStack_168;
  byte *pbStack_160;
  char local_138;
  char cStack_137;
  char cStack_136;
  longlong local_e0;
  longlong *local_d8;
  byte *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_90;
  longlong local_88;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 *local_50;
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  puVar29 = (undefined *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (param_2 == (longlong *)0x0) {
LAB_00636a04:
    puVar29 = (undefined *)CONCAT71((int7)((ulonglong)puVar29 >> 8),1);
    goto LAB_00636a06;
  }
  if (param_2 < param_4) {
    if (param_2 == (longlong *)0x1) {
      if (&DAT_0000000f < param_4) {
        lVar27 = (*(code *)PTR_memchr_aligned_00799490)(*param_1,param_4);
        puVar29 = (undefined *)CONCAT71((int7)((ulonglong)lVar27 >> 8),lVar27 == 1);
        goto LAB_00636a06;
      }
      plVar35 = (longlong *)0x0;
      do {
        if (*(byte *)(param_3 + (longlong)plVar35) == *param_1) goto LAB_00636a06;
        plVar35 = (longlong *)((longlong)plVar35 + 1);
      } while (param_4 != plVar35);
    }
    else {
      if (param_2 < &DAT_00000021) {
        bVar22 = *param_1;
        if (param_2 == (longlong *)0x2) {
          if (param_4 < &DAT_00000011) goto LAB_00636440;
          auVar45 = pshuflw(ZEXT216(CONCAT11(bVar22,bVar22)),ZEXT216(CONCAT11(bVar22,bVar22)),0);
          auVar53._0_8_ = auVar45._0_8_;
          auVar53._8_4_ = auVar45._0_4_;
          auVar53._12_4_ = auVar45._4_4_;
          bVar2 = param_1[1];
          plVar37 = (longlong *)0x1;
        }
        else {
          plVar33 = (longlong *)((longlong)param_2 + -4);
          plVar35 = (longlong *)0x0;
          if ((longlong *)0x3 < param_2) {
            plVar35 = plVar33;
          }
          plVar38 = param_2;
          do {
            if (plVar38 <= plVar35) goto LAB_00636469;
            plVar37 = (longlong *)((longlong)plVar38 + -1);
            if (param_2 <= plVar37) {
              (*(code *)PTR_panic_bounds_check_00799520)
                        (plVar33,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078f220);
              uVar23 = (undefined2)param_2[7];
              lVar27 = param_2[1];
              plVar35 = (longlong *)param_2[2];
              plStack_168 = param_4;
              pbStack_160 = param_1;
              if (*param_2 == -1) {
LAB_00636bd1:
                lVar31 = param_2[3];
                lVar34 = param_2[5];
                uStack_34c = uVar23;
                plStack_268 = plVar35;
                lVar30 = lVar27;
                lVar42 = param_2[4];
                plVar35 = (longlong *)0xffffffffffffffff;
                lVar27 = lStack_2f8;
              }
              else {
                if ((longlong)plVar35 < 0) {
LAB_00636bc5:
                  uVar23 = (*(code *)PTR_handle_error_00798ff0)();
                  param_2 = plVar35;
                  goto LAB_00636bd1;
                }
                uStack_34c = uVar23;
                if (plVar35 == (longlong *)0x0) {
                  lVar31 = param_2[3];
                  lVar34 = param_2[5];
                  plStack_268 = plVar35;
                  lVar30 = 1;
                  lVar42 = param_2[4];
                  plVar35 = (longlong *)0x0;
                  lVar27 = lStack_2f8;
                }
                else {
                  plStack_268 = plVar35;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar30 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar30 == 0) goto LAB_00636bc5;
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,plVar35);
                  lVar31 = param_2[3];
                  lVar34 = param_2[5];
                  lVar42 = param_2[4];
                  lVar27 = lStack_2f8;
                }
              }
              lStack_2f8 = lVar42;
              lVar42 = -1;
              if (lVar31 != -1) {
                if (lVar34 < 0) {
LAB_00636c8b:
                  lStack_2f8 = lVar27;
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_00637644;
                }
                if (lVar34 == 0) {
                  lStack_2f8 = 1;
                  lVar42 = 0;
                }
                else {
                  plStack_2f0 = param_2;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar31 = (*(code *)PTR___rust_alloc_00799000)();
                  lVar27 = lStack_2f8;
                  if (lVar31 == 0) goto LAB_00636c8b;
                  (*(code *)PTR_memcpy_00799008)(lVar34,lVar34);
                  param_2 = plStack_2f0;
                  lVar42 = lVar34;
                  lStack_2f8 = lVar31;
                }
              }
              uStack_34d = *(undefined1 *)((longlong)param_2 + 0x3b);
              plStack_2f0 = (longlong *)
                            CONCAT71(plStack_2f0._1_7_,*(undefined1 *)((longlong)param_2 + 0x3a));
              puVar5 = (undefined8 *)param_2[6];
              lStack_2e8 = lVar30;
              if (puVar5 == (undefined8 *)0x0) {
                puVar32 = (undefined8 *)0x0;
                goto LAB_006375d0;
              }
              lStack_1e0 = lVar34;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar32 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar32 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_alloc_error_007991d8)();
                goto LAB_00637644;
              }
              uVar23 = *(undefined2 *)(puVar5 + 0x2e);
              uStack_34a = *(undefined2 *)((longlong)puVar5 + 0x172);
              lStack_270 = lVar42;
              if (puVar5[2] == -1) {
                uStack_1d8 = 0xffffffffffffffff;
                if (puVar5[5] != -1) goto LAB_00636daa;
LAB_00636e7f:
                lStack_300 = -1;
                lStack_328 = -1;
                if (puVar5[8] != -1) goto LAB_00636de5;
LAB_00636e93:
                if (puVar5[0xb] != -1) goto LAB_00636e25;
LAB_00636ea3:
                lStack_308 = -1;
                lStack_330 = -1;
              }
              else {
                (*(code *)PTR_clone_00798fd0)();
                if (puVar5[5] == -1) goto LAB_00636e7f;
LAB_00636daa:
                lStack_300 = -1;
                (*(code *)PTR_clone_00798fd0)();
                lStack_328 = uStack_370;
                uStack_278 = uStack_368;
                uStack_1f8 = uStack_360;
                if (puVar5[8] == -1) goto LAB_00636e93;
LAB_00636de5:
                (*(code *)PTR_clone_00798fd0)();
                lStack_300 = uStack_370;
                uStack_280 = uStack_368;
                uStack_200 = uStack_360;
                if (puVar5[0xb] == -1) goto LAB_00636ea3;
LAB_00636e25:
                lStack_308 = -1;
                (*(code *)PTR_clone_00798fd0)();
                lStack_330 = uStack_370;
                uStack_288 = uStack_368;
                uStack_208 = uStack_360;
              }
              uStack_1e8 = *puVar5;
              uStack_1f0 = puVar5[1];
              if (puVar5[0xe] == -1) {
                if (puVar5[0x11] != -1) goto LAB_00636f15;
LAB_006370bb:
                lStack_310 = -1;
                lStack_338 = -1;
                if (puVar5[0x14] != -1) goto LAB_00636f56;
LAB_006370d2:
                if (puVar5[0x17] != -1) goto LAB_00636fa0;
LAB_006370e9:
                lStack_318 = -1;
                lStack_340 = -1;
                if (puVar5[0x1a] != -1) goto LAB_00636fe1;
LAB_00637100:
                if (puVar5[0x1d] != -1) goto LAB_0063702b;
LAB_00637117:
                lStack_320 = -1;
                lStack_348 = -1;
                lVar27 = puVar5[0x20];
              }
              else {
                (*(code *)PTR_clone_00798fd0)();
                lStack_308 = uStack_370;
                uStack_290 = uStack_368;
                uStack_210 = uStack_360;
                if (puVar5[0x11] == -1) goto LAB_006370bb;
LAB_00636f15:
                lStack_310 = -1;
                (*(code *)PTR_clone_00798fd0)();
                lStack_338 = uStack_370;
                uStack_298 = uStack_368;
                uStack_218 = uStack_360;
                if (puVar5[0x14] == -1) goto LAB_006370d2;
LAB_00636f56:
                (*(code *)PTR_clone_00798fd0)();
                lStack_310 = uStack_370;
                uStack_2a0 = uStack_368;
                uStack_220 = uStack_360;
                if (puVar5[0x17] == -1) goto LAB_006370e9;
LAB_00636fa0:
                lStack_318 = -1;
                (*(code *)PTR_clone_00798fd0)();
                lStack_340 = uStack_370;
                uStack_2a8 = uStack_368;
                uStack_228 = uStack_360;
                if (puVar5[0x1a] == -1) goto LAB_00637100;
LAB_00636fe1:
                (*(code *)PTR_clone_00798fd0)();
                lStack_318 = uStack_370;
                uStack_2b0 = uStack_368;
                uStack_230 = uStack_360;
                if (puVar5[0x1d] == -1) goto LAB_00637117;
LAB_0063702b:
                lStack_320 = -1;
                (*(code *)PTR_clone_00798fd0)();
                lVar27 = puVar5[0x20];
                lStack_348 = uStack_370;
                uStack_2b8 = uStack_368;
                uStack_238 = uStack_360;
              }
              if (lVar27 != -1) {
                (*(code *)PTR_clone_00798fd0)();
                lStack_320 = uStack_370;
                uStack_2c0 = uStack_368;
                uStack_240 = uStack_360;
              }
              uStack_34e = *(undefined1 *)((longlong)puVar5 + 0x174);
              uStack_34f = *(undefined1 *)((longlong)puVar5 + 0x175);
              uStack_350 = *(undefined1 *)((longlong)puVar5 + 0x176);
              if (puVar5[0x23] == -1) {
                lStack_260 = -1;
                cVar52 = *(char *)(puVar5 + 0x2a);
                if (cVar52 != -1) goto LAB_00637199;
LAB_006371d9:
                cStack_2e0 = -1;
                if (puVar5[0x26] != -1) goto LAB_006372ee;
LAB_006371f7:
                uStack_370 = -1;
                lVar42 = lStack_270;
              }
              else {
                <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::to_vec
                ::<alloc[12e961f32105355]::alloc::Global>(&uStack_370,puVar5[0x24],puVar5[0x25]);
                uStack_250 = uStack_360;
                lStack_260 = uStack_370;
                uStack_258 = uStack_368;
                cVar52 = *(char *)(puVar5 + 0x2a);
                if (cVar52 == -1) goto LAB_006371d9;
LAB_00637199:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(cVar52) {
                case '\x01':
                  uStack_370 = (ulonglong)
                               CONCAT61(uStack_370._2_6_,*(undefined1 *)((longlong)puVar5 + 0x151))
                               << 8;
                  break;
                case '\x02':
                  uStack_368 = puVar5[0x2b];
                  uStack_360 = puVar5[0x2c];
                  break;
                case '\x03':
                  (*(code *)PTR_clone_00798fd0)();
                  break;
                case '\x04':
                  <serde_json[dc3825464c436029]::value::Value_as<[_]>::to_vec_in::ConvertVec>::
                  to_vec::<alloc[12e961f32105355]::alloc::Global>
                            (&uStack_368,puVar5[0x2c],puVar5[0x2d]);
                  break;
                case '\x05':
                  if (puVar5[0x2d] == 0) {
                    uStack_368 = 0;
                    uStack_358 = 0;
                  }
                  else {
                    if (puVar5[0x2b] == 0) {
                      (*(code *)PTR_unwrap_failed_00799278)();
LAB_00637644:
                    /* WARNING: Does not return */
                      pcVar6 = (code *)invalidInstructionException();
                      (*pcVar6)();
                    }
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<_,_,_>as_core[c0acaeba6ab4c2e0]::clone::Clone>
                    ::clone::clone_subtree::
                    <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>
                              (&uStack_368,puVar5[0x2b],puVar5[0x2c]);
                  }
                }
                lVar30 = uStack_370;
                uStack_370 = CONCAT71(uStack_370._1_7_,cVar52);
                lVar27 = uStack_370;
                uStack_2d0 = uStack_360;
                uStack_2c8 = uStack_358;
                uStack_370._1_1_ = SUB81(lVar30,1);
                uStack_2df = uStack_370._1_1_;
                uStack_370._2_4_ = SUB84(lVar30,2);
                uStack_2de = uStack_370._2_4_;
                uStack_370._6_2_ = SUB82(lVar30,6);
                uStack_2da = uStack_370._6_2_;
                uStack_2d8 = uStack_368;
                uStack_370 = lVar27;
                cStack_2e0 = cVar52;
                if (puVar5[0x26] == -1) goto LAB_006371f7;
LAB_006372ee:
                lVar42 = lStack_270;
                (*(code *)PTR_clone_00798fd0)();
                uStack_180 = uStack_368;
                uStack_178 = uStack_360;
              }
              uVar3 = *(undefined4 *)(puVar5 + 0x29);
              uVar4 = *(undefined4 *)((longlong)puVar5 + 0x14c);
              *puVar32 = uStack_1e8;
              puVar32[1] = uStack_1f0;
              puVar32[4] = uStack_1c8;
              puVar32[2] = uStack_1d8;
              puVar32[3] = uStack_1d0;
              puVar32[5] = lStack_328;
              puVar32[6] = uStack_278;
              puVar32[7] = uStack_1f8;
              puVar32[8] = lStack_300;
              puVar32[9] = uStack_280;
              puVar32[10] = uStack_200;
              puVar32[0xb] = lStack_330;
              puVar32[0xc] = uStack_288;
              puVar32[0xd] = uStack_208;
              puVar32[0xe] = lStack_308;
              puVar32[0xf] = uStack_290;
              puVar32[0x10] = uStack_210;
              puVar32[0x11] = lStack_338;
              puVar32[0x12] = uStack_298;
              puVar32[0x13] = uStack_218;
              puVar32[0x14] = lStack_310;
              puVar32[0x15] = uStack_2a0;
              puVar32[0x16] = uStack_220;
              puVar32[0x17] = lStack_340;
              puVar32[0x18] = uStack_2a8;
              puVar32[0x19] = uStack_228;
              puVar32[0x1a] = lStack_318;
              puVar32[0x1b] = uStack_2b0;
              puVar32[0x1c] = uStack_230;
              puVar32[0x1d] = lStack_348;
              puVar32[0x1e] = uStack_2b8;
              puVar32[0x1f] = uStack_238;
              puVar32[0x20] = lStack_320;
              puVar32[0x21] = uStack_2c0;
              puVar32[0x22] = uStack_240;
              puVar32[0x25] = uStack_250;
              puVar32[0x23] = lStack_260;
              puVar32[0x24] = uStack_258;
              puVar32[0x26] = uStack_370;
              puVar32[0x27] = uStack_180;
              puVar32[0x28] = uStack_178;
              *(undefined4 *)(puVar32 + 0x29) = uVar3;
              *(undefined4 *)((longlong)puVar32 + 0x14c) = uVar4;
              puVar32[0x2a] =
                   CONCAT26(uStack_2da,CONCAT42(uStack_2de,CONCAT11(uStack_2df,cStack_2e0)));
              puVar32[0x2b] = uStack_2d8;
              puVar32[0x2c] = uStack_2d0;
              puVar32[0x2d] = uStack_2c8;
              *(undefined2 *)(puVar32 + 0x2e) = uVar23;
              *(undefined2 *)((longlong)puVar32 + 0x172) = uStack_34a;
              *(undefined1 *)((longlong)puVar32 + 0x174) = uStack_34e;
              *(undefined1 *)((longlong)puVar32 + 0x175) = uStack_34f;
              *(undefined1 *)((longlong)puVar32 + 0x176) = uStack_350;
              lVar34 = lStack_1e0;
LAB_006375d0:
              *(undefined2 *)((longlong)plVar38 + 0x37) = uStack_34c;
              *(longlong **)((longlong)plVar38 + -1) = plVar35;
              *(longlong *)((longlong)plVar38 + 7) = lStack_2e8;
              *(longlong **)((longlong)plVar38 + 0xf) = plStack_268;
              *(longlong *)((longlong)plVar38 + 0x17) = lVar42;
              *(longlong *)((longlong)plVar38 + 0x1f) = lStack_2f8;
              *(longlong *)((longlong)plVar38 + 0x27) = lVar34;
              *(undefined1 *)((longlong)plVar38 + 0x3a) = uStack_34d;
              *(undefined1 *)((longlong)plVar38 + 0x39) = plStack_2f0._0_1_;
              *(undefined8 **)((longlong)plVar38 + 0x2f) = puVar32;
              return (ulonglong)plStack_2f0 & 0xff;
            }
            bVar2 = (param_1 + -1)[(longlong)plVar38];
            plVar33 = (longlong *)(ulonglong)bVar2;
            plVar38 = plVar37;
          } while (bVar2 == bVar22);
          if (param_4 < (longlong *)((longlong)param_2 + 0xf)) {
LAB_00636440:
            do {
              puVar29 = (undefined *)(*(code *)PTR_bcmp_00799020)();
              if ((int)puVar29 == 0) goto LAB_00636a04;
              param_4 = (longlong *)((longlong)param_4 + -1);
              puVar29 = (undefined *)0x0;
            } while (param_2 <= param_4);
            goto LAB_00636a06;
          }
          auVar45 = pshuflw(ZEXT216(CONCAT11(bVar22,bVar22)),ZEXT216(CONCAT11(bVar22,bVar22)),0);
          auVar53._0_8_ = auVar45._0_8_;
          auVar53._8_4_ = auVar45._0_4_;
          auVar53._12_4_ = auVar45._4_4_;
        }
        local_c8 = (undefined1 *)((longlong)param_2 + -1);
        auVar45 = pshuflw(ZEXT216(CONCAT11(bVar2,bVar2)),ZEXT216(CONCAT11(bVar2,bVar2)),0);
        local_d0 = param_1 + 1;
        cVar69 = auVar45[0];
        cVar70 = auVar45[1];
        cVar71 = auVar45[2];
        cVar72 = auVar45[3];
        cVar73 = auVar45[4];
        cVar74 = auVar45[5];
        cVar75 = auVar45[6];
        cVar76 = auVar45[7];
        cVar52 = auVar53[0];
        cVar54 = auVar53[1];
        cVar55 = auVar53[2];
        cVar56 = auVar53[3];
        cVar57 = auVar53[4];
        cVar58 = auVar53[5];
        cVar59 = auVar53[6];
        cVar60 = auVar53[7];
        cVar61 = auVar53[8];
        cVar62 = auVar53[9];
        cVar63 = auVar53[10];
        cVar64 = auVar53[0xb];
        cVar65 = auVar53[0xc];
        cVar66 = auVar53[0xd];
        cVar67 = auVar53[0xe];
        cVar68 = auVar53[0xf];
        local_d8 = param_4;
        local_e0 = param_3;
        local_50 = local_c8;
        if ((longlong *)((longlong)param_2 + 0x3f) < param_4) {
          lVar30 = 0;
          do {
            pcVar43 = (char *)(param_3 + lVar30);
            pcVar1 = (char *)(param_3 + 0x10 + lVar30);
            local_138 = *pcVar1;
            cStack_137 = pcVar1[1];
            cStack_136 = pcVar1[2];
            uVar20 = *(undefined3 *)pcVar1;
            cVar21 = pcVar1[3];
            cVar8 = pcVar1[4];
            cVar9 = pcVar1[5];
            cVar10 = pcVar1[6];
            cVar11 = pcVar1[7];
            cVar12 = pcVar1[8];
            cVar13 = pcVar1[9];
            cVar14 = pcVar1[10];
            cVar15 = pcVar1[0xb];
            cVar16 = pcVar1[0xc];
            cVar17 = pcVar1[0xd];
            cVar18 = pcVar1[0xe];
            cVar19 = pcVar1[0xf];
            auVar45 = *(undefined1 (*) [16])(param_3 + 0x20 + lVar30);
            auVar53 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar30);
            auVar46[0] = -(*pcVar43 == cVar52);
            auVar46[1] = -(pcVar43[1] == cVar54);
            auVar46[2] = -(pcVar43[2] == cVar55);
            auVar46[3] = -(pcVar43[3] == cVar56);
            auVar46[4] = -(pcVar43[4] == cVar57);
            auVar46[5] = -(pcVar43[5] == cVar58);
            auVar46[6] = -(pcVar43[6] == cVar59);
            auVar46[7] = -(pcVar43[7] == cVar60);
            auVar46[8] = -(pcVar43[8] == cVar61);
            auVar46[9] = -(pcVar43[9] == cVar62);
            auVar46[10] = -(pcVar43[10] == cVar63);
            auVar46[0xb] = -(pcVar43[0xb] == cVar64);
            auVar46[0xc] = -(pcVar43[0xc] == cVar65);
            auVar46[0xd] = -(pcVar43[0xd] == cVar66);
            auVar46[0xe] = -(pcVar43[0xe] == cVar67);
            auVar46[0xf] = -(pcVar43[0xf] == cVar68);
            pcVar43 = (char *)((longlong)plVar37 + lVar30 + param_3);
            pcVar1 = (char *)((longlong)plVar37 + lVar30 + param_3 + 0x10);
            auVar77 = *(undefined1 (*) [16])((longlong)plVar37 + lVar30 + param_3 + 0x20);
            auVar47 = *(undefined1 (*) [16])((longlong)plVar37 + lVar30 + param_3 + 0x30);
            auVar49[0] = -(*pcVar43 == cVar69);
            auVar49[1] = -(pcVar43[1] == cVar70);
            auVar49[2] = -(pcVar43[2] == cVar71);
            auVar49[3] = -(pcVar43[3] == cVar72);
            auVar49[4] = -(pcVar43[4] == cVar73);
            auVar49[5] = -(pcVar43[5] == cVar74);
            auVar49[6] = -(pcVar43[6] == cVar75);
            auVar49[7] = -(pcVar43[7] == cVar76);
            auVar49[8] = -(pcVar43[8] == cVar69);
            auVar49[9] = -(pcVar43[9] == cVar70);
            auVar49[10] = -(pcVar43[10] == cVar71);
            auVar49[0xb] = -(pcVar43[0xb] == cVar72);
            auVar49[0xc] = -(pcVar43[0xc] == cVar73);
            auVar49[0xd] = -(pcVar43[0xd] == cVar74);
            auVar49[0xe] = -(pcVar43[0xe] == cVar75);
            auVar49[0xf] = -(pcVar43[0xf] == cVar76);
            auVar49 = auVar49 & auVar46;
            uVar7 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar49[0xf] >> 7) << 0xf;
            if (uVar7 == 0) {
              puVar29 = (undefined *)0x0;
              cVar81 = *pcVar1;
              cVar83 = pcVar1[1];
              cVar84 = pcVar1[2];
              cVar85 = pcVar1[3];
              cVar86 = pcVar1[4];
              cVar87 = pcVar1[5];
              cVar88 = pcVar1[6];
              cVar89 = pcVar1[7];
              cVar90 = pcVar1[8];
              cVar91 = pcVar1[9];
              cVar92 = pcVar1[10];
              cVar93 = pcVar1[0xb];
              cVar94 = pcVar1[0xc];
              cVar95 = pcVar1[0xd];
              cVar96 = pcVar1[0xe];
              cVar97 = pcVar1[0xf];
            }
            else {
              local_78 = auVar77;
              local_68 = auVar45;
              local_48 = *pcVar1;
              cStack_47 = pcVar1[1];
              cStack_46 = pcVar1[2];
              cStack_45 = pcVar1[3];
              cStack_44 = pcVar1[4];
              cStack_43 = pcVar1[5];
              cStack_42 = pcVar1[6];
              cStack_41 = pcVar1[7];
              cStack_40 = pcVar1[8];
              cStack_3f = pcVar1[9];
              cStack_3e = pcVar1[10];
              cStack_3d = pcVar1[0xb];
              cStack_3c = pcVar1[0xc];
              cStack_3b = pcVar1[0xd];
              cStack_3a = pcVar1[0xe];
              cStack_39 = pcVar1[0xf];
              puVar29 = (undefined *)
                        core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                  (&local_e0,lVar30,uVar7,0);
              local_138 = (char)uVar20;
              cStack_137 = (char)((uint3)uVar20 >> 8);
              cStack_136 = (char)((uint3)uVar20 >> 0x10);
              auVar45 = local_68;
              auVar77 = local_78;
              cVar81 = local_48;
              cVar83 = cStack_47;
              cVar84 = cStack_46;
              cVar85 = cStack_45;
              cVar86 = cStack_44;
              cVar87 = cStack_43;
              cVar88 = cStack_42;
              cVar89 = cStack_41;
              cVar90 = cStack_40;
              cVar91 = cStack_3f;
              cVar92 = cStack_3e;
              cVar93 = cStack_3d;
              cVar94 = cStack_3c;
              cVar95 = cStack_3b;
              cVar96 = cStack_3a;
              cVar97 = cStack_39;
            }
            auVar80[0] = -(local_138 == cVar52);
            auVar80[1] = -(cStack_137 == cVar54);
            auVar80[2] = -(cStack_136 == cVar55);
            auVar80[3] = -(cVar21 == cVar56);
            auVar80[4] = -(cVar8 == cVar57);
            auVar80[5] = -(cVar9 == cVar58);
            auVar80[6] = -(cVar10 == cVar59);
            auVar80[7] = -(cVar11 == cVar60);
            auVar80[8] = -(cVar12 == cVar61);
            auVar80[9] = -(cVar13 == cVar62);
            auVar80[10] = -(cVar14 == cVar63);
            auVar80[0xb] = -(cVar15 == cVar64);
            auVar80[0xc] = -(cVar16 == cVar65);
            auVar80[0xd] = -(cVar17 == cVar66);
            auVar80[0xe] = -(cVar18 == cVar67);
            auVar80[0xf] = -(cVar19 == cVar68);
            auVar82[0] = -(cVar81 == cVar69);
            auVar82[1] = -(cVar83 == cVar70);
            auVar82[2] = -(cVar84 == cVar71);
            auVar82[3] = -(cVar85 == cVar72);
            auVar82[4] = -(cVar86 == cVar73);
            auVar82[5] = -(cVar87 == cVar74);
            auVar82[6] = -(cVar88 == cVar75);
            auVar82[7] = -(cVar89 == cVar76);
            auVar82[8] = -(cVar90 == cVar69);
            auVar82[9] = -(cVar91 == cVar70);
            auVar82[10] = -(cVar92 == cVar71);
            auVar82[0xb] = -(cVar93 == cVar72);
            auVar82[0xc] = -(cVar94 == cVar73);
            auVar82[0xd] = -(cVar95 == cVar74);
            auVar82[0xe] = -(cVar96 == cVar75);
            auVar82[0xf] = -(cVar97 == cVar76);
            auVar82 = auVar82 & auVar80;
            uVar7 = (ushort)(SUB161(auVar82 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar82[0xf] >> 7) << 0xf;
            if (uVar7 != 0) {
              local_78 = auVar77;
              local_68 = auVar45;
              bVar22 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar30 + 0x10,uVar7,(ulonglong)puVar29 & 0xff);
              puVar29 = (undefined *)(ulonglong)(byte)((byte)puVar29 | bVar22);
              auVar45 = local_68;
              auVar77 = local_78;
            }
            auVar79[0] = -(auVar45[0] == cVar52);
            auVar79[1] = -(auVar45[1] == cVar54);
            auVar79[2] = -(auVar45[2] == cVar55);
            auVar79[3] = -(auVar45[3] == cVar56);
            auVar79[4] = -(auVar45[4] == cVar57);
            auVar79[5] = -(auVar45[5] == cVar58);
            auVar79[6] = -(auVar45[6] == cVar59);
            auVar79[7] = -(auVar45[7] == cVar60);
            auVar79[8] = -(auVar45[8] == cVar61);
            auVar79[9] = -(auVar45[9] == cVar62);
            auVar79[10] = -(auVar45[10] == cVar63);
            auVar79[0xb] = -(auVar45[0xb] == cVar64);
            auVar79[0xc] = -(auVar45[0xc] == cVar65);
            auVar79[0xd] = -(auVar45[0xd] == cVar66);
            auVar79[0xe] = -(auVar45[0xe] == cVar67);
            auVar79[0xf] = -(auVar45[0xf] == cVar68);
            auVar45[0] = -(auVar77[0] == cVar69);
            auVar45[1] = -(auVar77[1] == cVar70);
            auVar45[2] = -(auVar77[2] == cVar71);
            auVar45[3] = -(auVar77[3] == cVar72);
            auVar45[4] = -(auVar77[4] == cVar73);
            auVar45[5] = -(auVar77[5] == cVar74);
            auVar45[6] = -(auVar77[6] == cVar75);
            auVar45[7] = -(auVar77[7] == cVar76);
            auVar45[8] = -(auVar77[8] == cVar69);
            auVar45[9] = -(auVar77[9] == cVar70);
            auVar45[10] = -(auVar77[10] == cVar71);
            auVar45[0xb] = -(auVar77[0xb] == cVar72);
            auVar45[0xc] = -(auVar77[0xc] == cVar73);
            auVar45[0xd] = -(auVar77[0xd] == cVar74);
            auVar45[0xe] = -(auVar77[0xe] == cVar75);
            auVar45[0xf] = -(auVar77[0xf] == cVar76);
            auVar45 = auVar45 & auVar79;
            uVar7 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar45[0xf] >> 7) << 0xf;
            if (uVar7 != 0) {
              bVar22 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar30 + 0x20,uVar7,(ulonglong)puVar29 & 0xff);
              puVar29 = (undefined *)(ulonglong)(byte)((byte)puVar29 | bVar22);
            }
            auVar77[0] = -(auVar53[0] == cVar52);
            auVar77[1] = -(auVar53[1] == cVar54);
            auVar77[2] = -(auVar53[2] == cVar55);
            auVar77[3] = -(auVar53[3] == cVar56);
            auVar77[4] = -(auVar53[4] == cVar57);
            auVar77[5] = -(auVar53[5] == cVar58);
            auVar77[6] = -(auVar53[6] == cVar59);
            auVar77[7] = -(auVar53[7] == cVar60);
            auVar77[8] = -(auVar53[8] == cVar61);
            auVar77[9] = -(auVar53[9] == cVar62);
            auVar77[10] = -(auVar53[10] == cVar63);
            auVar77[0xb] = -(auVar53[0xb] == cVar64);
            auVar77[0xc] = -(auVar53[0xc] == cVar65);
            auVar77[0xd] = -(auVar53[0xd] == cVar66);
            auVar77[0xe] = -(auVar53[0xe] == cVar67);
            auVar77[0xf] = -(auVar53[0xf] == cVar68);
            auVar78[0] = -(auVar47[0] == cVar69);
            auVar78[1] = -(auVar47[1] == cVar70);
            auVar78[2] = -(auVar47[2] == cVar71);
            auVar78[3] = -(auVar47[3] == cVar72);
            auVar78[4] = -(auVar47[4] == cVar73);
            auVar78[5] = -(auVar47[5] == cVar74);
            auVar78[6] = -(auVar47[6] == cVar75);
            auVar78[7] = -(auVar47[7] == cVar76);
            auVar78[8] = -(auVar47[8] == cVar69);
            auVar78[9] = -(auVar47[9] == cVar70);
            auVar78[10] = -(auVar47[10] == cVar71);
            auVar78[0xb] = -(auVar47[0xb] == cVar72);
            auVar78[0xc] = -(auVar47[0xc] == cVar73);
            auVar78[0xd] = -(auVar47[0xd] == cVar74);
            auVar78[0xe] = -(auVar47[0xe] == cVar75);
            auVar78[0xf] = -(auVar47[0xf] == cVar76);
            auVar78 = auVar78 & auVar77;
            uVar7 = (ushort)(SUB161(auVar78 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar78 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar78 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar78 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar78 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar78 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar78 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar78 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar78 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar78 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar78 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar78 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar78 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar78 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar78 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar78[0xf] >> 7) << 0xf;
            if (uVar7 != 0) {
              bVar22 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                 (&local_e0,lVar30 + 0x30,uVar7,(ulonglong)puVar29 & 0xff);
              puVar29 = (undefined *)(ulonglong)(byte)((byte)puVar29 | bVar22);
            }
            lVar27 = lVar30 + 0x40;
            if (param_4 <= (longlong *)((longlong)param_2 + lVar30 + 0x7f)) break;
            lVar27 = lVar30 + 0x40;
            lVar30 = lVar27;
          } while ((char)puVar29 == '\0');
        }
        else {
          lVar27 = 0;
          puVar29 = (undefined *)0x0;
        }
        if ((longlong *)((longlong)param_2 + lVar27 + 0xf) < param_4) {
          cVar21 = (char)puVar29;
          while (cVar21 == '\0') {
            pcVar43 = (char *)(param_3 + lVar27);
            pcVar1 = (char *)((longlong)plVar37 + lVar27 + param_3);
            auVar47[0] = -(*pcVar43 == cVar52);
            auVar47[1] = -(pcVar43[1] == cVar54);
            auVar47[2] = -(pcVar43[2] == cVar55);
            auVar47[3] = -(pcVar43[3] == cVar56);
            auVar47[4] = -(pcVar43[4] == cVar57);
            auVar47[5] = -(pcVar43[5] == cVar58);
            auVar47[6] = -(pcVar43[6] == cVar59);
            auVar47[7] = -(pcVar43[7] == cVar60);
            auVar47[8] = -(pcVar43[8] == cVar61);
            auVar47[9] = -(pcVar43[9] == cVar62);
            auVar47[10] = -(pcVar43[10] == cVar63);
            auVar47[0xb] = -(pcVar43[0xb] == cVar64);
            auVar47[0xc] = -(pcVar43[0xc] == cVar65);
            auVar47[0xd] = -(pcVar43[0xd] == cVar66);
            auVar47[0xe] = -(pcVar43[0xe] == cVar67);
            auVar47[0xf] = -(pcVar43[0xf] == cVar68);
            auVar50[0] = -(*pcVar1 == cVar69);
            auVar50[1] = -(pcVar1[1] == cVar70);
            auVar50[2] = -(pcVar1[2] == cVar71);
            auVar50[3] = -(pcVar1[3] == cVar72);
            auVar50[4] = -(pcVar1[4] == cVar73);
            auVar50[5] = -(pcVar1[5] == cVar74);
            auVar50[6] = -(pcVar1[6] == cVar75);
            auVar50[7] = -(pcVar1[7] == cVar76);
            auVar50[8] = -(pcVar1[8] == cVar69);
            auVar50[9] = -(pcVar1[9] == cVar70);
            auVar50[10] = -(pcVar1[10] == cVar71);
            auVar50[0xb] = -(pcVar1[0xb] == cVar72);
            auVar50[0xc] = -(pcVar1[0xc] == cVar73);
            auVar50[0xd] = -(pcVar1[0xd] == cVar74);
            auVar50[0xe] = -(pcVar1[0xe] == cVar75);
            auVar50[0xf] = -(pcVar1[0xf] == cVar76);
            auVar50 = auVar50 & auVar47;
            uVar7 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
            if (uVar7 == 0) {
              puVar29 = (undefined *)0x0;
            }
            else {
              puVar29 = (undefined *)
                        core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                                  (&local_e0,lVar27,uVar7,0);
            }
            if (param_4 <= (longlong *)((longlong)param_2 + lVar27 + 0x1f)) break;
            lVar27 = lVar27 + 0x10;
            cVar21 = (char)puVar29;
          }
        }
        pcVar43 = (char *)((longlong)param_4 + ((param_3 + -0x10) - (longlong)local_50));
        pcVar1 = (char *)((longlong)plVar37 +
                         (longlong)((longlong)param_4 + (param_3 - (longlong)local_50) + -0x10));
        auVar48[0] = -(*pcVar43 == cVar52);
        auVar48[1] = -(pcVar43[1] == cVar54);
        auVar48[2] = -(pcVar43[2] == cVar55);
        auVar48[3] = -(pcVar43[3] == cVar56);
        auVar48[4] = -(pcVar43[4] == cVar57);
        auVar48[5] = -(pcVar43[5] == cVar58);
        auVar48[6] = -(pcVar43[6] == cVar59);
        auVar48[7] = -(pcVar43[7] == cVar60);
        auVar48[8] = -(pcVar43[8] == cVar61);
        auVar48[9] = -(pcVar43[9] == cVar62);
        auVar48[10] = -(pcVar43[10] == cVar63);
        auVar48[0xb] = -(pcVar43[0xb] == cVar64);
        auVar48[0xc] = -(pcVar43[0xc] == cVar65);
        auVar48[0xd] = -(pcVar43[0xd] == cVar66);
        auVar48[0xe] = -(pcVar43[0xe] == cVar67);
        auVar48[0xf] = -(pcVar43[0xf] == cVar68);
        auVar51[0] = -(*pcVar1 == cVar69);
        auVar51[1] = -(pcVar1[1] == cVar70);
        auVar51[2] = -(pcVar1[2] == cVar71);
        auVar51[3] = -(pcVar1[3] == cVar72);
        auVar51[4] = -(pcVar1[4] == cVar73);
        auVar51[5] = -(pcVar1[5] == cVar74);
        auVar51[6] = -(pcVar1[6] == cVar75);
        auVar51[7] = -(pcVar1[7] == cVar76);
        auVar51[8] = -(pcVar1[8] == cVar69);
        auVar51[9] = -(pcVar1[9] == cVar70);
        auVar51[10] = -(pcVar1[10] == cVar71);
        auVar51[0xb] = -(pcVar1[0xb] == cVar72);
        auVar51[0xc] = -(pcVar1[0xc] == cVar73);
        auVar51[0xd] = -(pcVar1[0xd] == cVar74);
        auVar51[0xe] = -(pcVar1[0xe] == cVar75);
        auVar51[0xf] = -(pcVar1[0xf] == cVar76);
        auVar51 = auVar51 & auVar48;
        uVar7 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar51[0xf] >> 7) << 0xf;
        if (uVar7 != 0) {
          bVar22 = core[c0acaeba6ab4c2e0]::str::pattern::simd_contains::_closure_2_
                             (&local_e0,
                              (undefined1 *)((longlong)param_4 + (-0x10 - (longlong)local_50)),uVar7
                              ,(ulonglong)puVar29 & 0xff);
          puVar29 = (undefined *)(ulonglong)(byte)((byte)puVar29 | bVar22);
        }
        goto LAB_00636a06;
      }
LAB_00636469:
      uVar28 = (*(code *)PTR_new_00799a18)(param_1,param_4,param_2);
      if ((char)local_e0 == '\0') {
        if (local_c8._2_1_ == '\0') {
          puVar29 = (undefined *)((ulonglong)local_c8 & 0xff);
          if (local_d8 == (longlong *)0x0) {
LAB_00636a20:
            if (local_d8 == (longlong *)local_90) goto LAB_00636a06;
            bVar22 = local_98[(longlong)local_d8];
            uVar25 = (uint)bVar22;
            puVar36 = puVar29;
            if ((char)bVar22 < '\0') {
              uVar24 = bVar22 & 0x1f;
              uVar25 = (byte)(local_98 + 1)[(longlong)local_d8] & 0x3f;
              if (bVar22 < 0xe0) goto LAB_00636af2;
              uVar41 = (byte)(local_98 + 2)[(longlong)local_d8] & 0x3f | uVar25 << 6;
              if (bVar22 < 0xf0) {
                uVar28 = (ulonglong)(uVar24 << 0xc);
                uVar25 = uVar41 | uVar24 << 0xc;
              }
              else {
                uVar25 = (bVar22 & 7) << 0x12;
                uVar28 = (ulonglong)uVar25;
                uVar25 = (byte)(local_98 + 3)[(longlong)local_d8] & 0x3f | uVar41 << 6 | uVar25;
              }
            }
            goto LAB_00636b06;
          }
          if (local_d8 < local_90) {
            uVar44 = local_98[(longlong)local_d8] == -0x40;
            if (-0x41 < (char)local_98[(longlong)local_d8]) goto LAB_00636a20;
          }
          else {
            uVar44 = 0;
            if (local_d8 == (longlong *)local_90) goto LAB_00636a20;
          }
          goto LAB_00636b4e;
        }
      }
      else {
        puVar36 = local_80 + -1;
        if (local_a8 == (undefined *)0xffffffffffffffff) {
          puVar39 = local_b8 + (longlong)puVar36;
          if (puVar39 < local_90) {
            puVar40 = (undefined *)((longlong)local_d8 + -1);
            if (puVar40 < local_80) {
LAB_0063699d:
              if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar39] & 0x3f) & 1) == 0) {
                local_b8 = local_b8 + (longlong)local_80;
              }
              else {
                lVar27 = -(longlong)local_b8;
                plVar35 = local_d8;
                do {
                  if ((longlong *)local_80 == plVar35) {
                    puVar29 = local_98 + -1 + (longlong)local_b8;
                    plVar35 = local_d8;
                    goto LAB_006369ea;
                  }
                  pcVar43 = (char *)((longlong)plVar35 + local_88);
                  lVar27 = lVar27 + -1;
                  pcVar1 = local_98 + (longlong)local_b8 + (longlong)plVar35;
                  plVar35 = (longlong *)((longlong)plVar35 + 1);
                } while (*pcVar43 == *pcVar1);
                local_b8 = (undefined *)-lVar27;
              }
              goto LAB_00636992;
            }
            do {
              if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar39] & 0x3f) & 1) == 0) {
                local_b8 = local_b8 + (longlong)local_80;
              }
              else {
                lVar27 = 0;
                puVar29 = local_b8;
                pcVar43 = (char *)((longlong)local_d8 + local_88);
                do {
                  if (local_80 <= (undefined *)((longlong)local_d8 + lVar27)) {
                    puVar29 = (undefined *)CONCAT71((int7)((ulonglong)lVar27 >> 8),1);
                    local_b8 = (undefined *)local_d8;
                    if (local_d8 == (longlong *)0x0) goto LAB_00636a06;
                    goto LAB_00636ae5;
                  }
                  cVar52 = *pcVar43;
                  local_b8 = puVar29 + 1;
                  pcVar43 = pcVar43 + 1;
                  lVar27 = lVar27 + 1;
                  pcVar1 = local_98 + (longlong)local_d8 + (longlong)puVar29;
                  puVar29 = local_b8;
                } while (cVar52 == *pcVar1);
              }
              puVar39 = local_b8 + (longlong)puVar36;
              puVar29 = (undefined *)0x0;
            } while (puVar39 < local_90);
            goto LAB_00636a06;
          }
        }
        else {
          puVar39 = local_b8 + (longlong)puVar36;
          if (puVar39 < local_90) {
LAB_006364eb:
            if ((local_c0 >> ((ulonglong)(byte)local_98[(longlong)puVar39] & 0x3f) & 1) == 0) {
              local_b8 = local_b8 + (longlong)local_80;
            }
            else {
              plVar35 = local_d8;
              if (local_d8 < local_a8) {
                plVar35 = (longlong *)local_a8;
              }
              puVar29 = local_98 + (longlong)local_b8;
              do {
                plVar33 = local_d8;
                if (local_80 <= plVar35) goto LAB_00636550;
                puVar39 = (undefined *)((longlong)plVar35 + 1);
                pcVar43 = (char *)((longlong)plVar35 + local_88);
                pcVar1 = puVar29 + (longlong)plVar35;
                plVar35 = (longlong *)puVar39;
              } while (*pcVar43 == *pcVar1);
              local_b8 = puVar39 + ((longlong)local_b8 - (longlong)local_d8);
            }
            local_a8 = (undefined *)0x0;
            goto LAB_00636534;
          }
        }
      }
    }
  }
  else if (param_2 == param_4) {
    uVar26 = (*(code *)PTR_bcmp_00799020)(param_4,param_2);
    puVar29 = (undefined *)CONCAT71((int7)((ulonglong)uVar26 >> 8),(int)uVar26 == 0);
    goto LAB_00636a06;
  }
  puVar29 = (undefined *)0x0;
LAB_00636a06:
  return (ulonglong)puVar29 & 0xffffffffffffff01;
  while (pcVar1 = (char *)((longlong)plVar35 + local_88 + -1), pcVar43 = puVar29 + (longlong)plVar35
        , plVar35 = (longlong *)((longlong)plVar35 + -1), *pcVar1 == *pcVar43) {
LAB_006369ea:
    if (plVar35 == (longlong *)0x0) goto LAB_00636a04;
  }
  local_b8 = local_b8 + (longlong)local_c8;
LAB_00636992:
  puVar39 = local_b8 + (longlong)puVar36;
  puVar29 = (undefined *)0x0;
  if (local_90 <= puVar39) goto LAB_00636a06;
  goto LAB_0063699d;
  while( true ) {
    if (local_80 <= puVar40) goto LAB_00636ae5;
    plVar33 = (longlong *)puVar40;
    if (puVar40[local_88] != puVar29[(longlong)puVar40]) break;
LAB_00636550:
    puVar40 = (undefined *)((longlong)plVar33 + -1);
    if (plVar33 <= local_a8) goto LAB_00636a04;
  }
  local_b8 = local_b8 + (longlong)local_c8;
  local_a8 = local_80 + -(longlong)local_c8;
LAB_00636534:
  puVar39 = local_b8 + (longlong)puVar36;
  puVar29 = (undefined *)0x0;
  if (local_90 <= puVar39) goto LAB_00636a06;
  goto LAB_006364eb;
LAB_00636ae5:
  uVar25 = (uint)local_b8;
  puVar29 = &DAT_0078eaf0;
  uVar24 = (*(code *)PTR_panic_bounds_check_00799520)();
  local_90 = local_98;
  local_d8 = (longlong *)puVar29;
  puVar29 = local_80;
  local_98 = puVar40;
LAB_00636af2:
  uVar25 = uVar24 << 6 | uVar25;
  uVar28 = (ulonglong)uVar25;
  puVar36 = puVar29;
LAB_00636b06:
  puVar29 = (undefined *)CONCAT71((int7)(uVar28 >> 8),1);
  if (((ulonglong)puVar36 & 1) != 0) goto LAB_00636a06;
  lVar27 = 1;
  if ((0x7f < uVar25) && (lVar27 = 2, 0x7ff < uVar25)) {
    lVar27 = 4 - (ulonglong)(uVar25 < 0x10000);
  }
  puVar36 = (undefined *)((longlong)local_d8 + lVar27);
  if (puVar36 == (undefined *)0x0) goto LAB_00636a06;
  uVar44 = puVar36 == local_90;
  if (local_90 <= puVar36) goto LAB_00636b5e;
  uVar44 = local_98[(longlong)puVar36] == -0x40;
  if (-0x41 < (char)local_98[(longlong)puVar36]) goto LAB_00636a06;
LAB_00636b4e:
  do {
    puVar29 = (undefined *)(*(code *)PTR_slice_error_fail_00799408)();
LAB_00636b5e:
  } while (!(bool)uVar44);
  goto LAB_00636a06;
}


