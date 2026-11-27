// 005c2f10 size_hint

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,
   <axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>> as
   http_body[237d564c59cb9271]::Body>::size_hint */

void __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,<axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>>as_http_body[237d564c59cb9271]::Body>
::size_hint(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  if ((char)param_2[2] == '\x02') {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar1 = *param_2;
  if (uVar1 < 0xfffffffffffffffe) {
    param_1[2] = uVar1;
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


