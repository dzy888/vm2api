// 001f3720 unique_thread_exit

/* std[6c98fd8553dbae28]::sys::exit::unique_thread_exit */

void __rustcall std[6c98fd8553dbae28]::sys::exit::unique_thread_exit(void)

{
  code *pcVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = (*(code *)PTR___errno_location_00219f18)();
  puVar2 = PTR_pause_0021aa70;
  lVar4 = 0;
  LOCK();
  bVar5 = unique_thread_exit::EXITING_THREAD_ID == 0;
  if (bVar5) {
    unique_thread_exit::EXITING_THREAD_ID = lVar3;
  }
  else {
    lVar4 = unique_thread_exit::EXITING_THREAD_ID;
  }
  UNLOCK();
  if (bVar5) {
    return;
  }
  if (lVar4 == lVar3) {
    (*(code *)PTR_panic_nounwind_0021aa78)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  do {
    (*(code *)puVar2)();
  } while( true );
}


