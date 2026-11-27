// 0073f700 new

/* <std[6c98fd8553dbae28]::thread::id::ThreadId>::new */

longlong __rustcall <std[6c98fd8553dbae28]::thread::id::ThreadId>::new(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = new::COUNTER;
  do {
    if (lVar3 == -1) {
      new::exhausted();
      pcVar2 = (code *)swi(3);
      lVar3 = (*pcVar2)();
      return lVar3;
    }
    lVar1 = lVar3 + 1;
    LOCK();
    bVar4 = lVar3 == new::COUNTER;
    if (bVar4) {
      new::COUNTER = lVar1;
    }
    else {
      lVar3 = new::COUNTER;
    }
    UNLOCK();
  } while (!bVar4);
  return lVar1;
}


