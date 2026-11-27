// 003a6100 <craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003a7134 */
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
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  switch(*(undefined1 *)((longlong)param_2 + 0x671)) {
  case 0:
    if ((-1 < *param_2) && (*param_2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_2 + 0xd);
    return;
  default:
    goto switchD_003a6135_caseD_1;
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
      plVar6 = (longlong *)param_2[0xda];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar6 = (longlong *)param_2[0xda];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
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
    goto LAB_003a6d86;
  case 4:
    if (param_2[0xd9] != 2) {
      if (param_2[0xd9] == 0) {
        plVar6 = (longlong *)param_2[0xda];
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar6 = (longlong *)param_2[0xda];
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                          (param_2 + 0xdb);
    }
    goto LAB_003a6ccd;
  case 5:
    param_1 = <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>
                        (param_2 + 0x132);
    *(undefined2 *)((longlong)param_2 + 0x6b6) = 0;
    if (param_2[0x125] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0x122] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if (param_2[0xfd] == -0x7ffffffffffffffd) {
      if (param_2[0x101] != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
    }
    else {
      param_1 = <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(param_2 + 0xfd);
    }
    *(undefined2 *)(param_2 + 0xd7) = 0;
    *(undefined1 *)((longlong)param_2 + 0x6ba) = 0;
    goto LAB_003a6789;
  case 6:
    param_1 = <<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_>
                        (param_2 + 0xdb);
    *(undefined1 *)((longlong)param_2 + 0x6b5) = 0;
LAB_003a6789:
    puVar3 = PTR___rust_dealloc_00798fc8;
    plVar6 = (longlong *)param_2[0x82];
    for (lVar5 = param_2[0x83] + 1; lVar5 != 1; lVar5 = lVar5 + -1) {
      if (*plVar6 != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      if (plVar6[3] != 0) {
        (*(code *)puVar3)(param_1,1);
      }
      plVar1 = plVar6 + 6;
      plVar6 = plVar6 + 10;
      param_1 = <serde_json[dc3825464c436029]::value::Value>(plVar1);
    }
    if (param_2[0x81] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    lVar5 = param_2[0x80];
    if (lVar5 != 0) {
      lVar7 = param_2[0x7f] + 0x38;
      do {
        if (*(longlong *)(lVar7 + -0x38) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (*(longlong *)(lVar7 + -0x20) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (*(longlong *)(lVar7 + -8) != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        lVar7 = lVar7 + 0x48;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_2[0x7e] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
    *(undefined1 *)((longlong)param_2 + 0x6a4) = 0;
LAB_003a6ccd:
    puVar3 = PTR___rust_dealloc_00798fc8;
    if (*(char *)((longlong)param_2 + 0x6ab) != '\0') {
      plVar6 = (longlong *)param_2[0x7c];
      for (lVar5 = param_2[0x7d] + 1; lVar5 != 1; lVar5 = lVar5 + -1) {
        if (*plVar6 != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (plVar6[3] != 0) {
          param_1 = (*(code *)puVar3)(param_1,1);
        }
        if (plVar6[6] != 0) {
          (*(code *)puVar3)(param_1,1);
        }
        plVar1 = plVar6 + 9;
        plVar6 = plVar6 + 0xd;
        param_1 = <serde_json[dc3825464c436029]::value::Value>(plVar1);
      }
      if (param_2[0x7b] != 0) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x6ab) = 0;
    *(undefined1 *)((longlong)param_2 + 0x6bb) = 0;
LAB_003a6d86:
    lVar5 = param_2[0x51];
    lVar7 = param_2[0x52];
    pcVar2 = (code *)PTR___rust_dealloc_00798fc8;
    goto joined_r0x003a6eaa;
  case 7:
    if ((char)param_2[0x142] == '\x03') {
      param_1 = <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                          (param_2 + 0x111);
    }
    *(undefined1 *)((longlong)param_2 + 0x6b1) = 0;
    if ((param_2[0xfb] != -1) && (param_2[0xfb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xfe] != -1) && (param_2[0xfe] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
              (param_2[0x101]);
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
    goto LAB_003a6c00;
  case 8:
    if (*(char *)((longlong)param_2 + 0xa59) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xf8);
      *(undefined1 *)((longlong)param_2 + 0xa5c) = 0;
      if ((*(char *)((longlong)param_2 + 0xa5b) != '\0') && (param_2[0xee] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xa5b) = 0;
      lVar5 = param_2[0xb1];
    }
    else {
      if ((*(char *)((longlong)param_2 + 0xa59) != '\0') || (param_2[0xd8] == 0)) goto LAB_003a6593;
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
      lVar5 = param_2[0xb1];
    }
    goto joined_r0x003a6b03;
  case 9:
    if ((char)param_2[0x11f] == '\x03') {
      param_1 = <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                          (param_2 + 0xee);
    }
    if ((param_2[0xd8] != -1) && (param_2[0xd8] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xdb] != -1) && (param_2[0xdb] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    param_1 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                        (param_2[0xde]);
LAB_003a6593:
    lVar5 = param_2[0xb1];
joined_r0x003a6b03:
    if (lVar5 != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    lVar5 = param_2[0xae];
    goto LAB_003a6e45;
  case 10:
    if (*(char *)((longlong)param_2 + 0xa59) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xf8);
      *(undefined1 *)((longlong)param_2 + 0xa5c) = 0;
      if ((*(char *)((longlong)param_2 + 0xa5b) != '\0') && (param_2[0xee] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xa5b) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa59) == '\0') && (param_2[0xd8] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
    }
    goto LAB_003a6c73;
  case 0xb:
    if ((char)param_2[0x11f] == '\x03') {
      param_1 = <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                          (param_2 + 0xee);
    }
    if ((param_2[0xd8] != -1) && (param_2[0xd8] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    if ((param_2[0xdb] != -1) && (param_2[0xdb] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    param_1 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                        (param_2[0xde]);
LAB_003a6c73:
    *(undefined2 *)((longlong)param_2 + 0x6af) = 0;
    *(undefined1 *)(param_2 + 0xcf) = 0;
    if (param_2[0xc3] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    lVar5 = param_2[0xc0];
    goto LAB_003a6e45;
  case 0xc:
    if ((char)param_2[0x166] == '\x03') {
      if (*(char *)((longlong)param_2 + 0xb29) == '\x03') {
        param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                            (param_2 + 0x112);
        *(undefined1 *)((longlong)param_2 + 0xb2c) = 0;
      }
      else if ((*(char *)((longlong)param_2 + 0xb29) == '\0') && (param_2[0xff] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xb31) = 0;
    }
    if (param_2[0xde] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x677) = 0;
    goto LAB_003a6e1b;
  case 0xd:
    if ((char)param_2[0x166] == '\x03') {
      if (*(char *)((longlong)param_2 + 0xb29) == '\x03') {
        param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                            (param_2 + 0x112);
        *(undefined1 *)((longlong)param_2 + 0xb2c) = 0;
      }
      else if ((*(char *)((longlong)param_2 + 0xb29) == '\0') && (param_2[0xff] != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
      }
      *(undefined1 *)((longlong)param_2 + 0xb31) = 0;
    }
    if (param_2[0xde] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
LAB_003a6e1b:
    if (param_2[0xdb] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
LAB_003a6e39:
    lVar5 = param_2[0xd8];
    goto LAB_003a6e45;
  case 0xe:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
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
    if (param_2[0xd8] - 1U < 0xfffffffffffffffe) goto LAB_003a6e4a;
    goto LAB_003a6e59;
  case 0xf:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
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
    lVar5 = param_2[0xdf];
    break;
  case 0x10:
    if (*(char *)((longlong)param_2 + 0xa89) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xfe);
      *(undefined1 *)((longlong)param_2 + 0xa8c) = 0;
    }
    else if ((*(char *)((longlong)param_2 + 0xa89) == '\0') && (param_2[0xeb] != 0)) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
    }
    if (param_2[0xe8] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    *(undefined1 *)((longlong)param_2 + 0x676) = 0;
    if (param_2[0xe2] != 0) {
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
    }
    lVar5 = param_2[0x152];
    if (lVar5 != -2) {
      if ((lVar5 != -1) && (lVar5 != 0)) {
        param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      if ((param_2[0x155] != -1) && (param_2[0x155] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
      }
      param_1 = <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                          (param_2[0x158]);
    }
LAB_003a6bbe:
    lVar5 = param_2[0xdf];
    break;
  case 0x11:
    if (*(char *)((longlong)param_2 + 0xa41) == '\x03') {
      param_1 = <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::time::sleep::Sleep,<craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_)>
                          (param_2 + 0xf5);
      *(undefined1 *)((longlong)param_2 + 0xa44) = 0;
      lVar5 = param_2[0xdf];
    }
    else {
      if ((*(char *)((longlong)param_2 + 0xa41) != '\0') || (param_2[0xe2] == 0)) goto LAB_003a6bbe;
      param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003a6135::switchdataD_0019287c,1);
      lVar5 = param_2[0xdf];
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
    goto LAB_003a6e39;
  }
  if (lVar5 != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
  if ((param_2[0xdc] != -1) && (param_2[0xdc] != 0)) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
LAB_003a6c00:
  lVar5 = param_2[0xd9];
LAB_003a6e45:
  if (lVar5 != 0) {
LAB_003a6e4a:
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
  }
LAB_003a6e59:
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
  lVar5 = param_2[0x51];
  lVar7 = param_2[0x52];
  pcVar2 = (code *)PTR___rust_dealloc_00798fc8;
joined_r0x003a6eaa:
  PTR___rust_dealloc_00798fc8 = pcVar2;
  if (lVar7 != 0) {
    lVar5 = lVar5 + 0x20;
    do {
      if (*(longlong *)(lVar5 + -0x20) != 0) {
        param_1 = (*pcVar2)(param_1,1);
      }
      if (*(longlong *)(lVar5 + -8) != 0) {
        param_1 = (*pcVar2)(param_1,1);
      }
      lVar5 = lVar5 + 0x30;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (param_2[0x50] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_2[0x4f];
  if (lVar5 != 0) {
    lVar7 = param_2[0x4e] + 0x38;
    do {
      if (*(longlong *)(lVar7 + -0x38) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      if (*(longlong *)(lVar7 + -0x20) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      if ((*(longlong *)(lVar7 + -8) != -1) && (*(longlong *)(lVar7 + -8) != 0)) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      lVar7 = lVar7 + 0x48;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x4d] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a5) = 0;
  lVar5 = param_2[0x4c];
  if (lVar5 != 0) {
    lVar7 = param_2[0x4b];
    do {
      param_1 = <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(lVar7);
      lVar7 = lVar7 + 0x48;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x4a] != 0) {
    param_1 = (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a6) = 0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar5 = param_2[0x49];
  if (lVar5 != 0) {
    lVar7 = param_2[0x48] + 8;
    do {
      if (*(longlong *)(lVar7 + -8) != 0) {
        param_1 = (*(code *)puVar3)(param_1,1);
      }
      lVar7 = lVar7 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_2[0x47] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a7) = 0;
  uVar8 = <craggemini_core[66f3c71560d70857]::resume::AssistantAccumulator>(param_2 + 0x3a);
  *(undefined1 *)(param_2 + 0xd5) = 0;
  if ((param_2[0x37] != -1) && (param_2[0x37] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
  }
  *(undefined1 *)((longlong)param_2 + 0x6a9) = 0;
  (*(code *)PTR_drop_007990c8)();
  plVar6 = (longlong *)param_2[0x36];
  LOCK();
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (*plVar6 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  (*(code *)PTR_drop_007990c8)();
  plVar6 = (longlong *)param_2[0x35];
  LOCK();
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (*plVar6 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  uVar8 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x6aa) = 0;
  if ((-1 < param_2[0x22]) && (param_2[0x22] != 0)) {
    (*(code *)PTR_free_0079adc8)(uVar8,1);
    return;
  }
switchD_003a6135_caseD_1:
  return;
}


