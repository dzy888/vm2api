// 007414d0 wait

/* WARNING: Removing unreachable block (ram,0x00741532) */
/* <std[6c98fd8553dbae28]::sys::sync::condvar::futex::Condvar>::wait */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::sync::condvar::futex::Condvar>::wait(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  
  iVar2 = *param_1;
  LOCK();
  uVar1 = *param_2;
  *param_2 = 0;
  UNLOCK();
  pcVar3 = (code *)PTR_syscall_00799e60;
  pcVar4 = (code *)PTR___errno_location_007990a0;
  if (uVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    pcVar3 = (code *)PTR_syscall_00799e60;
    pcVar4 = (code *)PTR___errno_location_007990a0;
  }
  do {
    if ((*param_1 != iVar2) || (lVar5 = (*pcVar3)(iVar2,0x89,0,0), -1 < lVar5)) break;
    piVar6 = (int *)(*pcVar4)();
  } while (*piVar6 == 4);
  uVar7 = 0;
  LOCK();
  uVar1 = *param_2;
  if (uVar1 == 0) {
    *param_2 = 1;
  }
  else {
    uVar7 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 != 0) {
    uVar7 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  return uVar7;
}


