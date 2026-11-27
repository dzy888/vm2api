// 006f9330 drop

/* <tokio[d7d91d38da47d894]::task::coop::RestoreOnPending as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::task::coop::RestoreOnPending_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(char *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *in_FS_OFFSET;
  
  if (*param_1 == '\x01') {
    cVar1 = param_1[1];
    lVar2 = *in_FS_OFFSET;
    if (*(char *)(lVar2 + -0xf0) != '\0') {
      if (*(char *)(lVar2 + -0xf0) != '\x01') {
        return;
      }
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar2 + -0xf0) = 0;
    }
    *(undefined1 *)(lVar2 + -0xf4) = 1;
    *(char *)(lVar2 + -0xf3) = cVar1;
  }
  return;
}


