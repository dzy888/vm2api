// 003c32f0 drop

/* WARNING: Switch with 1 destination removed at 0x003c3335 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[http[56314f485c23ccf6]::header::map::Bucket<http[56314f485c23ccf6]::header::value::HeaderValue>]>
            (*(longlong *)(param_1 + 8),
             ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 3) *
             0x4ec4ec4ec4ec4ec5);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


