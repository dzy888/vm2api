// 002519d0 <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>

/* WARNING: Switch with 1 destination removed at 0x002519f3 */
/* core[c0acaeba6ab4c2e0]::mem::drop::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::mem::drop::
<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>
          (int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (((param_2 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
      ) && (cVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


