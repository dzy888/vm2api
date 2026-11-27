// 000a4230 run

/* std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::run */

void __rustcall std[6c98fd8553dbae28]::sys::thread_local::guard::key::enable::run(void)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar4 = __tls_get_addr();
  if (*(longlong *)(lVar4 + 0x20) == 0) {
    plVar1 = (longlong *)(lVar4 + 0x20);
    do {
      *plVar1 = -1;
      if (*(longlong *)(lVar4 + 0x38) == 0) {
        if (*(longlong *)(lVar4 + 0x28) == 0) {
          lVar5 = 0;
        }
        else {
          (*(code *)PTR_free_000c4290)();
          lVar5 = *plVar1 + 1;
        }
        *(undefined8 *)(lVar4 + 0x28) = 0;
        *(undefined8 *)(lVar4 + 0x30) = 8;
        *(undefined8 *)(lVar4 + 0x38) = 0;
        *plVar1 = lVar5;
        puVar6 = (ulonglong *)__tls_get_addr();
        uVar3 = *puVar6;
        if (2 < uVar3) {
          *puVar6 = 2;
          LOCK();
          plVar1 = (longlong *)(uVar3 - 0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_000c3af0)();
          }
        }
        return;
      }
      lVar5 = *(longlong *)(lVar4 + 0x38) + -1;
      *(longlong *)(lVar4 + 0x38) = lVar5;
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x30) + 8 + lVar5 * 0x10);
      *plVar1 = 0;
      (*pcVar2)();
    } while (*plVar1 == 0);
  }
  (*(code *)PTR_panic_already_borrowed_000c41d8)();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


