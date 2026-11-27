// 0070b700 shutdown2

/* tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::shutdown2 */

int * __rustcall
tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::shutdown2
          (int *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  bool bVar11;
  
  <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
  ::close_and_shutdown_all(param_2 + 0xb8,0);
  lVar3 = *(longlong *)(param_1 + 0x1c);
  while (lVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1a);
    uVar10 = *(ulonglong *)(param_1 + 0x16);
    if (lVar4 + 1U < uVar10) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_1 + 0x1a) = (lVar4 - uVar10) + 1;
    *(longlong *)(param_1 + 0x1c) = lVar3 + -1;
    puVar9 = *(ulonglong **)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
    *(longlong *)(param_2 + 0x18) = lVar3 + -1;
    LOCK();
    uVar10 = *puVar9;
    *puVar9 = *puVar9 - 0x40;
    UNLOCK();
    if (uVar10 >> 6 == 1) {
      (**(code **)(puVar9[2] + 0x10))();
    }
    else if (uVar10 >> 6 == 0) {
      (*(code *)PTR_panic_00799338)
                (lVar4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
      goto LAB_0070b92a;
    }
    lVar3 = *(longlong *)(param_1 + 0x1c);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  piVar1 = (int *)(param_2 + 0x90);
  LOCK();
  bVar11 = *(int *)(param_2 + 0x90) == 0;
  if (bVar11) {
    *(int *)(param_2 + 0x90) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_2 + 0xa8);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_2 + 0xa8);
  }
  if (cVar8 == '\0') {
    *(undefined1 *)(param_2 + 0xa8) = 1;
  }
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_2 + 0x94) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  do {
    while( true ) {
      puVar9 = (ulonglong *)
               <tokio[d7d91d38da47d894]::runtime::scheduler::inject::Inject<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
               ::pop(piVar1);
      if (puVar9 == (ulonglong *)0x0) {
        if (*(longlong *)(param_2 + 0xd0) == 0) {
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x1e);
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x22);
          if (*param_1 != -1) {
            <tokio[d7d91d38da47d894]::runtime::driver::Driver>::shutdown(param_1,param_2 + 0x1c0);
          }
          return param_1;
        }
        (*(code *)PTR_panic_00799338)();
        goto LAB_0070b92a;
      }
      LOCK();
      uVar10 = *puVar9;
      *puVar9 = *puVar9 - 0x40;
      UNLOCK();
      if (uVar10 >> 6 != 1) break;
      (**(code **)(puVar9[2] + 0x10))();
    }
  } while (uVar10 >> 6 != 0);
  (*(code *)PTR_panic_00799338)
            (0,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
LAB_0070b92a:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


