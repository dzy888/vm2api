// 001dddf0 lock_contended

/* WARNING: Removing unreachable block (ram,0x001dde81) */
/* <std[6c98fd8553dbae28]::sys::sync::mutex::futex::Mutex>::lock_contended */

void __rustcall
<std[6c98fd8553dbae28]::sys::sync::mutex::futex::Mutex>::lock_contended(int *param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = *param_1;
  if (iVar3 == 1) {
    iVar6 = -99;
    do {
      iVar3 = *param_1;
      if (iVar3 != 1) break;
      bVar7 = iVar6 != 0;
      iVar6 = iVar6 + 1;
    } while (bVar7);
  }
  pcVar1 = (code *)PTR_syscall_0021a0a0;
  pcVar2 = (code *)PTR___errno_location_00219f18;
  if (iVar3 == 0) {
    iVar3 = 0;
    LOCK();
    iVar6 = *param_1;
    if (iVar6 == 0) {
      *param_1 = 1;
    }
    else {
      iVar3 = iVar6;
    }
    UNLOCK();
    pcVar1 = (code *)PTR_syscall_0021a0a0;
    pcVar2 = (code *)PTR___errno_location_00219f18;
    if (iVar6 == 0) {
      return;
    }
  }
  do {
    do {
      if (iVar3 != 2) {
        LOCK();
        iVar3 = *param_1;
        *param_1 = 2;
        UNLOCK();
        if (iVar3 == 0) {
          return;
        }
      }
      do {
        if ((*param_1 != 2) || (lVar4 = (*pcVar1)(2,0x89,0,0), -1 < lVar4)) break;
        piVar5 = (int *)(*pcVar2)();
      } while (*piVar5 == 4);
      iVar3 = *param_1;
    } while (iVar3 != 1);
    iVar6 = -99;
    do {
      iVar3 = *param_1;
      if (iVar3 != 1) break;
      bVar7 = iVar6 != 0;
      iVar6 = iVar6 + 1;
    } while (bVar7);
  } while( true );
}


