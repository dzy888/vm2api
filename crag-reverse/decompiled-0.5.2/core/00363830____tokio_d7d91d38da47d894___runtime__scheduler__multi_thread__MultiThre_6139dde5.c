// 00363830 <<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::MultiThread>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  
  if (*(char *)(param_1 + 0x667c) != '\x03') goto LAB_0036449b;
  switch(*(undefined1 *)(param_1 + 0x30d0)) {
  case 0:
    <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x2e0);
    <craggemini_core[66f3c71560d70857]::license::LicenseGate>(param_1 + 0x5b0);
    if (*(char *)(param_1 + 0x891) == '\0') {
      uVar22 = <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_1 + 0x870);
    }
    else {
      if (*(char *)(param_1 + 0x891) != '\x03') goto switchD_0036386d_caseD_1;
      uVar22 = <tokio[d7d91d38da47d894]::signal::reusable_box::ReusableBoxFuture<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
               ::drop(param_1 + 0x870);
    }
    puVar14 = *(undefined8 **)(param_1 + 0x888);
    if ((code *)*puVar14 != (code *)0x0) {
      uVar22 = (*(code *)*puVar14)();
    }
    if (puVar14[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar14[2]);
    }
  default:
    goto switchD_0036386d_caseD_1;
  case 3:
    lVar18 = param_1 + 0x30f0;
    cVar1 = *(char *)(param_1 + 0x348a);
    if (cVar1 != '\x04') {
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 0x5079) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::insert_validated::_closure_0_>
                    (param_1 + 0x3868);
          <alloc[12e961f32105355]::vec::into_iter::IntoIter<(craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig,craggemini_core[66f3c71560d70857]::binding::ParsedProxy,std[6c98fd8553dbae28]::path::PathBuf)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(param_1 + 0x3610);
          lVar19 = 0x1f8c;
          lVar20 = 0x1f8b;
          goto LAB_00364538;
        }
        if ((*(char *)(param_1 + 0x5079) == '\0') &&
           (uVar22 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                     ::drop((longlong *)(param_1 + 0x35b8)), *(longlong *)(param_1 + 0x35b8) != 0))
        {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,8);
        }
        goto LAB_00364542;
      }
      if (cVar1 == '\0') {
        if (*(longlong *)(param_1 + 0x3260) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0036386d::switchdataD_00191d9c,1);
        }
        <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar18);
        uVar22 = <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                 ::drop((longlong *)(param_1 + 0x3278));
        if (*(longlong *)(param_1 + 0x3278) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,8);
        }
        plVar2 = *(longlong **)(param_1 + 0x3298);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>
            ::drop_slow(param_1 + 0x3298);
          }
        }
        (*(code *)PTR_drop_007990c8)();
        plVar2 = *(longlong **)(param_1 + 0x3290);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
      }
      goto LAB_00363fa5;
    }
    if (*(char *)(param_1 + 0x6650) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::_closure_0_>
                (param_1 + 0x34f8);
    }
    plVar2 = *(longlong **)(param_1 + 0x34b8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x34b8);
    }
    plVar2 = *(longlong **)(param_1 + 0x34a8);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x34a8);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x6658);
    plVar2 = *(longlong **)(param_1 + 0x3498);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
      drop_slow(param_1 + 0x3498);
    }
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x3480);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    lVar19 = 0x3a4;
    lVar20 = 0x3a3;
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
LAB_00364538:
    *(undefined1 *)(lVar18 + lVar20) = 0;
    *(undefined1 *)(lVar18 + lVar19) = 0;
LAB_00364542:
    if (*(char *)(param_1 + 0x348e) != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x3448);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>>
        ::drop_slow(param_1 + 0x3448);
      }
    }
    *(undefined1 *)(param_1 + 0x348e) = 0;
    if (*(char *)(param_1 + 0x348f) != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>(param_1 + 0x3530);
    }
    *(undefined1 *)(param_1 + 0x348f) = 0;
    if (*(char *)(param_1 + 0x3490) != '\0') {
      <craggemini_core[66f3c71560d70857]::resume::SignatureCache>(param_1 + 0x5080);
    }
    *(undefined1 *)(param_1 + 0x3490) = 0;
    if (*(char *)(param_1 + 0x3491) != '\0') {
      <craggemini_core[66f3c71560d70857]::resume::StickyIndex>(param_1 + 0x3498);
    }
    *(undefined1 *)(param_1 + 0x3491) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0x3440);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
    *(undefined2 *)(param_1 + 0x348b) = 0;
    if (*(char *)(param_1 + 0x3492) != '\0') {
      <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x32b8);
    }
    *(undefined1 *)(param_1 + 0x3492) = 0;
    *(undefined1 *)(param_1 + 0x348d) = 0;
    *(undefined1 *)(param_1 + 0x30d8) = 0;
    *(undefined1 *)(param_1 + 0x30ec) = 0;
    cVar1 = *(char *)(param_1 + 0x30d9);
    goto joined_r0x00363fba;
  case 4:
    <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>(param_1 + 0x30f0);
    cVar1 = *(char *)(param_1 + 0x30d8);
    goto joined_r0x00363f8a;
  case 5:
    <<craggemini_core[66f3c71560d70857]::server::SocketPath>::bind::_closure_0_>(param_1 + 0x3158);
    uVar22 = <craggemini_core[66f3c71560d70857]::shm::ShmOwner_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
             ::drop((longlong *)(param_1 + 0x30f0));
    if (*(longlong *)(param_1 + 0x30f0) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    (*(code *)PTR_munmap_007990b8)();
    goto LAB_00363f12;
  case 6:
    goto switchD_0036386d_caseD_6;
  case 7:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x30f0);
    break;
  case 8:
    break;
  case 9:
    if (*(longlong *)(param_1 + 0x30f0) != 2) {
      if (*(longlong *)(param_1 + 0x30f0) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x3100);
    }
    break;
  case 10:
    goto switchD_0036386d_caseD_a;
  case 0xb:
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_>
              (param_1 + 0x30f0);
    goto LAB_00363bcf;
  case 0xc:
    if (*(longlong *)(param_1 + 0x30f0) != 2) {
      if (*(longlong *)(param_1 + 0x30f0) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x30f8);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x3100);
    }
LAB_00363bcf:
    uVar3 = *(ulonglong *)(param_1 + 0x30c8);
    if (((uVar3 != 0) && (1 < ((uint)uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    *(undefined1 *)(param_1 + 0x30e2) = 0;
switchD_0036386d_caseD_a:
    if (*(char *)(param_1 + 0x30b9) == '\0') {
      puVar14 = *(undefined8 **)(param_1 + 0x30a0);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)();
      }
LAB_00363c5a:
      if (puVar14[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      puVar14 = *(undefined8 **)(param_1 + 0x30b0);
      pcVar4 = (code *)*puVar14;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)();
      }
      if (puVar14[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    else if (*(char *)(param_1 + 0x30b9) == '\x03') {
      puVar14 = *(undefined8 **)(param_1 + 0x30a0);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)();
      }
      goto LAB_00363c5a;
    }
    <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2e98);
    uVar22 = (*(code *)PTR_close_00799030)();
    if (*(longlong *)(param_1 + 0x2e30) != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if ((*(longlong *)(param_1 + 0x2e48) != -1) && (*(longlong *)(param_1 + 0x2e48) != 0)) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if ((*(longlong *)(param_1 + 0x2e60) != -1) && (*(longlong *)(param_1 + 0x2e60) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    plVar2 = *(longlong **)(param_1 + 0xfb0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar18 = *plVar2;
    UNLOCK();
    goto joined_r0x00363d2f;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x2e28);
  if (((uVar3 != 0) && (1 < ((uint)uVar3 & 3) - 2)) && ((uVar3 & 3) != 0)) {
    (*(code *)PTR_drop_00799040)();
  }
  *(undefined1 *)(param_1 + 0x30e3) = 0;
switchD_0036386d_caseD_6:
  if (*(char *)(param_1 + 0x2e19) == '\0') {
    puVar14 = *(undefined8 **)(param_1 + 0x2e00);
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)();
    }
LAB_00363de0:
    if (puVar14[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar14 = *(undefined8 **)(param_1 + 0x2e10);
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    if (puVar14[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else if (*(char *)(param_1 + 0x2e19) == '\x03') {
    puVar14 = *(undefined8 **)(param_1 + 0x2e00);
    if ((code *)*puVar14 != (code *)0x0) {
      (*(code *)*puVar14)();
    }
    goto LAB_00363de0;
  }
  <craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_>(param_1 + 0x2bf8);
  <craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::_closure_0_::_closure_1_>::_closure_0_::_closure_4_>
            (param_1 + 0x2ab8);
  <craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
            (param_1 + 0x1010);
  *(undefined2 *)(param_1 + 0x30e4) = 0;
  *(undefined1 *)(param_1 + 0x30e6) = 0;
  plVar2 = *(longlong **)(param_1 + 0x1008);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  *(undefined1 *)(param_1 + 0x30e7) = 0;
  puVar14 = (undefined8 *)(param_1 + 0x1000);
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(puVar14);
  plVar2 = (longlong *)*puVar14;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(puVar14);
  }
  uVar22 = <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0xfd8));
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xfb8);
  if (*(int *)(param_1 + 0xfd0) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0xfb8);
  *(undefined1 *)(param_1 + 0x30e8) = 0;
  plVar2 = *(longlong **)(param_1 + 0xfb0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  lVar18 = *plVar2;
  UNLOCK();
joined_r0x00363d2f:
  if (lVar18 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(param_1 + 0xfb0);
  }
LAB_00363f12:
  *(undefined2 *)(param_1 + 0x30e9) = 0;
  *(undefined1 *)(param_1 + 0x30eb) = 0;
  uVar22 = <craggemini_core[66f3c71560d70857]::server::SocketPath_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
           ::drop((longlong *)(param_1 + 0xed8));
  if (*(longlong *)(param_1 + 0xed8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
  }
  if (*(char *)(param_1 + 0x30d7) != '\0') {
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x3448);
    if (*(int *)(param_1 + 0x3460) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x3448);
  }
  *(undefined1 *)(param_1 + 0x30d7) = 0;
  cVar1 = *(char *)(param_1 + 0x30d8);
joined_r0x00363f8a:
  if (cVar1 != '\0') {
    plVar2 = *(longlong **)(param_1 + 0xed0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
      drop_slow(param_1 + 0xed0);
    }
  }
LAB_00363fa5:
  *(undefined1 *)(param_1 + 0x30d8) = 0;
  *(undefined1 *)(param_1 + 0x30ec) = 0;
  cVar1 = *(char *)(param_1 + 0x30d9);
joined_r0x00363fba:
  if (cVar1 != '\0') {
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0xe88);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  *(undefined1 *)(param_1 + 0x30d9) = 0;
  if ((*(char *)(param_1 + 0x30da) != '\0') && (*(longlong *)(param_1 + 0xe70) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x30da) = 0;
  if (*(char *)(param_1 + 0x30db) != '\0') {
    plVar2 = *(longlong **)(param_1 + 0xe68);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0xe68);
    }
  }
  *(undefined1 *)(param_1 + 0x30db) = 0;
  puVar9 = PTR___rust_dealloc_00798fc8;
  lVar18 = *(longlong *)(param_1 + 0xe60);
  if (lVar18 != 0) {
    lVar19 = *(longlong *)(param_1 + 0xe58) + 8;
    do {
      if (*(longlong *)(lVar19 + -8) != 0) {
        (*(code *)puVar9)();
      }
      lVar19 = lVar19 + 0x18;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(longlong *)(param_1 + 0xe50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(char *)(param_1 + 0x30dc) != '\0') {
    <craggemini_core[66f3c71560d70857]::resume::SessionStore>(param_1 + 0xda0);
  }
  *(undefined1 *)(param_1 + 0x30dc) = 0;
  puVar9 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x30dd) != '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0xd58);
    if (uVar3 != 0) {
      uVar5 = *(ulonglong *)(param_1 + 0xd50);
      uVar6 = *(ulonglong *)(param_1 + 0xd40);
      lVar18 = *(longlong *)(param_1 + 0xd48);
      uVar10 = uVar6;
      if (uVar5 < uVar6) {
        uVar10 = 0;
      }
      lVar19 = uVar5 - uVar10;
      uVar12 = uVar6 - lVar19;
      lVar20 = uVar3 - uVar12;
      bVar21 = lVar20 != 0;
      if (uVar3 < uVar12) {
        lVar20 = 0;
      }
      uVar11 = lVar19 + uVar3;
      if (uVar3 >= uVar12 && bVar21) {
        uVar11 = uVar6;
      }
      lVar19 = uVar11 - lVar19;
      if (lVar19 != 0) {
        lVar16 = uVar5 * 0x18 + uVar10 * -0x18 + lVar18 + 8;
        do {
          if (*(longlong *)(lVar16 + -8) != 0) {
            (*(code *)puVar9)();
          }
          lVar16 = lVar16 + 0x18;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      puVar9 = PTR___rust_dealloc_00798fc8;
      if (uVar12 < uVar3) {
        lVar18 = lVar18 + 8;
        do {
          if (*(longlong *)(lVar18 + -8) != 0) {
            (*(code *)puVar9)();
          }
          lVar18 = lVar18 + 0x18;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
    }
    if (*(longlong *)(param_1 + 0xd40) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar9 = PTR___rust_dealloc_00798fc8;
    lVar18 = *(longlong *)(param_1 + 0xd68);
    if (lVar18 != 0) {
      lVar19 = *(longlong *)(param_1 + 0xd78);
      if (lVar19 != 0) {
        pauVar13 = *(undefined1 (**) [16])(param_1 + 0xd60);
        auVar23 = *pauVar13;
        pauVar15 = pauVar13 + 1;
        uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar17 == 0) {
            do {
              auVar23 = *pauVar15;
              pauVar13 = pauVar13 + -0x18;
              pauVar15 = pauVar15 + 1;
              uVar17 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar17 == 0);
          }
          uVar7 = 0;
          for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          if (*(longlong *)((longlong)pauVar13 + (ulonglong)uVar7 * -0x18 + -0x18) != 0) {
            auVar23._0_8_ = (*(code *)puVar9)(auVar23._0_8_,1);
            auVar23._8_8_ = extraout_XMM0_Qb;
          }
          lVar19 = lVar19 + -1;
          uVar17 = uVar17 - 1 & uVar17;
        } while (lVar19 != 0);
      }
      if (lVar18 + (lVar18 * 0x18 + 0x27U & 0xfffffffffffffff0) != -0x11) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30dd) = 0;
  if (*(char *)(param_1 + 0x30de) != '\0') {
    uVar22 = (*(code *)PTR_close_00799030)();
    if (*(longlong *)(param_1 + 0xcd8) != 0) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if ((*(longlong *)(param_1 + 0xcf0) != -1) && (*(longlong *)(param_1 + 0xcf0) != 0)) {
      uVar22 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
    if ((*(longlong *)(param_1 + 0xd08) != -1) && (*(longlong *)(param_1 + 0xd08) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,1);
    }
  }
  *(undefined1 *)(param_1 + 0x30de) = 0;
  puVar9 = PTR___rust_dealloc_00798fc8;
  lVar18 = *(longlong *)(param_1 + 0xcc8);
  if (lVar18 != 0) {
    lVar19 = *(longlong *)(param_1 + 0xcc0) + 0x20;
    do {
      if (*(longlong *)(lVar19 + -0x20) != 0) {
        (*(code *)puVar9)();
      }
      if ((*(longlong *)(lVar19 + -8) != -1) && (*(longlong *)(lVar19 + -8) != 0)) {
        (*(code *)puVar9)();
      }
      lVar19 = lVar19 + 0x38;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (*(longlong *)(param_1 + 0xcb8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined2 *)(param_1 + 0x30ed) = 0;
  if (*(char *)(param_1 + 0x30df) != '\0') {
    plVar2 = *(longlong **)(param_1 + 0xbf0);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>::
      drop_slow(param_1 + 0xbf0);
    }
  }
  *(undefined1 *)(param_1 + 0x30df) = 0;
  if (*(char *)(param_1 + 0x30e0) != '\0') {
    if (*(char *)(param_1 + 0xbe9) == '\0') {
      puVar14 = *(undefined8 **)(param_1 + 0xbd0);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)();
      }
    }
    else {
      if (*(char *)(param_1 + 0xbe9) != '\x03') goto LAB_00364465;
      puVar14 = *(undefined8 **)(param_1 + 0xbd0);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)();
      }
    }
    if (puVar14[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar14 = *(undefined8 **)(param_1 + 0xbe0);
    pcVar4 = (code *)*puVar14;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    if (puVar14[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_00364465:
  *(undefined1 *)(param_1 + 0x30e0) = 0;
  *(undefined2 *)(param_1 + 0x30d5) = 0;
  if (*(char *)(param_1 + 0x30e1) != '\0') {
    <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x898);
  }
  *(undefined1 *)(param_1 + 0x30e1) = 0;
switchD_0036386d_caseD_1:
  *(undefined4 *)(param_1 + 0x6678) = 0;
LAB_0036449b:
  (*(code *)PTR___rust_dealloc_00798fc8)();
  return;
}


