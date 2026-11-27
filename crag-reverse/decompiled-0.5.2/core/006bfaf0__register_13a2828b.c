// 006bfaf0 register

/* <atomic_waker[67898e1827534d8]::AtomicWaker>::register */

longlong __rustcall
<atomic_waker[67898e1827534d8]::AtomicWaker>::register
          (longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_R14;
  longlong unaff_R15;
  bool bVar3;
  
  lVar1 = 0;
  LOCK();
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    param_1[2] = 1;
  }
  else {
    lVar1 = lVar2;
  }
  UNLOCK();
  if (lVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x006bfb4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_2 + 0x10))();
    return lVar2;
  }
  if (lVar1 == 0) {
    if ((((undefined8 *)*param_1 == (undefined8 *)0x0) ||
        ((undefined8 *)*param_1 != (undefined8 *)*param_2)) || (param_1[1] != param_2[1])) {
      unaff_R15 = (**(code **)*param_2)();
      if (*param_1 != 0) {
        (**(code **)(*param_1 + 0x18))();
      }
      *param_1 = unaff_R15;
      param_1[1] = param_3;
      lVar1 = 1;
      LOCK();
      lVar2 = param_1[2];
      bVar3 = lVar2 == 1;
      if (bVar3) {
        param_1[2] = 0;
      }
      else {
        lVar1 = lVar2;
      }
      UNLOCK();
    }
    else {
      lVar1 = 1;
      LOCK();
      lVar2 = param_1[2];
      bVar3 = lVar2 == 1;
      if (bVar3) {
        param_1[2] = 0;
      }
      else {
        lVar1 = lVar2;
      }
      UNLOCK();
      param_3 = unaff_R14;
    }
    if (!bVar3) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 == 0) {
        (*(code *)PTR_unwrap_failed_00799278)();
        *param_1 = unaff_R15;
        param_1[1] = param_3;
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      LOCK();
      lVar1 = param_1[2];
      param_1[2] = 0;
      UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x006bfb9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(lVar2 + 8))(lVar1);
      return lVar2;
    }
  }
  return lVar1;
}


