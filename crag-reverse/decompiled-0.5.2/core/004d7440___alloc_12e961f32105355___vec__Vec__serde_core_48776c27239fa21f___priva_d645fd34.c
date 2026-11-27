// 004d7440 <alloc[12e961f32105355]::vec::Vec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>

/* WARNING: Switch with 1 destination removed at 0x004d74a5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<(serde_core[48776c27239fa21f]::private::content::Content,
   serde_core[48776c27239fa21f]::private::content::Content)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (bVar4 = lVar3 != 0, lVar3 = lVar3 + -1, bVar4) {
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar2);
    lVar1 = lVar2 + 0x20;
    lVar2 = lVar2 + 0x40;
    <serde_core[48776c27239fa21f]::private::content::Content>(lVar1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


