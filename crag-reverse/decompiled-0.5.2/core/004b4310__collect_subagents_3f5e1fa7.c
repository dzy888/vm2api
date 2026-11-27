// 004b4310 collect_subagents

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 (*pauVar4) [16];
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (**ppauVar21) [16];
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  code *pcVar26;
  longlong *plVar27;
  undefined1 (**ppauVar28) [16];
  longlong *plVar29;
  longlong *plVar30;
  longlong in_FS_OFFSET;
  bool bVar31;
  undefined8 uVar32;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte local_454;
  undefined1 local_431;
  longlong *local_430;
  longlong *local_428;
  longlong *local_420;
  undefined1 (*local_418) [16];
  longlong *local_410;
  undefined1 (*local_408) [16];
  ulonglong uStack_400;
  undefined1 local_3f8 [16];
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d0;
  longlong *local_3c8;
  longlong *local_3c0;
  longlong local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  undefined1 (*local_390) [16];
  longlong *local_388;
  undefined1 (*local_380) [16];
  undefined1 (**local_378) [16];
  undefined1 (*local_370) [16];
  undefined1 (*local_368) [16];
  undefined1 (*local_360) [16];
  undefined1 *local_358;
  ushort local_350;
  undefined8 local_348;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 (*local_298) [16];
  longlong *plStack_290;
  ulonglong local_288;
  undefined1 local_1d0 [24];
  longlong local_1b8 [2];
  longlong local_1a8;
  ulonglong local_178;
  
  local_3d0 = param_1;
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_3e8 = *(longlong *)(in_FS_OFFSET + -0x38);
    param_3 = *(undefined8 *)(in_FS_OFFSET + -0x30);
  }
  else {
    local_3e8 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_3e8;
    *(undefined8 *)(in_FS_OFFSET + -0x30) = param_3;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_3e8 + 1;
  local_408 = (undefined1 (*) [16])
              PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078b728;
  uStack_400 = _UNK_0078b730;
  local_3f8 = _DAT_0078b738;
  piVar1 = (int *)(param_2 + 0x150);
  LOCK();
  bVar31 = *(int *)(param_2 + 0x150) == 0;
  if (bVar31) {
    *(int *)(param_2 + 0x150) = 1;
  }
  UNLOCK();
  local_3e0 = param_3;
  if (!bVar31) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  if (*(char *)(param_2 + 0x154) == '\0') {
    uVar32 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::all_subagents(&local_380);
    plVar10 = (longlong *)(local_378 + (longlong)local_370 * 0x19);
    local_428 = (longlong *)local_378;
    local_420 = (longlong *)local_378;
    local_418 = local_380;
    local_410 = plVar10;
    if (local_370 != (undefined1 (*) [16])0x0) {
      ppauVar21 = local_378;
      do {
        puVar3 = PTR_memcpy_00799008;
        plVar27 = (longlong *)(ppauVar21 + 0x19);
        lVar11 = (longlong)*ppauVar21;
        uVar32 = (*(code *)PTR_memcpy_00799008)(uVar32,0xc0);
        if (lVar11 == -1) goto LAB_004b4565;
        local_1b8[0] = lVar11;
        (*(code *)puVar3)(uVar32,0xc0);
        uVar32 = (*(code *)PTR_clone_00798fd0)();
        (*(code *)puVar3)(uVar32,200);
        uVar32 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
                 ::insert(&local_298,&local_408,&local_3a0,&local_380);
        if (local_298 != (undefined1 (*) [16])0xffffffffffffffff) {
          uVar32 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(&local_298);
        }
        ppauVar21 = (undefined1 (**) [16])plVar27;
      } while (plVar27 != plVar10);
      plVar27 = plVar10;
LAB_004b4565:
      local_420 = plVar27;
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(&local_428);
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  pauVar23 = (undefined1 (*) [16])(param_2 + 0x490);
  LOCK();
  bVar31 = *(int *)(param_2 + 0x490) == 0;
  if (bVar31) {
    *(int *)(param_2 + 0x490) = 1;
  }
  UNLOCK();
  if (!bVar31) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar5 = *(char *)(param_2 + 0x494);
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar5 = *(char *)(param_2 + 0x494);
  }
  if (cVar5 != '\0') {
    uVar13 = (ulonglong)local_378 >> 8;
    local_378 = (undefined1 (**) [16])CONCAT71((int7)uVar13,bVar6);
    local_380 = pauVar23;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
               ,&local_380,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b9a0);
    goto LAB_004b4f33;
  }
  uVar13 = *(ulonglong *)(param_2 + 0x4b0);
  pauVar18 = (undefined1 (*) [16])(*(longlong *)(param_2 + 0x548) + uVar13);
  if ((ulonglong)((longlong)pauVar18 * 8) < 0x7ffffffffffffff9 && (ulonglong)pauVar18 >> 0x3d == 0)
  {
    if ((longlong)pauVar18 * 8 == 0) {
      plVar10 = (longlong *)&DAT_00000008;
      pauVar18 = (undefined1 (*) [16])0x0;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar10 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar10 == (longlong *)0x0) goto LAB_004b4628;
      uVar13 = *(ulonglong *)(param_2 + 0x4b0);
    }
    local_370 = (undefined1 (*) [16])0x0;
    if (uVar13 == 0) {
      lVar11 = 0;
      uVar15 = 0;
      ppauVar21 = (undefined1 (**) [16])0x0;
    }
    else {
      uVar15 = *(ulonglong *)(param_2 + 0x498);
      uVar14 = 0;
      if (uVar15 <= *(ulonglong *)(param_2 + 0x4a8)) {
        uVar14 = uVar15;
      }
      lVar11 = *(ulonglong *)(param_2 + 0x4a8) - uVar14;
      ppauVar21 = (undefined1 (**) [16])(uVar13 - (uVar15 - lVar11));
      if (uVar13 < uVar15 - lVar11 || ppauVar21 == (undefined1 (**) [16])0x0) {
        uVar15 = uVar13 + lVar11;
        ppauVar21 = (undefined1 (**) [16])0x0;
      }
    }
    lVar22 = *(longlong *)(param_2 + 0x4a0);
    lVar11 = lVar11 * 0x848 + lVar22;
    lVar25 = uVar15 * 0x848 + lVar22;
    lVar12 = (longlong)ppauVar21 * 0x848 + lVar22;
    local_380 = pauVar18;
    local_378 = (undefined1 (**) [16])plVar10;
    while( true ) {
      pauVar18 = local_370;
      if (lVar11 == lVar25) {
        lVar19 = lVar11;
        lVar25 = lVar12;
        if (lVar22 == lVar12) {
          lVar11 = *(longlong *)(param_2 + 0x548);
          if (lVar11 == 0) goto LAB_004b4866;
          pauVar20 = *(undefined1 (**) [16])(param_2 + 0x530);
          auVar33 = *pauVar20;
          uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
          pauVar24 = pauVar20 + 1;
          goto LAB_004b47e7;
        }
      }
      else {
        lVar19 = lVar22;
        lVar22 = lVar11;
        lVar11 = lVar12;
      }
      lVar12 = lVar11;
      plVar10 = *(longlong **)(lVar22 + 0x820);
      LOCK();
      lVar11 = *plVar10;
      *plVar10 = *plVar10 + 1;
      UNLOCK();
      if (*plVar10 == 0 || SCARRY8(lVar11,1) != *plVar10 < 0) break;
      pauVar24 = *(undefined1 (**) [16])(lVar22 + 0x820);
      local_298 = pauVar24;
      if (local_370 == local_380) {
        <alloc[12e961f32105355]::raw_vec::RawVec<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
        ::grow_one(&local_380);
      }
      lVar11 = lVar22 + 0x848;
      local_378[(longlong)pauVar18] = pauVar24;
      local_370 = (undefined1 (*) [16])((longlong)*pauVar18 + 1);
      lVar22 = lVar19;
    }
  }
  else {
LAB_004b4628:
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_004b4f33:
                    /* WARNING: Does not return */
  pcVar26 = (code *)invalidInstructionException();
  (*pcVar26)();
LAB_004b47e7:
  do {
    pauVar4 = local_370;
    if ((short)uVar17 == 0) {
      do {
        auVar33 = *pauVar24;
        pauVar20 = pauVar20 + -0xe0;
        pauVar24 = pauVar24 + 1;
        uVar17 = (ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar17 == 0);
    }
    uVar8 = 0;
    for (uVar2 = uVar17; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    plVar10 = *(longlong **)(pauVar20[(ulonglong)uVar8 * -0xe + -1] + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      lVar22 = *plVar10;
      *plVar10 = *plVar10 + 1;
      UNLOCK();
      if (*plVar10 == 0 || SCARRY8(lVar22,1) != *plVar10 < 0) goto LAB_004b4f33;
      pauVar18 = *(undefined1 (**) [16])(pauVar20[(ulonglong)uVar8 * -0xe + -1] + 8);
      local_298 = pauVar18;
      if (local_370 == local_380) {
        <alloc[12e961f32105355]::raw_vec::RawVec<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
        ::grow_one(&local_380);
      }
      local_378[(longlong)pauVar4] = pauVar18;
      pauVar18 = (undefined1 (*) [16])((longlong)*pauVar4 + 1);
      local_370 = pauVar18;
    }
    uVar17 = uVar17 - 1 & uVar17;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
LAB_004b4866:
  ppauVar28 = local_378;
  pauVar24 = local_380;
  if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 0x494) = 1;
  }
  LOCK();
  lVar11 = *(longlong *)*pauVar23;
  *(undefined4 *)*pauVar23 = 0;
  UNLOCK();
  if ((int)lVar11 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  local_3c0 = (longlong *)(ppauVar28 + (longlong)pauVar18);
  local_3a0 = (longlong *)ppauVar28;
  local_398 = (longlong *)ppauVar28;
  local_390 = pauVar24;
  local_388 = local_3c0;
  if (pauVar18 != (undefined1 (*) [16])0x0) {
    pcVar26 = (code *)PTR_memcpy_00799008;
    do {
      plVar29 = (longlong *)(ppauVar28 + 1);
      plVar27 = (longlong *)*ppauVar28;
      plVar10 = plVar27 + 2;
      LOCK();
      bVar31 = (int)plVar27[2] == 0;
      if (bVar31) {
        *(int *)(plVar27 + 2) = 1;
      }
      UNLOCK();
      local_430 = plVar27;
      local_398 = plVar29;
      if (!bVar31) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        local_454 = 0;
        if (*(char *)((longlong)plVar27 + 0x14) != '\0') goto LAB_004b495b;
LAB_004b49c0:
        local_370 = (undefined1 (*) [16])(plVar27 + 3);
        local_380 = (undefined1 (*) [16])plVar27[4];
        local_378 = (undefined1 (**) [16])((longlong)local_380 + plVar27[5] * 0x18);
        ppauVar21 = &local_380;
        local_3c8 = plVar29;
        uVar32 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<alloc[12e961f32105355]::string::String>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::snapshot::{closure#0}>>>
                 ::from_iter(&local_298);
        plVar16 = plStack_290 + local_288 * 0x19;
        local_428 = plStack_290;
        local_420 = plStack_290;
        local_418 = local_298;
        plVar29 = plStack_290;
        local_410 = plVar16;
        if (local_288 != 0) {
          do {
            plVar30 = plVar29 + 0x19;
            lVar11 = *plVar29;
            ppauVar21 = (undefined1 (**) [16])(plVar29 + 1);
            uVar32 = (*pcVar26)(uVar32,0xc0);
            if (lVar11 == -1) goto LAB_004b4cf4;
            local_1b8[0] = lVar11;
            (*pcVar26)(uVar32,0xc0);
            if (local_3f8._8_8_ != 0) {
              uVar15 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                       ::hash_one::<&alloc[12e961f32105355]::string::String>(&local_3e8);
              lVar11 = local_1a8;
              pauVar23 = local_408;
              bVar6 = (byte)(uVar15 >> 0x39);
              auVar33 = ZEXT216(CONCAT11(bVar6,bVar6));
              auVar34 = pshuflw(auVar33,auVar33,0);
              auVar33._0_8_ = auVar34._0_8_;
              auVar33._8_4_ = auVar34._0_4_;
              auVar33._12_4_ = auVar34._4_4_;
              lVar22 = 0;
              uVar13 = uStack_400;
              while( true ) {
                uVar15 = uVar15 & uVar13;
                auVar34 = *(undefined1 (*) [16])(*pauVar23 + uVar15);
                auVar35[0] = -(auVar34[0] == auVar33[0]);
                auVar35[1] = -(auVar34[1] == auVar33[1]);
                auVar35[2] = -(auVar34[2] == auVar33[2]);
                auVar35[3] = -(auVar34[3] == auVar33[3]);
                auVar35[4] = -(auVar34[4] == auVar33[4]);
                auVar35[5] = -(auVar34[5] == auVar33[5]);
                auVar35[6] = -(auVar34[6] == auVar33[6]);
                auVar35[7] = -(auVar34[7] == auVar33[7]);
                auVar35[8] = -(auVar34[8] == auVar33[8]);
                auVar35[9] = -(auVar34[9] == auVar33[9]);
                auVar35[10] = -(auVar34[10] == auVar33[10]);
                auVar35[0xb] = -(auVar34[0xb] == auVar33[0xb]);
                auVar35[0xc] = -(auVar34[0xc] == auVar33[0xc]);
                auVar35[0xd] = -(auVar34[0xd] == auVar33[0xd]);
                auVar35[0xe] = -(auVar34[0xe] == auVar33[0xe]);
                auVar35[0xf] = -(auVar34[0xf] == auVar33[0xf]);
                uVar7 = (ushort)(SUB161(auVar35 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar35[0xf] >> 7) << 0xf;
                uVar14 = (ulonglong)uVar7;
                if (uVar7 != 0) {
                  local_3b8 = lVar22;
                  local_3b0 = uVar13;
                  local_2b8 = auVar34;
                  local_2a8 = auVar33;
                  do {
                    uVar17 = 0;
                    for (uVar8 = (uint)uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                      uVar17 = uVar17 + 1;
                    }
                    uVar13 = uVar17 + uVar15 & local_3b0;
                    local_3a8 = uVar14;
                    if ((lVar11 == *(longlong *)pauVar23[uVar13 * -0xe + -0xd]) &&
                       (iVar9 = (*(code *)PTR_bcmp_00799020)(local_3b0,lVar11), iVar9 == 0)) {
                      ppauVar21 = *(undefined1 (***) [16])pauVar23[uVar13 * -0xe + -9];
                      uVar13 = *(ulonglong *)(pauVar23[uVar13 * -0xe + -9] + 8);
                      lVar11 = local_178 - uVar13;
                      if (local_178 < uVar13) {
                        uVar13 = local_178;
                      }
                      iVar9 = (*(code *)PTR_memcmp_00799528)(extraout_XMM0_Qa,uVar13);
                      if (iVar9 != 0) {
                        lVar11 = (longlong)iVar9;
                      }
                      if (-1 < lVar11) goto LAB_004b4c4d;
                      uVar32 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                               <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>
                                         (local_1b8);
                      pcVar26 = (code *)PTR_memcpy_00799008;
                      goto joined_r0x004b4ce2;
                    }
                    iVar9 = (int)local_3a8 + -1;
                    uVar7 = (ushort)iVar9 & (ushort)local_3a8;
                    uVar14 = (ulonglong)CONCAT22((short)((uint)iVar9 >> 0x10),uVar7);
                    uVar13 = local_3b0;
                    lVar22 = local_3b8;
                    auVar33 = local_2a8;
                    auVar34 = local_2b8;
                  } while (uVar7 != 0);
                }
                auVar36[0] = -(auVar34[0] == -1);
                auVar36[1] = -(auVar34[1] == -1);
                auVar36[2] = -(auVar34[2] == -1);
                auVar36[3] = -(auVar34[3] == -1);
                auVar36[4] = -(auVar34[4] == -1);
                auVar36[5] = -(auVar34[5] == -1);
                auVar36[6] = -(auVar34[6] == -1);
                auVar36[7] = -(auVar34[7] == -1);
                auVar36[8] = -(auVar34[8] == -1);
                auVar36[9] = -(auVar34[9] == -1);
                auVar36[10] = -(auVar34[10] == -1);
                auVar36[0xb] = -(auVar34[0xb] == -1);
                auVar36[0xc] = -(auVar34[0xc] == -1);
                auVar36[0xd] = -(auVar34[0xd] == -1);
                auVar36[0xe] = -(auVar34[0xe] == -1);
                auVar36[0xf] = -(auVar34[0xf] == -1);
                if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
                uVar15 = uVar15 + lVar22 + 0x10;
                lVar22 = lVar22 + 0x10;
              }
            }
LAB_004b4c4d:
            uVar32 = (*(code *)PTR_clone_00798fd0)();
            pcVar26 = (code *)PTR_memcpy_00799008;
            (*(code *)PTR_memcpy_00799008)(uVar32,200);
            ppauVar21 = &local_408;
            uVar32 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::insert(&local_298,ppauVar21,local_1d0,&local_380);
            if (local_298 != (undefined1 (*) [16])0xffffffffffffffff) {
              uVar32 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(&local_298);
            }
joined_r0x004b4ce2:
            plVar29 = plVar30;
          } while (plVar30 != plVar16);
          plVar30 = plVar16;
LAB_004b4cf4:
          local_420 = plVar30;
        }
        <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(&local_428);
        plVar29 = local_3c8;
        if (((local_454 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
          *(undefined1 *)((longlong)plVar27 + 0x14) = 1;
        }
        LOCK();
        lVar11 = *plVar10;
        *(int *)plVar10 = 0;
        UNLOCK();
        if ((int)lVar11 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      else {
        local_454 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        local_454 = local_454 ^ 1;
        if (*(char *)((longlong)plVar27 + 0x14) == '\0') goto LAB_004b49c0;
LAB_004b495b:
        if (((local_454 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
          *(undefined1 *)((longlong)plVar27 + 0x14) = 1;
        }
        LOCK();
        lVar11 = *plVar10;
        *(int *)plVar10 = 0;
        UNLOCK();
        if ((int)lVar11 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      LOCK();
      *local_430 = *local_430 + -1;
      UNLOCK();
      if (*local_430 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
        ::drop_slow(&local_430);
      }
      ppauVar28 = (undefined1 (**) [16])plVar29;
    } while (plVar29 != local_3c0);
  }
  pauVar23 = (undefined1 (*) [16])&local_3a0;
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  auVar33 = *local_408;
  if (uStack_400 == 0) {
    local_380 = (undefined1 (*) [16])0x0;
  }
  else {
    ppauVar21 = (undefined1 (**) [16])(uStack_400 * 0xe1 + 0xf1);
    pauVar23 = local_408 + uStack_400 * -0xe + -0xe;
    local_380 = (undefined1 (*) [16])0x10;
  }
  local_360 = local_408 + 1;
  local_350 = ~((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
  local_358 = *local_408 + uStack_400 + 1;
  local_368 = local_408;
  local_348 = local_3f8._8_8_;
  local_378 = ppauVar21;
  local_370 = pauVar23;
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,std[6c98fd8553dbae28]::collections::hash::map::IntoValues<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>>
  ::from_iter(&local_298,&local_380);
  local_380 = (undefined1 (*) [16])&local_431;
  if (1 < local_288) {
    if (local_288 < 0x15) {
      core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_>
                (plStack_290,local_288,1,&local_380);
    }
    else {
      core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
      <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord,<[craggemini_core[66f3c71560d70857]::subagents::SubagentRecord]>::sort_by<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::collect_subagents::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
                (plStack_290,local_288,&local_380);
    }
  }
  local_3d0[2] = local_288;
  *local_3d0 = (longlong)local_298;
  local_3d0[1] = (longlong)plStack_290;
  return;
}


