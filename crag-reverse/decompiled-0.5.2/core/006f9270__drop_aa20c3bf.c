// 006f9270 drop

/* <tokio[d7d91d38da47d894]::task::coop::with_budget::ResetGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::task::coop::with_budget::ResetGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *in_FS_OFFSET;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar3 = *in_FS_OFFSET;
  if (*(char *)(lVar3 + -0xf0) != '\0') {
    if (*(char *)(lVar3 + -0xf0) != '\x01') {
      return;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar3 + -0xf0) = 0;
  }
  *(undefined1 *)(lVar3 + -0xf4) = uVar1;
  *(undefined1 *)(lVar3 + -0xf3) = uVar2;
  return;
}


