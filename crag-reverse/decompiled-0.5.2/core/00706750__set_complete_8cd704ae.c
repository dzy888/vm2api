// 00706750 set_complete

/* <tokio[d7d91d38da47d894]::sync::oneshot::State>::set_complete */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::State>::set_complete(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *param_1;
  do {
    uVar2 = uVar3;
    if ((uVar2 & 4) != 0) {
      return uVar2;
    }
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar2 | 2;
      uVar3 = uVar2;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  return uVar2;
}


