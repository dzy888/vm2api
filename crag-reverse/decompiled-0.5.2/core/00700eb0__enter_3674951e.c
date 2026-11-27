// 00700eb0 enter

/* <tokio[d7d91d38da47d894]::runtime::task::core::TaskIdGuard>::enter */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::TaskIdGuard>::enter(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *in_FS_OFFSET;
  
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -0xf0) != '\0') {
    if (*(char *)(lVar1 + -0xf0) != '\x01') {
      return 0;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar1 + -0xf0) = 0;
  }
  uVar2 = *(undefined8 *)(lVar1 + -0x108);
  *(undefined8 *)(lVar1 + -0x108) = param_1;
  return uVar2;
}


