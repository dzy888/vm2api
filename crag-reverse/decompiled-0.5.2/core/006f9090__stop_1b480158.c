// 006f9090 stop

/* tokio[d7d91d38da47d894]::task::coop::stop */

undefined1 __rustcall tokio[d7d91d38da47d894]::task::coop::stop(void)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *in_FS_OFFSET;
  
  lVar2 = *in_FS_OFFSET;
  if (*(char *)(lVar2 + -0xf0) != '\0') {
    if (*(char *)(lVar2 + -0xf0) != '\x01') {
      return 0;
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
  }
  uVar1 = *(undefined1 *)(lVar2 + -0xf4);
  *(undefined1 *)(lVar2 + -0xf4) = 0;
  return uVar1;
}


