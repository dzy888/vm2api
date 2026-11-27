// 00081ea0 <std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLockGuard<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLockGuard<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLockGuard<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>
          (undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((longlong)param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *param_1 = 0;
    LOCK();
    iVar2 = *(int *)(param_1 + 1);
    *(int *)(param_1 + 1) = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_syscall_000c4110)(1,0x81);
      return;
    }
  }
  return;
}


