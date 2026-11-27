// 003ca110 <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>>

/* WARNING: Switch with 1 destination removed at 0x003ca138 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


