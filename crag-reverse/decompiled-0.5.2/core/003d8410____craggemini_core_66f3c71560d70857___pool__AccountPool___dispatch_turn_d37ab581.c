// 003d8410 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_>
          (longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  switch(*(undefined1 *)(param_1 + 0x3b98)) {
  case 0:
    plVar5 = *(longlong **)(param_1 + 0x3c8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x3c8);
    }
    <craggemini_core[66f3c71560d70857]::server::Turn>(param_1);
    plVar5 = *(longlong **)(param_1 + 0x3f8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
        ::drop_slow(param_1 + 0x3f8);
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x400);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x400);
      return;
    }
    return;
  default:
    goto switchD_003d843b_caseD_1;
  case 3:
    switch(*(undefined1 *)(param_1 + 0x4818)) {
    case 0:
      plVar5 = *(longlong **)(param_1 + 0x3f70);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x3f70);
      }
      <craggemini_core[66f3c71560d70857]::server::Turn>(param_1 + 0x3bb8);
      plVar5 = *(longlong **)(param_1 + 0x3fa0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
          ::drop_slow(param_1 + 0x3fa0);
        }
      }
      plVar5 = *(longlong **)(param_1 + 0x3fa8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
          ::drop_slow(param_1 + 0x3fa8);
        }
      }
    default:
      goto switchD_003d86e6_caseD_1;
    case 3:
      <<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::_closure_0_>
                (param_1 + 0x4838);
      goto LAB_003d9641;
    case 4:
      if (*(char *)(param_1 + 0x4a48) != '\x03') {
        if (*(char *)(param_1 + 0x4a48) == '\0') {
          plVar5 = *(longlong **)(param_1 + 0x4870);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
            ::drop_slow(param_1 + 0x4870);
          }
        }
        goto LAB_003d9605;
      }
      puVar1 = (undefined8 *)(param_1 + 0x49c0);
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(puVar1);
        }
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x4910) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x4910) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x4958) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x4958) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x49a0) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x49a0) + 0x18))();
      }
      if (*(char *)(param_1 + 0x49c8) == '\0') {
        plVar5 = *(longlong **)(param_1 + 0x49d0);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x49d0);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x49d8);
      *(undefined1 *)(param_1 + 0x4a4b) = 0;
      plVar5 = *(longlong **)(param_1 + 0x48c8);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_1 + 0x48c8);
      }
      *(undefined1 *)(param_1 + 0x4a4a) = 0;
      if (*(char *)(param_1 + 0x4825) == '\0') goto LAB_003d9641;
      goto LAB_003d960e;
    case 5:
      if (*(char *)(param_1 + 0x5580) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
                  (param_1 + 0x4b98);
        <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x4b80);
        *(undefined4 *)(param_1 + 0x5581) = 0;
      }
      else if (*(char *)(param_1 + 0x5580) == '\0') {
        <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 0x4908);
      }
      *(undefined1 *)(param_1 + 0x4836) = 0;
      plVar5 = *(longlong **)(param_1 + 0x48c8);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x48c8);
      }
      if (*(longlong *)(param_1 + 0x48a0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined2 *)(param_1 + 0x481c) = 0;
      *(undefined1 *)(param_1 + 0x481e) = 0;
      break;
    case 6:
      cVar7 = *(char *)(param_1 + 0x4887);
      if (cVar7 == '\x05') {
        <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                  (param_1 + 0x48f0);
        if (*(longlong *)(param_1 + 0x48d8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x48b0);
        *(undefined2 *)(param_1 + 0x4881) = 0;
        if ((*(char *)(param_1 + 0x4880) != '\0') && (*(longlong *)(param_1 + 0x4898) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        *(undefined1 *)(param_1 + 0x4880) = 0;
        *(undefined2 *)(param_1 + 0x4883) = 0;
        plVar5 = *(longlong **)(param_1 + 0x4890);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
          ::drop_slow(param_1 + 0x4890);
        }
        *(undefined1 *)(param_1 + 0x4885) = 0;
        plVar5 = *(longlong **)(param_1 + 0x4888);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
          ::drop_slow(param_1 + 0x4888);
        }
        *(undefined1 *)(param_1 + 0x4886) = 0;
      }
      else {
        if (cVar7 != '\x04') {
          if ((((cVar7 == '\x03') && (*(char *)(param_1 + 0x48f8) == '\x03')) &&
              (*(char *)(param_1 + 0x48f0) == '\x03')) && (*(char *)(param_1 + 0x48a8) == '\x04')) {
            (*(code *)PTR_drop_00799100)();
            if (*(longlong *)(param_1 + 0x48b8) != 0) {
              (**(code **)(*(longlong *)(param_1 + 0x48b8) + 0x18))();
            }
          }
          break;
        }
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
                  (param_1 + 0x4888);
      }
      (*(code *)PTR_release_00799050)();
      break;
    case 7:
      <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
                (param_1 + 0x4838);
      goto LAB_003d923f;
    case 8:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::_closure_0_>
                (param_1 + 0x4838);
      goto LAB_003d9130;
    case 9:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::_closure_0_>
                (param_1 + 0x4840);
      <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>
                (param_1 + 0x46f8);
LAB_003d9130:
      *(undefined1 *)(param_1 + 0x481f) = 0;
      <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop((longlong *)(param_1 + 0x4668));
      if (*(longlong *)(param_1 + 0x4668) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < *(longlong *)(param_1 + 18000)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (0 < *(longlong *)(param_1 + 0x4638)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x4620) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x45f0);
      if ((*(char *)(param_1 + 0x4820) != '\0') && (0 < *(longlong *)(param_1 + 0x45d8))) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x4820) = 0;
      if (0 < *(longlong *)(param_1 + 0x45c0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x45a8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x4835) = 0;
LAB_003d923f:
      plVar5 = *(longlong **)(param_1 + 0x45a0);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
          ::drop_slow(param_1 + 0x45a0);
        }
      }
      plVar5 = *(longlong **)(param_1 + 0x4598);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x4598);
      }
      break;
    case 10:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0x4860);
      if (0 < *(longlong *)(param_1 + 0x4848)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x4828) = 0;
      plVar5 = *(longlong **)(param_1 + 0x4840);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x4840);
      }
      *(undefined2 *)(param_1 + 0x4829) = 0;
      *(undefined1 *)(param_1 + 0x482b) = 0;
    }
    *(undefined1 *)(param_1 + 0x4821) = 0;
    *(undefined8 *)(param_1 + 0x482c) = 0;
    *(undefined1 *)(param_1 + 0x4834) = 0;
    plVar5 = *(longlong **)(param_1 + 0x4430);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x4430);
      }
    }
    *(undefined1 *)(param_1 + 0x4822) = 0;
    plVar5 = *(longlong **)(param_1 + 0x4428);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x4428);
      }
    }
    *(undefined1 *)(param_1 + 0x4823) = 0;
    if (0 < *(longlong *)(param_1 + 0x4410)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
LAB_003d9605:
    if (*(char *)(param_1 + 0x4825) != '\0') {
LAB_003d960e:
      if (*(longlong *)(param_1 + 0x43f0) != 0) {
        (*(code *)PTR_release_00799050)();
        plVar5 = *(longlong **)(param_1 + 0x43f0);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
          drop_slow((undefined8 *)(param_1 + 0x43f0),1);
        }
      }
    }
LAB_003d9641:
    *(undefined1 *)(param_1 + 0x4825) = 0;
    plVar5 = *(longlong **)(param_1 + 0x43e8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0x43e8);
    }
    if (0 < *(longlong *)(param_1 + 0x43d0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x4824) = 0;
    if (*(longlong *)(param_1 + 0x43b8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    plVar5 = *(longlong **)(param_1 + 0x4398);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
        ::drop_slow(param_1 + 0x4398);
      }
    }
    plVar5 = *(longlong **)(param_1 + 0x4390);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
        ::drop_slow(param_1 + 0x4390);
      }
    }
    if ((*(char *)(param_1 + 0x4826) != '\0') && (*(longlong *)(param_1 + 0x4038) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(char *)(param_1 + 0x4827) != '\0') && (*(longlong *)(param_1 + 0x4050) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (((*(char *)(param_1 + 0x4826) != '\0') &&
        ((*(longlong *)(param_1 + 0x4298) < 1 ||
         ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')))) &&
       ((*(longlong *)(param_1 + 0x42b0) < 1 ||
        ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')))) {
      puVar6 = PTR___rust_dealloc_00798fc8;
      lVar9 = *(longlong *)(param_1 + 0x4078);
      if (lVar9 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x4070) + 0x20;
        do {
          if (*(longlong *)(lVar10 + -0x20) != 0) {
            (*(code *)puVar6)();
          }
          if (*(longlong *)(lVar10 + -8) != 0) {
            (*(code *)puVar6)();
          }
          lVar10 = lVar10 + 0x30;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(longlong *)(param_1 + 0x4068) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (((*(char *)(param_1 + 0x4826) != '\0') && (*(longlong *)(param_1 + 0x42c8) != -1)) &&
       (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                  (*(undefined8 *)(param_1 + 0x42d0),*(undefined8 *)(param_1 + 0x42d8)),
       *(longlong *)(param_1 + 0x42c8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((((*(char *)(param_1 + 0x4826) != '\0') &&
         (<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x4080),
         *(char *)(param_1 + 0x4826) != '\0')) &&
        ((*(longlong *)(param_1 + 0x42e0) < 1 ||
         ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')))) &&
       ((*(longlong *)(param_1 + 0x42f8) < 1 ||
        ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')))) {
      puVar6 = PTR___rust_dealloc_00798fc8;
      lVar9 = *(longlong *)(param_1 + 0x4260);
      if (lVar9 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x4258) + 8;
        do {
          if (*(longlong *)(lVar10 + -8) != 0) {
            (*(code *)puVar6)();
          }
          lVar10 = lVar10 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(longlong *)(param_1 + 0x4250) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (*(char *)(param_1 + 0x4826) != '\0') {
      plVar5 = *(longlong **)(param_1 + 0x4370);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_1 + 0x4370);
      }
    }
    if (((*(char *)(param_1 + 0x4826) != '\0') &&
        ((*(longlong *)(param_1 + 0x4310) < 1 ||
         ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')))) &&
       (((*(longlong *)(param_1 + 0x4328) < 1 ||
         ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')) &&
        ((((*(longlong *)(param_1 + 0x4340) < 1 ||
           ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x4826) != '\0')) &&
          (<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 17000),
          *(char *)(param_1 + 0x4826) != '\0')) && (*(longlong *)(param_1 + 0x3fd8) != 0)))))) {
      puVar1 = (undefined8 *)(param_1 + 0x3fe0);
      <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(puVar1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x4826) != '\0') && (*(longlong *)(param_1 + 0x4378) != 0)) {
      puVar1 = (undefined8 *)(param_1 + 0x4378);
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(puVar1);
      }
    }
    if ((*(char *)(param_1 + 0x4826) != '\0') && (*(longlong *)(param_1 + 0x3fe8) != 0)) {
      puVar1 = (undefined8 *)(param_1 + 0x3ff0);
      <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(puVar1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x4826) != '\0') && (*(longlong *)(param_1 + 0x3ff8) != 0)) {
      puVar1 = (undefined8 *)(param_1 + 0x4000);
      <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(puVar1);
        }
      }
    }
    *(undefined2 *)(param_1 + 0x4826) = 0;
    plVar5 = *(longlong **)(param_1 + 0x3fb8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x3fb8);
    }
    goto switchD_003d86e6_caseD_1;
  case 4:
    <<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::_closure_0_>
              (param_1 + 0x3bb8);
    goto LAB_003d8a0c;
  case 5:
    if (*(char *)(param_1 + 0x3dc0) == '\x03') {
      puVar1 = (undefined8 *)(param_1 + 0x3d38);
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(puVar1);
      plVar5 = (longlong *)*puVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(puVar1);
        }
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x3c88) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x3c88) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x3cd0) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x3cd0) + 0x18))();
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x3d18) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x3d18) + 0x18))();
      }
      if (*(char *)(param_1 + 0x3d40) == '\0') {
        plVar5 = *(longlong **)(param_1 + 0x3d48);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x3d48);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x3d50);
      *(undefined1 *)(param_1 + 0x3dc4) = 0;
      lVar9 = *(longlong *)(param_1 + 0x3c50);
      for (lVar10 = *(longlong *)(param_1 + 0x3c58) + 1; lVar10 != 1; lVar10 = lVar10 + -1) {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar9);
        lVar9 = lVar9 + 0x848;
      }
      if (*(longlong *)(param_1 + 0x3c48) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x3dc2) = 0;
      plVar5 = *(longlong **)(param_1 + 0x3c30);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      lVar9 = 0x3dc3;
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_1 + 0x3c30);
      }
      goto LAB_003d89cb;
    }
    if (*(char *)(param_1 + 0x3dc0) == '\0') {
      plVar5 = *(longlong **)(param_1 + 0x3bf8);
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
        drop_slow(param_1 + 0x3bf8);
      }
    }
    goto LAB_003d89d0;
  case 6:
    if ((*(char *)(param_1 + 0x3f48) == '\x03') &&
       (<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
                  (param_1 + 0x3c00), *(longlong *)(param_1 + 0x3be8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    cVar7 = *(char *)(param_1 + 0x3ba9);
    goto joined_r0x003d85ac;
  case 7:
    if ((*(char *)(param_1 + 0x4fd8) == '\x03') &&
       (<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
                  (param_1 + 0x4c90), *(longlong *)(param_1 + 0x4c78) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x4400);
    *(undefined1 *)(param_1 + 0x3baf) = 0;
    cVar7 = *(char *)(param_1 + 0x3ba9);
joined_r0x003d85ac:
    if (cVar7 != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x21c8);
    }
    *(undefined1 *)(param_1 + 0x3ba9) = 0;
    break;
  case 8:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
              (param_1 + 0x3bb8);
    break;
  case 9:
    if (*(char *)(param_1 + 0x4d40) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x3be0);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x4d40) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x3be0);
    }
    <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0x4d48);
    break;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>
              (param_1 + 0x3bb8);
    if (*(char *)(param_1 + 0x3ba8) == '\0') break;
    goto LAB_003d892d;
  case 0xc:
    if (*(char *)(param_1 + 0x63f0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x4c58);
      piVar3 = *(int **)(param_1 + 0x4c50);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        uVar4 = *(ulonglong *)puVar6;
joined_r0x003d9c01:
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar7 == '\0') {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
        }
      }
      else {
        cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        if (cVar7 != '\0') {
          uVar4 = *(ulonglong *)puVar6;
          goto joined_r0x003d9c01;
        }
      }
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      lVar9 = 0x63f1;
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      goto LAB_003d88f3;
    }
    if (*(char *)(param_1 + 0x63f0) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x3bb8);
    }
    goto LAB_003d8650;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
              (param_1 + 0x3bb8);
    goto LAB_003d85d2;
  case 0xe:
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::execute_turn::_closure_0_>
              (param_1 + 0x4400);
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x3bb8);
    *(undefined1 *)(param_1 + 0x3bae) = 0;
LAB_003d85d2:
    if (0 < *(longlong *)(param_1 + 0x3338)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x32d0) != -1) {
      if (*(longlong *)(param_1 + 0x32d0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x32e8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x3300) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
LAB_003d8650:
    lVar9 = *(longlong *)(param_1 + 0x3258);
joined_r0x003d8900:
    if (lVar9 == -1) {
      if (*(char *)(param_1 + 0x3ba3) != '\0') {
        <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0x3260);
      }
    }
    else if (*(char *)(param_1 + 0x3ba2) != '\0') {
      <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(param_1 + 0x3258);
    }
    *(undefined2 *)(param_1 + 0x3ba2) = 0;
    if (*(char *)(param_1 + 0x3ba8) != '\0') {
LAB_003d892d:
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1138);
    }
    break;
  case 0xf:
    if (*(char *)(param_1 + 0x6c58) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x54c0);
      piVar3 = *(int **)(param_1 + 0x54b8);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        uVar4 = *(ulonglong *)puVar6;
joined_r0x003d9b98:
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar7 == '\0') {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
        }
      }
      else {
        cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        if (cVar7 != '\0') {
          uVar4 = *(ulonglong *)puVar6;
          goto joined_r0x003d9b98;
        }
      }
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x6c59) = 0;
    }
    else if (*(char *)(param_1 + 0x6c58) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x4420);
    }
    *(undefined1 *)(param_1 + 0x3bac) = 0;
    lVar9 = 0x3bad;
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x4400);
LAB_003d88f3:
    *(undefined1 *)(param_1 + lVar9) = 0;
    lVar9 = *(longlong *)(param_1 + 0x3258);
    goto joined_r0x003d8900;
  }
  *(undefined1 *)(param_1 + 0x3ba8) = 0;
  if (0 < *(longlong *)(param_1 + 0x1120)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x10b8) != -1) {
    if (*(longlong *)(param_1 + 0x10b8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x10d0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x10e8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x3bb0) = 0;
  lVar9 = 0x3bb1;
LAB_003d89cb:
  *(undefined1 *)(param_1 + lVar9) = 0;
LAB_003d89d0:
  if ((*(char *)(param_1 + 0x3ba4) != '\0') && (*(longlong *)(param_1 + 0x858) != 0)) {
    (*(code *)PTR_release_00799050)();
    plVar5 = *(longlong **)(param_1 + 0x858);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
      drop_slow((undefined8 *)(param_1 + 0x858),1);
    }
  }
LAB_003d8a0c:
  *(undefined1 *)(param_1 + 0x3ba4) = 0;
  plVar5 = *(longlong **)(param_1 + 0x850);
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0x850);
  }
  if (0 < *(longlong *)(param_1 + 0x838)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x820) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_003d86e6_caseD_1:
  if ((*(char *)(param_1 + 0x3ba5) != '\0') &&
     (plVar5 = *(longlong **)(param_1 + 0x800), plVar5 != (longlong *)0x0)) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x800);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba5) = 0;
  if ((*(char *)(param_1 + 0x3ba6) != '\0') &&
     (plVar5 = *(longlong **)(param_1 + 0x7f8), plVar5 != (longlong *)0x0)) {
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
      ::drop_slow(param_1 + 0x7f8);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba6) = 0;
  if ((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x490) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(char *)(param_1 + 0x3bab) != '\0') && (*(longlong *)(param_1 + 0x4a8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') &&
      ((*(longlong *)(param_1 + 0x6f0) < 1 ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))) &&
     ((*(longlong *)(param_1 + 0x708) < 1 ||
      ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))) {
    puVar6 = PTR___rust_dealloc_00798fc8;
    lVar9 = *(longlong *)(param_1 + 0x4d0);
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x4c8) + 0x20;
      do {
        if (*(longlong *)(lVar10 + -0x20) != 0) {
          (*(code *)puVar6)();
        }
        if (*(longlong *)(lVar10 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar10 = lVar10 + 0x30;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x720) != -1)) &&
     (<[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                (*(undefined8 *)(param_1 + 0x728),*(undefined8 *)(param_1 + 0x730)),
     *(longlong *)(param_1 + 0x720) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((((*(char *)(param_1 + 0x3baa) != '\0') &&
       (<craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x4d8),
       *(char *)(param_1 + 0x3baa) != '\0')) &&
      ((*(longlong *)(param_1 + 0x738) < 1 ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))) &&
     ((*(longlong *)(param_1 + 0x750) < 1 ||
      ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))) {
    puVar6 = PTR___rust_dealloc_00798fc8;
    lVar9 = *(longlong *)(param_1 + 0x6b8);
    if (lVar9 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x6b0) + 8;
      do {
        if (*(longlong *)(lVar10 + -8) != 0) {
          (*(code *)puVar6)();
        }
        lVar10 = lVar10 + 0x18;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*(longlong *)(param_1 + 0x6a8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  if (*(char *)(param_1 + 0x3baa) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x7c8);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(param_1 + 0x7c8);
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') &&
      ((*(longlong *)(param_1 + 0x768) < 1 ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')))) &&
     (((*(longlong *)(param_1 + 0x780) < 1 ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
      ((((*(longlong *)(param_1 + 0x798) < 1 ||
         ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0x3baa) != '\0')) &&
        (<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x6c0),
        *(char *)(param_1 + 0x3baa) != '\0')) &&
       ((*(longlong *)(param_1 + 0x430) != 0 && (lVar9 = *(longlong *)(param_1 + 0x438), lVar9 != 0)
        ))))))) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x60) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x438);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x438));
      }
    }
  }
  if ((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 2000) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 2000);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar5 = (longlong *)*puVar1;
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x440) != 0)) &&
     (lVar9 = *(longlong *)(param_1 + 0x448), lVar9 != 0)) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x60) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x448);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x448));
      }
    }
  }
  if (((*(char *)(param_1 + 0x3baa) != '\0') && (*(longlong *)(param_1 + 0x450) != 0)) &&
     (lVar9 = *(longlong *)(param_1 + 0x458), lVar9 != 0)) {
    uVar8 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar8 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar9 + 0x20) + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0x458);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x458));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x3baa) = 0;
  if (*(char *)(param_1 + 0x3ba7) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x410);
    LOCK();
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x410);
    }
  }
  *(undefined1 *)(param_1 + 0x3ba7) = 0;
switchD_003d843b_caseD_1:
  return;
}


