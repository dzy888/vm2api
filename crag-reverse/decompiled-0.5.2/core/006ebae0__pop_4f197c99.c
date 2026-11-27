// 006ebae0 pop

/* <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::pop
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::pop(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
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
  lVar6 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(param_1 + 8) = lVar6 - (ulonglong)(lVar6 != 0);
  if ((lVar6 == 0) || (lVar6 = *(longlong *)(param_1 + 2), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar6 + 8);
    *(longlong *)(param_1 + 2) = lVar2;
    if (lVar2 == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
    }
    *(undefined8 *)(lVar6 + 8) = 0;
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
    return lVar6;
  }
  return lVar6;
}


