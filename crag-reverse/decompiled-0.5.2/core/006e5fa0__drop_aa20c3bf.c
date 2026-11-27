// 006e5fa0 drop

/* WARNING: Switch with 1 destination removed at 0x006e607d */
/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Readiness_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar3 = *param_1;
  LOCK();
  bVar8 = *(int *)(lVar3 + 0x18) == 0;
  if (bVar8) {
    *(int *)(lVar3 + 0x18) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
  }
  plVar1 = param_1 + 1;
  if (param_1[1] == 0) {
    if (*(longlong **)(lVar3 + 0x20) != plVar1) goto LAB_006e6017;
    plVar7 = (longlong *)param_1[2];
    *(longlong **)(lVar3 + 0x20) = plVar7;
    if (plVar7 != (longlong *)0x0) goto LAB_006e5ff0;
LAB_006e6011:
    if (*(longlong **)(lVar3 + 0x28) != plVar1) goto LAB_006e6017;
    *(longlong *)(lVar3 + 0x28) = *plVar1;
  }
  else {
    plVar7 = (longlong *)param_1[2];
    *(longlong **)(param_1[1] + 8) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_006e6011;
LAB_006e5ff0:
    *plVar7 = *plVar1;
  }
  *plVar1 = 0;
  param_1[2] = 0;
LAB_006e6017:
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(lVar3 + 0x1c) = 1;
  }
  LOCK();
  iVar2 = *(int *)(lVar3 + 0x18);
  *(int *)(lVar3 + 0x18) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


