// 00496720 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>

/* WARNING: Switch with 1 destination removed at 0x00496828 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>
          (longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x18b8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x170);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x170);
    }
    plVar1 = *(longlong **)(param_1 + 0x178);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    (*(code *)PTR_drop_007990c8)();
    plVar1 = *(longlong **)(param_1 + 0x180);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) {
      return;
    }
    lVar5 = *(longlong *)(param_1 + 0x180);
    plVar1 = *(longlong **)(lVar5 + 0x30);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007990d0)();
      }
    }
    puVar2 = PTR_drop_slow_007990d0;
    if (*(longlong *)(lVar5 + 0x28) != 0) {
      puVar3 = *(undefined8 **)(lVar5 + 0x20);
      lVar4 = 1 - *(longlong *)(lVar5 + 0x28);
      do {
        plVar1 = (longlong *)*puVar3;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)puVar2)();
        }
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 1);
    }
    if (*(longlong *)(lVar5 + 0x18) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (lVar5 != -1) {
      LOCK();
      plVar1 = (longlong *)(lVar5 + 8);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_free_0079adc8)();
        return;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x18b8) != '\x03') {
    return;
  }
  if (3 < *(byte *)(param_1 + 0x2cc) - 3) goto LAB_00496d2e;
  switch((uint)*(byte *)(param_1 + 0x2cc)) {
  case 3:
    if (((*(char *)(param_1 + 0x340) == '\x03') && (*(char *)(param_1 + 0x338) == '\x03')) &&
       (*(char *)(param_1 + 0x2f0) == '\x04')) {
      (*(code *)PTR_drop_00799100)();
      if (*(longlong *)(param_1 + 0x300) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x300) + 0x18))();
      }
    }
    goto LAB_00496d2e;
  case 4:
    if (*(char *)(param_1 + 0x18b6) != '\x03') goto LAB_00496d1c;
    switch(*(undefined1 *)(param_1 + 0x1024)) {
    case 0:
      lVar5 = 0x10;
      goto LAB_00496c2d;
    default:
      goto switchD_004969f6_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x16d8) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x12f0);
      }
      else if (*(char *)(param_1 + 0x16d8) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x11f0);
      }
      puVar2 = PTR_close_00799030;
      if (*(int *)(param_1 + 0x10e8) != -1) {
        (*(code *)PTR_close_00799030)();
        (*(code *)puVar2)();
      }
      if ((1 < ((uint)*(ulonglong *)(param_1 + 0x10e0) & 3) - 2) &&
         ((*(ulonglong *)(param_1 + 0x10e0) & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
      goto LAB_00496be6;
    case 4:
      goto switchD_004969f6_caseD_4;
    case 5:
      if (*(char *)(param_1 + 0x1520) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x1138);
      }
      else if (*(char *)(param_1 + 0x1520) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x1038);
      }
      goto switchD_004969f6_caseD_4;
    case 6:
      break;
    case 7:
      if (*(char *)(param_1 + 0x1520) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                  (param_1 + 0x1138);
      }
      else if (*(char *)(param_1 + 0x1520) == '\0') {
        <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x1038);
      }
      break;
    case 8:
      if (*(char *)(param_1 + 0x1128) == '\x03') {
        puVar3 = (undefined8 *)(param_1 + 0x1120);
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(puVar3);
        plVar1 = (longlong *)*puVar3;
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
            ::drop_slow(puVar3);
          }
        }
        if (*(longlong *)(param_1 + 0x10b0) != 2) {
          if (*(longlong *)(param_1 + 0x10b0) == 0) {
            plVar1 = *(longlong **)(param_1 + 0x10b8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar1 = *(longlong **)(param_1 + 0x10b8);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x10c0);
        }
        *(undefined1 *)(param_1 + 0x1129) = 0;
      }
      else if (*(char *)(param_1 + 0x1128) == '\0') {
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x1048);
      }
      goto LAB_00496b43;
    case 9:
      if (*(char *)(param_1 + 0x1108) == '\x03') {
        if ((*(longlong *)(param_1 + 0x10e0) != -1) && (*(longlong *)(param_1 + 0x10e0) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004969f6::switchdataD_00195c7c,1);
        }
        if ((*(longlong *)(param_1 + 0x10c8) != -1) && (*(longlong *)(param_1 + 0x10c8) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if ((*(longlong *)(param_1 + 0x10b0) != -1) && (*(longlong *)(param_1 + 0x10b0) != 0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      goto LAB_00496b37;
    case 10:
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0x1038);
      <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_1 + 0xfe0);
LAB_00496b37:
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xfc0);
LAB_00496b43:
      <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(param_1 + 0x9e0);
      *(undefined4 *)(param_1 + 0x1030) = 0;
      *(undefined8 *)(param_1 + 0x1029) = 0;
    }
    if (*(char *)(param_1 + 0x1025) != '\0') {
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::sys::unix::pipe::Sender>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x960);
      if (*(int *)(param_1 + 0x978) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x960);
    }
    *(undefined1 *)(param_1 + 0x1025) = 0;
switchD_004969f6_caseD_4:
    if (((*(char *)(param_1 + 0x1026) != '\0') && (*(int *)(param_1 + 0x860) != -1)) &&
       (*(char *)(param_1 + 0x1028) == '\x01')) {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x860);
    }
    *(undefined1 *)(param_1 + 0x1026) = 0;
    *(undefined1 *)(param_1 + 0x1028) = 0;
    if (*(char *)(param_1 + 0x1027) != '\0') {
      <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x7b8);
    }
LAB_00496be6:
    *(undefined1 *)(param_1 + 0x1027) = 0;
    <tokio[d7d91d38da47d894]::process::Command>(param_1 + 0x6e8);
    lVar5 = 400;
    if (*(int *)(param_1 + 0x5e0) != -1) {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x5e0);
      puVar2 = PTR_close_00799030;
      (*(code *)PTR_close_00799030)();
      (*(code *)puVar2)();
    }
LAB_00496c2d:
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1 + 0x2d0 + lVar5);
switchD_004969f6_caseD_1:
    *(undefined2 *)(param_1 + 0x18b2) = 0;
    *(undefined1 *)(param_1 + 0x18b4) = 0;
    if (*(longlong *)(param_1 + 0x1868) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x1840);
    *(undefined1 *)(param_1 + 0x18b5) = 0;
    plVar1 = *(longlong **)(param_1 + 0x1838);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x1838);
    }
    *(undefined1 *)(param_1 + 0x18b0) = 0;
    if (*(longlong *)(param_1 + 0x1820) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x18b1) = 0;
    if (*(longlong *)(param_1 + 0x1808) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x17f0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (*(longlong *)(param_1 + 0x17d8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_00496d1c;
  case 5:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x300) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x2d8);
    *(undefined1 *)(param_1 + 0x2c5) = 0;
    plVar1 = *(longlong **)(param_1 + 0x2d0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x2d0);
    }
    break;
  case 6:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drain_and_shutdown::_closure_0_>
              (param_1 + 0x308);
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((*(longlong *)(param_1 + 0x2d8) != -1) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x2c4) = 0;
    plVar1 = *(longlong **)(param_1 + 0x2d0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x2d0);
    }
  }
  if (*(longlong *)(param_1 + 0x198) != -2) {
    if (*(char *)(param_1 + 0x2c3) != '\0') {
      plVar1 = *(longlong **)(param_1 + 400);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow((undefined8 *)(param_1 + 400));
      }
    }
    if (((*(char *)(param_1 + 0x2c2) != '\0') && (*(longlong *)(param_1 + 0x198) != -1)) &&
       (*(longlong *)(param_1 + 0x198) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)(param_1 + 0x2c2) = 0;
  *(undefined2 *)(param_1 + 0x2c6) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  if ((*(char *)(param_1 + 0x2c0) != '\0') && (*(longlong *)(param_1 + 0x240) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x2c0) = 0;
  *(undefined2 *)(param_1 + 0x2c9) = 0;
  if (*(char *)(param_1 + 0x2c1) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x238);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x238);
    }
  }
  *(undefined1 *)(param_1 + 0x2c1) = 0;
  *(undefined1 *)(param_1 + 0x2cb) = 0;
LAB_00496d1c:
  param_2 = 1;
  (*(code *)PTR_release_00799050)();
LAB_00496d2e:
  plVar1 = *(longlong **)(param_1 + 0x170);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 0x170,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x178);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(param_1 + 0x178);
  }
  <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x180);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  return;
}


