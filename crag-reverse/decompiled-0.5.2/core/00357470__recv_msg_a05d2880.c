// 00357470 recv_msg

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming> as
   hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatch>::recv_msg */

longlong __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>as_hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatch>
::recv_msg(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
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
  longlong local_248;
  longlong lStack_240;
  longlong local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 *local_220;
  longlong local_218;
  undefined1 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110 [224];
  
  lVar1 = *param_3;
  lVar4 = param_3[1];
  if (lVar1 != -1) {
    (*(code *)PTR_memcpy_00799008)(param_4,0xd0);
    local_1f0 = lVar1;
    uStack_1e8 = lVar4;
    (*(code *)PTR_new_007995d0)();
    local_1f8 = param_3[0x1e];
    local_208 = (undefined4)param_3[0x1c];
    uStack_204 = *(undefined4 *)((longlong)param_3 + 0xe4);
    uStack_200 = (undefined4)param_3[0x1d];
    uStack_1fc = *(undefined4 *)((longlong)param_3 + 0xec);
    uVar5 = (*(code *)PTR_memcpy_00799008)(local_1f8,0xe0);
    puVar3 = local_110;
    if ((10 < (byte)local_230) && (puVar3 = local_220, local_220 != (undefined1 *)0x0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
    }
    local_220 = (undefined1 *)param_3[0x19];
    local_230 = (undefined4)param_3[0x17];
    uStack_22c = *(undefined4 *)((longlong)param_3 + 0xbc);
    uStack_228 = (undefined4)param_3[0x18];
    uStack_224 = *(undefined4 *)((longlong)param_3 + 0xc4);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::uri::Uri>(&local_288,puVar3);
    local_238 = param_3[0x16];
    local_248 = param_3[0x14];
    lStack_240 = param_3[0x15];
    local_288 = (undefined4)param_3[0xc];
    uStack_284 = *(undefined4 *)((longlong)param_3 + 100);
    uStack_280 = (undefined4)param_3[0xd];
    uStack_27c = *(undefined4 *)((longlong)param_3 + 0x6c);
    local_278 = (undefined4)param_3[0xe];
    uStack_274 = *(undefined4 *)((longlong)param_3 + 0x74);
    uStack_270 = (undefined4)param_3[0xf];
    uStack_26c = *(undefined4 *)((longlong)param_3 + 0x7c);
    local_268 = (undefined4)param_3[0x10];
    uStack_264 = *(undefined4 *)((longlong)param_3 + 0x84);
    uStack_260 = (undefined4)param_3[0x11];
    uStack_25c = *(undefined4 *)((longlong)param_3 + 0x8c);
    local_258 = (undefined4)param_3[0x12];
    uStack_254 = *(undefined4 *)((longlong)param_3 + 0x94);
    uStack_250 = (undefined4)param_3[0x13];
    uStack_24c = *(undefined4 *)((longlong)param_3 + 0x9c);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
              (&local_2e8);
    local_298 = local_1a0;
    uStack_290 = uStack_198;
    local_2a8 = local_1b0;
    uStack_2a0 = uStack_1a8;
    local_2b8 = local_1c0;
    uStack_2b4 = uStack_1bc;
    uStack_2b0 = uStack_1b8;
    uStack_2ac = uStack_1b4;
    local_2c8 = local_1d0;
    uStack_2c4 = uStack_1cc;
    uStack_2c0 = uStack_1c8;
    uStack_2bc = uStack_1c4;
    local_2d8 = local_1e0;
    uStack_2d4 = uStack_1dc;
    uStack_2d0 = uStack_1d8;
    uStack_2cc = uStack_1d4;
    local_2e8 = (undefined4)local_1f0;
    uStack_2e4 = local_1f0._4_4_;
    uStack_2e0 = (undefined4)uStack_1e8;
    uStack_2dc = uStack_1e8._4_4_;
    local_210 = local_118;
    if (local_218 != 0) {
      uVar5 = <hashbrown[b5c94476ffc33875]::raw::RawTable<(core[c0acaeba6ab4c2e0]::any::TypeId,alloc[12e961f32105355]::boxed::Box<dyn_http[56314f485c23ccf6]::extensions::AnyClone+core[c0acaeba6ab4c2e0]::marker::Send+core[c0acaeba6ab4c2e0]::marker::Sync>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(local_218);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
    }
    local_218 = local_120;
    LOCK();
    lVar1 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (*param_2 == 0 || SCARRY8(lVar1,1) != *param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar5 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_::_closure_0_>>
                      (param_1);
    *param_1 = 1;
    (*(code *)PTR_memcpy_00799008)(uVar5,0xf8);
    param_1[0x20] = param_2;
    *(undefined1 *)(param_1 + 0x77c) = 0;
    lVar4 = 0;
  }
  return lVar4;
}


