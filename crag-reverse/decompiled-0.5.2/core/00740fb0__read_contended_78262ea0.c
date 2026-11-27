// 00740fb0 read_contended

/* WARNING: Removing unreachable block (ram,0x007410b1) */
/* <std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::read_contended */

void __rustcall
<std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::read_contended(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  puVar4 = PTR_syscall_00799e60;
  puVar3 = PTR___errno_location_007990a0;
  uVar5 = *param_1;
  if (uVar5 == 0x3fffffff) {
    iVar8 = -99;
    do {
      uVar5 = *param_1;
      if (uVar5 != 0x3fffffff) break;
      bVar10 = iVar8 != 0;
      iVar8 = iVar8 + 1;
    } while (bVar10);
  }
  lVar6 = 0;
LAB_0074101d:
  while (((uVar9 = uVar5 & 0x3fffffff, lVar6 != 0 &&
          (uVar9 - 1 < 0x3ffffffd && ((byte)(uVar5 >> 0x1e) & 1) == 0)) ||
         (((uVar5 & 0x40000000) == 0 && uVar9 < 0x3ffffffe) && -1 < (int)uVar5))) {
    LOCK();
    uVar9 = *param_1;
    bVar10 = uVar5 == uVar9;
    if (bVar10) {
      *param_1 = uVar5 + 1;
    }
    else {
      uVar5 = uVar9;
    }
    UNLOCK();
    if (bVar10) {
      return;
    }
  }
  if (uVar9 == 0x3ffffffe) {
    (*(code *)PTR_panic_fmt_007991a8)(lVar6,&PTR_s__rustc_48a229ceaefd4985c50990b14_00796840);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = uVar5;
  if ((uVar5 & 0x40000000) == 0) goto code_r0x00741078;
  goto LAB_007410a0;
code_r0x00741078:
  uVar9 = uVar5 | 0x40000000;
  LOCK();
  uVar1 = *param_1;
  bVar10 = uVar5 == uVar1;
  if (bVar10) {
    *param_1 = uVar9;
  }
  else {
    uVar5 = uVar1;
  }
  UNLOCK();
  if (bVar10) {
LAB_007410a0:
    while (*param_1 == uVar9) {
      lVar6 = (*(code *)puVar4)(uVar9,0x89,0,0);
      if ((-1 < lVar6) || (piVar7 = (int *)(*(code *)puVar3)(), *piVar7 != 4)) break;
    }
    uVar5 = *param_1;
    lVar6 = 1;
    if (uVar5 == 0x3fffffff) {
      iVar8 = -99;
      do {
        uVar5 = *param_1;
        if (uVar5 != 0x3fffffff) break;
        bVar10 = iVar8 != 0;
        iVar8 = iVar8 + 1;
      } while (bVar10);
    }
  }
  goto LAB_0074101d;
}


