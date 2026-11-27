// 005a1cf0 <craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x005a2994 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>
          (undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  switch(*(undefined1 *)((longlong)param_2 + 0x671)) {
  case 0:
    if ((-1 < *param_2) && (*param_2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_2 + 0xd);
    return;
  default:
    goto switchD_005a1d25_caseD_1;
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
      plVar1 = (longlong *)param_2[0xda];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = (longlong *)param_2[0xda];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                        (param_2 + 0xdb);
    if (((((char)param_2[0x10a] == '\x03') && ((char)param_2[0x121] == '\x03')) &&
        ((char)param_2[0x120] == '\x03')) &&
       (((char)param_2[0x11f] == '\x03' && ((char)param_2[0x11e] == '\x03')))) {
      param_1 = (*(code *)PTR_drop_007990e0)();
      if (param_2[0x119] != 0) {
        param_1 = (**(code **)(param_2[0x119] + 0x18))();
      }
    }
    goto LAB_005a2651;
  case 4:
    if (param_2[0xd9] != 2) {
      if (param_2[0xd9] == 0) {
        plVar1 = (longlong *)param_2[0xda];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = (longlong *)param_2[0xda];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                          (param_2 + 0xdb);
    }
    goto LAB_005a26f2;
  case 5:
    uVar7 = <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>
                      (param_2 + 0x132);
    *(undefined2 *)((longlong)param_2 + 0x6b6) = 0;
    if (param_2[0x125] != 0) {
      uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
    }
    if (param_2[0x122] != 0) {
      uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
    }
    if (param_2[0xfd] == -0x7ffffffffffffffd) {
      if (param_2[0x101] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
      }
    }
    else {
      <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(param_2 + 0xfd);
    }
    *(undefined2 *)(param_2 + 0xd7) = 0;
    *(undefined1 *)((longlong)param_2 + 0x6ba) = 0;
    goto LAB_005a226f;
  case 6:
    <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>(param_2 + 0xdb);
    *(undefined1 *)((longlong)param_2 + 0x6b5) = 0;
LAB_005a226f:
    param_1 = <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(param_2 + 0x81);
    if (param_2[0x81] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    puVar3 = PTR___rust_dealloc_00798fc8;
    lVar5 = param_2[0x80];
    if (lVar5 != 0) {
      lVar6 = param_2[0x7f] + 0x38;
      do {
        if (*(longlong *)(lVar6 + -0x38) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (*(longlong *)(lVar6 + -0x20) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (*(longlong *)(lVar6 + -8) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        lVar6 = lVar6 + 0x48;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_2[0x7e] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(undefined1 *)((longlong)param_2 + 0x6a4) = 0;
LAB_005a26f2:
    if ((*(char *)((longlong)param_2 + 0x6ab) != '\0') &&
       (param_1 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                  ::drop(param_2 + 0x7b), param_2[0x7b] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(undefined1 *)((longlong)param_2 + 0x6ab) = 0;
    *(undefined1 *)((longlong)param_2 + 0x6bb) = 0;
    lVar5 = param_2[0x52];
    pcVar2 = (code *)PTR___rust_dealloc_00798fc8;
    goto joined_r0x005a2740;
  case 7:
    if ((char)param_2[0x142] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_2 + 0x111);
    }
    *(undefined1 *)((longlong)param_2 + 0x6b1) = 0;
    <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0xfb);
    param_1 = <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(param_2 + 0xe5);
    *(undefined1 *)((longlong)param_2 + 0x6b2) = 0;
    if ((param_2[0xe2] != -1) && (param_2[0xe2] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6b3) = 0;
    if (param_2[0xdf] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xdc] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6b4) = 0;
    goto LAB_005a25f5;
  case 8:
    param_1 = <craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::_closure_0_>
                        (param_2 + 0xd8);
    goto LAB_005a20b6;
  case 9:
    if ((char)param_2[0x11f] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_2 + 0xee);
    }
    param_1 = <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0xd8);
LAB_005a20b6:
    if (param_2[0xb1] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    lVar5 = param_2[0xae];
    goto joined_r0x005a21d8;
  case 10:
    param_1 = <craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::_closure_0_>
                        (param_2 + 0xd8);
    goto LAB_005a219b;
  case 0xb:
    if ((char)param_2[0x11f] == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_2 + 0xee);
    }
    param_1 = <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0xd8);
LAB_005a219b:
    *(undefined2 *)((longlong)param_2 + 0x6af) = 0;
    *(undefined1 *)(param_2 + 0xcf) = 0;
    if (param_2[0xc3] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    lVar5 = param_2[0xc0];
    goto joined_r0x005a21d8;
  case 0xc:
    if ((char)param_2[0x166] == '\x03') {
      if (*(char *)((longlong)param_2 + 0xb29) == '\x03') {
        param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                            (param_2 + 0x112);
        *(undefined1 *)((longlong)param_2 + 0xb2c) = 0;
      }
      else if ((*(char *)((longlong)param_2 + 0xb29) == '\0') && (param_2[0xff] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xb31) = 0;
    }
    if (param_2[0xde] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x677) = 0;
    goto LAB_005a2a1d;
  case 0xd:
    if ((char)param_2[0x166] == '\x03') {
      if (*(char *)((longlong)param_2 + 0xb29) == '\x03') {
        param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                            (param_2 + 0x112);
        *(undefined1 *)((longlong)param_2 + 0xb2c) = 0;
      }
      else if ((*(char *)((longlong)param_2 + 0xb29) == '\0') && (param_2[0xff] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xb31) = 0;
    }
    if (param_2[0xde] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
LAB_005a2a1d:
    if (param_2[0xdb] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
LAB_005a2a3b:
    lVar5 = param_2[0xd8];
    goto joined_r0x005a21d8;
  case 0xe:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
    }
    if ((param_2[0xe7] != -1) && (param_2[0xe7] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xe4] != -1) && (param_2[0xe4] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xe1] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xde] != -1) && (param_2[0xde] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xdb] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xd8] - 1U < 0xfffffffffffffffe) goto LAB_005a2606;
    goto LAB_005a2615;
  case 0xf:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6ae) = 0;
    if (param_2[0xe8] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xe5] != -1) && (param_2[0xe5] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (((*(char *)((longlong)param_2 + 0x675) != '\0') && (param_2[0xe2] != -1)) &&
       (param_2[0xe2] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x675) = 0;
    break;
  case 0x10:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
    }
    if (param_2[0xe8] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x676) = 0;
    if (param_2[0xe2] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0x152] != -2) {
      param_1 = <craggemini_core[66f3c71560d70857]::protocol::Failure>(param_2 + 0x152);
    }
    break;
  case 0x11:
    if (*(char *)((longlong)param_2 + 0xa41) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xf5);
      *(undefined1 *)((longlong)param_2 + 0xa44) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa41) == '\0') && (param_2[0xe2] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_005a1d25::switchdataD_0019ce00,1);
    }
    break;
  case 0x12:
    if ((char)param_2[0x121] == '\x03') {
      param_1 = <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                          (param_2 + 0xf0);
    }
    if ((param_2[0xde] != -1) && (param_2[0xde] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6ac) = 0;
    if ((param_2[0xdb] != -1) && (param_2[0xdb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x6ad) = 0;
    goto LAB_005a2a3b;
  }
  if (param_2[0xdf] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((param_2[0xdc] != -1) && (param_2[0xdc] != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
LAB_005a25f5:
  lVar5 = param_2[0xd9];
joined_r0x005a21d8:
  if (lVar5 != 0) {
LAB_005a2606:
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
LAB_005a2615:
  uVar4 = 2;
  if (param_2[0x85] < 0) {
    uVar4 = param_2[0x85] ^ 0x8000000000000000;
  }
  if ((10 < uVar4 - 1) && (1 < uVar4 - 0xd)) {
    <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(param_2 + 0x85);
  }
  param_1 = 0;
  *(undefined8 *)((longlong)param_2 + 0x694) = 0;
  *(undefined8 *)((longlong)param_2 + 0x69c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x689) = 0;
  *(undefined8 *)((longlong)param_2 + 0x691) = 0;
  *(undefined8 *)((longlong)param_2 + 0x679) = 0;
  *(undefined8 *)((longlong)param_2 + 0x681) = 0;
LAB_005a2651:
  lVar5 = param_2[0x52];
  pcVar2 = (code *)PTR___rust_dealloc_00798fc8;
joined_r0x005a2740:
  PTR___rust_dealloc_00798fc8 = pcVar2;
  if (lVar5 != 0) {
    lVar6 = param_2[0x51] + 0x20;
    do {
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        param_1 = (*pcVar2)(param_1,1);
      }
      if (*(longlong *)(lVar6 + -8) != 0) {
        param_1 = (*pcVar2)(param_1,1);
      }
      lVar6 = lVar6 + 0x30;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x50] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_2[0x4f];
  if (lVar5 != 0) {
    lVar6 = param_2[0x4e] + 0x38;
    do {
      if (*(longlong *)(lVar6 + -0x38) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      if ((*(longlong *)(lVar6 + -8) != -1) && (*(longlong *)(lVar6 + -8) != 0)) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      lVar6 = lVar6 + 0x48;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x4d] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a5) = 0;
  lVar5 = param_2[0x4b];
  for (lVar6 = param_2[0x4c] + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
    param_1 = <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(lVar5);
    lVar5 = lVar5 + 0x48;
  }
  if (param_2[0x4a] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a6) = 0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_2[0x49];
  if (lVar5 != 0) {
    lVar6 = param_2[0x48] + 8;
    do {
      if (*(longlong *)(lVar6 + -8) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x47] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a7) = 0;
  uVar7 = <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>(param_2 + 0x3a);
  *(undefined1 *)(param_2 + 0xd5) = 0;
  if ((param_2[0x37] != -1) && (param_2[0x37] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a9) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_2[0x36];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = (longlong *)param_2[0x35];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  uVar7 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x6aa) = 0;
  if ((-1 < param_2[0x22]) && (param_2[0x22] != 0)) {
    (*(code *)PTR_free_0079adc8)(uVar7,1);
    return;
  }
switchD_005a1d25_caseD_1:
  return;
}


