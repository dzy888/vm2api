// 00590470 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>

/* WARNING: Switch with 1 destination removed at 0x005904a1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[1],param_1[2]);
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


