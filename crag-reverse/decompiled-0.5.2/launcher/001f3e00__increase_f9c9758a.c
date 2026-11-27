// 001f3e00 increase

/* std[6c98fd8553dbae28]::panicking::panic_count::increase */

undefined8 __rustcall std[6c98fd8553dbae28]::panicking::panic_count::increase(undefined1 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong *in_FS_OFFSET;
  
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00219d08;
  LOCK();
  lVar2 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
  *(longlong *)PTR_GLOBAL_PANIC_COUNT_00219d08 = *(longlong *)PTR_GLOBAL_PANIC_COUNT_00219d08 + 1;
  UNLOCK();
  if (*(longlong *)puVar3 == 0 || SCARRY8(lVar2,1) != *(longlong *)puVar3 < 0) {
    return 0;
  }
  lVar2 = *in_FS_OFFSET;
  uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  if (*(char *)(lVar2 + -0x40) == '\0') {
    plVar1 = (longlong *)(lVar2 + -0x48);
    *plVar1 = *plVar1 + 1;
    *(undefined1 *)(lVar2 + -0x40) = param_1;
    uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),2);
  }
  return uVar4;
}


