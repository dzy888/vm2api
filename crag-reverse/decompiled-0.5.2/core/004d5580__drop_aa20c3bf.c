// 004d5580 drop

/* WARNING: Switch with 1 destination removed at 0x004d5643 */
/* <craggemini_core[66f3c71560d70857]::pool::LeavingGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  
  piVar2 = (int *)*param_1;
  LOCK();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    uVar3 = *(ulonglong *)puVar4;
  }
  else {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    if (cVar5 == '\0') goto LAB_004d55d7;
    uVar3 = *(ulonglong *)puVar4;
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar5 == '\0') {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
  }
LAB_004d55d7:
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


