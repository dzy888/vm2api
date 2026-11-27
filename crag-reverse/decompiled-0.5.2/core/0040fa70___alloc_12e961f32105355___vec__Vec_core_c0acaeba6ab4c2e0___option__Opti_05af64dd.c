// 0040fa70 <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>>

/* WARNING: Switch with 1 destination removed at 0x0040fa98 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,
   serde_core[48776c27239fa21f]::private::content::Content)>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


