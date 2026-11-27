// 0055fc70 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
          (longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  switch(*(undefined1 *)((longlong)param_1 + 0x6a1)) {
  case 0:
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
    }
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
              (param_1 + 0x42);
    plVar2 = param_1 + 0x3f;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar2);
    plVar3 = (longlong *)*plVar2;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
      ::drop_slow(plVar2);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 6);
    return;
  default:
    goto switchD_0055fc9a_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0xec] != 0) {
      (**(code **)(param_1[0xec] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0xf5] != 0) {
      (**(code **)(param_1[0xf5] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_1[0xfe] != 0) {
      (**(code **)(param_1[0xfe] + 0x18))();
    }
    if ((char)param_1[0xd9] == '\0') {
      plVar2 = (longlong *)param_1[0xda];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar2 = (longlong *)param_1[0xda];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0xdb);
    goto LAB_0056053c;
  case 4:
    if (*(char *)((longlong)param_1 + 0x9e1) == '\x03') {
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                (param_1 + 0xe9);
      *(undefined1 *)((longlong)param_1 + 0x9e4) = 0;
    }
    else if ((*(char *)((longlong)param_1 + 0x9e1) == '\0') && (param_1[0xd8] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
    }
    goto LAB_00560442;
  case 5:
    if (param_1[0xd8] != 2) {
      if (param_1[0xd8] == 0) {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xda);
    }
    if ((param_1[0xe7] != -1) && (param_1[0xe7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (param_1[0xed]);
LAB_00560442:
    *(undefined1 *)((longlong)param_1 + 0x6a5) = 0;
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xad);
    break;
  case 6:
    if (param_1[0xd8] != 2) {
      if (param_1[0xd8] == 0) {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xda);
    }
    break;
  case 7:
    if ((char)param_1[0xf2] == '\x03') {
      if ((param_1[0xed] != -1) && (param_1[0xed] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
      }
      if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((param_1[0xe7] != -1) && (param_1[0xe7] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if ((char)param_1[0xf3] != -1) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xf3);
    }
    break;
  case 8:
    if (param_1[0xd9] != 2) {
      if (param_1[0xd9] == 0) {
        plVar2 = (longlong *)param_1[0xda];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0xda];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xdb);
    }
    goto LAB_00560475;
  case 9:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_1 + 0xe6);
    *(undefined1 *)((longlong)param_1 + 0x6a6) = 0;
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xe2);
    goto LAB_00560475;
  case 10:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_1 + 0xe1);
    *(undefined1 *)((longlong)param_1 + 0x6ad) = 0;
    <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0xdb);
    if (param_1[0xdb] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar4 = PTR___rust_dealloc_00798fc8;
    lVar5 = param_1[0xda];
    if (lVar5 != 0) {
      lVar6 = param_1[0xd9] + 0x38;
      do {
        if (*(longlong *)(lVar6 + -0x38) != 0) {
          (*(code *)puVar4)();
        }
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          (*(code *)puVar4)();
        }
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar4)();
        }
        lVar6 = lVar6 + 0x48;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_1[0xd8] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0x6ae) = 0;
LAB_00560475:
    if ((*(char *)((longlong)param_1 + 0x6af) != '\0') &&
       (<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0xbf), param_1[0xbf] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0x6af) = 0;
    *(undefined1 *)(param_1 + 0xd7) = 0;
    break;
  case 0xb:
    if (param_1[0xd8] != 2) {
      if (param_1[0xd8] == 0) {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xda);
    }
    if ((param_1[0xe7] != -1) && (param_1[0xe7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (param_1[0xed]);
    break;
  case 0xc:
    if (param_1[0xd8] != 2) {
      if (param_1[0xd8] == 0) {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = (longlong *)param_1[0xd9];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xda);
    }
    break;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_1 + 0xe6);
    *(undefined1 *)((longlong)param_1 + 0x6a7) = 0;
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xe2);
    goto LAB_005602d2;
  case 0xe:
    if ((char)param_1[0xf2] == '\x03') {
      if ((param_1[0xed] != -1) && (param_1[0xed] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
      }
      if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      lVar5 = param_1[0xe7];
      if (lVar5 != -1) goto joined_r0x0055fd60;
    }
    goto LAB_0056009e;
  case 0xf:
    if ((param_1[0xe1] != -1) && (param_1[0xe1] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
    }
    if ((param_1[0xde] != -1) && (param_1[0xde] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    lVar5 = param_1[0xdb];
joined_r0x0055fd60:
    if (lVar5 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_0056009e;
  case 0x10:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_1 + 0xde);
    *(undefined1 *)(param_1 + 0xd5) = 0;
LAB_0056009e:
    if ((param_1[0xcb] != -1) && (param_1[0xcb] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0x6a9) = 0;
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 199);
    goto LAB_005602d2;
  case 0x11:
    if ((char)param_1[0xf2] == '\x03') {
      if ((param_1[0xed] != -1) && (param_1[0xed] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
      }
      if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((param_1[0xe7] != -1) && (param_1[0xe7] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xf3);
    goto LAB_005602d2;
  case 0x12:
    if ((char)param_1[0xf2] == '\x03') {
      if ((param_1[0xed] != -1) && (param_1[0xed] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0055fc9a::switchdataD_0019c0a4,1);
      }
      if ((param_1[0xea] != -1) && (param_1[0xea] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((param_1[0xe7] != -1) && (param_1[0xe7] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
LAB_005602d2:
    if (param_1[0xc2] != 2) {
      if (*(char *)((longlong)param_1 + 0x6aa) != '\0') {
        if (param_1[0xc2] == 0) {
          cVar1 = *(char *)((longlong)param_1 + 0x6ab);
        }
        else {
          cVar1 = *(char *)((longlong)param_1 + 0x6ac);
        }
        if (cVar1 != '\0') {
          <serde_json[dc3825464c436029]::value::Value>(param_1 + 0xc3);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x6aa) = 0;
    }
    *(undefined2 *)((longlong)param_1 + 0x6aa) = 0;
    *(undefined1 *)((longlong)param_1 + 0x6ac) = 0;
  }
  if (SBORROW8(0,param_1[0xa0])) {
    *(undefined1 *)(param_1 + 0xd6) = 0;
  }
LAB_0056053c:
  *(undefined1 *)(param_1 + 0xd6) = 0;
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_1[0x9a];
  if (lVar5 != 0) {
    lVar6 = param_1[0x99] + 8;
    do {
      if (*(longlong *)(lVar6 + -8) != 0) {
        (*(code *)puVar4)();
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[0x98] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x6b1) = 0;
  <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>(param_1 + 0x8b);
  *(undefined1 *)((longlong)param_1 + 0x6b2) = 0;
  plVar2 = (longlong *)param_1[0x8a];
  if (plVar2 != (longlong *)0x0) {
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x8a);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(param_1 + 0x8a);
    }
  }
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_1 + 0x51);
  *(undefined1 *)((longlong)param_1 + 0x6b3) = 0;
  if (param_1[0x4e] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x6b4) = 0;
  plVar2 = param_1 + 0x4b;
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(plVar2);
  plVar3 = (longlong *)*plVar2;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
    ::drop_slow(plVar2);
  }
  *(undefined1 *)((longlong)param_1 + 0x6b5) = 0;
  <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
            (param_1 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x6b6) = 0;
  if (param_1[0x46] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x6b7) = 0;
switchD_0055fc9a_caseD_1:
  return;
}


