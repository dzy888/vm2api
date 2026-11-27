// 006fa5c0 close_and_shutdown_all

/* <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::close_and_shutdown_all
   <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::close_and_shutdown_all
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::close_and_shutdown_all(longlong *param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  
  *(undefined1 *)(param_1 + 6) = 1;
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  uVar10 = param_1[4] + param_2 + 1;
  if (param_2 < uVar10) {
LAB_006fa617:
    do {
      piVar1 = (int *)(*param_1 + (param_1[4] & param_2) * 0x18);
      piVar2 = (int *)(*param_1 + (param_1[4] & param_2) * 0x18);
      LOCK();
      bVar13 = *piVar2 == 0;
      if (bVar13) {
        *piVar2 = 1;
      }
      UNLOCK();
      if (bVar13) {
        if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) == 0) goto LAB_006fa643;
LAB_006fa6fc:
        bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar8 = bVar8 ^ 1;
        bVar4 = *(byte *)(piVar1 + 1);
        lVar5 = *(longlong *)(piVar1 + 4);
      }
      else {
        (*(code *)PTR_lock_contended_00798fe0)();
        if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0) goto LAB_006fa6fc;
LAB_006fa643:
        bVar8 = 0;
        bVar4 = *(byte *)(piVar1 + 1);
        lVar5 = *(longlong *)(piVar1 + 4);
      }
      uVar12 = (ulonglong)bVar4;
      if (lVar5 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x38);
        lVar6 = *(longlong *)(lVar5 + lVar11);
        *(longlong *)(piVar1 + 4) = lVar6;
        if (lVar6 == 0) {
          piVar1[2] = 0;
          piVar1[3] = 0;
        }
        else {
          *(undefined8 *)(lVar6 + 8 + *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x38)) = 0;
          lVar11 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x38);
        }
        *(undefined8 *)(lVar5 + lVar11) = 0;
        uVar12 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x38);
        *(undefined8 *)(lVar5 + 8 + uVar12) = 0;
        LOCK();
        param_1[3] = param_1[3] + -1;
        UNLOCK();
      }
      if (((bVar8 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(uVar12), cVar9 == '\0')) {
        *(undefined1 *)(piVar1 + 1) = 1;
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x10) + 0x30))();
        goto LAB_006fa617;
      }
      param_2 = param_2 + 1;
    } while (param_2 != uVar10);
  }
  return;
}


