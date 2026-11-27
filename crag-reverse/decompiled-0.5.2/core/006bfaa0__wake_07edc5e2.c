// 006bfaa0 wake

/* <atomic_waker[67898e1827534d8]::AtomicWaker>::wake */

ulonglong __rustcall <atomic_waker[67898e1827534d8]::AtomicWaker>::wake(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = param_1[2];
  do {
    LOCK();
    uVar1 = param_1[2];
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      param_1[2] = uVar3 | 2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if (uVar3 == 0) {
    lVar2 = *param_1;
    uVar3 = param_1[1];
    *param_1 = 0;
    LOCK();
    param_1[2] = param_1[2] & 0xfffffffffffffffd;
    UNLOCK();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006bfae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(lVar2 + 8))();
      return uVar3;
    }
  }
  return uVar3;
}


