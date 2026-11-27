// 001f7ec0 run

/* std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::run */

void __rustcall std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::run(void)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *in_FS_OFFSET;
  
  lVar2 = *in_FS_OFFSET;
  if (*(longlong *)(lVar2 + -0x68) == 0) {
    plVar1 = (longlong *)(lVar2 + -0x68);
    do {
      *plVar1 = -1;
      if (*(longlong *)(lVar2 + -0x50) == 0) {
        if (*(longlong *)(lVar2 + -0x60) == 0) {
          lVar5 = 0;
        }
        else {
          (*(code *)PTR_free_0021a8b8)();
          lVar5 = *plVar1 + 1;
        }
        *(undefined8 *)(lVar2 + -0x60) = 0;
        *(undefined8 *)(lVar2 + -0x58) = 8;
        *(undefined8 *)(lVar2 + -0x50) = 0;
        *plVar1 = lVar5;
        uVar4 = *(ulonglong *)(*in_FS_OFFSET + -0x10);
        if (2 < uVar4) {
          *(ulonglong *)(*in_FS_OFFSET + -0x10) = 2;
          LOCK();
          plVar1 = (longlong *)(uVar4 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_00219e28)();
          }
        }
        return;
      }
      lVar5 = *(longlong *)(lVar2 + -0x50) + -1;
      *(longlong *)(lVar2 + -0x50) = lVar5;
      pcVar3 = *(code **)(*(longlong *)(lVar2 + -0x58) + 8 + lVar5 * 0x10);
      *plVar1 = 0;
      (*pcVar3)();
    } while (*plVar1 == 0);
  }
  (*(code *)PTR_panic_already_borrowed_0021a620)();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


