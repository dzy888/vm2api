// 001cf280 <std[6c98fd8553dbae28]::sync::nonpoison::rwlock::RwLockReadGuard<std[6c98fd8553dbae28]::panicking::Hook>>

/* WARNING: Switch with 1 destination removed at 0x001cf297 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::nonpoison::rwlock::RwLockReadGuard<std[6c98fd8553dbae28]::panicking::Hook>>
    */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::nonpoison::rwlock::RwLockReadGuard<std[6c98fd8553dbae28]::panicking::Hook>>
          (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  LOCK();
  uVar4 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  uVar4 = uVar4 - 1;
  if (!SBORROW4(0,uVar4 & 0xbfffffff)) {
    return (ulonglong)-(uVar4 & 0xbfffffff);
  }
  if ((uVar4 & 0x3fffffff) != 0) {
    (*(code *)PTR_panic_00219ca8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217918);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = (ulonglong)-uVar4;
  if (SBORROW4(0,uVar4)) {
    uVar2 = 0x80000000;
    LOCK();
    uVar4 = *param_1;
    if (uVar4 == 0x80000000) {
      *param_1 = 0;
    }
    else {
      uVar2 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (uVar4 == 0x80000000) {
      LOCK();
      param_1[1] = param_1[1] + 1;
      UNLOCK();
      uVar3 = 1;
      goto LAB_001de149;
    }
    uVar4 = (uint)uVar2;
  }
  if (uVar4 != 0x40000000) {
    if (uVar4 != 0xc0000000) {
      return uVar2;
    }
    uVar2 = 0xc0000000;
    LOCK();
    uVar4 = *param_1;
    if (uVar4 == 0xc0000000) {
      *param_1 = 0x40000000;
    }
    else {
      uVar2 = (ulonglong)uVar4;
    }
    UNLOCK();
    if (uVar4 != 0xc0000000) {
      return uVar2;
    }
    LOCK();
    param_1[1] = param_1[1] + 1;
    UNLOCK();
    uVar2 = (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    if (0 < (longlong)uVar2) {
      return uVar2;
    }
  }
  uVar2 = 0x40000000;
  LOCK();
  uVar4 = *param_1;
  if (uVar4 == 0x40000000) {
    *param_1 = 0;
  }
  else {
    uVar2 = (ulonglong)uVar4;
  }
  UNLOCK();
  if (uVar4 != 0x40000000) {
    return uVar2;
  }
  uVar3 = 0x7fffffff;
LAB_001de149:
  uVar2 = (*(code *)PTR_syscall_0021a0a0)(uVar3,0x81);
  return uVar2;
}


