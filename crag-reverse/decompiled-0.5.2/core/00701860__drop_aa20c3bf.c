// 00701860 drop

/* <tokio[d7d91d38da47d894]::runtime::task::core::TaskIdGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::TaskIdGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *in_FS_OFFSET;
  
  uVar1 = *param_1;
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xf0) != '\0') {
    if (*(char *)(lVar2 + -0xf0) != '\x01') {
      return;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  *(undefined8 *)(lVar2 + -0x108) = uVar1;
  return;
}


