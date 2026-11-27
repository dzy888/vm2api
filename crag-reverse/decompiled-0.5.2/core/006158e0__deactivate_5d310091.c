// 006158e0 deactivate

/* <craggemini_core[66f3c71560d70857]::server::Runtime>::deactivate */

void __rustcall
<craggemini_core[66f3c71560d70857]::server::Runtime>::deactivate
          (longlong param_1,byte param_2,byte param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  undefined8 uStack_488;
  longlong local_480;
  longlong local_478;
  longlong local_470;
  longlong local_468;
  longlong lStack_460;
  longlong local_458;
  undefined8 local_448;
  int *local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  
  <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::fail_all_pending
            (*(longlong *)(param_1 + 0x2d8) + 0x10,"native session deactivated",0x1a);
  piVar1 = (int *)(param_1 + 0x4d0);
  LOCK();
  bVar18 = *(int *)(param_1 + 0x4d0) == 0;
  if (bVar18) {
    *(int *)(param_1 + 0x4d0) = 1;
  }
  UNLOCK();
  if (!bVar18) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar11 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
    cVar13 = *(char *)(param_1 + 0x4d4);
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
    cVar13 = *(char *)(param_1 + 0x4d4);
  }
  if (cVar13 == '\0') {
    uVar19 = <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::clear
                       (param_1 + 0x4d8);
    if (((bVar12 == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar19 = extraout_XMM0_Da_00,
       cVar13 == '\0')) {
      *(undefined1 *)(param_1 + 0x4d4) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      uVar19 = (*(code *)PTR_wake_00799010)();
    }
    piVar1 = (int *)(param_1 + 0x310);
    LOCK();
    bVar18 = *(int *)(param_1 + 0x310) == 0;
    if (bVar18) {
      *(int *)(param_1 + 0x310) = 1;
    }
    UNLOCK();
    if (!bVar18) {
      uVar19 = (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) == 0) {
      bVar12 = 0;
      cVar13 = *(char *)(param_1 + 0x314);
    }
    else {
      bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar12 = bVar12 ^ 1;
      cVar13 = *(char *)(param_1 + 0x314);
      uVar19 = extraout_XMM0_Da;
    }
    if (cVar13 == '\0') {
      local_438 = piVar1;
      if (*(longlong *)(param_1 + 0x3c8) != -1) {
        if (*(longlong *)(param_1 + 0x3c8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
        }
        plVar3 = *(longlong **)(param_1 + 0x3e0);
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
          drop_slow(param_1 + 0x3e0);
        }
      }
      *(undefined8 *)(param_1 + 0x3c8) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined8 *)(param_1 + 0x400) = 0;
      *(char **)(param_1 + 0x3f0) = "inline_socket_v1";
      *(undefined8 *)(param_1 + 0x3f8) = 0x10;
      *(undefined2 *)(param_1 + 0x411) = 0;
      *(byte *)(param_1 + 0x413) = *(byte *)(param_1 + 0x413) | param_3;
      *(byte *)(param_1 + 0x414) = *(byte *)(param_1 + 0x414) | param_2;
      lVar17 = *(longlong *)(param_1 + 0x348);
      local_478 = param_1 + 0x330;
      *(undefined8 *)(param_1 + 0x348) = 0;
      puVar11 = PTR_memcpy_00799008;
      local_468 = 0;
      lStack_460 = 0;
      local_470 = lVar17;
      local_458 = lVar17;
      if (lVar17 != 0) {
        lVar4 = 0;
        do {
          lVar14 = lVar4;
          lVar17 = lVar17 + -1;
          uVar15 = 0;
          if (*(ulonglong *)(param_1 + 0x330) <=
              (ulonglong)(*(longlong *)(param_1 + 0x340) + lVar14)) {
            uVar15 = *(ulonglong *)(param_1 + 0x330);
          }
          lVar4 = *(longlong *)
                   (*(longlong *)(param_1 + 0x338) +
                   ((*(longlong *)(param_1 + 0x340) - uVar15) + lVar14) * 0x3b0);
          if (lVar4 == 2) goto LAB_00615b7b;
          (*(code *)puVar11)(uVar15,0x3a8);
          local_3e0 = (int *)lVar4;
          <craggemini_core[66f3c71560d70857]::protocol::Failure_as_core[c0acaeba6ab4c2e0]::clone::Clone>
          ::clone(&local_428,param_4);
          <craggemini_core[66f3c71560d70857]::server::Turn>::settle_err(&local_3e0,&local_428);
          lVar4 = lVar14 + 1;
        } while (lVar17 != 0);
        lVar17 = 0;
LAB_00615b7b:
        local_468 = lVar14 + 1;
        local_458 = lVar17;
      }
      <alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::server::Turn>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_478);
      lVar17 = *(longlong *)(param_1 + 0x368);
      local_4a0 = param_1 + 0x350;
      *(undefined8 *)(param_1 + 0x368) = 0;
      local_490 = 0;
      uStack_488 = 0;
      local_498 = lVar17;
      local_480 = lVar17;
      if (lVar17 != 0) {
        lVar4 = 0;
        do {
          lVar14 = lVar4;
          lVar17 = lVar17 + -1;
          lVar4 = *(longlong *)(param_1 + 0x358);
          uVar15 = 0;
          if (*(ulonglong *)(param_1 + 0x350) <=
              (ulonglong)(lVar14 + *(longlong *)(param_1 + 0x360))) {
            uVar15 = *(ulonglong *)(param_1 + 0x350);
          }
          lVar16 = ((*(longlong *)(param_1 + 0x360) - uVar15) + lVar14) * 0x68;
          lVar5 = *(longlong *)(lVar4 + lVar16);
          if (lVar5 == -1) goto LAB_00615deb;
          lVar6 = *(longlong *)(lVar4 + 0x18 + lVar16);
          lVar7 = *(longlong *)(lVar4 + 0x30 + lVar16);
          lVar8 = *(longlong *)(lVar4 + 0x48 + lVar16);
          uVar9 = *(undefined8 *)(lVar4 + 0x60 + lVar16);
          local_430 = uVar9;
          <craggemini_core[66f3c71560d70857]::protocol::Failure_as_core[c0acaeba6ab4c2e0]::clone::Clone>
          ::clone(&local_3e0,param_4);
          local_3f8 = local_3b0;
          uStack_3f4 = uStack_3ac;
          uStack_3f0 = uStack_3a8;
          uStack_3ec = uStack_3a4;
          local_408 = local_3c0;
          uStack_404 = uStack_3bc;
          uStack_400 = uStack_3b8;
          uStack_3fc = uStack_3b4;
          local_418 = local_3d0;
          uStack_414 = uStack_3cc;
          uStack_410 = uStack_3c8;
          uStack_40c = uStack_3c4;
          local_428 = (undefined4)local_3e0;
          uStack_424 = local_3e0._4_4_;
          uStack_420 = uStack_3d8;
          uStack_41c = uStack_3d4;
          uVar19 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                   ::send(&local_478,uVar9,&local_428);
          if (local_478 != -3) {
            if (local_478 == -2) {
              uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_470);
            }
            else {
              if ((local_478 != -1) && (local_478 != 0)) {
                uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
              }
              if ((lStack_460 != -1) && (lStack_460 != 0)) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
              }
              uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                                 (local_448);
            }
          }
          if (lVar5 != 0) {
            uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
          }
          if (lVar6 != 0) {
            uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
          }
          if (lVar7 - 1U < 0xfffffffffffffffe) {
            uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
          }
          if (lVar8 - 1U < 0xfffffffffffffffe) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
          }
          lVar4 = lVar14 + 1;
        } while (lVar17 != 0);
        lVar17 = 0;
LAB_00615deb:
        local_490 = lVar14 + 1;
        local_480 = lVar17;
      }
      uVar19 = <alloc[12e961f32105355]::collections::vec_deque::drain::Drain<craggemini_core[66f3c71560d70857]::server::ControlJob>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(&local_4a0);
      if (((bVar12 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar19 = extraout_XMM0_Da_01,
         cVar13 == '\0')) {
        *(undefined1 *)(param_1 + 0x314) = 1;
      }
      LOCK();
      iVar2 = *(int *)(param_1 + 0x310);
      *(int *)(param_1 + 0x310) = 0;
      UNLOCK();
      if (iVar2 == 2) {
        uVar19 = (*(code *)PTR_wake_00799010)();
      }
      if ((*param_4 != -1) && (*param_4 != 0)) {
        uVar19 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
      }
      if ((param_4[3] != -1) && (param_4[3] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar19,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_4[6]);
      return;
    }
    uStack_3d8._1_3_ = (undefined3)((uint)uStack_3d8 >> 8);
    uStack_3d8 = CONCAT31(uStack_3d8._1_3_,bVar12);
    local_3e0 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_282_llvm_10049508496007902178,&local_3e0,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_476_llvm_10049508496007902178);
  }
  else {
    uStack_3d8._1_3_ = (undefined3)((uint)uStack_3d8 >> 8);
    uStack_3d8 = CONCAT31(uStack_3d8._1_3_,bVar12);
    local_3e0 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_283_llvm_10049508496007902178,&local_3e0,
               &anon_1b4a85c95499e1b671cf4fa96a1b6d0f_480_llvm_10049508496007902178);
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}


