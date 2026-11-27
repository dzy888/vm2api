// 00365a70 <craggemini_core[66f3c71560d70857]::server::read_request<serde_json[dc3825464c436029]::value::Value>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::read_request<serde_json[dc3825464c436029]::value::Value>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::read_request<serde_json[dc3825464c436029]::value::Value>::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x288) == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x288) == '\x03') {
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x130) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x130) + 0x18))();
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
              (param_1 + 0x150);
    (*(code *)PTR_drop_007994f0)();
    *(undefined1 *)(param_1 + 0x28a) = 0;
  }
  return;
}


