// 0004d410 <alloc[12e961f32105355]::vec::Vec<serde_core[48776c27239fa21f]::private::content::Content>>

/* WARNING: Switch with 1 destination removed at 0x0004d469 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<serde_core[48776c27239fa21f]::private::content::Content>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<serde_core[48776c27239fa21f]::private::content::Content>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
    lVar1 = lVar1 + 0x20;
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


