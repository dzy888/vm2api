// 00090d80 wake_writer_or_readers

/* <std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::wake_writer_or_readers
          (uint *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if ((param_2 & 0x3fffffff) != 0) {
    (*(code *)PTR_panic_000c3b00)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1928);
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  uVar3 = (ulonglong)(uint)-(int)param_2;
  if (SBORROW4(0,(int)param_2)) {
    uVar3 = 0x80000000;
    LOCK();
    uVar1 = *param_1;
    if (uVar1 == 0x80000000) {
      *param_1 = 0;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 == 0x80000000) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      uVar4 = 1;
      goto LAB_00090e29;
    }
    param_2 = uVar3;
  }
  if ((int)param_2 != 0x40000000) {
    if ((int)param_2 != -0x40000000) {
      return uVar3;
    }
    uVar3 = 0xc0000000;
    LOCK();
    uVar1 = *param_1;
    if (uVar1 == 0xc0000000) {
      *param_1 = 0x40000000;
    }
    else {
      uVar3 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar1 != 0xc0000000) {
      return uVar3;
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    uVar3 = (*(code *)PTR_syscall_000c4110)(1,0x81);
    if (0 < (longlong)uVar3) {
      return uVar3;
    }
  }
  uVar3 = 0x40000000;
  LOCK();
  uVar1 = *param_1;
  if (uVar1 == 0x40000000) {
    *param_1 = 0;
  }
  else {
    uVar3 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0x40000000) {
    return uVar3;
  }
  uVar4 = 0x7fffffff;
LAB_00090e29:
  uVar3 = (*(code *)PTR_syscall_000c4110)(uVar4,0x81);
  return uVar3;
}


