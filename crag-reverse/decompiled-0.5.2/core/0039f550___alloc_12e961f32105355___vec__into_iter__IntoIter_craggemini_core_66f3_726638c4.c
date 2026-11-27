// 0039f550 <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>

/* WARNING: Switch with 1 destination removed at 0x0039f595 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>
            (*(longlong *)(param_1 + 8),
             ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 3) *
             0x2e8ba2e8ba2e8ba3);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


