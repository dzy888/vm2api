// 006e1840 drop

/* WARNING: Switch with 1 destination removed at 0x006e1939 */
/* <tokio[d7d91d38da47d894]::sync::notify::NotifyWaitersList as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::notify::NotifyWaitersList_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 2) != '\0') {
    return;
  }
  lVar2 = param_1[1];
  LOCK();
  bVar10 = *(int *)(lVar2 + 8) == 0;
  if (bVar10) {
    *(int *)(lVar2 + 8) = 1;
  }
  UNLOCK();
  if (!bVar10) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
  }
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)*plVar3;
  while (plVar4 != (longlong *)0x0) {
    if (plVar4 == plVar3) {
      if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(lVar2 + 0xc) = 1;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      *(int *)(lVar2 + 8) = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    lVar5 = *plVar4;
    if (lVar5 == 0) break;
    *plVar3 = lVar5;
    *(longlong **)(lVar5 + 8) = plVar3;
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[4] = 2;
    plVar4 = (longlong *)*plVar3;
  }
  (*(code *)PTR_unwrap_failed_00799278)();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


