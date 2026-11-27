// 00031620 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>>

/* WARNING: Switch with 1 destination removed at 0x00031651 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>,
   std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<agy_bridge[64a9e9deac6c45ce]::State>>>>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  if (((*(char *)(param_1 + 0x10) == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_000c3ac8 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = (*(code *)PTR_is_zero_slow_path_000c3ad8)(), cVar3 == '\0')) {
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_000c4110)(1,0x81);
    return;
  }
  return;
}


