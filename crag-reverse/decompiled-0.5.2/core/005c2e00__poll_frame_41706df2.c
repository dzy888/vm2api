// 005c2e00 poll_frame

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,
   <axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>> as
   http_body[237d564c59cb9271]::Body>::poll_frame */

longlong * __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,<axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>>as_http_body[237d564c59cb9271]::Body>
::poll_frame(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong lStack_18;
  
  (*(code *)PTR_poll_frame_0079a028)();
  if (local_70 == -3) {
    *param_1 = -3;
  }
  else if ((int)local_70 == -2) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar2 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar2 == (longlong *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *plVar2 = lStack_68;
    *param_1 = -2;
    param_1[1] = (longlong)plVar2;
    param_1[2] = (longlong)&anon_759b25d0f49402244ed1d2ce4dc43d04_314_llvm_4022685846690702743;
  }
  else if ((int)local_70 == 3) {
    *param_1 = 3;
  }
  else {
    param_1[10] = local_20;
    param_1[0xb] = lStack_18;
    param_1[8] = local_30;
    param_1[9] = lStack_28;
    param_1[6] = local_40;
    param_1[7] = lStack_38;
    param_1[4] = local_50;
    param_1[5] = lStack_48;
    param_1[2] = local_60;
    param_1[3] = lStack_58;
    *param_1 = local_70;
    param_1[1] = lStack_68;
  }
  return param_1;
}


