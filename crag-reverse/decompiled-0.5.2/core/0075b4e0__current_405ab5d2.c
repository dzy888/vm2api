// 0075b4e0 current

/* std[6c98fd8553dbae28]::thread::current::current */

longlong __rustcall std[6c98fd8553dbae28]::thread::current::current(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *in_FS_OFFSET;
  
  uVar2 = *(ulonglong *)(*in_FS_OFFSET + -0x10);
  if (uVar2 < 3) {
    lVar4 = init_current(uVar2);
    return lVar4;
  }
  LOCK();
  plVar1 = (longlong *)(uVar2 - 0x10);
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return uVar2 - 0x10;
}


