// 006ef0d0 new

/* <tokio[d7d91d38da47d894]::runtime::driver::Driver>::new */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::driver::Driver>::new
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined **local_318;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined **local_298;
  undefined **ppuStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined **local_220;
  undefined **ppuStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  longlong lStack_1d8;
  undefined **local_1d0;
  undefined **local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined3 uStack_14b;
  undefined5 local_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined3 uStack_13b;
  undefined5 local_138;
  undefined3 uStack_133;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined **local_90;
  undefined **local_88;
  
  if (*(char *)(param_2 + 3) != '\0') {
    <tokio[d7d91d38da47d894]::runtime::io::driver::Driver>::new
              (&local_318,param_2[2],*param_2,param_2[1]);
    if (local_318 != (undefined **)0xffffffffffffffff) {
      local_238 = local_2a8;
      uVar9 = local_238;
      uStack_230 = uStack_2a0;
      local_248 = local_2b8;
      uVar7 = local_248;
      uStack_240 = uStack_2b0;
      uVar8 = uStack_240;
      local_258 = local_2c8;
      uVar5 = local_258;
      uStack_250 = uStack_2c0;
      uVar6 = uStack_250;
      uStack_260 = uStack_2d0;
      uVar11 = uStack_260;
      local_90 = local_318;
      local_88 = ppuStack_310;
      local_328 = (undefined4)uStack_2a0;
      uStack_324 = (undefined4)((ulonglong)uStack_2a0 >> 0x20);
      uStack_260._0_4_ = (undefined4)uStack_2d0;
      uStack_260._4_4_ = (undefined4)((ulonglong)uStack_2d0 >> 0x20);
      local_258._0_4_ = (undefined4)local_2c8;
      local_258._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
      uStack_250._0_4_ = (undefined4)uStack_2c0;
      uStack_250._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
      local_248._0_4_ = (undefined4)local_2b8;
      local_248._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
      uStack_240._0_4_ = (undefined4)uStack_2b0;
      uStack_240._4_4_ = (undefined4)((ulonglong)uStack_2b0 >> 0x20);
      local_238._0_4_ = (undefined4)local_2a8;
      local_238._4_4_ = (undefined4)((ulonglong)local_2a8 >> 0x20);
      local_338 = (undefined4)uStack_240;
      uStack_334 = uStack_240._4_4_;
      uStack_330 = (undefined4)local_238;
      uStack_32c = local_238._4_4_;
      local_348 = (undefined4)uStack_250;
      uStack_344 = uStack_250._4_4_;
      uStack_340 = (undefined4)local_248;
      uStack_33c = local_248._4_4_;
      local_358 = (undefined4)uStack_260;
      uStack_354 = uStack_260._4_4_;
      uStack_350 = (undefined4)local_258;
      uStack_34c = local_258._4_4_;
      local_368 = uStack_2e0;
      uStack_364 = uStack_2dc;
      uStack_360 = local_2d8;
      uStack_35c = uStack_2d4;
      uStack_260 = uVar11;
      local_258 = uVar5;
      uStack_250 = uVar6;
      local_248 = uVar7;
      uStack_240 = uVar8;
      local_238 = uVar9;
      <tokio[d7d91d38da47d894]::runtime::signal::Driver>::new(&local_318,&local_90,&local_368);
      ppuVar10 = local_318;
      if (local_318 != (undefined **)0xffffffffffffffff) {
        local_158 = CONCAT44(uStack_2d4,local_2d8);
        uStack_260 = CONCAT44(uStack_2dc,uStack_2e0);
        _local_288 = CONCAT44(uStack_304,uStack_308);
        _uStack_280 = CONCAT44(uStack_2fc,uStack_300);
        local_298 = local_318;
        ppuStack_290 = ppuStack_310;
        do {
          lVar13 = *(longlong *)(uStack_260 + 8);
          while (lVar13 != -1) {
            if (lVar13 < 0) {
              local_318 = &anon_3e483e6b3ccbdca1751358c89510dd96_20_llvm_15764310632135838254;
              ppuStack_310 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
              (*(code *)PTR_panic_fmt_007991a8)
                        (ppuVar10,&
                                  anon_3e483e6b3ccbdca1751358c89510dd96_23_llvm_15764310632135838254
                        );
              goto LAB_006ef71a;
            }
            LOCK();
            lVar2 = *(longlong *)(uStack_260 + 8);
            bVar14 = lVar13 == lVar2;
            if (bVar14) {
              *(longlong *)(uStack_260 + 8) = lVar13 + 1;
            }
            else {
              lVar13 = lVar2;
            }
            UNLOCK();
            if (bVar14) {
              local_1a0 = local_2e8;
              uStack_19c = uStack_2e4;
              uStack_198 = uStack_2e0;
              uStack_194 = uStack_2dc;
              local_1b0 = uStack_2f8;
              uStack_1ac = uStack_2f4;
              uStack_1a8 = uStack_2f0;
              uStack_1a4 = uStack_2ec;
              local_1c0 = uStack_308;
              uStack_1bc = uStack_304;
              uStack_1b8 = uStack_300;
              uStack_1b4 = uStack_2fc;
              local_1d0 = local_318;
              local_1c8 = ppuStack_310;
              param_4 = CONCAT44(uStack_2dc,uStack_2e0);
              goto LAB_006ef56e;
            }
          }
        } while( true );
      }
      uVar15 = (*(code *)PTR_close_00799030)();
      puVar1 = PTR_drop_slow_00799150;
      if (CONCAT44(uStack_344,local_348) != 0) {
        puVar12 = (undefined8 *)CONCAT44(uStack_34c,uStack_350);
        lVar13 = 1 - CONCAT44(uStack_344,local_348);
        do {
          plVar3 = (longlong *)*puVar12;
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            uVar15 = (*(code *)puVar1)();
          }
          puVar12 = puVar12 + 1;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 1);
      }
      if (CONCAT44(uStack_354,local_358) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
      }
      (*(code *)PTR_close_00799030)();
    }
LAB_006ef696:
    param_1[1] = ppuStack_310;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  ppuVar10 = (undefined **)(*(code *)PTR___rust_alloc_00799000)();
  if (ppuVar10 == (undefined **)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>
              (&local_368,0x28);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *ppuVar10 = (undefined *)0x1;
  ppuVar10[1] = (undefined *)0x1;
  ppuVar10[2] = (undefined *)0x0;
  ppuVar10[3] = (undefined *)0x0;
  *(undefined4 *)(ppuVar10 + 4) = 0;
  LOCK();
  puVar1 = *ppuVar10;
  *ppuVar10 = *ppuVar10 + 1;
  UNLOCK();
  if (*ppuVar10 == (undefined *)0x0 || SCARRY8((longlong)puVar1,1) != (longlong)*ppuVar10 < 0) {
LAB_006ef71a:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_318 = (undefined **)0xffffffffffffffff;
  uStack_2d4 = 0xffffffff;
  lVar13 = 0;
  ppuStack_218 = ppuVar10;
LAB_006ef2d7:
  local_1e0 = local_158;
  local_1f0 = local_168;
  uStack_1e8 = uStack_160;
  local_200 = local_178;
  uStack_1f8 = uStack_170;
  local_210 = local_188;
  uStack_208 = uStack_180;
  uStack_2e0 = uStack_f8;
  uStack_2dc = (undefined4)uStack_f4;
  local_2d8 = (undefined4)((ulonglong)uStack_f4 >> 0x20);
  uStack_2f0 = (undefined4)local_108;
  uStack_2ec = local_108._4_4_;
  local_2e8 = uStack_100;
  uStack_2e4 = uStack_fc;
  uStack_300 = (undefined4)local_118;
  uStack_2fc = local_118._4_4_;
  uStack_2f8 = (undefined4)uStack_110;
  uStack_2f4 = uStack_110._4_4_;
  ppuStack_310 = (undefined **)local_128;
  uStack_308 = (undefined4)uStack_120;
  uStack_304 = uStack_120._4_4_;
  local_220 = local_318;
  lStack_1d8 = param_4;
  if (*(char *)((longlong)param_2 + 0x19) == '\x01') {
    local_318 = ppuVar10;
    param_2 = (undefined8 *)(*(code *)PTR_now_00799250)();
    uVar15 = SUB84(ppuVar10,0);
    <tokio[d7d91d38da47d894]::runtime::time::wheel::Wheel>::new(&local_298);
    local_148 = SUB85(local_298,0);
    uStack_143 = (undefined3)((ulonglong)local_298 >> 0x28);
    uStack_140 = SUB85(ppuStack_290,0);
    uStack_13b = (undefined3)((ulonglong)ppuStack_290 >> 0x28);
    local_138 = (undefined5)_local_288;
    uStack_133 = (undefined3)((ulonglong)_local_288 >> 0x28);
    uStack_130 = (undefined4)_uStack_280;
    uStack_12c = (undefined4)((ulonglong)_uStack_280 >> 0x20);
    uVar11 = 0;
    ppuVar10 = local_318;
  }
  else {
    uVar11 = 2;
    uVar15 = 0xffffffff;
  }
  local_318 = ppuVar10;
  param_1[0x13] = CONCAT44(uStack_2d4,local_2d8);
  param_1[0x11] = CONCAT44(uStack_2e4,local_2e8);
  param_1[0x12] = CONCAT44(uStack_2dc,uStack_2e0);
  param_1[0xf] = CONCAT44(uStack_2f4,uStack_2f8);
  param_1[0x10] = CONCAT44(uStack_2ec,uStack_2f0);
  param_1[0xd] = CONCAT44(uStack_304,uStack_308);
  param_1[0xe] = CONCAT44(uStack_2fc,uStack_300);
  param_1[0xb] = local_318;
  param_1[0xc] = ppuStack_310;
  *param_1 = uVar11;
  param_1[9] = local_1e0;
  param_1[10] = lStack_1d8;
  param_1[7] = local_1f0;
  param_1[8] = uStack_1e8;
  param_1[5] = local_200;
  param_1[6] = uStack_1f8;
  param_1[3] = local_210;
  param_1[4] = uStack_208;
  param_1[1] = local_220;
  param_1[2] = ppuStack_218;
  param_1[0x14] = lVar13;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_12c;
  *(ulonglong *)((longlong)param_1 + 0xbd) = CONCAT53(local_138,uStack_13b);
  *(ulonglong *)((longlong)param_1 + 0xc5) =
       CONCAT17((undefined1)uStack_12c,CONCAT43(uStack_130,uStack_133));
  *(ulonglong *)((longlong)param_1 + 0xad) = CONCAT53(local_148,uStack_14b);
  *(ulonglong *)((longlong)param_1 + 0xb5) = CONCAT53(uStack_140,uStack_143);
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = param_2;
  *(undefined4 *)(param_1 + 0x1d) = uVar15;
  return param_1;
  while( true ) {
    LOCK();
    lVar2 = *(longlong *)(param_4 + 8);
    bVar14 = lVar13 == lVar2;
    if (bVar14) {
      *(longlong *)(param_4 + 8) = lVar13 + 1;
    }
    else {
      lVar13 = lVar2;
    }
    UNLOCK();
    if (bVar14) break;
    while (lVar13 == -1) {
LAB_006ef56e:
      lVar13 = *(longlong *)(param_4 + 8);
    }
    if (lVar13 < 0) {
      local_318 = &anon_3e483e6b3ccbdca1751358c89510dd96_20_llvm_15764310632135838254;
      ppuStack_310 = (undefined **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      (*(code *)PTR_panic_fmt_007991a8)
                (param_4,&anon_3e483e6b3ccbdca1751358c89510dd96_23_llvm_15764310632135838254);
      goto LAB_006ef71a;
    }
  }
  local_188 = CONCAT44(uStack_304,uStack_308);
  uStack_180 = CONCAT44(uStack_2fc,uStack_300);
  local_178 = CONCAT44(uStack_2f4,uStack_2f8);
  uStack_170 = CONCAT44(uStack_2ec,uStack_2f0);
  local_168 = CONCAT44(uStack_2e4,local_2e8);
  uStack_160 = CONCAT44(uStack_2dc,uStack_2e0);
  ppuVar10 = (undefined **)CONCAT44(uStack_364,local_368);
  local_128 = CONCAT44(uStack_35c,uStack_360);
  uStack_120 = CONCAT44(uStack_354,local_358);
  local_118 = CONCAT44(uStack_34c,uStack_350);
  uStack_110 = CONCAT44(uStack_344,local_348);
  local_108 = CONCAT44(uStack_33c,uStack_340);
  uStack_100 = local_338;
  uStack_f4 = CONCAT44(local_328,uStack_32c);
  uStack_fc = uStack_334;
  uStack_f8 = uStack_330;
  if (local_318 == (undefined **)0xfffffffffffffffe) goto LAB_006ef696;
  ppuStack_218 = ppuStack_310;
  lVar13 = uStack_260;
  uStack_2d4 = uStack_324;
  goto LAB_006ef2d7;
}


