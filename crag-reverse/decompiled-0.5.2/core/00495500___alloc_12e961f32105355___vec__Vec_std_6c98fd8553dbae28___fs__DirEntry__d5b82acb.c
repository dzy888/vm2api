// 00495500 <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::fs::DirEntry>>

/* WARNING: Switch with 1 destination removed at 0x00495535 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::fs::DirEntry>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::fs::DirEntry>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <[std[6c98fd8553dbae28]::fs::DirEntry]>(param_1[1],param_1[2]);
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


