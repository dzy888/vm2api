// 006dfb30 try_acquire

/* <tokio[d7d91d38da47d894]::sync::semaphore::Semaphore>::try_acquire */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::semaphore::Semaphore>::try_acquire
          (longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  do {
    if ((uVar3 & 1) != 0) {
      uVar2 = 0;
LAB_006dfb6b:
      *(undefined1 *)(param_1 + 1) = uVar2;
      *param_1 = 0;
      return param_1;
    }
    if (uVar3 < 2) {
      uVar2 = 1;
      goto LAB_006dfb6b;
    }
    LOCK();
    uVar1 = *(ulonglong *)(param_2 + 0x20);
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      *(ulonglong *)(param_2 + 0x20) = uVar3 - 2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar4) {
      param_1[1] = 1;
      *param_1 = param_2;
      return param_1;
    }
  } while( true );
}


