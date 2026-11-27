// 00354890 poll_catch

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>, axum_core[61c49771464cda0a]::body::Body,
   hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_catch */

ulonglong * __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_catch(ulonglong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *extraout_RDX;
  int iVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined8 local_398;
  longlong *local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined1 local_2c0 [40];
  longlong *local_298;
  byte local_290;
  undefined7 uStack_28f;
  longlong local_1b8;
  byte local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_38;
  
  (*(code *)PTR_update_date_00799558)();
  iVar12 = 0;
LAB_00354920:
  if (*(char *)(param_2 + 0x278) != '\0') goto LAB_00354e14;
  if (*(longlong *)(param_2 + 0x150) != 0) {
    bVar4 = *(byte *)(param_2 + 600);
    plVar11 = (longlong *)(ulonglong)bVar4;
    *(undefined1 *)(param_2 + 600) = 2;
    if (bVar4 == 2) {
      auVar14 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
                ::poll_read_keep_alive(param_2,param_3);
      plVar11 = auVar14._8_8_;
      if ((auVar14._0_8_ & 1) == 0) goto LAB_00354e0b;
      goto LAB_00354e14;
    }
    local_298 = *(longlong **)(param_2 + 0x250);
    local_290 = bVar4;
    if (2 < (uint)*(longlong *)(param_2 + 0x150)) goto switchD_00354ba1_caseD_fffffffd;
    lVar6 = (*(code *)PTR_poll_ready_00799560)();
    uVar13 = extraout_XMM0_Da;
    if (lVar6 == 1) {
switchD_00354ba1_caseD_3:
      (*(code *)PTR_set_00799580)(uVar13,local_290);
      goto LAB_00354e14;
    }
    if (plVar11 == (longlong *)0x0) {
      uVar13 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
               ::poll_read_body(&local_128,param_2,param_3);
      if (local_128 + 3U < 7) {
        switch(local_128) {
        default:
          goto switchD_00354ba1_caseD_0;
        case 3:
          goto switchD_00354ba1_caseD_3;
        case -3:
          break;
        case -2:
          plVar11 = (longlong *)CONCAT44(uStack_11c,local_120);
          local_390 = plVar11;
          uVar7 = (*(code *)PTR_new_00799588)();
          <hyper[c4782d5b5c5e3493]::error::Error>::with::<core[c0acaeba6ab4c2e0]::io::error::Error>
                    (uVar7,plVar11);
          (*(code *)PTR_send_error_00799590)();
          break;
        case -1:
          local_198 = local_110;
          uStack_194 = uStack_10c;
          uStack_190 = uStack_108;
          uStack_18c = uStack_104;
          local_1a8 = local_120;
          uStack_1a4 = uStack_11c;
          uStack_1a0 = uStack_118;
          uStack_19c = uStack_114;
          uVar13 = (*(code *)PTR_try_send_data_007995a8)
                             ((longlong)&switchD_00354ba1::switchdataD_0018ff88 +
                              (longlong)
                              (int)(&switchD_00354ba1::switchdataD_0018ff88)[local_128 + 3U],
                              &local_1a8);
          uVar7 = local_380;
          plVar11 = local_390;
          if (local_390 != (longlong *)0x0) {
            if (*(int *)(param_2 + 0x150) - 1U < 2) {
              uVar13 = (*(code *)PTR_close_read_00799568)();
            }
            (*(code *)plVar11[4])(uVar13,uVar7);
            break;
          }
          goto LAB_00354d36;
        }
      }
      else {
switchD_00354ba1_caseD_0:
        local_130 = local_d0;
        local_140 = local_e0;
        uStack_138 = uStack_d8;
        local_150 = local_f0;
        uStack_14c = uStack_ec;
        uStack_148 = uStack_e8;
        uStack_144 = uStack_e4;
        local_160 = local_100;
        uStack_15c = uStack_fc;
        uStack_158 = uStack_f8;
        uStack_154 = uStack_f4;
        local_170 = local_110;
        uStack_16c = uStack_10c;
        uStack_168 = uStack_108;
        uStack_164 = uStack_104;
        local_180 = local_120;
        uStack_17c = uStack_11c;
        uStack_178 = uStack_118;
        uStack_174 = uStack_114;
        local_188 = local_128;
        uVar13 = (*(code *)PTR_try_send_trailers_007995b0)(local_d0,&local_188);
        plVar11 = local_390;
        if ((int)local_390 == -2) {
LAB_00354d36:
          (*(code *)PTR_set_00799580)(uVar13,local_290);
          goto LAB_00354920;
        }
        if (*(int *)(param_2 + 0x150) - 1U < 2) {
          (*(code *)PTR_close_read_00799568)();
        }
        if (plVar11 != (longlong *)0xffffffffffffffff) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
                    (&local_390,&local_298);
        }
      }
switchD_00354ba1_caseD_fffffffd:
      (*(code *)PTR_drop_007994d0)();
    }
    else {
      uVar13 = <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
               ::poll_drain_or_close_read(param_2,param_3);
      if (*plVar11 != 0) {
        puVar1 = (undefined8 *)plVar11[1];
        if ((code *)*puVar1 != (code *)0x0) {
          uVar13 = (*(code *)*puVar1)();
        }
        if (puVar1[1] != 0) {
          uVar13 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,puVar1[2]);
        }
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
      (*(code *)PTR_drop_007994d0)();
    }
    LOCK();
    *local_298 = *local_298 + -1;
    UNLOCK();
    if (*local_298 == 0) {
      (*(code *)PTR_drop_slow_007994d8)();
    }
    goto LAB_00354920;
  }
  if (**(longlong **)(param_2 + 0x260) == 0) {
    <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
    ::poll_read_head(&local_298,param_2,param_3);
    bVar4 = local_1b0;
    lVar6 = local_1b8;
    if (local_298 == (longlong *)0xfffffffffffffffd) goto LAB_00354e14;
    uVar7 = CONCAT71(uStack_28f,local_290);
    if ((int)local_298 == -1) {
      local_390 = (longlong *)0xffffffffffffffff;
      local_388 = (longlong *)uVar7;
      plVar11 = (longlong *)
                <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>as_hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatch>
                ::recv_msg(*(undefined8 *)(param_2 + 0x260),*(undefined8 *)(param_2 + 0x268),
                           &local_390);
      if (plVar11 == (longlong *)0x0) goto LAB_00354aa4;
    }
    else {
      if ((int)local_298 == -2) {
        if (*(longlong *)(param_2 + 0x1b8) == -0x7ffffffffffffffb) {
LAB_00354aa4:
          *(undefined1 *)(param_2 + 0x278) = 1;
          (*(code *)PTR_close_read_00799568)();
          (*(code *)PTR_close_write_00799570)();
        }
        goto LAB_00354920;
      }
      local_390 = local_298;
      local_388 = (longlong *)uVar7;
      uVar13 = (*(code *)PTR_memcpy_00799008)(uVar7,0xd0);
      if (lVar6 == 0) {
        local_3a8 = CONCAT71(local_3a8._1_7_,2);
      }
      else {
        (*(code *)PTR_new_channel_00799578)(uVar13,bVar4 & 1);
        uVar7 = local_398;
        uVar2 = uStack_3a0;
        uStack_3b4 = local_3a8._4_4_;
        uVar13 = (undefined4)local_3a8;
        (*(code *)PTR_set_00799580)(&local_3a8,(undefined1)uStack_3b0);
        local_3b8 = uVar13;
        uStack_3b0 = uVar2;
        local_3a8 = uVar7;
      }
      if ((bVar4 & 2) != 0) {
        uVar7 = (*(code *)PTR_prepare_upgrade_00799598)();
        auVar14 = <http[56314f485c23ccf6]::extensions::Extensions>::insert::
                  <hyper[c4782d5b5c5e3493]::upgrade::OnUpgrade>(local_2c0,uVar7);
        plVar11 = auVar14._8_8_;
        uVar13 = extraout_XMM0_Da_00;
        if ((auVar14._0_8_ != 0) && (plVar11 != (longlong *)0x0)) {
          LOCK();
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            uVar13 = (*(code *)PTR_drop_slow_007995a0)();
          }
        }
      }
      (*(code *)PTR_memcpy_00799008)(uVar13,0xe0);
      local_38 = local_3a8;
      local_48 = local_3b8;
      uStack_44 = uStack_3b4;
      plVar11 = (longlong *)
                <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>as_hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatch>
                ::recv_msg(*(undefined8 *)(param_2 + 0x260),*(undefined8 *)(param_2 + 0x268),
                           &local_128);
      if (plVar11 == (longlong *)0x0) goto LAB_00354920;
    }
LAB_00354e0b:
    if (plVar11 == (longlong *)0x0) goto LAB_00354e14;
LAB_0035500f:
    local_390 = *(longlong **)(param_2 + 0x250);
    cVar3 = *(char *)(param_2 + 600);
    *(undefined1 *)(param_2 + 600) = 2;
    if (cVar3 != '\x02') {
      local_388 = (longlong *)CONCAT71(local_388._1_7_,cVar3);
      <hyper[c4782d5b5c5e3493]::error::Error>::new_body::<&str>("connection error",0x10);
      (*(code *)PTR_send_error_00799590)();
      (*(code *)PTR_drop_007994d0)();
      LOCK();
      *local_390 = *local_390 + -1;
      UNLOCK();
      if (*local_390 == 0) {
        (*(code *)PTR_drop_slow_007994d8)();
      }
    }
    local_390 = (longlong *)0xffffffffffffffff;
    local_388 = plVar11;
    plVar9 = (longlong *)
             <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>as_hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatch>
             ::recv_msg(*(undefined8 *)(param_2 + 0x260),*(undefined8 *)(param_2 + 0x268),&local_390
                       );
    plVar10 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      plVar10 = plVar11;
    }
    uVar8 = (ulonglong)((uint)(plVar9 != (longlong *)0x0) * 2);
LAB_003550a8:
    *param_1 = uVar8;
    param_1[1] = (ulonglong)plVar10;
    return param_1;
  }
LAB_00354e14:
  auVar14 = poll_write(param_2,param_3);
  plVar11 = auVar14._8_8_;
  if (plVar11 != (longlong *)0x0 && (auVar14._0_8_ & 1) == 0) goto LAB_0035500f;
  auVar15 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
            ::poll_flush(param_2,param_3);
  plVar10 = auVar15._8_8_;
  if ((auVar15._0_8_ & 1) == 0) {
    if (plVar10 != (longlong *)0x0) {
      local_390 = plVar10;
      plVar11 = (longlong *)(*(code *)PTR_new_00799588)();
      <hyper[c4782d5b5c5e3493]::error::Error>::with::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (plVar11,plVar10);
      goto LAB_0035500f;
    }
    <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::try_keep_alive::
    <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>(param_2 + 0xc0);
    <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
    ::maybe_notify(param_2,param_3);
  }
  if (((*(char *)(param_2 + 0x278) == '\0') && (**(longlong **)(param_2 + 0x270) != 0)) &&
     (uVar8 = *(longlong *)(param_2 + 0x1b8) + 0x7ffffffffffffffe, 3 < uVar8 || uVar8 == 1)) {
    cVar3 = *(char *)(param_2 + 0x245);
    *(undefined1 *)(param_2 + 0x245) = 0;
    if ((auVar14._0_8_ != 0) && ((auVar15._0_8_ & 1) != 0)) goto joined_r0x00354ec7;
    if (cVar3 == '\0') {
      auVar14 = poll_write(param_2,param_3);
      plVar11 = auVar14._8_8_;
      if (auVar14._0_8_ != 1) {
        if (plVar11 != (longlong *)0x0) goto LAB_0035500f;
        goto LAB_00354ee4;
      }
      cVar3 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
              ::has_buffered_write(param_2);
      if (cVar3 != '\0') {
        bVar4 = poll_flush(param_2,param_3);
        plVar11 = extraout_RDX;
        if (extraout_RDX != (longlong *)0x0 && (bVar4 & 1) == 0) goto LAB_0035500f;
      }
      goto LAB_00354f7a;
    }
  }
  else {
    cVar3 = *(char *)(param_2 + 0x245);
    *(undefined1 *)(param_2 + 0x245) = 0;
joined_r0x00354ec7:
    if (cVar3 == '\0') {
LAB_00354f7a:
      if (*(char *)(param_2 + 0x278) == '\0') {
        iVar12 = (int)*(undefined8 *)(param_2 + 0x150);
        if (*(longlong *)(param_2 + 0x1b8) == -0x7ffffffffffffffb) {
          if (iVar12 != 4) goto LAB_00354f1e;
        }
        else if (((**(char **)(param_2 + 0x260) != '\0') || (iVar12 != 4)) ||
                (**(longlong **)(param_2 + 0x270) != 0)) goto LAB_00354f1e;
      }
      iVar12 = *(int *)(param_2 + 0xe0);
      plVar10 = *(longlong **)(param_2 + 0xe8);
      *(undefined8 *)(param_2 + 0xe0) = 0;
      if (iVar12 != 1) {
        if (param_4 != '\0') {
          auVar14 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
                    ::poll_flush(param_2,param_3);
          lVar6 = auVar14._8_8_;
          if ((auVar14._0_8_ & 1) == 0) {
            if (lVar6 == 0) {
              plVar10 = (longlong *)(*(code *)PTR_poll_shutdown_007993e8)();
            }
            else {
              plVar10 = (longlong *)0x0;
            }
          }
          else {
            plVar10 = (longlong *)0x1;
          }
          if (((ulonglong)plVar10 & 1) != 0) goto LAB_00354f1e;
          if (lVar6 != 0) {
            plVar11 = (longlong *)(*(code *)PTR_new_shutdown_007995c0)();
            goto LAB_0035500f;
          }
        }
        plVar11 = *(longlong **)(param_2 + 0x200);
        *(undefined8 *)(param_2 + 0x200) = 0;
        if (plVar11 == (longlong *)0x0) {
          uVar8 = 0;
          goto LAB_003550a8;
        }
        goto LAB_0035500f;
      }
      plVar11 = *(longlong **)(param_2 + 0x200);
      *(undefined8 *)(param_2 + 0x200) = 0;
      if (plVar11 == (longlong *)0x0) {
        uVar8 = 1;
        goto LAB_003550a8;
      }
      local_390 = plVar10;
      if ((plVar10 != (longlong *)0x0) &&
         (uVar5 = (*(code *)PTR_set_complete_00799058)(), (uVar5 & 5) == 1)) {
        (**(code **)(plVar10[4] + 0x10))();
      }
      if (local_390 != (longlong *)0x0) {
        LOCK();
        *local_390 = *local_390 + -1;
        UNLOCK();
        if (*local_390 == 0) {
          (*(code *)PTR_drop_slow_007994c8)();
        }
      }
      goto LAB_0035500f;
    }
  }
LAB_00354ee4:
  iVar12 = iVar12 + 1;
  if (iVar12 == 0x10) {
    (*(code *)PTR_yield_now_007995b8)();
LAB_00354f1e:
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  goto LAB_00354920;
}


