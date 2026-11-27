// 00090c20 write_contended

/* WARNING: Removing unreachable block (ram,0x00090ce6) */
/* <std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::write_contended */

void __rustcall
<std[6c98fd8553dbae28]::sys::sync::rwlock::futex::RwLock>::write_contended(uint *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  puVar2 = PTR_syscall_000c4110;
  uVar3 = *param_1;
  if (-1 < (int)uVar3 && (uVar3 & 0x3fffffff) != 0) {
    iVar6 = -99;
    do {
      uVar3 = *param_1;
      if (((int)uVar3 < 0) || ((uVar3 & 0x3fffffff) == 0)) break;
      bVar8 = iVar6 != 0;
      iVar6 = iVar6 + 1;
    } while (bVar8);
  }
  uVar7 = 0x3fffffff;
LAB_00090c8f:
  while ((uVar3 & 0x3fffffff) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar8 = uVar3 == uVar1;
    if (bVar8) {
      *param_1 = uVar3 | uVar7;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar8) {
      return;
    }
  }
  if (-1 < (int)uVar3) goto code_r0x00090c9a;
  goto LAB_00090ca8;
code_r0x00090c9a:
  LOCK();
  uVar1 = *param_1;
  bVar8 = uVar3 == uVar1;
  if (bVar8) {
    *param_1 = uVar3 | 0x80000000;
  }
  else {
    uVar3 = uVar1;
  }
  UNLOCK();
  if (bVar8) {
LAB_00090ca8:
    uVar1 = param_1[1];
    uVar3 = *param_1;
    uVar7 = 0xbfffffff;
    if ((int)uVar3 < 0 && (uVar3 & 0x3fffffff) != 0) {
      do {
        if ((param_1[1] != uVar1) || (lVar4 = (*(code *)puVar2)(uVar1,0x89,0,0), -1 < lVar4)) break;
        piVar5 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
      } while (*piVar5 == 4);
      uVar3 = *param_1;
      if (-1 < (int)uVar3 && (uVar3 & 0x3fffffff) != 0) {
        iVar6 = -99;
        do {
          uVar3 = *param_1;
          if (((int)uVar3 < 0) || ((uVar3 & 0x3fffffff) == 0)) break;
          bVar8 = iVar6 != 0;
          iVar6 = iVar6 + 1;
        } while (bVar8);
      }
    }
  }
  goto LAB_00090c8f;
}


