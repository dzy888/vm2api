// 0063a6d0 <http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>>

/* WARNING: Switch with 1 destination removed at 0x0063a73c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body_util[89f9933de382700b]::combinators::collect::Collect<http_body_util[89f9933de382700b]::limited::Limited<axum_core[61c49771464cda0a]::body::Body>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*param_1 != -2) {
    <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar3 = 0;
    if (lVar1 != 0) {
      lVar3 = lVar1 << 5;
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
    }
    <core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::map::HeaderMap>>
              (param_1,lVar3);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x22);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)();
  }
  if (puVar2[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar2[2]);
  return;
}


