// 002600a0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_>
          (longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  switch(*(undefined1 *)(param_1 + 0xc60)) {
  case 0:
    plVar2 = *(longlong **)(param_1 + 0x3b8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x3b8);
    }
    <craggemini_core[66f3c71560d70857]::server::Turn>(param_1);
    plVar2 = *(longlong **)(param_1 + 1000);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
        ::drop_slow(param_1 + 1000);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x3f0);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x3f0);
      return;
    }
    return;
  default:
    goto switchD_002600ca_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xe90) == '\x03') {
      <(<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep)>
                (param_1 + 0xcc0);
      *(undefined1 *)(param_1 + 0xe92) = 0;
    }
    goto LAB_0026055c;
  case 4:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_acp_permit::_closure_0_>
              (param_1 + 0xc80);
    goto LAB_00260520;
  case 5:
    if (*(char *)(param_1 + 0x19c8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
                (param_1 + 0xfe0);
      <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0xfc8);
      *(undefined4 *)(param_1 + 0x19c9) = 0;
      *(undefined1 *)(param_1 + 0xc7e) = 0;
      plVar2 = *(longlong **)(param_1 + 0xd10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar5 = *plVar2;
      UNLOCK();
    }
    else {
      if (*(char *)(param_1 + 0x19c8) == '\0') {
        <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 0xd50);
      }
      *(undefined1 *)(param_1 + 0xc7e) = 0;
      plVar2 = *(longlong **)(param_1 + 0xd10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      lVar5 = *plVar2;
      UNLOCK();
    }
    if (lVar5 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0xd10);
    }
    if (*(longlong *)(param_1 + 0xce8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined2 *)(param_1 + 0xc64) = 0;
    *(undefined1 *)(param_1 + 0xc66) = 0;
    break;
  case 6:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::ensure_acp_worker::_closure_0_>
              (param_1 + 0xc80);
    break;
  case 7:
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
              (param_1 + 0xc80);
    plVar2 = *(longlong **)(param_1 + 0x9e8);
    goto joined_r0x00260343;
  case 8:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::_closure_0_>
              (param_1 + 0xc80);
    goto LAB_002601bc;
  case 9:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::execute_turn::_closure_0_>
              (param_1 + 0xc88);
    <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnOutcome,craggemini_core[66f3c71560d70857]::protocol::Failure>>
              (param_1 + 0xb40);
LAB_002601bc:
    *(undefined1 *)(param_1 + 0xc67) = 0;
    puVar3 = PTR___rust_dealloc_00798fc8;
    lVar5 = *(longlong *)(param_1 + 0xac0);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0xab8) + 0x20;
      do {
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          (*(code *)puVar3)();
        }
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar3)();
        }
        lVar6 = lVar6 + 0x30;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0xab0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xa98) != -1) && (*(longlong *)(param_1 + 0xa98) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0xa80) != -1) && (*(longlong *)(param_1 + 0xa80) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0xa68) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0xa38);
    if (((*(char *)(param_1 + 0xc68) != '\0') && (*(longlong *)(param_1 + 0xa20) != -1)) &&
       (*(longlong *)(param_1 + 0xa20) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xc68) = 0;
    if ((*(longlong *)(param_1 + 0xa08) != -1) && (*(longlong *)(param_1 + 0xa08) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x9f0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xc7d) = 0;
    plVar2 = *(longlong **)(param_1 + 0x9e8);
joined_r0x00260343:
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x9e8);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x9e0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x9e0);
    }
    break;
  case 10:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0xca8);
    if ((*(longlong *)(param_1 + 0xc90) != -1) && (*(longlong *)(param_1 + 0xc90) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xc70) = 0;
    plVar2 = *(longlong **)(param_1 + 0xc88);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0xc88);
    }
    *(undefined2 *)(param_1 + 0xc71) = 0;
    *(undefined1 *)(param_1 + 0xc73) = 0;
  }
  *(undefined1 *)(param_1 + 0xc69) = 0;
  *(undefined8 *)(param_1 + 0xc74) = 0;
  *(undefined1 *)(param_1 + 0xc7c) = 0;
  plVar2 = *(longlong **)(param_1 + 0x878);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x878);
    }
  }
  *(undefined1 *)(param_1 + 0xc6a) = 0;
  plVar2 = *(longlong **)(param_1 + 0x870);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x870);
    }
  }
  *(undefined1 *)(param_1 + 0xc6b) = 0;
  if ((*(longlong *)(param_1 + 0x858) != -1) && (*(longlong *)(param_1 + 0x858) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_00260520:
  if ((*(char *)(param_1 + 0xc6d) != '\0') && (*(longlong *)(param_1 + 0x838) != 0)) {
    (*(code *)PTR_release_00799050)();
    plVar2 = *(longlong **)(param_1 + 0x838);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
      drop_slow((undefined8 *)(param_1 + 0x838),1);
    }
  }
LAB_0026055c:
  *(undefined1 *)(param_1 + 0xc6d) = 0;
  plVar2 = *(longlong **)(param_1 + 0x830);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
    drop_slow(param_1 + 0x830);
  }
  if ((*(longlong *)(param_1 + 0x818) != -1) && (*(longlong *)(param_1 + 0x818) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0xc6c) = 0;
  if (*(longlong *)(param_1 + 0x800) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  plVar2 = *(longlong **)(param_1 + 0x7e0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(param_1 + 0x7e0);
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x7d8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
      ::drop_slow(param_1 + 0x7d8);
    }
  }
  if ((*(char *)(param_1 + 0xc6e) != '\0') && (*(longlong *)(param_1 + 0x480) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((*(char *)(param_1 + 0xc6f) != '\0') && (*(longlong *)(param_1 + 0x498) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((*(char *)(param_1 + 0xc6e) != '\0') &&
      (((*(longlong *)(param_1 + 0x6e0) == -1 || (*(longlong *)(param_1 + 0x6e0) == 0)) ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) == '\x01')))) &&
     (((*(longlong *)(param_1 + 0x6f8) == -1 || (*(longlong *)(param_1 + 0x6f8) == 0)) ||
      ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) == '\x01')))) {
    puVar3 = PTR___rust_dealloc_00798fc8;
    lVar5 = *(longlong *)(param_1 + 0x4c0);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x4b8) + 0x20;
      do {
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          (*(code *)puVar3)();
        }
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar3)();
        }
        lVar6 = lVar6 + 0x30;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(char *)(param_1 + 0xc6e) == '\x01') {
      if (*(longlong *)(param_1 + 0x710) != -1) {
        <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
                  (*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x720));
        if (*(longlong *)(param_1 + 0x710) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(char *)(param_1 + 0xc6e) == '\0') goto LAB_0026085d;
      }
      <craggemini_core[66f3c71560d70857]::tools::NativeToolRequest>(param_1 + 0x4c8);
      if ((*(char *)(param_1 + 0xc6e) != '\0') &&
         ((((*(longlong *)(param_1 + 0x728) == -1 || (*(longlong *)(param_1 + 0x728) == 0)) ||
           ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) != '\0')) &&
          (((*(longlong *)(param_1 + 0x740) == -1 || (*(longlong *)(param_1 + 0x740) == 0)) ||
           ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) != '\0')))))) {
        <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop((longlong *)(param_1 + 0x698));
        if (*(longlong *)(param_1 + 0x698) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(char *)(param_1 + 0xc6e) != '\0') {
          plVar2 = *(longlong **)(param_1 + 0x7b8);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>
            ::drop_slow(param_1 + 0x7b8);
          }
        }
      }
    }
  }
LAB_0026085d:
  if ((*(char *)(param_1 + 0xc6e) != '\0') &&
     ((((*(longlong *)(param_1 + 0x758) == -1 || (*(longlong *)(param_1 + 0x758) == 0)) ||
       ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) != '\0')) &&
      ((((*(longlong *)(param_1 + 0x770) == -1 || (*(longlong *)(param_1 + 0x770) == 0)) ||
        ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) != '\0')) &&
       (((((*(longlong *)(param_1 + 0x788) == -1 || (*(longlong *)(param_1 + 0x788) == 0)) ||
          ((*(code *)PTR___rust_dealloc_00798fc8)(), *(char *)(param_1 + 0xc6e) != '\0')) &&
         ((<craggemini_core[66f3c71560d70857]::tools::StagedMediaGuard>(param_1 + 0x6b0),
          *(char *)(param_1 + 0xc6e) != '\0' && (*(longlong *)(param_1 + 0x420) != 0)))) &&
        (lVar5 = *(longlong *)(param_1 + 0x428), lVar5 != 0)))))))) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x428);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x428));
      }
    }
  }
  if ((*(char *)(param_1 + 0xc6e) != '\0') && (*(longlong *)(param_1 + 0x7c0) != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x7c0);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1);
    plVar2 = (longlong *)*puVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  if (((*(char *)(param_1 + 0xc6e) != '\0') && (*(longlong *)(param_1 + 0x430) != 0)) &&
     (lVar5 = *(longlong *)(param_1 + 0x438), lVar5 != 0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x438);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x438));
      }
    }
  }
  if (((*(char *)(param_1 + 0xc6e) != '\0') && (*(longlong *)(param_1 + 0x440) != 0)) &&
     (lVar5 = *(longlong *)(param_1 + 0x448), lVar5 != 0)) {
    uVar4 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(longlong *)(lVar5 + 0x20) + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0x448);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow((undefined8 *)(param_1 + 0x448));
      }
    }
  }
  *(undefined2 *)(param_1 + 0xc6e) = 0;
  plVar2 = *(longlong **)(param_1 + 0x400);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(param_1 + 0x400);
    return;
  }
switchD_002600ca_caseD_1:
  return;
}


