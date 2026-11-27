// 005c2cd0 poll_frame

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>,
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0},
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0}::{closure#0}>>,
   <axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>> as
   http_body[237d564c59cb9271]::Body>::poll_frame */

longlong * __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0},craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0}::{closure#0}>>,<axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>>as_http_body[237d564c59cb9271]::Body>
::poll_frame(longlong *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  <axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0},craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#0}::{closure#0}>>as_http_body[237d564c59cb9271]::Body>
  ::poll_frame(&local_78);
  if (local_78 == -3) {
    *param_1 = -3;
  }
  else if ((int)local_78 == -2) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar2 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plVar2 == (longlong *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *plVar2 = lStack_70;
    plVar2[1] = local_68;
    *param_1 = -2;
    param_1[1] = (longlong)plVar2;
    param_1[2] = (longlong)&anon_759b25d0f49402244ed1d2ce4dc43d04_312_llvm_4022685846690702743;
  }
  else if ((int)local_78 == 3) {
    *param_1 = 3;
  }
  else {
    param_1[10] = local_28;
    param_1[0xb] = lStack_20;
    param_1[8] = local_38;
    param_1[9] = lStack_30;
    param_1[6] = local_48;
    param_1[7] = lStack_40;
    param_1[4] = local_58;
    param_1[5] = lStack_50;
    param_1[2] = local_68;
    param_1[3] = lStack_60;
    *param_1 = local_78;
    param_1[1] = lStack_70;
  }
  return param_1;
}


