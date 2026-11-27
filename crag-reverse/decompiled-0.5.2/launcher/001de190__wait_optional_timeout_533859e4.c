// 001de190 wait_optional_timeout

/* <std[6c98fd8553dbae28]::sys::sync::condvar::futex::Condvar>::wait_optional_timeout */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sys::sync::condvar::futex::Condvar>::wait_optional_timeout
          (int *param_1,int *param_2,longlong param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auVar10 [12];
  longlong local_48;
  ulonglong local_40;
  int *local_38;
  
  uVar8 = (ulonglong)param_4;
  iVar2 = *param_1;
  LOCK();
  iVar1 = *param_2;
  *param_2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_0021a0a0)(1,0x81);
  }
  local_38 = param_2;
  if (param_4 != 0xffffffff) {
    auVar10 = <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(1,param_2);
    lVar5 = auVar10._0_8_ + param_3;
    if (param_3 < 0 == SCARRY8(auVar10._0_8_,param_3)) {
      param_4 = auVar10._8_4_ + param_4;
      if (999999999 < param_4) {
        bVar9 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar9) goto LAB_001de22a;
        param_4 = param_4 + 0xc4653600;
      }
      local_40 = (ulonglong)param_4;
      bVar9 = true;
      local_48 = lVar5;
      pcVar3 = (code *)PTR_syscall_0021a0a0;
      pcVar4 = (code *)PTR___errno_location_00219f18;
      goto LAB_001de240;
    }
  }
LAB_001de22a:
  bVar9 = false;
  pcVar3 = (code *)PTR_syscall_0021a0a0;
  pcVar4 = (code *)PTR___errno_location_00219f18;
LAB_001de240:
  do {
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    if (*param_1 != iVar2) goto LAB_001de292;
    plVar7 = (longlong *)0x0;
    if (bVar9) {
      plVar7 = &local_48;
    }
    lVar5 = (*pcVar3)(iVar2,0x89,plVar7,0);
    if (-1 < lVar5) goto LAB_001de292;
    piVar6 = (int *)(*pcVar4)();
  } while (*piVar6 == 4);
  if (*piVar6 == 0x6e) {
    uVar8 = 0;
  }
LAB_001de292:
  LOCK();
  iVar1 = *local_38;
  if (iVar1 == 0) {
    *local_38 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00219d70)();
  }
  return uVar8;
}


