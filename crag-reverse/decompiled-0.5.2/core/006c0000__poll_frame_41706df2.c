// 006c0000 poll_frame

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,
   <axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>> as
   http_body[237d564c59cb9271]::Body>::poll_frame */

void __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,<axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>>as_http_body[237d564c59cb9271]::Body>
::poll_frame(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 == 0) {
    *param_1 = 0xfffffffffffffffd;
    return;
  }
  param_1[4] = param_2[3];
  lVar2 = param_2[2];
  param_1[2] = param_2[1];
  param_1[3] = lVar2;
  param_1[1] = lVar1;
  *param_1 = 0xffffffffffffffff;
  return;
}


