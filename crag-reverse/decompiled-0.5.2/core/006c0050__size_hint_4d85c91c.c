// 006c0050 size_hint

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,
   <axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>> as
   http_body[237d564c59cb9271]::Body>::size_hint */

void __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,<axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>>as_http_body[237d564c59cb9271]::Body>
::size_hint(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    param_1[2] = 0;
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  *param_1 = 1;
  param_1[1] = lVar1;
  return;
}


