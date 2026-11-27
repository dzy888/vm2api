// 006e2fd0 new

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::new */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::BlockingPool>::new
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  longlong *in_FS_OFFSET;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined2 local_878;
  undefined1 local_876;
  int local_874;
  undefined8 local_870;
  undefined8 uVar22;
  undefined1 *local_848;
  longlong lStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  longlong local_808;
  undefined8 uStack_800;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined8 uStack_7f0;
  undefined *local_7e8;
  longlong lStack_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  longlong local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  longlong local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined1 local_790;
  undefined4 local_78f;
  undefined2 local_78b;
  undefined1 local_789;
  undefined8 local_788;
  undefined8 uStack_780;
  longlong local_778;
  undefined8 uStack_770;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 local_720;
  undefined1 *local_718;
  undefined4 local_710;
  undefined1 uStack_70c;
  undefined2 uStack_70b;
  undefined1 uStack_709;
  undefined8 uStack_708;
  undefined1 *local_700;
  longlong lStack_6f8;
  undefined8 local_6f0;
  undefined1 *puStack_6e8;
  longlong local_6e0;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 local_6c0;
  undefined4 uStack_6bc;
  undefined4 uStack_6b8;
  undefined4 uStack_6b4;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  longlong lStack_6a8;
  undefined8 local_6a0;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  int local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  
  auVar20 = tokio[d7d91d38da47d894]::runtime::blocking::shutdown::channel();
  auVar21._8_8_ = auVar20._8_8_;
  local_818 = auVar20._0_8_;
  local_874 = *(int *)(param_1 + 0x58);
  if (local_874 == -1) {
    local_870 = 10;
    local_874 = 0;
  }
  else {
    local_870 = *(undefined8 *)(param_1 + 0x50);
  }
  lVar2 = *in_FS_OFFSET;
  plVar1 = (longlong *)(lVar2 + -0x38);
  if (*(char *)(lVar2 + -0x28) == '\x01') {
    local_828 = *plVar1;
    uStack_820 = *(undefined8 *)(lVar2 + -0x30);
  }
  else {
    uStack_820 = auVar21._8_8_;
    uVar22 = auVar21._8_8_;
    local_728 = local_818;
    local_828 = (*(code *)PTR_hashmap_random_keys_00799248)();
    auVar20._8_8_ = uVar22;
    auVar20._0_8_ = local_728;
    *plVar1 = local_828;
    *(undefined8 *)(lVar2 + -0x30) = uStack_820;
    *(undefined1 *)(lVar2 + -0x28) = 1;
  }
  uVar22 = auVar20._8_8_;
  local_728 = auVar20._0_8_;
  *plVar1 = local_828 + 1;
  local_790 = 0;
  uStack_7b0 = 0;
  local_7e8 = anon_48246b2c7bc3818a1cbc30620defa29e_20_llvm_17816610714767121267;
  lStack_7e0 = _UNK_00793d38;
  local_7d8 = _DAT_00793d40;
  uStack_7d4 = _UNK_00793d44;
  uStack_7d0 = _UNK_00793d48;
  uStack_7cc = _UNK_00793d4c;
  local_798 = 0;
  bVar11 = *(char *)(param_1 + 0xfd) == '\0';
  local_7c8 = local_828;
  uStack_7c0 = uStack_820;
  local_7b8 = local_818;
  if (bVar11) {
    local_7f8 = 0;
    uStack_7f4 = 0;
    uStack_7f0 = (ulonglong)CONCAT16(local_789,CONCAT24(local_78b,local_78f)) << 8;
    local_808 = local_7a8;
    uStack_800 = uStack_7a0;
    local_838 = CONCAT44(_UNK_00793d44,_DAT_00793d40);
    uStack_830 = (undefined1 *)CONCAT44(_UNK_00793d4c,_UNK_00793d48);
    uStack_810 = 0;
    uStack_80c = 0;
    local_848 = anon_48246b2c7bc3818a1cbc30620defa29e_20_llvm_17816610714767121267;
    lStack_840 = _UNK_00793d38;
    local_778 = 0;
    uStack_770 = 0;
    local_788 = 0;
    uStack_780 = 0;
    puVar8 = &DAT_00000008;
    uVar9 = 0;
    uVar10 = 0;
    uVar7 = 0;
  }
  else {
    <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::new(&local_728,&local_7e8);
    puVar8 = local_718;
    uVar7 = local_720;
    uVar9 = (undefined4)local_728;
    uVar10 = local_728._4_1_;
    local_878 = local_728._5_2_;
    local_876 = local_728._7_1_;
    local_778 = CONCAT17(uStack_709,CONCAT25(uStack_70b,CONCAT14(uStack_70c,local_710)));
    uStack_770 = uStack_708;
    local_848 = local_700;
    lStack_840 = lStack_6f8;
    local_838 = local_6f0;
    uStack_830 = puStack_6e8;
    uStack_820 = CONCAT44(uStack_6d4,uStack_6d8);
    local_828 = local_6e0;
    local_818 = CONCAT44(uStack_6cc,local_6d0);
    uStack_810 = uStack_6c8;
    uStack_80c = uStack_6c4;
    local_808 = CONCAT44(uStack_6bc,local_6c0);
    uStack_800 = CONCAT44(uStack_6b4,uStack_6b8);
    local_7f8 = local_6b0;
    uStack_7f4 = uStack_6ac;
    uStack_7f0 = lStack_6a8;
    local_788 = local_6a0;
    uStack_780 = CONCAT44(uStack_694,uStack_698);
    (*(code *)PTR_memcpy_00799008)((undefined4)local_6a0,0x2e8);
    auVar20._8_8_ = uVar22;
    auVar20._0_8_ = local_728;
  }
  local_728 = auVar20._0_8_;
  plVar1 = *(longlong **)(param_1 + 0x60);
  LOCK();
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar2,1) == *plVar1 < 0) {
    uVar22 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    plVar1 = *(longlong **)(param_1 + 0x80);
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_006e34c7;
      uVar16 = *(undefined4 *)(param_1 + 0x80);
      uVar17 = *(undefined4 *)(param_1 + 0x84);
      uVar18 = *(undefined4 *)(param_1 + 0x88);
      uVar19 = *(undefined4 *)(param_1 + 0x8c);
    }
    plVar1 = *(longlong **)(param_1 + 0x90);
    local_758 = uVar16;
    uStack_754 = uVar17;
    uStack_750 = uVar18;
    uStack_74c = uVar19;
    local_748 = uVar22;
    uStack_740 = uVar4;
    local_738 = uVar5;
    uStack_730 = uVar6;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (*plVar1 == 0 || SCARRY8(lVar2,1) != *plVar1 < 0) goto LAB_006e34c7;
      uVar12 = *(undefined4 *)(param_1 + 0x90);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      uVar14 = *(undefined4 *)(param_1 + 0x98);
      uVar15 = *(undefined4 *)(param_1 + 0x9c);
    }
    uStack_709 = local_876;
    uStack_70b = local_878;
    puStack_6e8 = local_848;
    local_6e0 = lStack_840;
    uStack_6d8 = (undefined4)local_838;
    uStack_6d4 = local_838._4_4_;
    local_6d0 = (undefined4)uStack_830;
    uStack_6cc = uStack_830._4_4_;
    uStack_6c8 = (undefined4)local_828;
    uStack_6c4 = local_828._4_4_;
    local_6c0 = (undefined4)uStack_820;
    uStack_6bc = uStack_820._4_4_;
    uStack_6b8 = (undefined4)local_818;
    uStack_6b4 = local_818._4_4_;
    local_6b0 = uStack_810;
    uStack_6ac = uStack_80c;
    lStack_6a8 = local_808;
    local_6a0 = uStack_800;
    uStack_698 = local_7f8;
    uStack_694 = uStack_7f4;
    local_690 = (undefined4)uStack_7f0;
    uStack_68c = uStack_7f0._4_4_;
    local_768 = uVar12;
    uStack_764 = uVar13;
    uStack_760 = uVar14;
    uStack_75c = uVar15;
    (*(code *)PTR_memcpy_00799008)
              (local_7f8,0x2e8,(undefined4)local_828,(undefined4)local_818,param_3,auVar20._8_8_);
    local_728 = 1;
    local_720 = 1;
    lStack_6f8 = local_778;
    local_6f0 = uStack_770;
    local_688 = local_788;
    uStack_680 = uStack_780;
    local_390 = local_748;
    uStack_388 = uStack_740;
    local_380 = local_870;
    local_378 = local_874;
    local_370 = local_738;
    uStack_368 = uStack_730;
    local_360 = CONCAT44(uStack_754,local_758);
    uStack_358 = CONCAT44(uStack_74c,uStack_750);
    local_350 = CONCAT44(uStack_764,local_768);
    uStack_348 = CONCAT44(uStack_75c,uStack_760);
    local_330 = 0;
    uStack_328 = 0;
    local_320 = 0;
    local_718 = (undefined1 *)(ulonglong)!bVar11;
    local_710 = uVar9;
    uStack_70c = uVar10;
    uStack_708 = uVar7;
    local_700 = puVar8;
    local_340 = param_2;
    local_338 = param_3;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    auVar21._0_8_ = (*(code *)PTR___rust_alloc_00799000)();
    if (auVar21._0_8_ != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x410);
      return auVar21;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
LAB_006e34c7:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


