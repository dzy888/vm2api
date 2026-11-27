// 003c87d0 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>>>

/* WARNING: Switch with 1 destination removed at 0x003c8801 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>,
   std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>,std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>>>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  piVar2 = *(int **)(param_1 + 8);
  if (((*(char *)(param_1 + 0x10) == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar3 == '\0')) {
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


