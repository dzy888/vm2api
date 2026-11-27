// 004a9ed0 diag_excerpt

/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::diag_excerpt */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot>::diag_excerpt
          (undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 local_60 [24];
  undefined8 local_48 [3];
  
  lVar2 = *(longlong *)(param_2 + 0x800);
  LOCK();
  bVar6 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar6) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
  }
  <craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>::redacted_excerpt(local_60,lVar2 + 0x18);
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(lVar2 + 0x14) = 1;
  }
  LOCK();
  iVar1 = *(int *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x10) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (*(int *)(param_2 + 0x4e0) == -1) {
    local_48[0] = 0xffffffffffffffff;
  }
  else {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>::stderr_tail(local_48,param_2 + 0x4e0);
  }
  craggemini_core[66f3c71560d70857]::pool::combine_diag_excerpts(param_1,local_60,local_48);
  return param_1;
}


