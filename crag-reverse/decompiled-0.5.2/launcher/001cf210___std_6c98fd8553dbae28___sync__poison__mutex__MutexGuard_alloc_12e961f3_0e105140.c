// 001cf210 <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<alloc[12e961f32105355]::vec::Vec<u8>>>
          (int *param_1,ulonglong param_2)

{
  int iVar1;
  char cVar2;
  
  if (((param_2 & 1) == 0) &&
     ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) {
    cVar2 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_0021a0a0)(1,0x81);
    return;
  }
  return;
}


