// 003c5020 <axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1},craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>>>

/* <axum_core[61c49771464cda0a]::body::Body>::new::<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1},
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>>>
    */

undefined1  [16] __rustcall
<axum_core[61c49771464cda0a]::body::Body>::new::
<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_::_closure_0_>>>
          (undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar3 [16];
  longlong local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  
  lVar1 = *param_2;
  if (lVar1 == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_::_closure_0_>>,<axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>>>
              (&local_328);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  (*(code *)PTR_memcpy_00799008)(param_1,0x300);
  local_320 = (undefined4)param_2[1];
  uStack_31c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_318 = (undefined4)param_2[2];
  uStack_314 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_328 = lVar1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  auVar3._0_8_ = (*(code *)PTR___rust_alloc_00799000)();
  if (auVar3._0_8_ == 0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x318);
  auVar3._8_8_ = &anon_759b25d0f49402244ed1d2ce4dc43d04_5_llvm_4022685846690702743;
  return auVar3;
}


