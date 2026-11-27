// 007093b0 build

/* <tokio[d7d91d38da47d894]::runtime::builder::Builder>::build */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::builder::Builder>::build(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  longlong *in_FS_OFFSET;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong *local_3c0;
  undefined8 uStack_3b8;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  longlong *local_380;
  undefined1 local_378 [16];
  longlong *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined1 local_238;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined2 local_b0;
  byte local_ae;
  undefined1 local_ad;
  
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    if (param_2[4] == 1) {
      lVar14 = *(longlong *)(param_2 + 6);
      local_ae = 0;
    }
    else {
      lVar14 = tokio[d7d91d38da47d894]::loom::std::sys::num_cpus();
      local_ae = *(byte *)(param_2 + 0x3d) ^ 1;
    }
    local_b0 = *(undefined2 *)((longlong)param_2 + 0xf5);
    local_ad = *(undefined1 *)((longlong)param_2 + 0xf7);
    local_b8 = *(undefined8 *)(param_2 + 0x1c);
    local_c8 = *param_2;
    uStack_c4 = param_2[1];
    uStack_c0 = param_2[2];
    uStack_bc = param_2[3];
    uVar17 = <tokio[d7d91d38da47d894]::runtime::driver::Driver>::new(&local_1b8,&local_c8);
    uStack_348 = uStack_1b0;
    local_350 = local_1b8;
    puVar10 = PTR_memcpy_00799008;
    if (local_1b8 != (undefined **)0xffffffffffffffff) {
      (*(code *)PTR_memcpy_00799008)(uVar17,0xe0);
      local_300 = CONCAT44(uStack_254,local_258);
      local_310 = local_268;
      uStack_30c = uStack_264;
      uStack_308 = uStack_260;
      uStack_304 = uStack_25c;
      local_320 = local_278;
      uStack_31c = uStack_274;
      uStack_318 = uStack_270;
      uStack_314 = uStack_26c;
      local_330 = (undefined4)local_288;
      uStack_32c = local_288._4_4_;
      uStack_328 = uStack_280;
      uStack_324 = uStack_27c;
      local_340 = (undefined4)local_298;
      uStack_33c = local_298._4_4_;
      uStack_338 = (undefined4)uStack_290;
      uStack_334 = uStack_290._4_4_;
      (*(code *)puVar10)((undefined4)local_298,0x98);
      local_378 = <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::new
                            (param_2,*(longlong *)(param_2 + 0x1e) + lVar14,lVar14);
      uVar13 = local_378._8_8_;
      plVar15 = local_378._0_8_;
      LOCK();
      lVar1 = *plVar15;
      *plVar15 = *plVar15 + 1;
      UNLOCK();
      local_378._8_8_ = uVar13;
      auVar6 = local_378;
      if (*plVar15 != 0 && SCARRY8(lVar1,1) == *plVar15 < 0) {
        local_3a0 = uVar13;
        local_398 = plVar15;
        uVar12 = (*(code *)PTR_next_seed_007996b0)();
        uVar16 = (undefined4)uVar13;
        uVar17 = uVar16;
        local_388 = (*(code *)PTR_next_seed_007996b0)();
        local_390 = 0;
        local_2a8 = local_300;
        local_2b8 = CONCAT44(uStack_30c,local_310);
        uStack_2b0 = CONCAT44(uStack_304,uStack_308);
        local_2c8 = local_320;
        uStack_2c4 = uStack_31c;
        uStack_2c0 = uStack_318;
        uStack_2bc = uStack_314;
        local_2d8 = local_330;
        uStack_2d4 = uStack_32c;
        uStack_2d0 = uStack_328;
        uStack_2cc = uStack_324;
        local_2e8 = CONCAT44(uStack_33c,local_340);
        uStack_2e0 = uStack_338;
        uStack_2dc = uStack_334;
        local_2f8 = (undefined4)local_350;
        uStack_2f4 = local_350._4_4_;
        uStack_2f0 = (undefined4)uStack_348;
        uStack_2ec = uStack_348._4_4_;
        local_384 = uVar17;
        (*(code *)PTR_memcpy_00799008)((undefined4)local_350,0x98);
        auVar9._8_8_ = local_3a0;
        auVar9._0_8_ = local_378._0_8_;
        auVar8._8_8_ = local_3a0;
        auVar8._0_8_ = local_378._0_8_;
        auVar7._8_8_ = local_3a0;
        auVar7._0_8_ = local_378._0_8_;
        auVar6._8_8_ = local_3a0;
        auVar6._0_8_ = local_378._0_8_;
        plVar3 = *(longlong **)(param_2 + 0x28);
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar17 = 0;
        uVar22 = 0;
        uVar23 = 0;
        uVar24 = 0;
        local_380 = plVar15;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          lVar1 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_007099d2;
          uVar17 = param_2[0x28];
          uVar22 = param_2[0x29];
          uVar23 = param_2[0x2a];
          uVar24 = param_2[0x2b];
        }
        plVar3 = *(longlong **)(param_2 + 0x2c);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          lVar1 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          auVar6 = auVar7;
          if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_007099d2;
          uVar18 = param_2[0x2c];
          uVar19 = param_2[0x2d];
          uVar20 = param_2[0x2e];
          uVar21 = param_2[0x2f];
        }
        plVar3 = *(longlong **)(param_2 + 0x30);
        uVar25 = 0;
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          lVar1 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          auVar6 = auVar8;
          if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_007099d2;
          uVar29 = param_2[0x30];
          uVar30 = param_2[0x31];
          uVar31 = param_2[0x32];
          uVar32 = param_2[0x33];
        }
        plVar3 = *(longlong **)(param_2 + 0x34);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          lVar1 = *plVar3;
          *plVar3 = *plVar3 + 1;
          UNLOCK();
          auVar6 = auVar9;
          if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_007099d2;
          uVar25 = param_2[0x34];
          uVar26 = param_2[0x35];
          uVar27 = param_2[0x36];
          uVar28 = param_2[0x37];
        }
        local_240 = param_2[0x3c];
        local_238 = *(undefined1 *)(param_2 + 0x3f);
        local_298 = *(undefined ***)(param_2 + 0x12);
        uStack_290 = (code *)CONCAT44(uVar22,uVar17);
        local_288 = CONCAT44(uVar24,uVar23);
        local_250 = 0;
        local_23c = param_2[0x3e];
        uStack_280 = uVar18;
        uStack_27c = uVar19;
        local_278 = uVar20;
        uStack_274 = uVar21;
        uStack_270 = uVar29;
        uStack_26c = uVar30;
        local_268 = uVar31;
        uStack_264 = uVar32;
        uStack_260 = uVar25;
        uStack_25c = uVar26;
        local_258 = uVar27;
        uStack_254 = uVar28;
        local_248 = uVar12;
        local_244 = uVar16;
        if (*(longlong *)(param_2 + 0xc) == -1) {
          local_368 = (longlong *)0xffffffffffffffff;
        }
        else {
          (*(code *)PTR_clone_00798fd0)();
          local_368 = local_3c0;
          uStack_360 = (undefined4)uStack_3b8;
          uStack_35c = uStack_3b8._4_4_;
        }
        <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::new
                  (&local_3c0,lVar14,&local_2f8,&local_1b8,plVar15,&local_390,&local_298,&local_368)
        ;
        plVar11 = local_3c0;
        local_2e8 = local_3a8;
        local_2f8 = (undefined4)uStack_3b8;
        uStack_2f4 = uStack_3b8._4_4_;
        uStack_2f0 = local_3b0;
        uStack_2ec = uStack_3ac;
        local_3c0 = (longlong *)0x1;
        uStack_3b8 = plVar11;
        lVar14 = *in_FS_OFFSET;
        plVar3 = (longlong *)(lVar14 + -0x138);
        cVar2 = *(char *)(lVar14 + -0xf0);
        if (cVar2 == '\0') {
          lVar1 = *plVar3;
        }
        else {
          if (cVar2 != '\x01') {
            local_1b8 = &anon_1c7207ea9655bfcf55d918eab6d9918c_24_llvm_17559541839288726608;
            uStack_1b0 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            (*(code *)PTR_panic_fmt_007991a8)
                      (cVar2,&anon_1c7207ea9655bfcf55d918eab6d9918c_27_llvm_17559541839288726608);
            auVar6._8_8_ = local_3a0;
            auVar6._0_8_ = local_378._0_8_;
            goto LAB_007099d2;
          }
          (*(code *)PTR_register_00799240)();
          *(undefined1 *)(lVar14 + -0xf0) = 0;
          lVar1 = *plVar3;
        }
        auVar6._8_8_ = local_3a0;
        auVar6._0_8_ = local_378._0_8_;
        if (lVar1 == 0) {
          *plVar3 = -1;
          LOCK();
          lVar1 = *plVar11;
          *plVar11 = *plVar11 + 1;
          UNLOCK();
          if (*plVar11 != 0 && SCARRY8(lVar1,1) == *plVar11 < 0) {
            ppuVar4 = *(undefined ***)(lVar14 + -0x130);
            pcVar5 = *(code **)(lVar14 + -0x128);
            *(undefined8 *)(lVar14 + -0x130) = 1;
            *(longlong **)(lVar14 + -0x128) = plVar11;
            *plVar3 = *plVar3 + 1;
            if (*(longlong *)(lVar14 + -0x120) != -1) {
              local_288 = *(longlong *)(lVar14 + -0x120) + 1;
              *(longlong *)(lVar14 + -0x120) = local_288;
              local_1b8 = (undefined **)CONCAT44(uStack_2f4,local_2f8);
              uStack_1b0 = (code *)CONCAT44(uStack_2ec,uStack_2f0);
              local_298 = ppuVar4;
              uStack_290 = pcVar5;
              local_1a8 = local_2e8;
              <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch
                        (&local_1b8);
              *param_1 = 1;
              param_1[6] = 1;
              param_1[7] = plVar11;
              param_1[8] = plVar15;
              param_1[9] = local_3a0;
              <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
              ::with::
              <<tokio[d7d91d38da47d894]::runtime::context::current::SetCurrentGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,()>
                        ();
              if (local_298 == (undefined **)0x2) {
                return param_1;
              }
              if (local_298 == (undefined **)0x0) {
                LOCK();
                *(longlong *)uStack_290 = *(longlong *)uStack_290 + -1;
                UNLOCK();
                if (*(longlong *)uStack_290 == 0) {
                  (*(code *)PTR_drop_slow_00799078)();
                  return param_1;
                }
                return param_1;
              }
              LOCK();
              *(longlong *)uStack_290 = *(longlong *)uStack_290 + -1;
              UNLOCK();
              if (*(longlong *)uStack_290 == 0) {
                (*(code *)PTR_drop_slow_00799070)();
                return param_1;
              }
              return param_1;
            }
            local_1b8 = ppuVar4;
            uStack_1b0 = pcVar5;
            (*(code *)PTR_panic_fmt_007991a8)
                      (ppuVar4,&anon_1c7207ea9655bfcf55d918eab6d9918c_39_llvm_17559541839288726608);
            auVar6._8_8_ = local_3a0;
            auVar6._0_8_ = local_378._0_8_;
          }
        }
        else {
          (*(code *)PTR_panic_already_borrowed_007997b0)();
          auVar6._8_8_ = local_3a0;
          auVar6._0_8_ = local_378._0_8_;
        }
      }
LAB_007099d2:
      local_3a0 = auVar6._8_8_;
      local_378._0_8_ = auVar6._0_8_;
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    param_1[1] = uStack_1b0;
    *param_1 = 2;
  }
  else {
    build_current_thread_runtime_components(&local_1b8,param_2,0);
    if (local_1b8 == (undefined **)0x2) {
      param_1[1] = uStack_1b0;
      uVar13 = 2;
    }
    else {
      param_1[5] = local_188;
      param_1[3] = local_198;
      param_1[4] = uStack_190;
      param_1[1] = local_1a8;
      param_1[2] = uStack_1a0;
      param_1[6] = local_1b8;
      param_1[7] = uStack_1b0;
      param_1[8] = local_180;
      param_1[9] = uStack_178;
      uVar13 = 0;
    }
    *param_1 = uVar13;
  }
  return param_1;
}


