// 005cfaf0 send_raw_json

/* WARNING: Switch with 1 destination removed at 0x005cfc37 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_raw_json */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::send_raw_json
          (undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  byte bVar11;
  char cVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  longlong *local_b8;
  undefined1 local_a9;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined ***local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  serde_json[dc3825464c436029]::ser::to_vec::<serde_json[dc3825464c436029]::value::Value>
            (&local_90,param_3);
  ppuVar7 = local_80;
  if (local_90 == (undefined **)0xffffffffffffffff) {
    local_a8 = local_88;
    local_70 = (undefined *)0x0;
    uStack_68 = 1;
    local_60 = 0;
    local_80 = (undefined **)0x60000020;
    local_90 = (undefined **)&local_70;
    local_88 = &PTR_<alloc[12e961f32105355]::string::String>_0078ea48;
    cVar12 = (*(code *)PTR_fmt_00799518)();
    uVar10 = local_60;
    if (cVar12 == '\0') {
      local_48 = (undefined4)local_70;
      uStack_44 = local_70._4_4_;
      uStack_40 = (undefined4)uStack_68;
      uStack_3c = uStack_68._4_4_;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                (&local_a8,&local_90);
      *param_1 = CONCAT44(uStack_44,local_48);
      param_1[1] = CONCAT44(uStack_3c,uStack_40);
      param_1[2] = uVar10;
      return;
    }
    (*(code *)PTR_unwrap_failed_00799028)
              (&DAT_0078e388,&local_a9,
               &PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_0078ea78);
    goto LAB_005cff1b;
  }
  local_a8 = local_90;
  local_a0 = local_88;
  local_98 = local_80;
  if (local_90 == local_80) {
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(&local_a8,local_90,1,1,1);
  }
  *(undefined1 *)((longlong)local_a0 + (longlong)ppuVar7) = 10;
  local_98 = (undefined **)((longlong)ppuVar7 + 1);
  piVar1 = (int *)(param_2 + 0x2c8);
  LOCK();
  bVar16 = *(int *)(param_2 + 0x2c8) == 0;
  if (bVar16) {
    *(int *)(param_2 + 0x2c8) = 1;
  }
  UNLOCK();
  if (!bVar16) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(param_2 + 0x2cc) == '\0') {
      bVar11 = 0;
      lVar14 = *(longlong *)(param_2 + 0x2d0);
      if (lVar14 == 0) goto LAB_005cfdca;
LAB_005cfcde:
      LOCK();
      *(longlong *)(lVar14 + 0x1f0) = *(longlong *)(lVar14 + 0x1f0) + 1;
      UNLOCK();
      plVar15 = *(longlong **)(param_2 + 0x2d0);
      LOCK();
      lVar14 = *plVar15;
      *plVar15 = *plVar15 + 1;
      UNLOCK();
      if (*plVar15 == 0 || SCARRY8(lVar14,1) != *plVar15 < 0) goto LAB_005cff1b;
      plVar15 = *(longlong **)(param_2 + 0x2d0);
      goto joined_r0x005cfd02;
    }
LAB_005cfbaa:
    if (((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(param_2 + 0x2cc) = 1;
    }
LAB_005cfbb6:
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (*(char *)(param_2 + 0x2cc) != '\0') {
      if (bVar11 != 0) goto LAB_005cfbaa;
      goto LAB_005cfbb6;
    }
    bVar11 = bVar11 ^ 1;
    lVar14 = *(longlong *)(param_2 + 0x2d0);
    if (lVar14 != 0) goto LAB_005cfcde;
LAB_005cfdca:
    plVar15 = (longlong *)0x0;
joined_r0x005cfd02:
    if (((bVar11 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(param_2 + 0x2cc) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    ppuVar9 = local_98;
    ppuVar8 = local_a0;
    ppuVar7 = local_a8;
    if (plVar15 != (longlong *)0x0) {
      local_b8 = plVar15;
      cVar12 = (*(code *)PTR_try_acquire_00799318)();
      if (cVar12 == '\0') {
        local_90 = (undefined **)0x1;
      }
      else {
        if (cVar12 == '\x02') {
          local_90 = ppuVar7;
          local_88 = ppuVar8;
          local_80 = ppuVar9;
          <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          ::send(&local_b8,&local_90);
          *param_1 = 0xffffffffffffffff;
          goto LAB_005cfec2;
        }
        local_90 = (undefined **)0x0;
      }
      local_88 = ppuVar7;
      local_80 = ppuVar8;
      local_78 = ppuVar9;
      local_58 = &local_90;
      local_50 = <tokio[d7d91d38da47d894]::sync::mpsc::error::TrySendError<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::fmt::Display>
                 ::fmt;
      uVar17 = (*(code *)PTR_format_inner_00799048)(extraout_XMM0_Da,&local_58);
      if (local_88 != (undefined **)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,1);
      }
      param_1[2] = local_60;
      *(undefined4 *)param_1 = (undefined4)local_70;
      *(undefined4 *)((longlong)param_1 + 4) = local_70._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
LAB_005cfec2:
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_b8);
      LOCK();
      *local_b8 = *local_b8 + -1;
      UNLOCK();
      if (*local_b8 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(&local_b8);
        return;
      }
      return;
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar13 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar5 = _UNK_0019de36;
  uVar4 = _UNK_0019de32;
  uVar17 = _UNK_0019de2e;
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = _DAT_0019de2a;
    puVar13[1] = uVar17;
    puVar13[2] = uVar4;
    puVar13[3] = uVar5;
    *(undefined8 *)((longlong)puVar13 + 0xf) = 0x6465736f6c632072;
    *param_1 = 0x17;
    param_1[1] = puVar13;
    param_1[2] = 0x17;
    if (local_a8 == (undefined **)0x0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(0x6465736f6c632072,1);
    return;
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005cff1b:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


