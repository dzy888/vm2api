// 00512e10 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>

/* WARNING: Switch with 1 destination removed at 0x00512e3c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


