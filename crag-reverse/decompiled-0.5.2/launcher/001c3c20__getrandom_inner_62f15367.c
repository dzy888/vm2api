// 001c3c20 getrandom_inner

/* WARNING: Type propagation algorithm not settling */
/* getrandom[496a9b488867a1d]::imp::getrandom_inner */

int __rustcall
getrandom[496a9b488867a1d]::imp::getrandom_inner(undefined8 param_1,ulonglong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  
  if (getrandom_inner::HAS_GETRANDOM == 0xffffffffffffffff) {
    uVar9 = 1;
    bVar12 = true;
    lVar11 = (*(code *)PTR_syscall_0021a0a0)(0,0);
    if (lVar11 < 0) {
      piVar10 = (int *)(*(code *)PTR___errno_location_00219f18)();
      iVar7 = *piVar10;
      if (0 < iVar7) {
        bVar12 = iVar7 != 1 && iVar7 != 0x26;
        uVar9 = (ulonglong)bVar12;
      }
    }
    getrandom_inner::HAS_GETRANDOM = uVar9;
    puVar1 = PTR___errno_location_00219f18;
    puVar2 = PTR_syscall_0021a0a0;
    puVar5 = PTR_syscall_0021a0a0;
    puVar6 = PTR___errno_location_00219f18;
    if (bVar12) goto joined_r0x001c3c4d;
  }
  else {
    puVar1 = PTR___errno_location_00219f18;
    puVar2 = PTR_syscall_0021a0a0;
    puVar5 = PTR_syscall_0021a0a0;
    puVar6 = PTR___errno_location_00219f18;
    if (getrandom_inner::HAS_GETRANDOM != 0) {
joined_r0x001c3c4d:
      while( true ) {
        while( true ) {
          PTR___errno_location_00219f18 = puVar6;
          PTR_syscall_0021a0a0 = puVar5;
          puVar5 = PTR_syscall_0021a0a0;
          puVar6 = PTR___errno_location_00219f18;
          if (param_2 == 0) {
            PTR___errno_location_00219f18 = puVar1;
            PTR_syscall_0021a0a0 = puVar2;
            return 0;
          }
          PTR___errno_location_00219f18 = puVar1;
          PTR_syscall_0021a0a0 = puVar2;
          uVar9 = (*(code *)puVar5)(0,param_2);
          if ((longlong)uVar9 < 1) break;
          bVar12 = param_2 < uVar9;
          param_2 = param_2 - uVar9;
          puVar1 = PTR___errno_location_00219f18;
          puVar2 = PTR_syscall_0021a0a0;
          if (bVar12) {
            return -0x7ffffffe;
          }
        }
        if (uVar9 != 0xffffffffffffffff) break;
        piVar10 = (int *)(*(code *)puVar6)();
        iVar7 = *piVar10;
        if (iVar7 < 1) {
          iVar7 = -0x7fffffff;
        }
        puVar1 = PTR___errno_location_00219f18;
        puVar2 = PTR_syscall_0021a0a0;
        if (iVar7 != 4) {
          return iVar7;
        }
      }
      return -0x7ffffffe;
    }
  }
  pcVar3 = (code *)PTR___errno_location_00219f18;
  pcVar4 = (code *)PTR_read_0021a0d8;
  if (use_file::get_rng_fd::FD == 0xffffffffffffffff) {
    (*(code *)PTR_pthread_mutex_lock_0021a680)();
    puVar2 = PTR_open_0021a438;
    puVar1 = PTR___errno_location_00219f18;
    if (use_file::get_rng_fd::FD == 0xffffffffffffffff) {
      do {
        iVar7 = (*(code *)puVar2)();
        if (-1 < iVar7) {
          iVar7 = (*(code *)PTR_poll_0021a440)();
          puVar6 = PTR_poll_0021a440;
          goto joined_r0x001c3e30;
        }
        piVar10 = (int *)(*(code *)puVar1)();
        iVar7 = *piVar10;
        if (iVar7 < 1) {
          iVar7 = -0x7fffffff;
        }
      } while (iVar7 == 4);
      goto LAB_001c3ef9;
    }
    (*(code *)PTR_pthread_mutex_unlock_0021a688)();
    pcVar3 = (code *)PTR___errno_location_00219f18;
    pcVar4 = (code *)PTR_read_0021a0d8;
  }
joined_r0x001c3e95:
  do {
    while( true ) {
      if (param_2 == 0) {
        return 0;
      }
      uVar9 = (*pcVar4)();
      if ((longlong)uVar9 < 1) break;
      bVar12 = param_2 < uVar9;
      param_2 = param_2 - uVar9;
      if (bVar12) {
        return -0x7ffffffe;
      }
    }
    if (uVar9 != 0xffffffffffffffff) {
      return -0x7ffffffe;
    }
    piVar10 = (int *)(*pcVar3)();
    iVar7 = *piVar10;
    if (iVar7 < 1) {
      iVar7 = -0x7fffffff;
    }
  } while (iVar7 == 4);
  return iVar7;
joined_r0x001c3e30:
  if (-1 < iVar7) goto LAB_001c3e32;
  piVar10 = (int *)(*(code *)puVar1)();
  iVar7 = *piVar10;
  if (iVar7 < 1) {
    iVar7 = -0x7fffffff;
LAB_001c3eeb:
    (*(code *)PTR_close_00219d60)();
    goto LAB_001c3ef9;
  }
  if ((iVar7 != 0xb) && (iVar7 != 4)) goto LAB_001c3eeb;
  iVar7 = (*(code *)puVar6)();
  goto joined_r0x001c3e30;
LAB_001c3e32:
  (*(code *)PTR_close_00219d60)();
  do {
    uVar8 = (*(code *)puVar2)();
    if (-1 < (int)uVar8) {
      use_file::get_rng_fd::FD = (ulonglong)uVar8;
      (*(code *)PTR_pthread_mutex_unlock_0021a688)();
      pcVar3 = (code *)PTR___errno_location_00219f18;
      pcVar4 = (code *)PTR_read_0021a0d8;
      goto joined_r0x001c3e95;
    }
    piVar10 = (int *)(*(code *)puVar1)();
    iVar7 = *piVar10;
    if (iVar7 < 1) {
      iVar7 = -0x7fffffff;
    }
  } while (iVar7 == 4);
LAB_001c3ef9:
  (*(code *)PTR_pthread_mutex_unlock_0021a688)();
  return iVar7;
}


