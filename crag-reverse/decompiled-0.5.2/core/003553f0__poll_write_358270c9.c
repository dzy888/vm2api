// 003553f0 poll_write

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>, axum_core[61c49771464cda0a]::body::Body,
   hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_write */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_write(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  code *pcVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  longlong local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 *local_300;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 uStack_46;
  undefined5 uStack_45;
  longlong local_40;
  undefined8 *local_38;
  
  lVar13 = 0;
  uVar19 = 0;
  if (*(char *)(param_1 + 0x278) == '\0') {
    pcVar16 = (code *)PTR_memcpy_00799008;
    do {
      uVar19 = 0;
      if ((**(longlong **)(param_1 + 0x270) == 0) &&
         (*(longlong *)(param_1 + 0x1b8) == -0x7ffffffffffffffe)) {
        uVar12 = *(ulonglong *)(param_1 + 0x68);
        if (uVar12 == 0) {
          lVar11 = 0;
          uVar17 = 0;
LAB_003554d2:
          lVar15 = 0;
        }
        else {
          uVar17 = *(ulonglong *)(param_1 + 0x50);
          uVar14 = 0;
          if (uVar17 <= *(ulonglong *)(param_1 + 0x60)) {
            uVar14 = uVar17;
          }
          lVar11 = *(ulonglong *)(param_1 + 0x60) - uVar14;
          lVar15 = uVar12 - (uVar17 - lVar11);
          if (uVar12 < uVar17 - lVar11 || lVar15 == 0) {
            uVar17 = uVar12 + lVar11;
            goto LAB_003554d2;
          }
        }
        uStack_368 = *(longlong *)(param_1 + 0x58);
        local_378 = lVar11 * 0x50 + uStack_368;
        uStack_370 = uVar17 * 0x50 + uStack_368;
        uStack_360 = lVar15 * 0x50 + uStack_368;
        lVar11 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                 ::fold::
                 <usize,core[c0acaeba6ab4c2e0]::iter::adapters::map::map_fold<&hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>,usize,usize,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_,<usize_as_core[c0acaeba6ab4c2e0]::iter::traits::accum::Sum>::sum<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>,<hyper[c4782d5b5c5e3493]::common::buf::BufList<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_bytes[e9829e187354639b]::buf::buf_impl::Buf>::remaining::_closure_0_>>::_closure_0_>::_closure_0_>
                           (&local_378,0);
        if ((lVar11 != 0) || (plVar1 = *(longlong **)(param_1 + 0x260), *plVar1 == 0))
        goto LAB_00355520;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)plVar1[0x77c]) {
        case '\0':
          lVar13 = plVar1[0x20];
          *(undefined1 *)((longlong)plVar1 + 0x3be1) = 0;
          (*pcVar16)(&switchD_003557cb::switchdataD_0018ffa4,0xf8);
          local_1a8 = plVar1[0x1f];
          local_1b8 = (undefined4)plVar1[0x1d];
          uStack_1b4 = *(undefined4 *)((longlong)plVar1 + 0xec);
          uStack_1b0 = (undefined4)plVar1[0x1e];
          uStack_1ac = *(undefined4 *)((longlong)plVar1 + 0xf4);
          auVar23 = <axum_core[61c49771464cda0a]::body::Body>::new::
                    <hyper[c4782d5b5c5e3493]::body::incoming::Incoming>(&local_1b8,plVar1 + 1);
          uVar22 = (*pcVar16)(extraout_XMM0_Da_00,0xe0);
          (*pcVar16)(uVar22,0xe0);
          *(undefined1 (*) [16])(plVar1 + 0x3d) = auVar23;
          plVar1[0x3f] = lVar13 + 0x10;
          *(undefined1 *)(plVar1 + 0x70) = 0;
          break;
        case '\x02':
          (*(code *)PTR_panic_const_async_fn_resumed_panic_007991b0)();
        case '\x01':
          (*(code *)PTR_panic_const_async_fn_resumed_007991b8)();
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::OptGuard<axum_core[61c49771464cda0a]::body::Body>>
                    (&local_378,1);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        craggemini_core[66f3c71560d70857]::server::handle::_closure_0_
                  (&local_378,plVar1 + 0x21,param_2);
        puVar20 = local_300;
        lVar13 = local_308;
        uVar19 = local_318;
        lVar11 = local_378;
        if (local_378 == -1) {
          *(undefined1 *)(plVar1 + 0x77c) = 3;
          uVar19 = 1;
          break;
        }
        local_228 = local_320;
        local_238 = local_330;
        uStack_230 = uStack_328;
        local_248 = local_340;
        uStack_244 = uStack_33c;
        uStack_240 = (undefined4)uStack_338;
        uStack_23c = uStack_338._4_4_;
        local_258 = local_350;
        uStack_254 = uStack_34c;
        uStack_250 = uStack_348;
        uStack_24c = uStack_344;
        local_268 = (undefined4)uStack_360;
        uStack_264 = uStack_360._4_4_;
        uStack_260 = (undefined4)uStack_358;
        uStack_25c = uStack_358._4_4_;
        local_278 = (undefined4)uStack_370;
        uStack_274 = uStack_370._4_4_;
        uStack_270 = (undefined4)uStack_368;
        uStack_26c = uStack_368._4_4_;
        uVar7 = (undefined2)uStack_310;
        uVar8 = uStack_310._2_1_;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <craggemini_core[66f3c71560d70857]::server::handle::_closure_0_>(plVar1 + 0x21);
        local_1c8 = local_228;
        local_1d8 = local_238;
        uStack_1d0 = uStack_230;
        local_1e8 = local_248;
        uStack_1e4 = uStack_244;
        uStack_1e0 = uStack_240;
        uStack_1dc = uStack_23c;
        local_1f8 = local_258;
        uStack_1f4 = uStack_254;
        uStack_1f0 = uStack_250;
        uStack_1ec = uStack_24c;
        local_208 = local_268;
        uStack_204 = uStack_264;
        uStack_200 = uStack_260;
        uStack_1fc = uStack_25c;
        local_218 = local_278;
        uStack_214 = uStack_274;
        uStack_210 = uStack_270;
        uStack_20c = uStack_26c;
        plVar2 = (longlong *)plVar1[0x20];
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
          drop_slow(plVar1 + 0x20);
        }
        local_58 = local_1c8;
        local_68 = local_1d8;
        uStack_60 = uStack_1d0;
        local_78 = local_1e8;
        uStack_74 = uStack_1e4;
        uStack_70 = uStack_1e0;
        uStack_6c = uStack_1dc;
        local_88 = local_1f8;
        uStack_84 = uStack_1f4;
        uStack_80 = uStack_1f0;
        uStack_7c = uStack_1ec;
        local_98 = local_208;
        uStack_94 = uStack_204;
        uStack_90 = uStack_200;
        uStack_8c = uStack_1fc;
        local_a8 = local_218;
        uStack_a4 = uStack_214;
        uStack_a0 = uStack_210;
        uStack_9c = uStack_20c;
        *(undefined1 *)(plVar1 + 0x77c) = 1;
        local_b0 = lVar11;
        uStack_50 = uVar19;
        local_48 = uVar7;
        uStack_46 = uVar8;
        local_40 = lVar13;
        local_38 = puVar20;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_::_closure_0_>>
                  (plVar1);
        *plVar1 = 0;
        local_130 = CONCAT53(uStack_45,CONCAT12(uStack_46,local_48));
        local_140 = local_58;
        uStack_138 = uStack_50;
        uStack_150 = local_68;
        uStack_148 = uStack_60;
        uStack_160 = local_78;
        uStack_15c = uStack_74;
        uStack_158 = uStack_70;
        uStack_154 = uStack_6c;
        uStack_170 = local_88;
        uStack_16c = uStack_84;
        local_168 = CONCAT44(uStack_7c,uStack_80);
        uStack_180 = local_98;
        uStack_17c = uStack_94;
        local_178 = uStack_90;
        uStack_174 = uStack_8c;
        uStack_190 = local_a8;
        uStack_18c = uStack_a4;
        local_188 = uStack_a0;
        uStack_184 = uStack_9c;
        local_198 = lVar11;
        cVar9 = (*(code *)puVar20[4])();
        if (cVar9 == '\0') {
          uVar22 = (*(code *)puVar20[5])();
          bVar18 = (byte)local_378;
          bVar21 = uStack_368 != uStack_370;
          plVar1 = *(longlong **)(param_1 + 0x270);
          if (*plVar1 != 0) {
            puVar3 = (undefined8 *)plVar1[1];
            if ((code *)*puVar3 != (code *)0x0) {
              uVar22 = (*(code *)*puVar3)();
            }
            if (puVar3[1] != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar3[2]);
            }
          }
          bVar18 = bVar18 ^ 1 | bVar21;
          *plVar1 = lVar13;
          plVar1[1] = (longlong)puVar20;
        }
        else {
          plVar1 = *(longlong **)(param_1 + 0x270);
          if (*plVar1 != 0) {
            puVar3 = (undefined8 *)plVar1[1];
            uVar22 = extraout_XMM0_Da_01;
            if ((code *)*puVar3 != (code *)0x0) {
              uVar22 = (*(code *)*puVar3)();
            }
            if (puVar3[1] != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar3[2]);
            }
          }
          *plVar1 = 0;
          bVar18 = 2;
        }
        local_318 = uStack_138;
        uStack_310 = local_130;
        uStack_328 = uStack_148;
        local_320 = local_140;
        uStack_338 = CONCAT44(uStack_154,uStack_158);
        local_330 = uStack_150;
        uStack_348 = (undefined4)local_168;
        uStack_344 = local_168._4_4_;
        local_340 = uStack_160;
        uStack_33c = uStack_15c;
        uStack_358 = CONCAT44(uStack_174,local_178);
        local_350 = uStack_170;
        uStack_34c = uStack_16c;
        uStack_368 = CONCAT44(uStack_184,local_188);
        uStack_360 = CONCAT44(uStack_17c,uStack_180);
        local_378 = local_198;
        uStack_370 = CONCAT44(uStack_18c,uStack_190);
        <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
        ::write_head(param_1,&local_378,bVar18);
        pcVar16 = (code *)PTR_memcpy_00799008;
        if (cVar9 != '\0') {
          if ((code *)*puVar20 != (code *)0x0) {
            (*(code *)*puVar20)();
          }
          if (puVar20[1] != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)();
          }
        }
      }
      else {
LAB_00355520:
        if ((*(char *)(param_1 + 0xb8) == '\0') &&
           (cVar9 = <hyper[c4782d5b5c5e3493]::proto::h1::io::WriteBuf<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
                    ::can_buffer(param_1 + 0x30), cVar9 == '\0')) {
          auVar23 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
                    ::poll_flush(param_1,param_2);
          lVar11 = auVar23._8_8_;
          if ((auVar23._0_8_ & 1) != 0) {
LAB_00355cb2:
            uVar19 = 1;
            goto LAB_00355d38;
          }
          if (lVar11 != 0) {
            local_378 = lVar11;
            lVar13 = (*(code *)PTR_new_00799588)();
            <hyper[c4782d5b5c5e3493]::error::Error>::with::
            <core[c0acaeba6ab4c2e0]::io::error::Error>(lVar13,lVar11);
            uVar19 = 0;
            goto LAB_00355d38;
          }
          <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::try_keep_alive::
          <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>(param_1 + 0xc0);
          <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
          ::maybe_notify(param_1,param_2);
        }
        else {
          plVar1 = *(longlong **)(param_1 + 0x270);
          lVar11 = *plVar1;
          uVar12 = *(longlong *)(param_1 + 0x1b8) + 0x7ffffffffffffffe;
          if (lVar11 == 0) {
            if (uVar12 != 1 && uVar12 < 4) goto LAB_00355cb2;
            lVar13 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                     ::end_body(param_1);
            pcVar16 = (code *)PTR_memcpy_00799008;
            if (lVar13 != 0) goto LAB_00355d38;
          }
          else {
            if (uVar12 != 1 && uVar12 < 4) {
              puVar20 = (undefined8 *)plVar1[1];
              if ((code *)*puVar20 != (code *)0x0) {
                (*(code *)*puVar20)();
              }
LAB_00355781:
              if (puVar20[1] != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)();
              }
LAB_00355450:
              *plVar1 = 0;
            }
            else {
              (**(code **)(plVar1[1] + 0x18))();
              lVar6 = uStack_358;
              lVar5 = uStack_360;
              lVar4 = uStack_368;
              lVar15 = uStack_370;
              if (local_378 == 3) goto LAB_00355cb2;
              local_198 = CONCAT44(uStack_34c,local_350);
              uStack_190 = uStack_348;
              uStack_18c = uStack_344;
              local_188 = local_340;
              uStack_184 = uStack_33c;
              uStack_180 = (undefined4)uStack_338;
              uStack_17c = uStack_338._4_4_;
              local_178 = (undefined4)local_330;
              uStack_174 = local_330._4_4_;
              uStack_170 = (undefined4)uStack_328;
              uStack_16c = uStack_328._4_4_;
              local_168 = local_320;
              iVar10 = (int)local_378;
              if (iVar10 == -3) {
                lVar13 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                         ::end_body(param_1,lVar11);
                uVar22 = extraout_XMM0_Da;
                if (lVar13 == 0) {
LAB_00355763:
                  if (*plVar1 != 0) {
                    puVar20 = (undefined8 *)plVar1[1];
                    if ((code *)*puVar20 != (code *)0x0) {
                      (*(code *)*puVar20)();
                    }
                    goto LAB_00355781;
                  }
                  goto LAB_00355450;
                }
LAB_00355ceb:
                if (*plVar1 != 0) {
                  puVar20 = (undefined8 *)plVar1[1];
                  if ((code *)*puVar20 != (code *)0x0) {
                    uVar22 = (*(code *)*puVar20)();
                  }
                  if (puVar20[1] != 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar22,puVar20[2]);
                  }
                }
                *plVar1 = 0;
                uVar19 = 0;
                goto LAB_00355d38;
              }
              if (iVar10 != -1) {
                if (iVar10 == -2) {
                  lVar13 = <hyper[c4782d5b5c5e3493]::error::Error>::new_user_body::
                           <axum_core[61c49771464cda0a]::error::Error>(uStack_370,uStack_368);
                  uVar22 = extraout_XMM0_Da_03;
                  goto LAB_00355ceb;
                }
                <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                ::write_trailers(param_1,&local_378);
                goto LAB_00355763;
              }
              cVar9 = (**(code **)(plVar1[1] + 0x20))();
              if (cVar9 != '\0') {
                if (lVar5 == 0) {
                  lVar13 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                           ::end_body(param_1,lVar11);
                  if (lVar13 != 0) {
                    uVar22 = (**(code **)(lVar15 + 0x20))(extraout_XMM0_Da_02,0);
                    goto LAB_00355ceb;
                  }
                  (**(code **)(lVar15 + 0x20))();
                }
                else {
                  local_378 = lVar15;
                  uStack_370 = lVar4;
                  uStack_368 = lVar5;
                  uStack_360 = lVar6;
                  <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                  ::write_body_and_end(param_1,&local_378);
                }
                goto LAB_00355763;
              }
              if (lVar5 == 0) {
                (**(code **)(lVar15 + 0x20))();
              }
              else {
                local_378 = lVar15;
                uStack_370 = lVar4;
                uStack_368 = lVar5;
                uStack_360 = lVar6;
                <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                ::write_body(param_1,&local_378);
              }
            }
            pcVar16 = (code *)PTR_memcpy_00799008;
          }
        }
      }
      uVar19 = 0;
    } while (*(char *)(param_1 + 0x278) == '\0');
    lVar13 = 0;
  }
LAB_00355d38:
  auVar23._8_8_ = lVar13;
  auVar23._0_8_ = uVar19;
  return auVar23;
}


