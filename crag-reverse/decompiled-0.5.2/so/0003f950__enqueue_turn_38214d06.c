// 0003f950 enqueue_turn

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <agy_bridge[64a9e9deac6c45ce]::Runtime>::enqueue_turn */

undefined8 __rustcall
<agy_bridge[64a9e9deac6c45ce]::Runtime>::enqueue_turn
          (undefined4 param_1,longlong param_2,longlong *param_3,ulonglong *param_4,
          undefined1 param_5,undefined1 param_6,longlong param_7,longlong param_8,undefined1 param_9
          ,longlong *param_10,undefined4 param_11,undefined4 param_12,undefined1 param_13,
          ulonglong *param_14)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *puVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_378;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_270;
  undefined8 local_1c0;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined4 local_16f;
  
  piVar1 = (int *)(param_2 + 0x58);
  LOCK();
  bVar27 = *(int *)(param_2 + 0x58) == 0;
  if (bVar27) {
    *(int *)(param_2 + 0x58) = 1;
  }
  UNLOCK();
  if (!bVar27) {
    param_1 = (*(code *)PTR_lock_contended_000c3c80)();
  }
  puVar17 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    bVar18 = 0;
    cVar19 = *(char *)(param_2 + 0x5c);
  }
  else {
    bVar18 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    bVar18 = bVar18 ^ 1;
    cVar19 = *(char *)(param_2 + 0x5c);
    param_1 = extraout_XMM0_Da_00;
  }
  if (cVar19 != '\0') {
    uVar21 = (*(code *)PTR_<&str>_000c3b30)(param_1,0x15);
    uVar28 = extraout_XMM0_Da;
    if ((bVar18 == 0) && ((*(ulonglong *)puVar17 & 0x7fffffffffffffff) != 0)) {
      cVar19 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
      uVar28 = extraout_XMM0_Da_04;
      if (cVar19 == '\0') {
        *(undefined1 *)(param_2 + 0x5c) = 1;
      }
    }
    LOCK();
    iVar20 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    bVar27 = true;
    if (iVar20 == 2) {
      bVar27 = true;
      uVar28 = (*(code *)PTR_wake_000c3ad0)();
    }
    goto LAB_0003fb78;
  }
  if (*(int *)(param_2 + 0x60) == 2) {
    plVar24 = param_3;
    if (((*(char *)(param_2 + 0x4c0) == '\0') && (*(longlong *)(param_2 + 0x4a8) != -1)) &&
       (param_7 != 0)) {
      uVar21 = 0x29;
      if (param_8 == *(longlong *)(param_2 + 0x4b8)) {
        plVar24 = *(longlong **)(param_2 + 0x4b0);
        iVar20 = (*(code *)PTR_bcmp_000c3b80)();
        param_1 = extraout_XMM0_Da_01;
        if (iVar20 == 0) goto LAB_0003faa2;
      }
      goto LAB_0003fb2d;
    }
LAB_0003faa2:
    uVar2 = *param_4;
    uVar23 = param_4[1];
    uVar3 = param_4[2];
    lVar25 = uVar3 + 0x10;
    lVar22 = *(longlong *)(param_2 + 0x410) + *(longlong *)(param_2 + 0x3f8);
    uVar26 = *(longlong *)(param_2 + 0x418) + lVar25 + lVar22;
    if (uVar26 < 0x4000001) {
      lVar4 = *(longlong *)(param_2 + 0x400);
      lVar5 = *(longlong *)(param_2 + 0x408);
      *(undefined8 *)(param_2 + 0x400) = 0;
      local_378 = lVar25;
      if (lVar4 != 0) {
        *(longlong *)(param_2 + 0x3f8) = lVar22;
        *(undefined8 *)(param_2 + 0x410) = 0;
        lVar22 = *(longlong *)(param_2 + 0x3c0);
        if (lVar22 == *(longlong *)(param_2 + 0x3b0)) {
          <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<str>>>::
          grow_one(param_2 + 0x3b0,plVar24);
        }
        lVar6 = *(longlong *)(param_2 + 0x3b8);
        *(longlong *)(lVar6 + lVar22 * 0x10) = lVar4;
        *(longlong *)(lVar6 + 8 + lVar22 * 0x10) = lVar5;
        *(longlong *)(param_2 + 0x3c0) = lVar22 + 1;
        local_378 = lVar5;
      }
      if (uVar3 < uVar2) {
        if (uVar3 == 0) {
          uVar23 = 1;
          local_378 = 1;
          (*(code *)PTR___rust_dealloc_000c3aa0)();
          *(undefined8 *)(param_2 + 0x410) = 0x10;
          lVar25 = *(longlong *)(param_2 + 0x400);
          goto joined_r0x0003fd0c;
        }
        local_378 = 1;
        uVar23 = (*(code *)PTR___rust_realloc_000c3c40)(uVar3);
        if (uVar23 == 0) {
          (*(code *)PTR_handle_error_000c3a98)(uVar2);
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
      }
      *(longlong *)(param_2 + 0x410) = lVar25;
      lVar25 = *(longlong *)(param_2 + 0x400);
joined_r0x0003fd0c:
      if ((lVar25 != 0) && (*(longlong *)(param_2 + 0x408) != 0)) {
        local_378 = 1;
        (*(code *)PTR___rust_dealloc_000c3aa0)();
      }
      *(ulonglong *)(param_2 + 0x400) = uVar23;
      *(ulonglong *)(param_2 + 0x408) = uVar3;
      local_198 = 0;
      local_288 = 0xffffffffffffffff;
      local_170 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_270 = 0xffffffffffffffff;
      local_1a0 = 0xffffffff;
      local_1c0 = 0xffffffffffffffff;
      local_180 = 0;
      uStack_178 = 0;
      local_2a0 = 0;
      local_298 = 1;
      local_290 = 0;
      local_16f = 0;
      plVar24 = (longlong *)__tls_get_addr();
      if ((char)plVar24[2] == '\x01') {
        lVar25 = *plVar24;
        local_378 = plVar24[1];
      }
      else {
        lVar25 = (*(code *)PTR_hashmap_random_keys_000c3c98)();
        *plVar24 = lVar25;
        plVar24[1] = local_378;
        *(undefined1 *)(plVar24 + 2) = 1;
      }
      *plVar24 = lVar25 + 3;
      lVar22 = param_3[2];
      lVar4 = *param_3;
      lVar5 = param_3[1];
      uVar2 = *param_14;
      uVar26 = param_14[1];
      uVar9 = param_14[2];
      uVar28 = *(undefined4 *)((longlong)param_14 + 0x14);
      uVar10 = param_14[3];
      uVar8 = *(undefined4 *)((longlong)param_14 + 0x1c);
      (*(code *)PTR_memcpy_000c3aa8)((int)*param_14,0x138);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<agy_bridge[64a9e9deac6c45ce]::Turn>>
                (param_2 + 0x60,&local_2a0);
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      local_2b8 = (undefined4)lVar4;
      uStack_2b4 = (undefined4)((ulonglong)lVar4 >> 0x20);
      uStack_2b0 = (undefined4)lVar5;
      uStack_2ac = (undefined4)((ulonglong)lVar5 >> 0x20);
      local_2a8 = (undefined4)lVar22;
      uStack_2a4 = (undefined4)((ulonglong)lVar22 >> 0x20);
      *(undefined4 *)(param_2 + 0x90) = local_2e0;
      *(undefined4 *)(param_2 + 0x94) = uStack_2dc;
      *(undefined4 *)(param_2 + 0x98) = uStack_2d8;
      *(undefined4 *)(param_2 + 0x9c) = uStack_2d4;
      *(undefined4 *)(param_2 + 0xa0) = local_2d0;
      *(undefined4 *)(param_2 + 0xa4) = uStack_2cc;
      *(undefined4 *)(param_2 + 0xa8) = uStack_2c8;
      *(undefined4 *)(param_2 + 0xac) = uStack_2c4;
      *(undefined4 *)(param_2 + 0xb0) = uStack_2c0;
      *(undefined4 *)(param_2 + 0xb4) = uStack_2bc;
      *(undefined4 *)(param_2 + 0xb8) = local_2b8;
      *(undefined4 *)(param_2 + 0xbc) = uStack_2b4;
      *(undefined4 *)(param_2 + 0xc0) = uStack_2b0;
      *(undefined4 *)(param_2 + 0xc4) = uStack_2ac;
      *(undefined4 *)(param_2 + 200) = local_2a8;
      *(undefined4 *)(param_2 + 0xcc) = uStack_2a4;
      (*(code *)PTR_memcpy_000c3aa8)(local_2e0,0x138);
      *(undefined8 *)(param_2 + 0x208) = 0;
      *(undefined8 *)(param_2 + 0x210) = 8;
      *(undefined8 *)(param_2 + 0x218) = 0;
      *(undefined8 *)(param_2 + 0x220) = 0;
      *(undefined8 *)(param_2 + 0x228) = 0;
      *(undefined8 *)(param_2 + 0x230) = 8;
      *(undefined8 *)(param_2 + 0x238) = 0;
      *(undefined8 *)(param_2 + 0x240) = 0;
      *(undefined8 *)(param_2 + 0x248) = 0;
      *(undefined8 *)(param_2 + 0x250) = 8;
      *(undefined8 *)(param_2 + 600) = 0;
      *(undefined8 *)(param_2 + 0x260) = 0;
      lVar22 = param_10[1];
      *(longlong *)(param_2 + 0x268) = *param_10;
      *(longlong *)(param_2 + 0x270) = lVar22;
      *(longlong *)(param_2 + 0x278) = param_10[2];
      *(undefined8 *)(param_2 + 0x280) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x298) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x2a0) = local_310;
      *(undefined8 *)(param_2 + 0x2a8) = uStack_308;
      *(ulonglong *)(param_2 + 0x2b0) = uVar2;
      *(ulonglong *)(param_2 + 0x2b8) = uVar26;
      *(int *)(param_2 + 0x2c0) = (int)uVar9;
      *(undefined4 *)(param_2 + 0x2c4) = uVar28;
      *(int *)(param_2 + 0x2c8) = (int)uVar10;
      *(undefined4 *)(param_2 + 0x2cc) = uVar8;
      *(undefined4 *)(param_2 + 0x2d0) = param_11;
      *(undefined4 *)(param_2 + 0x2d4) = param_12;
      uVar16 = _UNK_000bfbf4;
      uVar15 = _UNK_000bfbf0;
      uVar14 = _UNK_000bfbec;
      uVar13 = _DAT_000bfbe8;
      *(undefined4 *)(param_2 + 0x2e8) = _DAT_000bfbe8;
      *(undefined4 *)(param_2 + 0x2ec) = uVar14;
      *(undefined4 *)(param_2 + 0x2f0) = uVar15;
      *(undefined4 *)(param_2 + 0x2f4) = uVar16;
      uVar12 = _UNK_000bfbe4;
      uVar11 = _UNK_000bfbe0;
      uVar8 = PTR_DAT_000bfbd8._4_4_;
      uVar28 = PTR_DAT_000bfbd8._0_4_;
      *(undefined4 *)(param_2 + 0x2d8) = PTR_DAT_000bfbd8._0_4_;
      *(undefined4 *)(param_2 + 0x2dc) = uVar8;
      *(undefined4 *)(param_2 + 0x2e0) = uVar11;
      *(undefined4 *)(param_2 + 0x2e4) = uVar12;
      *(longlong *)(param_2 + 0x2f8) = lVar25;
      *(longlong *)(param_2 + 0x300) = local_378;
      *(undefined4 *)(param_2 + 0x318) = uVar13;
      *(undefined4 *)(param_2 + 0x31c) = uVar14;
      *(undefined4 *)(param_2 + 800) = uVar15;
      *(undefined4 *)(param_2 + 0x324) = uVar16;
      *(undefined4 *)(param_2 + 0x308) = uVar28;
      *(undefined4 *)(param_2 + 0x30c) = uVar8;
      *(undefined4 *)(param_2 + 0x310) = uVar11;
      *(undefined4 *)(param_2 + 0x314) = uVar12;
      *(longlong *)(param_2 + 0x328) = lVar25 + 1;
      *(longlong *)(param_2 + 0x330) = local_378;
      *(undefined4 *)(param_2 + 0x348) = uVar13;
      *(undefined4 *)(param_2 + 0x34c) = uVar14;
      *(undefined4 *)(param_2 + 0x350) = uVar15;
      *(undefined4 *)(param_2 + 0x354) = uVar16;
      *(undefined4 *)(param_2 + 0x338) = uVar28;
      *(undefined4 *)(param_2 + 0x33c) = uVar8;
      *(undefined4 *)(param_2 + 0x340) = uVar11;
      *(undefined4 *)(param_2 + 0x344) = uVar12;
      *(longlong *)(param_2 + 0x358) = lVar25 + 2;
      *(longlong *)(param_2 + 0x360) = local_378;
      *(ulonglong *)(param_2 + 0x368) = uVar23;
      *(ulonglong *)(param_2 + 0x370) = uVar3;
      *(undefined4 *)(param_2 + 0x378) = 1;
      *(undefined1 *)(param_2 + 0x37c) = param_5;
      *(undefined1 *)(param_2 + 0x37d) = param_6;
      *(undefined1 *)(param_2 + 0x37e) = param_9;
      *(undefined2 *)(param_2 + 0x387) = 0;
      *(undefined8 *)(param_2 + 0x37f) = 0;
      *(undefined1 *)(param_2 + 0x389) = param_13;
      *(undefined1 *)(param_2 + 0x4cd) = 1;
      if (((bVar18 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
         (cVar19 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar19 == '\0')) {
        *(undefined1 *)(param_2 + 0x5c) = 1;
      }
      LOCK();
      iVar20 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar20 == 2) {
        (*(code *)PTR_wake_000c3ad0)();
        return 0;
      }
      return 0;
    }
    uVar21 = (*(code *)PTR_<&str>_000c3b30)(uVar26,0x25);
    uVar28 = extraout_XMM0_Da_02;
    if (uVar2 != 0) {
      uVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da_02,1);
    }
    bVar27 = false;
  }
  else {
    uVar21 = 0x1b;
LAB_0003fb2d:
    uVar21 = (*(code *)PTR_<&str>_000c3b30)(param_1,uVar21);
    bVar27 = true;
    uVar28 = extraout_XMM0_Da_03;
  }
  if ((bVar18 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0))
  {
    cVar19 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
    uVar28 = extraout_XMM0_Da_05;
    if (cVar19 == '\0') {
      *(undefined1 *)(param_2 + 0x5c) = 1;
    }
  }
  LOCK();
  iVar20 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar20 == 2) {
    uVar28 = (*(code *)PTR_wake_000c3ad0)();
  }
LAB_0003fb78:
  if ((*param_14 < 0xfffffffffffffffe) && (*param_14 != 0)) {
    uVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar28,1);
  }
  if ((*param_10 != -1) && (*param_10 != 0)) {
    uVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar28,1);
  }
  if ((bVar27) && (*param_4 != 0)) {
    uVar28 = (*(code *)PTR___rust_dealloc_000c3aa0)(uVar28,1);
  }
  if (*param_3 != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar28,1);
  }
  return uVar21;
}


