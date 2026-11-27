// 00031a90 <std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>

/* WARNING: Switch with 1 destination removed at 0x00031ab5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>
          (int *param_1,ulonglong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((((param_2 & 1) == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_000c4110)(1,0x81);
    return;
  }
  return;
}


