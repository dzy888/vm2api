// 00081020 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>>>>

/* WARNING: Switch with 1 destination removed at 0x0008106a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>,
   std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>>>>
    */

ulonglong __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::rwlock::RwLockWriteGuard<()>>>>
          (ulonglong param_1)

{
  uint *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  puVar1 = *(uint **)(param_1 + 8);
  if (((*(char *)(param_1 + 0x10) == '\0') &&
      (param_1 = 0, (*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
     (param_1 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), (char)param_1 == '\0')) {
    *(undefined1 *)(puVar1 + 2) = 1;
  }
  LOCK();
  uVar5 = *puVar1;
  *puVar1 = *puVar1 + 0xc0000001;
  UNLOCK();
  uVar5 = uVar5 + 0xc0000001;
  if (uVar5 < 0x40000000) {
    return param_1;
  }
  if ((uVar5 & 0x3fffffff) != 0) {
    (*(code *)PTR_panic_000c3b00)();
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return uVar3;
  }
  uVar3 = (ulonglong)-uVar5;
  if (SBORROW4(0,uVar5)) {
    uVar3 = 0x80000000;
    LOCK();
    uVar5 = *puVar1;
    if (uVar5 == 0x80000000) {
      *puVar1 = 0;
    }
    else {
      uVar3 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (uVar5 == 0x80000000) {
      LOCK();
      puVar1[1] = puVar1[1] + 1;
      UNLOCK();
      uVar4 = 1;
      goto LAB_00090e29;
    }
    uVar5 = (uint)uVar3;
  }
  if (uVar5 != 0x40000000) {
    if (uVar5 != 0xc0000000) {
      return uVar3;
    }
    uVar3 = 0xc0000000;
    LOCK();
    uVar5 = *puVar1;
    if (uVar5 == 0xc0000000) {
      *puVar1 = 0x40000000;
    }
    else {
      uVar3 = (ulonglong)uVar5;
    }
    UNLOCK();
    if (uVar5 != 0xc0000000) {
      return uVar3;
    }
    LOCK();
    puVar1[1] = puVar1[1] + 1;
    UNLOCK();
    uVar3 = (*(code *)PTR_syscall_000c4110)(1,0x81);
    if (0 < (longlong)uVar3) {
      return uVar3;
    }
  }
  uVar3 = 0x40000000;
  LOCK();
  uVar5 = *puVar1;
  if (uVar5 == 0x40000000) {
    *puVar1 = 0;
  }
  else {
    uVar3 = (ulonglong)uVar5;
  }
  UNLOCK();
  if (uVar5 != 0x40000000) {
    return uVar3;
  }
  uVar4 = 0x7fffffff;
LAB_00090e29:
  uVar3 = (*(code *)PTR_syscall_000c4110)(uVar4,0x81);
  return uVar3;
}


