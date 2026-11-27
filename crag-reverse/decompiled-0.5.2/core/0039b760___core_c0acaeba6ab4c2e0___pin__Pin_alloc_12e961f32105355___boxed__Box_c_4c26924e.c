// 0039b760 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>
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
  
  if (*(char *)(param_1 + 0x667c) != '\x03') goto LAB_0039c21b;
  switch(*(undefined1 *)(param_1 + 0x30d0)) {
  case 0:
    <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x2e0);
    <craggemini_core[66f3c71560d70857]::license::LicenseGate>(param_1 + 0x5b0);
    if (*(char *)(param_1 + 0x891) == '\0') {
      uVar21 = <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_1 + 0x870);
    }
    else {
      if (*(char *)(param_1 + 0x891) != '\x03') goto switchD_0039b79d_caseD_1;
      uVar21 = <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_1 + 0x870);
    }
    puVar13 = *(undefined8 **)(param_1 + 0x888);
    if ((code *)*puVar13 != (code *)0x0) {
      uVar21 = (*(code *)*puVar13)();
    }
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
  default:
    goto switchD_0039b79d_caseD_1;
  case 3:
    auVar22._0_8_ =
         <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::_closure_0_>
                   (param_1 + 0x30f0);
    auVar22._8_8_ = extraout_XMM0_Qb_00;
    goto LAB_0039bd28;
  case 4:
    auVar22._0_8_ =
         <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>
                   (param_1 + 0x30f0);
    auVar22._8_8_ = extraout_XMM0_Qb;
    if (*(char *)(param_1 + 0x30d8) == '\0') goto LAB_0039bd28;
    goto LAB_0039bd0f;
  case 5:
    <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>(param_1 + 0x3158);
    uVar21 = <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0x30f0));
    if (*(longlong *)(param_1 + 0x30f0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    (*(code *)PTR_munmap_007990b8)();
    goto LAB_0039bc95;
  case 6:
    goto switchD_0039b79d_caseD_6;
  case 7:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x30f0);
    break;
  case 8:
    break;
  case 9:
    if (*(longlong *)(param_1 + 0x30f0) != 2) {
      if (*(longlong *)(param_1 + 0x30f0) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x3100);
    }
    break;
  case 10:
    goto switchD_0039b79d_caseD_a;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x30f0);
    goto LAB_0039b952;
  case 0xc:
    if (*(longlong *)(param_1 + 0x30f0) != 2) {
      if (*(longlong *)(param_1 + 0x30f0) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x3100);
    }
LAB_0039b952:
    uVar2 = *(ulonglong *)(param_1 + 0x30c8);
    if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x30e2) = 0;
switchD_0039b79d_caseD_a:
    if (*(char *)(param_1 + 0x30b9) == '\0') {
      puVar13 = *(undefined8 **)(param_1 + 0x30a0);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)();
      }
LAB_0039b9dd:
      if (puVar13[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      puVar13 = *(undefined8 **)(param_1 + 0x30b0);
      pcVar3 = (code *)*puVar13;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      if (puVar13[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    else if (*(char *)(param_1 + 0x30b9) == '\x03') {
      puVar13 = *(undefined8 **)(param_1 + 0x30a0);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)();
      }
      goto LAB_0039b9dd;
    }
    <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2e98);
    uVar21 = (*(code *)PTR_close_00799030)();
    if (*(longlong *)(param_1 + 0x2e30) != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    if ((*(longlong *)(param_1 + 0x2e48) != -1) && (*(longlong *)(param_1 + 0x2e48) != 0)) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    if ((*(longlong *)(param_1 + 0x2e60) != -1) && (*(longlong *)(param_1 + 0x2e60) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
    }
    plVar1 = *(longlong **)(param_1 + 0xfb0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    lVar17 = *plVar1;
    UNLOCK();
    goto joined_r0x0039bab2;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x2e28);
  if (((uVar2 != 0) && (1 < ((uint)uVar2 & 3) - 2)) && ((uVar2 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  *(undefined1 *)(param_1 + 0x30e3) = 0;
switchD_0039b79d_caseD_6:
  if (*(char *)(param_1 + 0x2e19) == '\0') {
    puVar13 = *(undefined8 **)(param_1 + 0x2e00);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)();
    }
LAB_0039bb63:
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar13 = *(undefined8 **)(param_1 + 0x2e10);
    pcVar3 = (code *)*puVar13;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else if (*(char *)(param_1 + 0x2e19) == '\x03') {
    puVar13 = *(undefined8 **)(param_1 + 0x2e00);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)();
    }
    goto LAB_0039bb63;
  }
  <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2bf8);
  <craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::_closure_0_::_closure_1_>::_closure_0_::_closure_4_>
            (param_1 + 0x2ab8);
  <craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
            (param_1 + 0x1010);
  *(undefined2 *)(param_1 + 0x30e4) = 0;
  *(undefined1 *)(param_1 + 0x30e6) = 0;
  plVar1 = *(longlong **)(param_1 + 0x1008);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  *(undefined1 *)(param_1 + 0x30e7) = 0;
  puVar13 = (undefined8 *)(param_1 + 0x1000);
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
           ::drop((longlong *)(param_1 + 0xfd8));
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xfb8);
  if (*(int *)(param_1 + 0xfd0) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xfb8);
  *(undefined1 *)(param_1 + 0x30e8) = 0;
  plVar1 = *(longlong **)(param_1 + 0xfb0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  lVar17 = *plVar1;
  UNLOCK();
joined_r0x0039bab2:
  if (lVar17 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(param_1 + 0xfb0);
  }
LAB_0039bc95:
  *(undefined2 *)(param_1 + 0x30e9) = 0;
  *(undefined1 *)(param_1 + 0x30eb) = 0;
  auVar22._0_8_ =
       <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
       ::drop((longlong *)(param_1 + 0xed8));
  auVar22._8_8_ = extraout_XMM0_Qb_01;
  if (*(longlong *)(param_1 + 0xed8) != 0) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
    auVar22._8_8_ = extraout_XMM0_Qb_02;
  }
  if (*(char *)(param_1 + 0x30d7) != '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x3448);
    if (*(int *)(param_1 + 0x3460) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    auVar22._0_8_ =
         <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x3448);
    auVar22._8_8_ = extraout_XMM0_Qb_03;
  }
  *(undefined1 *)(param_1 + 0x30d7) = 0;
  if (*(char *)(param_1 + 0x30d8) != '\0') {
LAB_0039bd0f:
    plVar1 = *(longlong **)(param_1 + 0xed0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ =
           <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>
           ::drop_slow(param_1 + 0xed0);
      auVar22._8_8_ = extraout_XMM0_Qb_04;
    }
  }
LAB_0039bd28:
  *(undefined1 *)(param_1 + 0x30d8) = 0;
  *(undefined1 *)(param_1 + 0x30ec) = 0;
  if (*(char *)(param_1 + 0x30d9) != '\0') {
    auVar22._0_8_ = (*(code *)PTR_drop_007990c8)();
    auVar22._8_8_ = extraout_XMM0_Qb_05;
    plVar1 = *(longlong **)(param_1 + 0xe88);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ = (*(code *)PTR_drop_slow_007990d0)();
      auVar22._8_8_ = extraout_XMM0_Qb_06;
    }
  }
  *(undefined1 *)(param_1 + 0x30d9) = 0;
  if ((*(char *)(param_1 + 0x30da) != '\0') && (*(longlong *)(param_1 + 0xe70) != 0)) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
    auVar22._8_8_ = extraout_XMM0_Qb_07;
  }
  *(undefined1 *)(param_1 + 0x30da) = 0;
  if (*(char *)(param_1 + 0x30db) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xe68);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar22._0_8_ =
           <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
           ::drop_slow(param_1 + 0xe68);
      auVar22._8_8_ = extraout_XMM0_Qb_08;
    }
  }
  *(undefined1 *)(param_1 + 0x30db) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  lVar17 = *(longlong *)(param_1 + 0xe60);
  if (lVar17 != 0) {
    lVar18 = *(longlong *)(param_1 + 0xe58) + 8;
    do {
      if (*(longlong *)(lVar18 + -8) != 0) {
        auVar22._0_8_ = (*(code *)puVar8)(auVar22._0_8_,1);
        auVar22._8_8_ = extraout_XMM0_Qb_09;
      }
      lVar18 = lVar18 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(longlong *)(param_1 + 0xe50) != 0) {
    auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,8);
    auVar22._8_8_ = extraout_XMM0_Qb_10;
  }
  if (*(char *)(param_1 + 0x30dc) != '\0') {
    auVar22._0_8_ = <craggemini_core[66f3c71560d70857]::resume::SessionStore>(param_1 + 0xda0);
    auVar22._8_8_ = extraout_XMM0_Qb_11;
  }
  *(undefined1 *)(param_1 + 0x30dc) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x30dd) != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0xd58);
    if (uVar2 != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0xd50);
      uVar5 = *(ulonglong *)(param_1 + 0xd40);
      lVar17 = *(longlong *)(param_1 + 0xd48);
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
    if (*(longlong *)(param_1 + 0xd40) != 0) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,8);
      auVar22._8_8_ = extraout_XMM0_Qb_13;
    }
    puVar8 = PTR___rust_dealloc_00798fc8;
    lVar17 = *(longlong *)(param_1 + 0xd68);
    if (lVar17 != 0) {
      lVar18 = *(longlong *)(param_1 + 0xd78);
      if (lVar18 != 0) {
        pauVar12 = *(undefined1 (**) [16])(param_1 + 0xd60);
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
  *(undefined1 *)(param_1 + 0x30dd) = 0;
  if (*(char *)(param_1 + 0x30de) != '\0') {
    auVar22._0_8_ = (*(code *)PTR_close_00799030)();
    auVar22._8_8_ = extraout_XMM0_Qb_16;
    if (*(longlong *)(param_1 + 0xcd8) != 0) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_17;
    }
    if ((*(longlong *)(param_1 + 0xcf0) != -1) && (*(longlong *)(param_1 + 0xcf0) != 0)) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_18;
    }
    if ((*(longlong *)(param_1 + 0xd08) != -1) && (*(longlong *)(param_1 + 0xd08) != 0)) {
      auVar22._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar22._0_8_,1);
      auVar22._8_8_ = extraout_XMM0_Qb_19;
    }
  }
  uVar21 = auVar22._0_8_;
  *(undefined1 *)(param_1 + 0x30de) = 0;
  puVar8 = PTR___rust_dealloc_00798fc8;
  lVar17 = *(longlong *)(param_1 + 0xcc8);
  if (lVar17 != 0) {
    lVar18 = *(longlong *)(param_1 + 0xcc0) + 0x20;
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
  if (*(longlong *)(param_1 + 0xcb8) != 0) {
    uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,8);
  }
  *(undefined2 *)(param_1 + 0x30ed) = 0;
  if (*(char *)(param_1 + 0x30df) != '\0') {
    plVar1 = *(longlong **)(param_1 + 0xbf0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar21 = <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>
               ::drop_slow(param_1 + 0xbf0);
    }
  }
  *(undefined1 *)(param_1 + 0x30df) = 0;
  if (*(char *)(param_1 + 0x30e0) != '\0') {
    if (*(char *)(param_1 + 0xbe9) == '\0') {
      puVar13 = *(undefined8 **)(param_1 + 0xbd0);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    else {
      if (*(char *)(param_1 + 0xbe9) != '\x03') goto LAB_0039c1e5;
      puVar13 = *(undefined8 **)(param_1 + 0xbd0);
      if ((code *)*puVar13 != (code *)0x0) {
        uVar21 = (*(code *)*puVar13)();
      }
    }
    if (puVar13[1] != 0) {
      uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
    puVar13 = *(undefined8 **)(param_1 + 0xbe0);
    if ((code *)*puVar13 != (code *)0x0) {
      uVar21 = (*(code *)*puVar13)();
    }
    if (puVar13[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,puVar13[2]);
    }
  }
LAB_0039c1e5:
  *(undefined1 *)(param_1 + 0x30e0) = 0;
  *(undefined2 *)(param_1 + 0x30d5) = 0;
  if (*(char *)(param_1 + 0x30e1) != '\0') {
    <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x898);
  }
  *(undefined1 *)(param_1 + 0x30e1) = 0;
switchD_0039b79d_caseD_1:
  *(undefined4 *)(param_1 + 0x6678) = 0;
LAB_0039c21b:
  (*(code *)PTR___rust_dealloc_00798fc8)();
  return;
}


