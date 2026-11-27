// 006d9b50 open_or_wait

/* WARNING: Removing unreachable block (ram,0x006d9baf) */
/* getrandom[6c7f7f5c828d4481]::backends::use_file::open_or_wait */

uint __rustcall getrandom[6c7f7f5c828d4481]::backends::use_file::open_or_wait(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  
  puVar2 = PTR_syscall_00799e60;
  while (puVar3 = PTR_open_00799ee0, puVar1 = PTR___errno_location_007990a0, FD == -2) {
    (*(code *)puVar2)(0xfffffffe,0x80,0);
  }
  if (FD != -1) {
    return 0;
  }
  LOCK();
  FD = 0xfffffffe;
  UNLOCK();
  do {
    iVar4 = (*(code *)puVar3)();
    puVar2 = PTR_poll_00799b78;
    if (-1 < iVar4) goto LAB_006d9c30;
    piVar6 = (int *)(*(code *)puVar1)();
    iVar4 = *piVar6;
  } while (iVar4 == 4);
  if (iVar4 < 1) {
    uVar5 = 1;
    uVar7 = 0x10001;
    goto LAB_006d9cbe;
  }
  uVar7 = -iVar4;
  goto joined_r0x006d9c6f;
  while( true ) {
    piVar6 = (int *)(*(code *)puVar1)();
    iVar4 = *piVar6;
    if (iVar4 != 4) break;
LAB_006d9c30:
    iVar4 = (*(code *)puVar2)();
    if (-1 < iVar4) {
      uVar7 = 0;
      goto LAB_006d9c60;
    }
  }
  uVar7 = 0x10001;
  if (0 < iVar4) {
    uVar7 = -iVar4;
  }
LAB_006d9c60:
  (*(code *)PTR_close_00799030)();
joined_r0x006d9c6f:
  uVar5 = 1;
  if (uVar7 == 0) {
    do {
      uVar5 = (*(code *)puVar3)();
      if (-1 < (int)uVar5) {
        uVar7 = uVar5;
        goto LAB_006d9cbb;
      }
      piVar6 = (int *)(*(code *)puVar1)();
      iVar4 = *piVar6;
    } while (iVar4 == 4);
    uVar7 = 0x10001;
    if (0 < iVar4) {
      uVar7 = -iVar4;
    }
LAB_006d9cbb:
    uVar5 = uVar5 >> 0x1f;
  }
LAB_006d9cbe:
  FD = 0xffffffff;
  if (uVar5 == 0) {
    FD = uVar7;
  }
  (*(code *)PTR_syscall_00799e60)(0x7fffffff,0x81);
  return uVar5;
}


