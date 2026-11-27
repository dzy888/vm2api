// 00700720 wake

/* <tokio[d7d91d38da47d894]::sync::task::atomic_waker::AtomicWaker>::wake */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::task::atomic_waker::AtomicWaker>::wake(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = param_1[2];
  do {
    LOCK();
    uVar1 = param_1[2];
    bVar5 = uVar4 == uVar1;
    if (bVar5) {
      param_1[2] = uVar4 | 2;
    }
    else {
      uVar4 = uVar1;
    }
    UNLOCK();
  } while (!bVar5);
  if (uVar4 == 0) {
    lVar3 = *param_1;
    uVar4 = param_1[1];
    *param_1 = 0;
    LOCK();
    lVar2 = param_1[2];
    param_1[2] = 0;
    UNLOCK();
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00700761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar3 + 8))(lVar3,lVar2);
      return uVar4;
    }
  }
  return uVar4;
}


