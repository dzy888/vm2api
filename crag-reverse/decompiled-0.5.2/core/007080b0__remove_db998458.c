// 007080b0 remove

/* <tokio[d7d91d38da47d894]::util::sharded_list::ShardedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>::remove
   <tokio[d7d91d38da47d894]::util::sharded_list::ShardedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>::remove
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::util::sharded_list::ShardedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
::remove(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar9 = param_1[4] & *(ulonglong *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48))
  ;
  piVar1 = (int *)(*param_1 + uVar9 * 0x18);
  piVar2 = (int *)(*param_1 + uVar9 * 0x18);
  LOCK();
  bVar10 = *piVar2 == 0;
  if (bVar10) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (!bVar10) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
  lVar4 = *(longlong *)(param_2 + lVar8);
  if (lVar4 == 0) {
    if (*(longlong *)(piVar1 + 2) == param_2) {
      lVar4 = *(longlong *)(param_2 + 8 + lVar8);
      *(longlong *)(piVar1 + 2) = lVar4;
      goto joined_r0x00708188;
    }
LAB_00708190:
    param_2 = 0;
  }
  else {
    *(undefined8 *)(lVar4 + 8 + *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x38)) =
         *(undefined8 *)(param_2 + 8 + lVar8);
    lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
    lVar4 = *(longlong *)(param_2 + 8 + lVar8);
joined_r0x00708188:
    if (lVar4 == 0) {
      if (*(longlong *)(piVar1 + 4) != param_2) goto LAB_00708190;
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_2 + lVar8);
    }
    else {
      *(undefined8 *)(lVar4 + *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x38)) =
           *(undefined8 *)(param_2 + lVar8);
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38);
    }
    *(undefined8 *)(param_2 + 8 + lVar8) = 0;
    *(undefined8 *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38)) = 0;
    LOCK();
    param_1[3] = param_1[3] + -1;
    UNLOCK();
  }
  if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(piVar1 + 1) = 1;
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return param_2;
}


