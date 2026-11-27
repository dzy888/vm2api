// 00708640 build_current_thread_runtime_components

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <tokio[d7d91d38da47d894]::runtime::builder::Builder>::build_current_thread_runtime_components */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::builder::Builder>::build_current_thread_runtime_components
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined *puVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined4 uVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar37 [15];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  longlong *local_828;
  undefined8 local_810;
  char local_808;
  undefined4 uStack_804;
  undefined2 uStack_7ac;
  char cStack_7aa;
  undefined1 uStack_7a9;
  uint7 uStack_7a7;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  uint3 uStack_633;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined4 local_608;
  longlong *local_600;
  undefined8 uStack_5f8;
  ulonglong local_5f0;
  undefined8 uStack_5e8;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined8 local_5b0;
  undefined8 local_5a8;
  longlong lStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  uint uStack_558;
  undefined4 uStack_554;
  undefined4 local_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 *local_500;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined1 local_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  longlong local_430;
  undefined1 local_428;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  longlong lStack_3e8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined8 local_3d0;
  longlong *local_3c8;
  longlong *local_328;
  undefined8 local_320;
  ulonglong local_318;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  ulonglong local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_1f0;
  
  local_610 = param_2[0xe];
  auVar37 = ZEXT415(*(uint *)((longlong)param_2 + 0xf4)) ^ DAT_00183840._0_15_;
  auVar9[0xd] = 0;
  auVar9._0_13_ = auVar37._0_13_;
  auVar9[0xe] = auVar37[7];
  auVar10[0xc] = auVar37[6];
  auVar10._0_12_ = auVar37._0_12_;
  auVar10._13_2_ = auVar9._13_2_;
  auVar11[0xb] = 0;
  auVar11._0_11_ = auVar37._0_11_;
  auVar11._12_3_ = auVar10._12_3_;
  auVar12[10] = auVar37[5];
  auVar12._0_10_ = auVar37._0_10_;
  auVar12._11_4_ = auVar11._11_4_;
  auVar13[9] = 0;
  auVar13._0_9_ = auVar37._0_9_;
  auVar13._10_5_ = auVar12._10_5_;
  auVar14[8] = auVar37[4];
  auVar14._0_8_ = auVar37._0_8_;
  auVar14._9_6_ = auVar13._9_6_;
  auVar16._7_8_ = 0;
  auVar16._0_7_ = auVar14._8_7_;
  auVar17._1_8_ = SUB158(auVar16 << 0x40,7);
  auVar17[0] = auVar37[3];
  auVar17._9_6_ = 0;
  auVar18._1_10_ = SUB1510(auVar17 << 0x30,5);
  auVar18[0] = auVar37[2];
  auVar18._11_4_ = 0;
  auVar15[2] = auVar37[1];
  auVar15._0_2_ = auVar37._0_2_;
  auVar15._3_12_ = SUB1512(auVar18 << 0x20,3);
  auVar38._0_2_ = auVar37._0_2_ & 0xff;
  auVar38._2_13_ = auVar15._2_13_;
  auVar38[0xf] = 0;
  auVar38 = pshuflw(auVar38,auVar38,0xc9);
  sVar5 = auVar38._0_2_;
  sVar6 = auVar38._2_2_;
  sVar7 = auVar38._4_2_;
  sVar8 = auVar38._6_2_;
  local_608 = CONCAT13((0 < sVar8) * (sVar8 < 0x100) * auVar38[6] - (0xff < sVar8),
                       CONCAT12((0 < sVar7) * (sVar7 < 0x100) * auVar38[4] - (0xff < sVar7),
                                CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar38[2] - (0xff < sVar6)
                                         ,(0 < sVar5) * (sVar5 < 0x100) * auVar38[0] -
                                          (0xff < sVar5))));
  local_620 = *param_2;
  uStack_618 = param_2[1];
  uVar35 = <tokio[d7d91d38da47d894]::runtime::driver::Driver>::new(&local_600,&local_620);
  uVar22 = uStack_5f8;
  plVar21 = local_600;
  puVar19 = PTR_memcpy_00799008;
  if (local_600 == (longlong *)0xffffffffffffffff) {
    param_1[1] = uStack_5f8;
    *param_1 = 2;
    return;
  }
  (*(code *)PTR_memcpy_00799008)(uVar35,0xe0);
  (*(code *)puVar19)();
  auVar38 = <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::new
                      (param_2,param_2[0xf],0);
  uVar33 = auVar38._8_4_;
  plVar25 = auVar38._0_8_;
  LOCK();
  lVar28 = *plVar25;
  *plVar25 = *plVar25 + 1;
  UNLOCK();
  if (*plVar25 == 0 || SCARRY8(lVar28,1) != *plVar25 < 0) goto LAB_00708f93;
  uVar23 = (*(code *)PTR_next_seed_007996b0)();
  uVar34 = (ulonglong)uVar23;
  uVar31 = uVar33;
  uVar24 = (*(code *)PTR_next_seed_007996b0)();
  local_670 = (undefined4)local_220;
  uStack_66c = (undefined4)((ulonglong)local_220 >> 0x20);
  uStack_668 = (undefined4)uStack_218;
  uStack_664 = (undefined4)((ulonglong)uStack_218 >> 0x20);
  uVar32 = 0x98;
  (*(code *)PTR_memcpy_00799008)();
  plVar26 = (longlong *)param_2[0x14];
  uVar36 = 0;
  uVar39 = 0;
  uVar35 = 0;
  uVar40 = 0;
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 == 0 || SCARRY8(lVar28,1) != *plVar26 < 0) goto LAB_00708f93;
    uVar35 = param_2[0x14];
    uVar40 = param_2[0x15];
  }
  plVar26 = (longlong *)param_2[0x16];
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 == 0 || SCARRY8(lVar28,1) != *plVar26 < 0) goto LAB_00708f93;
    uVar36 = param_2[0x16];
    uVar39 = param_2[0x17];
  }
  plVar26 = (longlong *)param_2[0x18];
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 == 0 || SCARRY8(lVar28,1) != *plVar26 < 0) goto LAB_00708f93;
    uVar45 = *(undefined4 *)(param_2 + 0x18);
    uVar46 = *(undefined4 *)((longlong)param_2 + 0xc4);
    uVar47 = *(undefined4 *)(param_2 + 0x19);
    uVar48 = *(undefined4 *)((longlong)param_2 + 0xcc);
  }
  plVar26 = (longlong *)param_2[0x1a];
  if (plVar26 != (longlong *)0x0) {
    LOCK();
    lVar28 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 == 0 || SCARRY8(lVar28,1) != *plVar26 < 0) goto LAB_00708f93;
    uVar41 = *(undefined4 *)(param_2 + 0x1a);
    uVar42 = *(undefined4 *)((longlong)param_2 + 0xd4);
    uVar43 = *(undefined4 *)(param_2 + 0x1b);
    uVar44 = *(undefined4 *)((longlong)param_2 + 0xdc);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x1e);
  uVar3 = param_2[9];
  uVar2 = *(undefined4 *)(param_2 + 0x1f);
  uStack_7ac = (undefined2)uVar2;
  cStack_7aa = (char)((uint)uVar2 >> 0x10);
  uStack_7a9 = (undefined1)((uint)uVar2 >> 0x18);
  uVar30 = uVar3;
  if (param_2[6] == -1) {
    local_828 = (longlong *)0xffffffffffffffff;
  }
  else {
    param_2 = param_2 + 6;
    (*(code *)PTR_clone_00798fd0)();
    local_828 = local_600;
    local_810 = uStack_5f8;
    uVar34 = local_5f0;
  }
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_600 = (longlong *)(*(code *)PTR_current_007996d8)();
  lVar28 = local_600[2];
  (*(code *)PTR_set_thread_id_007996e0)();
  LOCK();
  *local_600 = *local_600 + -1;
  UNLOCK();
  if (*local_600 == 0) {
    (*(code *)PTR_drop_slow_007996e8)();
  }
  local_808 = (char)uVar3;
  uStack_804 = 0x1f;
  if (local_808 != '\0') {
    uStack_804 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if (cStack_7aa == '\x01') {
    param_2 = (undefined8 *)(*(code *)PTR_now_00799250)();
    uVar2 = uVar32;
    if (CONCAT44(uVar46,uVar45) != 0) goto LAB_00708a51;
LAB_00708a2f:
    if (CONCAT44(uVar42,uVar41) != 0) {
LAB_00708a70:
      plVar26 = (longlong *)CONCAT44(uVar42,uVar41);
      LOCK();
      lVar28 = *plVar26;
      *plVar26 = *plVar26 + 1;
      UNLOCK();
      if (*plVar26 == 0 || SCARRY8(lVar28,1) != *plVar26 < 0) goto LAB_00708f93;
      lVar28 = CONCAT44(uVar44,uVar43);
    }
  }
  else {
    uVar32 = 0xffffffff;
    uVar2 = 0xffffffff;
    if (CONCAT44(uVar46,uVar45) == 0) goto LAB_00708a2f;
LAB_00708a51:
    uVar32 = uVar2;
    plVar26 = (longlong *)CONCAT44(uVar46,uVar45);
    LOCK();
    lVar29 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 == 0 || SCARRY8(lVar29,1) != *plVar26 < 0) goto LAB_00708f93;
    uVar30 = CONCAT44(uVar48,uVar47);
    if (CONCAT44(uVar42,uVar41) != 0) goto LAB_00708a70;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar27 = (*(code *)PTR___rust_alloc_zeroed_007997c8)();
  lVar29 = tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID;
  if (lVar27 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    do {
      tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID = lVar29;
      lVar20 = tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID;
      LOCK();
      UNLOCK();
      lVar29 = tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID + 1;
    } while (tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID == 0);
    local_4b8 = 0;
    uStack_4b0 = 0;
    uStack_468 = CONCAT44(uVar46,uVar45);
    local_460 = CONCAT44(uVar48,uVar47);
    uStack_458 = CONCAT44(uVar42,uVar41);
    local_450 = CONCAT44(uVar44,uVar43);
    uStack_448 = 0;
    local_440 = CONCAT44(uVar33,uVar23);
    uStack_438 = CONCAT17(uStack_7a9,CONCAT16(cStack_7aa,CONCAT24(uStack_7ac,uVar1)));
    local_430 = (ulonglong)uStack_7a7 << 8;
    local_580 = local_300;
    uStack_578 = uStack_2f8;
    local_570 = local_2f0;
    uStack_568 = uStack_2e8;
    local_560 = (undefined4)local_2e0;
    uStack_55c = local_2e0._4_4_;
    uStack_558 = (uint)uStack_2d8;
    uStack_554 = uStack_2d8._4_4_;
    local_550 = local_2d0;
    uStack_54c = uStack_2cc;
    uStack_548 = uStack_2c8;
    uStack_544 = uStack_2c4;
    local_540 = local_2c0;
    uStack_538 = uStack_2b8;
    local_530 = local_2b0;
    uStack_528 = uStack_2a8;
    local_520 = local_2a0;
    uStack_518 = uStack_298;
    local_510 = local_290;
    uStack_508 = uStack_288;
    local_4c0 = 4;
    local_4a8 = 3;
    local_4a0 = tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID;
    local_498 = 0;
    tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID =
         tokio[d7d91d38da47d894]::runtime::task::list::NEXT_OWNED_TASKS_ID + 1;
    local_4c8 = lVar27;
    local_490 = uVar3;
    uStack_488 = uVar35;
    local_480 = uVar40;
    uStack_478 = uVar36;
    local_470 = uVar39;
    (*(code *)PTR_memcpy_00799008)(lVar20,0x98);
    local_328 = local_828;
    local_320 = local_810;
    local_3e0 = 0;
    local_600 = (longlong *)0x1;
    uStack_5f8 = 1;
    local_4f0 = 0;
    local_4ec = 0;
    local_4d0 = 0;
    local_4e8 = 0;
    uStack_4e0 = 0;
    local_4d8 = 0;
    local_428 = 0;
    local_500 = param_2;
    local_4f8 = uVar32;
    local_400 = CONCAT44(uVar46,uVar45);
    uStack_3f8 = uVar30;
    local_3f0 = CONCAT44(uVar42,uVar41);
    lStack_3e8 = lVar28;
    local_3d8 = uVar24;
    local_3d4 = uVar31;
    local_3d0 = param_3;
    local_3c8 = plVar25;
    local_318 = uVar34;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar28 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar28 == 0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
    }
    else {
      uVar33 = 0x300;
      (*(code *)PTR_memcpy_00799008)();
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar29 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar29 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
      }
      else {
        local_570 = (*(code *)PTR_now_00799250)();
        local_580 = 0;
        uStack_578 = 0;
        local_5a8 = 0x40;
        local_598 = 0;
        uStack_590 = 0;
        local_560 = 0;
        local_5f0 = local_230;
        uStack_5e8 = uStack_228;
        local_5e0 = local_670;
        uStack_5dc = uStack_66c;
        uStack_5d8 = uStack_668;
        uStack_5d4 = uStack_664;
        local_5d0 = local_210;
        uStack_5cc = uStack_20c;
        uStack_5c8 = uStack_208;
        uStack_5c4 = uStack_204;
        local_5b0 = local_1f0;
        local_588 = 0;
        uStack_568 = CONCAT44(uStack_568._4_4_,uVar33);
        uStack_558 = uStack_558 & 0xffffff00;
        local_600 = plVar21;
        uStack_5f8 = uVar22;
        lStack_5a0 = lVar29;
        uStack_55c = uStack_804;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar29 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar29 != 0) {
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,0xb0);
          *param_1 = 0;
          param_1[1] = lVar28;
          param_1[2] = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
          *(ulonglong *)((longlong)param_1 + 0x1d) = (ulonglong)uStack_633;
          *(undefined8 *)((longlong)param_1 + 0x25) = 0;
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
          param_1[6] = lVar29;
          *(undefined1 (*) [16])(param_1 + 7) = auVar38;
          return;
        }
        (*(code *)PTR_handle_alloc_error_007991d8)();
      }
    }
  }
LAB_00708f93:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


