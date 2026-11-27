// 001e6a70 park

/* WARNING: Removing unreachable block (ram,0x001e6af1) */
/* <std[6c98fd8553dbae28]::thread::thread::Thread>::park */

void __rustcall <std[6c98fd8553dbae28]::thread::thread::Thread>::park(longlong *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  lVar4 = *param_1;
  LOCK();
  piVar6 = (int *)(lVar4 + 0x28);
  *piVar6 = *piVar6 + -1;
  puVar3 = PTR_syscall_0021a0a0;
  puVar2 = PTR___errno_location_00219f18;
  UNLOCK();
  if (*piVar6 != 0) {
    piVar6 = (int *)(lVar4 + 0x28);
LAB_001e6ae0:
    do {
      if ((*piVar6 == -1) && (lVar4 = (*(code *)puVar3)(0xffffffff,0x89,0,0), lVar4 < 0)) {
        piVar5 = (int *)(*(code *)puVar2)();
        if (*piVar5 == 4) goto LAB_001e6ae0;
      }
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 1) {
        *piVar6 = 0;
      }
      UNLOCK();
    } while (iVar1 != 1);
  }
  return;
}


