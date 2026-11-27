// 000a0450 increase

/* std[6c98fd8553dbae28]::panicking::panic_count::increase */

undefined8 __rustcall std[6c98fd8553dbae28]::panicking::panic_count::increase(undefined1 param_1)

{
  undefined *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  LOCK();
  lVar2 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8;
  *(longlong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 + 1;
  UNLOCK();
  if (*(longlong *)puVar1 == 0 || SCARRY8(lVar2,1) != *(longlong *)puVar1 < 0) {
    return 0;
  }
  lVar2 = __tls_get_addr();
  uVar3 = 1;
  if (*(char *)(lVar2 + 0x48) == '\0') {
    *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    *(undefined1 *)(lVar2 + 0x48) = param_1;
    uVar3 = 2;
  }
  return uVar3;
}


