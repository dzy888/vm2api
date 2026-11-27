// 003c3b00 drop

/* WARNING: Switch with 1 destination removed at 0x003c3b49 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<[std[6c98fd8553dbae28]::fs::DirEntry]>
            (*(longlong *)(param_1 + 8),
             ((ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 3) *
             -0x3333333333333333);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


