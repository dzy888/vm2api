// 006dfb80 try_acquire_owned

/* <tokio[d7d91d38da47d894]::sync::semaphore::Semaphore>::try_acquire_owned */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::sync::semaphore::Semaphore>::try_acquire_owned
          (undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar3 = param_2[6];
  do {
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      LOCK();
      *param_2 = *param_2 + -1;
      lVar2 = *param_2;
      UNLOCK();
joined_r0x006dfbda:
      if (lVar2 == 0) {
        (*(code *)PTR_drop_slow_007990d8)();
        return param_1;
      }
      return param_1;
    }
    if (uVar3 < 2) {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0;
      LOCK();
      *param_2 = *param_2 + -1;
      lVar2 = *param_2;
      UNLOCK();
      goto joined_r0x006dfbda;
    }
    LOCK();
    uVar1 = param_2[6];
    bVar4 = uVar3 == uVar1;
    if (bVar4) {
      param_2[6] = uVar3 - 2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar4) {
      *param_1 = param_2;
      param_1[1] = 1;
      return param_1;
    }
  } while( true );
}


