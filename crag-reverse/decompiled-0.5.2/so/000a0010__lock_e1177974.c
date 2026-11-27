// 000a0010 lock

/* std[6c98fd8553dbae28]::sys::backtrace::lock */

undefined1  [16] __rustcall std[6c98fd8553dbae28]::sys::backtrace::lock(void)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  LOCK();
  bVar2 = lock::LOCK == 0;
  if (bVar2) {
    lock::LOCK = 1;
  }
  UNLOCK();
  if (!bVar2) {
    (*(code *)PTR_lock_contended_000c3c80)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) == 0) {
    return ZEXT816(0xc67a8);
  }
  uVar1 = (*(code *)PTR_is_zero_slow_path_000c3ad8)();
  auVar3._8_8_ = (ulonglong)uVar1 ^ 1;
  auVar3._0_8_ = &lock::LOCK;
  return auVar3;
}


