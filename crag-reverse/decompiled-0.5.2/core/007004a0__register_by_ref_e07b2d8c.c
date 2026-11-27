// 007004a0 register_by_ref

/* WARNING: Removing unreachable block (ram,0x00700564) */
/* <tokio[d7d91d38da47d894]::sync::task::atomic_waker::AtomicWaker>::register_by_ref */

longlong __rustcall
<tokio[d7d91d38da47d894]::sync::task::atomic_waker::AtomicWaker>::register_by_ref
          (longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  LOCK();
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    lVar3 = lVar2;
  }
  UNLOCK();
  if (lVar3 == 2) {
    lVar3 = (**(code **)(*param_2 + 0x10))();
  }
  else if (lVar3 == 0) {
    lVar2 = (**(code **)*param_2)();
    lVar1 = *param_1;
    *param_1 = lVar2;
    param_1[1] = param_3;
    lVar3 = 1;
    LOCK();
    lVar2 = param_1[2];
    if (lVar2 == 1) {
      param_1[2] = 0;
    }
    else {
      lVar3 = lVar2;
    }
    UNLOCK();
    if (lVar2 == 1) {
      if (lVar1 != 0) {
        lVar3 = (**(code **)(lVar1 + 0x18))();
      }
    }
    else {
      lVar2 = *param_1;
      *param_1 = 0;
      LOCK();
      lVar3 = param_1[2];
      param_1[2] = 0;
      UNLOCK();
      if (lVar1 != 0) {
        lVar3 = (**(code **)(lVar1 + 8))();
      }
      if (lVar2 != 0) {
        lVar3 = (**(code **)(lVar2 + 8))();
      }
    }
  }
  return lVar3;
}


