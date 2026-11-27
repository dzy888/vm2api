// 003ca470 <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1},craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>>,<axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1},
   craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>>,
   <axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<axum_core[61c49771464cda0a]::body::StreamBody<futures_util[32f8f9118ba03c60]::stream::unfold::Unfold<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_,craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_::_closure_0_>>,<axum_core[61c49771464cda0a]::error::Error>::new<axum_core[61c49771464cda0a]::error::Error>>>
          (longlong *param_1)

{
  if (*param_1 == 1) {
    <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_::_closure_0_>
              (param_1 + 1);
    return;
  }
  if ((*param_1 == 0) && ((int)param_1[1] != 2)) {
    <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>
              (param_1 + 1);
    return;
  }
  return;
}


