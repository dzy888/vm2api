// 0049ac10 <craggemini_core[66f3c71560d70857]::pool::LeavingGuard>

/* WARNING: Switch with 1 destination removed at 0x0049acdc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::LeavingGuard>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::LeavingGuard>
          (int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(param_1 + 0x40) =
         *(longlong *)(param_1 + 0x40) + -1 + (ulonglong)(*(longlong *)(param_1 + 0x40) == 0);
    uVar2 = *(ulonglong *)puVar3;
  }
  else {
    cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(param_1 + 0x40) =
         *(longlong *)(param_1 + 0x40) + -1 + (ulonglong)(*(longlong *)(param_1 + 0x40) == 0);
    if (cVar4 == '\0') goto LAB_0049ac63;
    uVar2 = *(ulonglong *)puVar3;
  }
  if ((uVar2 & 0x7fffffffffffffff) != 0) {
    cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar4 == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
LAB_0049ac63:
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


