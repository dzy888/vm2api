// 006fedc0 <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::process::Child>>>

/* WARNING: Switch with 1 destination removed at 0x006fede5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::process::Child>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::process::Child>>>
          (int *param_1,ulonglong param_2)

{
  int iVar1;
  char cVar2;
  
  if ((((param_2 & 1) == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar2 == '\0')) {
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


