// 00743cd0 call

/* WARNING: Removing unreachable block (ram,0x00743d81) */
/* WARNING: Removing unreachable block (ram,0x00743eac) */
/* <std[6c98fd8553dbae28]::sys::sync::once::futex::Once>::call */

void __rustcall
<std[6c98fd8553dbae28]::sys::sync::once::futex::Once>::call
          (uint *param_1,int param_2,undefined8 param_3,longlong param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  puVar2 = PTR_syscall_00799e60;
  puVar1 = PTR___errno_location_007990a0;
  uVar6 = *param_1;
  if (param_2 == 0) {
    uVar5 = uVar6 & 4;
    switch(uVar6 & 3) {
    case 0:
      goto switchD_00743e25_caseD_0;
    case 1:
switchD_00743e25_caseD_1:
      do {
        uVar7 = uVar6;
        if (uVar5 == 0) {
          uVar7 = uVar6 | 4;
          uVar6 = 1;
          LOCK();
          uVar5 = *param_1;
          if (uVar5 == 1) {
            *param_1 = uVar7;
          }
          else {
            uVar6 = uVar5;
          }
          UNLOCK();
          if (uVar5 != 1) goto LAB_00743e67;
        }
        do {
          if ((*param_1 != uVar7) ||
             (lVar3 = (*(code *)PTR_syscall_00799e60)(uVar7,0x89,0,0), -1 < lVar3)) break;
          piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
        } while (*piVar4 == 4);
        uVar6 = *param_1;
        uVar5 = uVar6 & 4;
        switch(uVar6 & 3) {
        case 0:
          goto switchD_00743e25_caseD_0;
        case 2:
          goto switchD_00743e25_caseD_2;
        case 3:
switchD_00743e25_caseD_3:
          do {
            LOCK();
            uVar7 = *param_1;
            bVar8 = uVar6 == uVar7;
            if (bVar8) {
              *param_1 = uVar5 | 1;
              uVar7 = uVar6;
            }
            uVar6 = uVar7;
            UNLOCK();
            if (bVar8) goto LAB_00743dc0;
LAB_00743e67:
            uVar5 = uVar6 & 4;
            switch(uVar6 & 3) {
            case 0:
              goto switchD_00743e25_caseD_0;
            case 1:
              goto switchD_00743e25_caseD_1;
            case 2:
              goto switchD_00743e25_caseD_2;
            }
          } while( true );
        }
      } while( true );
    case 2:
switchD_00743e25_caseD_2:
      (*(code *)PTR_panic_fmt_007991a8)(uVar5,param_5);
      break;
    case 3:
      goto switchD_00743e25_caseD_3;
    }
  }
  else {
LAB_00743d13:
    do {
      if (1 < (uVar6 & 3) - 2) {
        if ((uVar6 & 3) != 1) {
          return;
        }
        uVar5 = uVar6;
        if ((uVar6 & 4) == 0) {
          uVar5 = uVar6 | 4;
          uVar6 = 1;
          LOCK();
          uVar7 = *param_1;
          if (uVar7 == 1) {
            *param_1 = uVar5;
          }
          else {
            uVar6 = uVar7;
          }
          UNLOCK();
          if (uVar7 != 1) goto LAB_00743d13;
        }
        do {
          if ((*param_1 != uVar5) || (lVar3 = (*(code *)puVar2)(uVar5,0x89,0,0), -1 < lVar3)) break;
          piVar4 = (int *)(*(code *)puVar1)();
        } while (*piVar4 == 4);
        uVar6 = *param_1;
        goto LAB_00743d13;
      }
      LOCK();
      uVar5 = *param_1;
      bVar8 = uVar6 == uVar5;
      if (bVar8) {
        *param_1 = uVar6 & 4 | 1;
      }
      else {
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar8);
  }
LAB_00743dc0:
  (**(code **)(param_4 + 0x20))();
  LOCK();
  uVar6 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if ((uVar6 & 4) != 0) {
    (*(code *)PTR_syscall_00799e60)(0x7fffffff,0x81);
  }
switchD_00743e25_caseD_0:
  return;
}


