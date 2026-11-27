// 0074c880 park_timeout

/* <std[6c98fd8553dbae28]::thread::thread::Thread>::park_timeout */

void __rustcall
<std[6c98fd8553dbae28]::thread::thread::Thread>::park_timeout
          (longlong *param_1,longlong param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auVar10 [12];
  longlong local_38;
  ulonglong local_30;
  
  lVar4 = *param_1;
  LOCK();
  piVar7 = (int *)(lVar4 + 0x28);
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (*piVar7 == 0) {
    return;
  }
  auVar10 = <std[6c98fd8553dbae28]::sys::pal::unix::time::Timespec>::now(1);
  puVar2 = PTR_syscall_00799e60;
  puVar1 = PTR___errno_location_007990a0;
  lVar3 = auVar10._0_8_ + param_2;
  if (param_2 < 0 == SCARRY8(auVar10._0_8_,param_2)) {
    uVar6 = auVar10._8_4_ + param_3;
    if (999999999 < uVar6) {
      bVar9 = SCARRY8(lVar3,1);
      lVar3 = lVar3 + 1;
      if (bVar9) goto LAB_0074c964;
      uVar6 = uVar6 + 0xc4653600;
    }
    local_30 = (ulonglong)uVar6;
    bVar9 = true;
    local_38 = lVar3;
  }
  else {
LAB_0074c964:
    bVar9 = false;
  }
  piVar7 = (int *)(lVar4 + 0x28);
  while (*piVar7 == -1) {
    plVar8 = (longlong *)0x0;
    if (bVar9) {
      plVar8 = &local_38;
    }
    lVar4 = (*(code *)puVar2)(0xffffffff,0x89,plVar8,0);
    if ((-1 < lVar4) || (piVar5 = (int *)(*(code *)puVar1)(), *piVar5 != 4)) break;
  }
  LOCK();
  *piVar7 = 0;
  UNLOCK();
  return;
}


