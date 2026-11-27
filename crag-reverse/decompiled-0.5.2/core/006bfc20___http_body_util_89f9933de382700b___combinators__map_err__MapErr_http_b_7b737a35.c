// 006bfc20 <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,<axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,
   <axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<http_body_util[89f9933de382700b]::full::Full<bytes[e9829e187354639b]::bytes::Bytes>,<axum_core[61c49771464cda0a]::error::Error>::new<core[c0acaeba6ab4c2e0]::convert::Infallible>>>
          (longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*param_1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x006bfc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_1[2]);
  return;
}


