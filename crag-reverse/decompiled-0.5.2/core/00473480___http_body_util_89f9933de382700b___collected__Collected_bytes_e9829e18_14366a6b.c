// 00473480 <http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<http_body_util[89f9933de382700b]::collected::Collected<bytes[e9829e187354639b]::bytes::Bytes>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 << 5;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*param_1 == -1) {
    return;
  }
  <http[56314f485c23ccf6]::header::map::HeaderMap>(param_1,lVar2);
  return;
}


