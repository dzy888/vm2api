// 003d3090 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::drive_prompt_loop::_closure_0_>
          (undefined4 param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  switch(*(undefined1 *)((longlong)param_2 + 0x6a1)) {
  case 0:
    if (*param_2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
    }
    lVar7 = param_2[0x42];
    if (lVar7 != 0) {
      uVar6 = *(ulonglong *)(lVar7 + 0x30);
      do {
        LOCK();
        uVar1 = *(ulonglong *)(lVar7 + 0x30);
        bVar9 = uVar6 == uVar1;
        if (bVar9) {
          *(ulonglong *)(lVar7 + 0x30) = uVar6 | 4;
        }
        else {
          uVar6 = uVar1;
        }
        UNLOCK();
      } while (!bVar9);
      if (((uint)uVar6 & 10) == 8) {
        (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x10))();
      }
      if (((uint)uVar6 & 3) == 1) {
        LOCK();
        *(ulonglong *)(lVar7 + 0x30) = *(ulonglong *)(lVar7 + 0x30) & 0xfffffffffffffffe;
        UNLOCK();
        (*(code *)PTR_drop_task_00799060)();
      }
      if ((uVar6 & 2) != 0) {
        local_28 = *(undefined8 *)(lVar7 + 0x58);
        lVar8 = *(longlong *)(lVar7 + 0x38);
        uStack_40 = *(undefined4 *)(lVar7 + 0x40);
        uStack_3c = *(undefined4 *)(lVar7 + 0x44);
        local_38 = *(undefined4 *)(lVar7 + 0x48);
        uStack_34 = *(undefined4 *)(lVar7 + 0x4c);
        uStack_30 = *(undefined4 *)(lVar7 + 0x50);
        uStack_2c = *(undefined4 *)(lVar7 + 0x54);
        *(undefined8 *)(lVar7 + 0x38) = 2;
        if (lVar8 != 2) {
          <serde_json[dc3825464c436029]::value::Value>(&uStack_40);
        }
      }
      plVar4 = (longlong *)param_2[0x42];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
          ::drop_slow(param_2 + 0x42);
        }
      }
    }
    plVar4 = param_2 + 0x3f;
    uVar10 = <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop(plVar4);
    plVar3 = (longlong *)*plVar4;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      uVar10 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
               ::drop_slow(plVar4);
    }
    if (param_2[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
    }
    <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_2 + 6);
    return;
  default:
    goto switchD_003d30bd_caseD_1;
  case 3:
    (*(code *)PTR_drop_007990e8)();
    if (param_2[0xec] != 0) {
      (**(code **)(param_2[0xec] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_2[0xf5] != 0) {
      (**(code **)(param_2[0xf5] + 0x18))();
    }
    (*(code *)PTR_drop_007990e8)();
    if (param_2[0xfe] != 0) {
      (**(code **)(param_2[0xfe] + 0x18))();
    }
    if ((char)param_2[0xd9] == '\0') {
      plVar4 = (longlong *)param_2[0xda];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar4 = (longlong *)param_2[0xda];
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                        (param_2 + 0xdb);
    goto LAB_003d3917;
  case 4:
    if (*(char *)((longlong)param_2 + 0x9e1) == '\x03') {
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                (param_2 + 0xe9);
      *(undefined1 *)((longlong)param_2 + 0x9e4) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0x9e1) == '\0') && (param_2[0xd8] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
    }
    goto LAB_003d3865;
  case 5:
    if (param_2[0xd8] != 2) {
      if (param_2[0xd8] == 0) {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_2 + 0xda);
    }
    <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0xe7);
LAB_003d3865:
    *(undefined1 *)((longlong)param_2 + 0x6a5) = 0;
    param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xad);
    break;
  case 6:
    if (param_2[0xd8] != 2) {
      if (param_2[0xd8] == 0) {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                          (param_2 + 0xda);
    }
    break;
  case 7:
    if ((char)param_2[0xf2] == '\x03') {
      if (0 < param_2[0xed]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
      }
      if (0 < param_2[0xea]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (0 < param_2[0xe7]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    }
    if ((char)param_2[0xf3] != -1) {
      param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xf3);
    }
    break;
  case 8:
    if (param_2[0xd9] != 2) {
      if (param_2[0xd9] == 0) {
        plVar4 = (longlong *)param_2[0xda];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = (longlong *)param_2[0xda];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                          (param_2 + 0xdb);
    }
    goto LAB_003d3898;
  case 9:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_2 + 0xe6);
    *(undefined1 *)((longlong)param_2 + 0x6a6) = 0;
    param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xe2);
    goto LAB_003d3898;
  case 10:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_2 + 0xe1);
    *(undefined1 *)((longlong)param_2 + 0x6ad) = 0;
    param_1 = <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_2 + 0xdb);
    if (param_2[0xdb] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    puVar5 = PTR___rust_dealloc_00798fc8;
    lVar7 = param_2[0xda];
    if (lVar7 != 0) {
      lVar8 = param_2[0xd9] + 0x38;
      do {
        if (*(longlong *)(lVar8 + -0x38) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        if (*(longlong *)(lVar8 + -0x20) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        if (*(longlong *)(lVar8 + -8) != 0) {
          param_1 = (*(code *)puVar5)(param_1,1);
        }
        lVar8 = lVar8 + 0x48;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (param_2[0xd8] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(undefined1 *)((longlong)param_2 + 0x6ae) = 0;
LAB_003d3898:
    if ((*(char *)((longlong)param_2 + 0x6af) != '\0') &&
       (param_1 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_2 + 0xbf), param_2[0xbf] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(undefined1 *)((longlong)param_2 + 0x6af) = 0;
    *(undefined1 *)(param_2 + 0xd7) = 0;
    break;
  case 0xb:
    if (param_2[0xd8] != 2) {
      if (param_2[0xd8] == 0) {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_2 + 0xda);
    }
    param_1 = <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0xe7);
    break;
  case 0xc:
    if (param_2[0xd8] != 2) {
      if (param_2[0xd8] == 0) {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar4 = (longlong *)param_2[0xd9];
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                          (param_2 + 0xda);
    }
    break;
  case 0xd:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_2 + 0xe6);
    *(undefined1 *)((longlong)param_2 + 0x6a7) = 0;
    param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xe2);
    goto LAB_003d3740;
  case 0xe:
    if ((char)param_2[0xf2] == '\x03') {
      if (0 < param_2[0xed]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
      }
      if (0 < param_2[0xea]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (0 < param_2[0xe7]) goto LAB_003d3312;
    }
    goto LAB_003d3544;
  case 0xf:
    if (0 < param_2[0xe1]) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
    }
    if (0 < param_2[0xde]) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xdb] != 0) {
LAB_003d3312:
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    goto LAB_003d3544;
  case 0x10:
    param_1 = <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>
                        (param_2 + 0xde);
    *(undefined1 *)(param_2 + 0xd5) = 0;
LAB_003d3544:
    if (0 < param_2[0xcb]) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6a9) = 0;
    param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 199);
    goto LAB_003d3740;
  case 0x11:
    if ((char)param_2[0xf2] == '\x03') {
      if (0 < param_2[0xed]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
      }
      if (0 < param_2[0xea]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (0 < param_2[0xe7]) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    }
    param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xf3);
    goto LAB_003d3740;
  case 0x12:
    if ((char)param_2[0xf2] == '\x03') {
      if (0 < param_2[0xed]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d30bd::switchdataD_00192f14,1);
      }
      if (0 < param_2[0xea]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if (0 < param_2[0xe7]) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    }
LAB_003d3740:
    if (param_2[0xc2] != 2) {
      if (*(char *)((longlong)param_2 + 0x6aa) != '\0') {
        if (param_2[0xc2] == 0) {
          cVar2 = *(char *)((longlong)param_2 + 0x6ab);
        }
        else {
          cVar2 = *(char *)((longlong)param_2 + 0x6ac);
        }
        if (cVar2 != '\0') {
          param_1 = <serde_json[dc3825464c436029]::value::Value>(param_2 + 0xc3);
        }
      }
      *(undefined1 *)((longlong)param_2 + 0x6aa) = 0;
    }
    *(undefined2 *)((longlong)param_2 + 0x6aa) = 0;
    *(undefined1 *)((longlong)param_2 + 0x6ac) = 0;
  }
  if (SBORROW8(0,param_2[0xa0])) {
    *(undefined1 *)(param_2 + 0xd6) = 0;
  }
LAB_003d3917:
  *(undefined1 *)(param_2 + 0xd6) = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  lVar7 = param_2[0x9a];
  if (lVar7 != 0) {
    lVar8 = param_2[0x99] + 8;
    do {
      if (*(longlong *)(lVar8 + -8) != 0) {
        param_1 = (*(code *)puVar5)(param_1,1);
      }
      lVar8 = lVar8 + 0x18;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (param_2[0x98] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6b1) = 0;
  <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>(param_2 + 0x8b);
  *(undefined1 *)((longlong)param_2 + 0x6b2) = 0;
  if (param_2[0x8a] != 0) {
    plVar4 = param_2 + 0x8a;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar4);
    plVar3 = (longlong *)*plVar4;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar4);
    }
  }
  uVar10 = <craggemini_core[66f3c71560d70857]::acp_backend::AcpTurnRequest>(param_2 + 0x51);
  *(undefined1 *)((longlong)param_2 + 0x6b3) = 0;
  if (param_2[0x4e] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
  }
  *(undefined1 *)((longlong)param_2 + 0x6b4) = 0;
  plVar4 = param_2 + 0x4b;
  uVar10 = <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop(plVar4);
  plVar3 = (longlong *)*plVar4;
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    uVar10 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
             ::drop_slow(plVar4);
  }
  *(undefined1 *)((longlong)param_2 + 0x6b5) = 0;
  lVar7 = param_2[0x4a];
  if (lVar7 != 0) {
    uVar6 = *(ulonglong *)(lVar7 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(lVar7 + 0x30);
      bVar9 = uVar6 == uVar1;
      if (bVar9) {
        *(ulonglong *)(lVar7 + 0x30) = uVar6 | 4;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (!bVar9);
    if (((uint)uVar6 & 10) == 8) {
      uVar10 = (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x10))();
    }
    if (((uint)uVar6 & 3) == 1) {
      LOCK();
      *(ulonglong *)(lVar7 + 0x30) = *(ulonglong *)(lVar7 + 0x30) & 0xfffffffffffffffe;
      UNLOCK();
      uVar10 = (*(code *)PTR_drop_task_00799060)();
    }
    if ((uVar6 & 2) != 0) {
      local_28 = *(undefined8 *)(lVar7 + 0x58);
      uVar10 = *(undefined4 *)(lVar7 + 0x38);
      lVar8 = *(longlong *)(lVar7 + 0x38);
      uStack_40 = *(undefined4 *)(lVar7 + 0x40);
      uStack_3c = *(undefined4 *)(lVar7 + 0x44);
      local_38 = *(undefined4 *)(lVar7 + 0x48);
      uStack_34 = *(undefined4 *)(lVar7 + 0x4c);
      uStack_30 = *(undefined4 *)(lVar7 + 0x50);
      uStack_2c = *(undefined4 *)(lVar7 + 0x54);
      *(undefined8 *)(lVar7 + 0x38) = 2;
      if (lVar8 != 2) {
        uVar10 = <serde_json[dc3825464c436029]::value::Value>(&uStack_40);
      }
    }
    plVar4 = (longlong *)param_2[0x4a];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        uVar10 = <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>
                 ::drop_slow(param_2 + 0x4a);
      }
    }
  }
  *(undefined1 *)((longlong)param_2 + 0x6b6) = 0;
  if (param_2[0x46] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
  }
  *(undefined1 *)((longlong)param_2 + 0x6b7) = 0;
switchD_003d30bd_caseD_1:
  return;
}


