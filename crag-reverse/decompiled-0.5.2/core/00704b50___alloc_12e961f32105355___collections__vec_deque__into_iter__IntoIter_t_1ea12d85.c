// 00704b50 <alloc[12e961f32105355]::collections::vec_deque::into_iter::IntoIter<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>>

/* WARNING: Switch with 1 destination removed at 0x00704b78 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::vec_deque::into_iter::IntoIter<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::vec_deque::into_iter::IntoIter<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::blocking::pool::Task>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


