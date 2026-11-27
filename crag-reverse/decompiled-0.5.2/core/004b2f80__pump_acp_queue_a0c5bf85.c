// 004b2f80 pump_acp_queue

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::pump_acp_queue */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::pump_acp_queue
          (longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined *puVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [3];
  longlong local_60;
  undefined8 local_48;
  longlong local_38;
  
  uVar2 = *(ulonglong *)(param_1 + 0x48);
  local_38 = (*(code *)PTR_now_00799250)();
  puVar11 = PTR_is_cancelled_00799260;
  if ((*(char *)(param_2 + 0x1c0) == '\0') && (*(ulonglong *)(param_2 + 0x108) < uVar2)) {
    while (*(longlong *)(param_2 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_2 + 0x40);
      uVar14 = *(ulonglong *)(param_2 + 0x30);
      lVar3 = *(longlong *)(param_2 + 0x38);
      if (lVar13 + 1U < uVar14) {
        uVar14 = 0;
      }
      *(ulonglong *)(param_2 + 0x40) = (lVar13 - uVar14) + 1;
      *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + -1;
      lVar13 = lVar13 * 0x38;
      local_f0 = *(longlong *)(lVar3 + lVar13);
      puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar13);
      puVar4 = (undefined *)*puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar13);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 8 + lVar13);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      if (local_f0 == -1) {
        return;
      }
      local_b8._0_4_ = (undefined4)uVar8;
      local_b8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_b0._0_4_ = (undefined4)uVar9;
      uStack_b0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_a8._0_4_ = (undefined4)uVar6;
      local_a8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_a0._0_4_ = (uint)uVar7;
      uStack_a0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_98._0_4_ = SUB84(puVar4,0);
      local_98._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
      uStack_90._0_4_ = (undefined4)uVar5;
      uStack_90._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_c8 = (undefined4)local_98;
      uStack_c4 = local_98._4_4_;
      uStack_c0 = (undefined4)uStack_90;
      uStack_bc = uStack_90._4_4_;
      local_d8 = (undefined4)local_a8;
      uStack_d4 = local_a8._4_4_;
      uStack_d0 = (uint)uStack_a0;
      uStack_cc = uStack_a0._4_4_;
      local_e8 = (undefined4)local_b8;
      uStack_e4 = local_b8._4_4_;
      uStack_e0 = (undefined4)uStack_b0;
      uStack_dc = uStack_b0._4_4_;
      local_b8 = (longlong *)uVar8;
      uStack_b0 = uVar9;
      local_a8 = uVar6;
      uStack_a0 = uVar7;
      local_98 = puVar4;
      uStack_90 = uVar5;
      cVar12 = (*(code *)puVar11)();
      if (cVar12 == '\0') {
        cVar12 = (*(code *)puVar11)();
        if (cVar12 == '\0') {
          if (local_38 == CONCAT44(uStack_d4,local_d8)) {
            if (uStack_d0 <= param_3) {
LAB_004b335c:
              local_88 = _DAT_0078b920;
              uStack_80 = _UNK_0078b928;
              local_98 = PTR_s_native_queue_wait_timed_outcalle_0078b910;
              uStack_90 = _UNK_0078b918;
              local_a8 = _DAT_0078b900;
              uStack_a0 = _UNK_0078b908;
              local_b8 = (longlong *)CONCAT44(_UNK_0078b8f4,_DAT_0078b8f0);
              uStack_b0 = CONCAT44(_UNK_0078b8fc,_UNK_0078b8f8);
              uVar15 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                       ::send(local_78,CONCAT44(uStack_bc,uStack_c0),&local_b8);
              if (-2 < local_78[0]) {
                if ((local_78[0] != -1) && (local_78[0] != 0)) {
                  uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
                }
                if ((local_60 != -1) && (local_60 != 0)) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
                }
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                          (local_48);
              }
              local_b8 = (longlong *)
                         <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                         ::remove::<alloc[12e961f32105355]::string::String>
                                   (param_2 + 0x150,&local_f0);
              uVar15 = extraout_XMM0_Da_02;
              if (local_b8 != (longlong *)0x0) {
                LOCK();
                *local_b8 = *local_b8 + -1;
                UNLOCK();
                if (*local_b8 == 0) {
                  uVar15 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                           ::drop_slow(&local_b8);
                }
              }
              goto LAB_004b3440;
            }
          }
          else if (CONCAT44(uStack_d4,local_d8) <= local_38) goto LAB_004b335c;
          local_b8 = (longlong *)0xfffffffffffffffe;
          uVar15 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                   ::send(local_78,CONCAT44(uStack_bc,uStack_c0),&local_b8);
          if (local_78[0] == -3) {
            if (local_f0 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
            LOCK();
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
              <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
              ::drop_slow(&local_c8);
              return;
            }
            return;
          }
          if (-2 < local_78[0]) {
            if ((local_78[0] != -1) && (local_78[0] != 0)) {
              uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            if ((local_60 != -1) && (local_60 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                      (local_48);
          }
          local_b8 = (longlong *)
                     <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::remove::<alloc[12e961f32105355]::string::String>(param_2 + 0x150,&local_f0);
          uVar15 = extraout_XMM0_Da_01;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            *local_b8 = *local_b8 + -1;
            UNLOCK();
            if (*local_b8 == 0) {
              uVar15 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                       ::drop_slow(&local_b8);
            }
          }
        }
        else {
          local_88 = _DAT_0078b960;
          uStack_80 = _UNK_0078b968;
          local_98 = PTR_s_caller_disconnected_0078b950;
          uStack_90 = _UNK_0078b958;
          local_a8 = _DAT_0078b940;
          uStack_a0 = _UNK_0078b948;
          local_b8 = (longlong *)CONCAT44(_UNK_0078b934,_DAT_0078b930);
          uStack_b0 = CONCAT44(_UNK_0078b93c,_UNK_0078b938);
          uVar15 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                   ::send(local_78,CONCAT44(uStack_bc,uStack_c0),&local_b8);
          if (-2 < local_78[0]) {
            if ((local_78[0] != -1) && (local_78[0] != 0)) {
              uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            if ((local_60 != -1) && (local_60 != 0)) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
            }
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                      (local_48);
          }
          local_b8 = (longlong *)
                     <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                     ::remove::<alloc[12e961f32105355]::string::String>(param_2 + 0x150,&local_f0);
          uVar15 = extraout_XMM0_Da_00;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            *local_b8 = *local_b8 + -1;
            UNLOCK();
            if (*local_b8 == 0) {
              uVar15 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                       ::drop_slow(&local_b8);
            }
          }
        }
      }
      else {
        local_88 = _DAT_0078b8c8;
        uStack_80 = _UNK_0078b8d0;
        local_98 = PTR_s_native_turn_cancelledqueue_timeo_0078b8b8;
        uStack_90 = _UNK_0078b8c0;
        local_a8 = _DAT_0078b8a8;
        uStack_a0 = _UNK_0078b8b0;
        local_b8 = (longlong *)CONCAT44(_UNK_0078b89c,_DAT_0078b898);
        uStack_b0 = CONCAT44(_UNK_0078b8a4,_UNK_0078b8a0);
        uVar15 = <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>
                 ::send(local_78,CONCAT44(uStack_bc,uStack_c0),&local_b8);
        if (-2 < local_78[0]) {
          if ((local_78[0] != -1) && (local_78[0] != 0)) {
            uVar15 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          }
          if ((local_60 != -1) && (local_60 != 0)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                    (local_48);
        }
        local_b8 = (longlong *)
                   <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::remove::<alloc[12e961f32105355]::string::String>(param_2 + 0x150,&local_f0);
        uVar15 = extraout_XMM0_Da;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *local_b8 = *local_b8 + -1;
          UNLOCK();
          if (*local_b8 == 0) {
            uVar15 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
                     ::drop_slow(&local_b8);
          }
        }
      }
LAB_004b3440:
      if (local_f0 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,1);
      }
      plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
      LOCK();
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(&local_c8);
      }
      if (*(char *)(param_2 + 0x1c0) != '\0') {
        return;
      }
      if (uVar2 <= *(ulonglong *)(param_2 + 0x108)) {
        return;
      }
    }
  }
  return;
}


