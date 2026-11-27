// 003c45a0 drop

/* <alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,
   serde_core[48776c27239fa21f]::private::content::Content)>> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<core[c0acaeba6ab4c2e0]::option::Option<(serde_core[48776c27239fa21f]::private::content::Content,serde_core[48776c27239fa21f]::private::content::Content)>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    pcVar1 = *(char **)(param_1 + 8);
    do {
      if (*pcVar1 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <serde_core[48776c27239fa21f]::private::content::Content>(pcVar1);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <serde_core[48776c27239fa21f]::private::content::Content>(pcVar1 + 0x20);
      }
      pcVar1 = pcVar1 + 0x40;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}


