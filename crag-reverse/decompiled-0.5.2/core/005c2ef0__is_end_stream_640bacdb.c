// 005c2ef0 is_end_stream

/* <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,
   <axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>> as
   http_body[237d564c59cb9271]::Body>::is_end_stream */

bool __rustcall
<http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,<axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>>as_http_body[237d564c59cb9271]::Body>
::is_end_stream(longlong *param_1)

{
  return *param_1 == 0 || (char)param_1[2] == '\x02';
}


