// 00259840 <craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00259a45 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy,
   craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::_closure_0_::_closure_1_>::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  
  switch(*(undefined1 *)(param_1 + 0x2df0)) {
  case 0:
    <craggemini_core[66f3c71560d70857]::Config>(param_1);
    uVar21 = <craggemini_core[66f3c71560d70857]::license::LicenseGate>(param_1 + 0x2d0);
    if (*(char *)(param_1 + 0x5b1) == '\0') {
      puVar13 = *(undefined8 **)(param_1 + 0x598);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    else {
      if (*(char *)(param_1 + 0x5b1) != '\x03') {
        return;
      }
      puVar13 = *(undefined8 **)(param_1 + 0x598);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    if (puVar13[1] != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x5a8);
    if ((code *)*puVar13 != (code *)0x0) {
      uVar21 = (*(code *)*puVar13)();
    }
    if (puVar13[1] == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(uVar21,puVar13[2]);
    return;
  default:
    goto switchD_00259870_caseD_1;
  case 3:
    auVar22._0_8_ =
         <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_>
                   (param_1 + 0x2e10);
    auVar22._8_8_ = extraout_XMM0_Qb_00;
    goto LAB_00259e45;
  case 4:
    auVar22._0_8_ =
         <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>
                   (param_1 + 0x2e10);
    auVar22._8_8_ = extraout_XMM0_Qb;
    if (*(char *)(param_1 + 0x2df8) == '\0') goto LAB_00259e45;
    goto LAB_00259e2c;
  case 5:
    <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>(param_1 + 0x2e78);
    uVar21 = <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0x2e10));
    if (*(longlong *)(param_1 + 0x2e10) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    (*(code *)PTR_munmap_007990b8)();
    goto LAB_00259db2;
  case 6:
    goto switchD_00259870_caseD_6;
  case 7:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x2e10);
    break;
  case 8:
    break;
  case 9:
    if (*(longlong *)(param_1 + 0x2e10) != 2) {
      if (*(longlong *)(param_1 + 0x2e10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x2e18);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x2e18);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x2e20);
    }
    break;
  case 10:
    goto switchD_00259870_caseD_a;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x2e10);
    goto LAB_00259a66;
  case 0xc:
    if (*(longlong *)(param_1 + 0x2e10) != 2) {
      if (*(longlong *)(param_1 + 0x2e10) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x2e18);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x2e18);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x2e20);
    }
LAB_00259a66:
    uVar2 = *(ulonglong *)(param_1 + 0x2de8);
    if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x2e02) = 0;
switchD_00259870_caseD_a:
    if (*(char *)(param_1 + 0x2dd9) == '\0') {
      puVar13 = *(undefined8 **)(param_1 + 0x2dc0);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)();
      }
LAB_00259af1:
      if (puVar13[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      puVar13 = *(undefined8 **)(param_1 + 0x2dd0);
      pcVar3 = (code *)*puVar13;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      if (puVar13[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    else if (*(char *)(param_1 + 0x2dd9) == '\x03') {
      puVar13 = *(undefined8 **)(param_1 + 0x2dc0);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)();
      }
      goto LAB_00259af1;
    }
    <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2bb8);
    uVar21 = (*(code *)PTR_close_00799030)();
    if (*(longlong *)(param_1 + 0x2b50) != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    if ((*(longlong *)(param_1 + 0x2b68) != -1) && (*(longlong *)(param_1 + 0x2b68) != 0)) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    if ((*(longlong *)(param_1 + 0x2b80) != -1) && (*(longlong *)(param_1 + 0x2b80) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    plVar1 = *(longlong **)(param_1 + 0xcd0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar17 = *plVar1;
    UNLOCK();
    goto joined_r0x00259bc6;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x2b48);
  if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  *(undefined1 *)(param_1 + 0x2e03) = 0;
switchD_00259870_caseD_6:
  if (*(char *)(param_1 + 0x2b39) == '\0') {
    puVar13 = *(undefined8 **)(param_1 + 0x2b20);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)();
    }
LAB_00259c77:
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar13 = *(undefined8 **)(param_1 + 0x2b30);
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else if (*(char *)(param_1 + 0x2b39) == '\x03') {
    puVar13 = *(undefined8 **)(param_1 + 0x2b20);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)();
    }
    goto LAB_00259c77;
  }
  <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2918);
  if (*(char *)(param_1 + 0x2909) == '\x03') {
    <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::_closure_0_)>
              (param_1 + 0x27d8);
  }
  <craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
            (param_1 + 0xd30);
  *(undefined2 *)(param_1 + 0x2e04) = 0;
  *(undefined1 *)(param_1 + 0x2e06) = 0;
  plVar1 = *(longlong **)(param_1 + 0xd28);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  *(undefined1 *)(param_1 + 0x2e07) = 0;
  puVar13 = (undefined8 *)(param_1 + 0xd20);
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(puVar13);
  plVar1 = (longlong *)*puVar13;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(puVar13);
  }
  uVar21 = <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0xcf8));
  if (*(longlong *)(param_1 + 0xcf8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xcd8);
  if (*(int *)(param_1 + 0xcf0) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xcd8);
  *(undefined1 *)(param_1 + 0x2e08) = 0;
  plVar1 = *(longlong **)(param_1 + 0xcd0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  lVar17 = *plVar1;
  UNLOCK();
joined_r0x00259bc6:
  if (lVar17 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(param_1 + 0xcd0);
  }
LAB_00259db2:
  *(undefined2 *)(param_1 + 0x2e09) = 0;
  *(undefined1 *)(param_1 + 0x2e0b) = 0;
  auVar22._0_8_ =
       <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
       ::drop((longlong *)(param_1 + 0xbf8));
  auVar22._8_8_ = extraout_XMM0_Qb_01;
  if (*(longlong *)(param_1 + 0xbf8) != 0) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
    auVar22._8_8_ = extraout_XMM0_Qb_02;
  }
  if (*(char *)(param_1 + 0x2df7) != '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x3168);
    if (*(int *)(param_1 + 0x3180) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    auVar22._0_8_ =
         <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x3168);
    auVar22._8_8_ = extraout_XMM0_Qb_03;
  }
  *(undefined1 *)(param_1 + 0x2df7) = 0;
  if (*(char *)(param_1 + 0x2df8) != '\0') {
LAB_00259e2c:
    plVar1 = *(longlong **)(param_1 + 0xbf0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ =
           <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>
           ::drop_slow(param_1 + 0xbf0);
      auVar22._8_8_ = extraout_XMM0_Qb_04;
    }
  }
LAB_00259e45:
  *(undefined1 *)(param_1 + 0x2df8) = 0;
  *(undefined1 *)(param_1 + 0x2e0c) = 0;
  if (*(char *)(param_1 + 0x2df9) != '\0') {
    auVar22._0_8_ = (*(code *)PTR_drop_007990c8)();
    auVar22._8_8_ = extraout_XMM0_Qb_05;
    plVar1 = *(longlong **)(param_1 + 0xba8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ = (*(code *)PTR_drop_slow_007990d0)();
      auVar22._8_8_ = extraout_XMM0_Qb_06;
    }
  }
  *(undefined1 *)(param_1 + 0x2df9) = 0;
  if ((*(char *)(param_1 + 0x2dfa) != '\0') && (*(longlong *)(param_1 + 0xb90) != 0)) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
    auVar22._8_8_ = extraout_XMM0_Qb_07;
  }
  *(undefined1 *)(param_1 + 0x2dfa) = 0;
  if (*(char *)(param_1 + 0x2dfb) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xb88);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ =
           <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
           ::drop_slow(param_1 + 0xb88);
      auVar22._8_8_ = extraout_XMM0_Qb_08;
    }
  }
  *(undefined1 *)(param_1 + 0x2dfb) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  lVar17 = *(longlong *)(param_1 + 0xb80);
  if (lVar17 != 0) {
    lVar18 = *(longlong *)(param_1 + 0xb78) + 8;
    do {
      if (*(longlong *)(lVar18 + -8) != 0) {
        auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
        auVar22._8_8_ = extraout_XMM0_Qb_09;
      }
      lVar18 = lVar18 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)(param_1 + 0xb70) != 0) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,8);
    auVar22._8_8_ = extraout_XMM0_Qb_10;
  }
  if (*(char *)(param_1 + 0x2dfc) != '\0') {
    auVar22._0_8_ = <craggemini_core[66f3c71560d70857]::resume::SessionStore>(param_1 + 0xac0);
    auVar22._8_8_ = extraout_XMM0_Qb_11;
  }
  *(undefined1 *)(param_1 + 0x2dfc) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x2dfd) != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0xa78);
    if (uVar2 != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0xa70);
      uVar5 = *(ulonglong *)(param_1 + 0xa60);
      lVar17 = *(longlong *)(param_1 + 0xa68);
      uVar9 = uVar5;
      if (uVar4 < uVar5) {
        uVar9 = 0;
      }
      lVar18 = uVar4 - uVar9;
      uVar11 = uVar5 - lVar18;
      lVar19 = uVar2 - uVar11;
      bVar20 = lVar19 != 0;
      if (uVar2 < uVar11) {
        lVar19 = 0;
      }
      uVar10 = lVar18 + uVar2;
      if (uVar2 >= uVar11 && bVar20) {
        uVar10 = uVar5;
      }
      lVar18 = uVar10 - lVar18;
      if (lVar18 != 0) {
        lVar15 = uVar4 * 0x18 + uVar9 * -0x18 + lVar17 + 8;
        do {
          if (*(longlong *)(lVar15 + -8) != 0) {
            auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
            auVar22._8_8_ = extraout_XMM0_Qb_22;
          }
          lVar15 = lVar15 + 0x18;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      puVar8 = PTR___rust_dealloc_00798fc8;
      if (uVar11 < uVar2) {
        lVar17 = lVar17 + 8;
        do {
          if (*(longlong *)(lVar17 + -8) != 0) {
            auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
            auVar22._8_8_ = extraout_XMM0_Qb_12;
          }
          lVar17 = lVar17 + 0x18;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
    }
    if (*(longlong *)(param_1 + 0xa60) != 0) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,8);
      auVar22._8_8_ = extraout_XMM0_Qb_13;
    }
    puVar8 = PTR___rust_dealloc_00798fc8;
    lVar17 = *(longlong *)(param_1 + 0xa88);
    if (lVar17 != 0) {
      lVar18 = *(longlong *)(param_1 + 0xa98);
      if (lVar18 != 0) {
        pauVar12 = *(undefined1 (**) [16])(param_1 + 0xa80);
        auVar22 = *pauVar12;
        pauVar14 = pauVar12 + 1;
        uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar16 == 0) {
            do {
              auVar22 = *pauVar14;
              pauVar12 = pauVar12 + -0x18;
              pauVar14 = pauVar14 + 1;
              uVar16 = (ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar22[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar16 == 0);
          }
          uVar6 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (*(longlong *)((longlong)pauVar12 + (ulonglong)uVar6 * -0x18 + -0x18) != 0) {
            auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
            auVar22._8_8_ = extraout_XMM0_Qb_14;
          }
          lVar18 = lVar18 + -1;
          uVar16 = uVar16 - 1 & uVar16;
        } while (lVar18 != 0);
      }
      if (lVar17 + (lVar17 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
        auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,0x10);
        auVar22._8_8_ = extraout_XMM0_Qb_15;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x2dfd) = 0;
  if (*(char *)(param_1 + 0x2dfe) != '\0') {
    auVar22._0_8_ = (*(code *)PTR_close_00799030)();
    auVar22._8_8_ = extraout_XMM0_Qb_16;
    if (*(longlong *)(param_1 + 0x9f8) != 0) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_17;
    }
    if ((*(longlong *)(param_1 + 0xa10) != -1) && (*(longlong *)(param_1 + 0xa10) != 0)) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_18;
    }
    if ((*(longlong *)(param_1 + 0xa28) != -1) && (*(longlong *)(param_1 + 0xa28) != 0)) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_19;
    }
  }
  uVar21 = auVar22._0_8_;
  *(undefined1 *)(param_1 + 0x2dfe) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  lVar17 = *(longlong *)(param_1 + 0x9e8);
  if (lVar17 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x9e0) + 0x20;
    do {
      if (*(longlong *)(lVar18 + -0x20) != 0) {
        auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
        auVar22._8_8_ = extraout_XMM0_Qb_20;
      }
      if ((*(longlong *)(lVar18 + -8) != -1) && (*(longlong *)(lVar18 + -8) != 0)) {
        auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
        auVar22._8_8_ = extraout_XMM0_Qb_21;
      }
      uVar21 = auVar22._0_8_;
      lVar18 = lVar18 + 0x38;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,8);
  }
  *(undefined2 *)(param_1 + 0x2e0d) = 0;
  if (*(char *)(param_1 + 0x2dff) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0x910);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar21 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>
               ::drop_slow(param_1 + 0x910);
    }
  }
  *(undefined1 *)(param_1 + 0x2dff) = 0;
  if (*(char *)(param_1 + 0x2e00) != '\0') {
    if (*(char *)(param_1 + 0x909) == '\0') {
      puVar13 = *(undefined8 **)(param_1 + 0x8f0);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    else {
      if (*(char *)(param_1 + 0x909) != '\x03') goto LAB_0025a305;
      puVar13 = *(undefined8 **)(param_1 + 0x8f0);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    if (puVar13[1] != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x900);
    if ((code *)*puVar13 != (code *)0x0) {
      uVar21 = (*(code *)*puVar13)();
    }
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
  }
LAB_0025a305:
  *(undefined1 *)(param_1 + 0x2e00) = 0;
  *(undefined2 *)(param_1 + 0x2df5) = 0;
  if (*(char *)(param_1 + 0x2e01) != '\0') {
    <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x5b8);
  }
  *(undefined1 *)(param_1 + 0x2e01) = 0;
switchD_00259870_caseD_1:
  return;
}


