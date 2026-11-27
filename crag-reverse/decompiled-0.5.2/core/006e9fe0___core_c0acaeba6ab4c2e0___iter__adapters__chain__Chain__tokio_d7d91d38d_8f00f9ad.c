// 006e9fe0 <core[c0acaeba6ab4c2e0]::iter::adapters::chain::Chain<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<_>>::push_overflow::BatchTaskIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>,core[c0acaeba6ab4c2e0]::iter::sources::once::Once<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>>

/* WARNING: Switch with 1 destination removed at 0x006ea276 */
/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle as
   tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::push_batch::<core[c0acaeba6ab4c2e0]::iter::adapters::chain::Chain<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<_>>::push_overflow::BatchTaskIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>,
   core[c0acaeba6ab4c2e0]::iter::sources::once::Once<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>>
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle_as_tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::push_batch::
<core[c0acaeba6ab4c2e0]::iter::adapters::chain::Chain<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<_>>::push_overflow::BatchTaskIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>,core[c0acaeba6ab4c2e0]::iter::sources::once::Once<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>>
          (char *param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  bool bVar17;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
LAB_006ea009:
    if (*(int *)param_2 != 1) {
      return;
    }
    puVar9 = *(ulonglong **)(param_2 + 8);
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    lVar14 = 1;
    puVar10 = puVar9;
    if (puVar9 == (ulonglong *)0x0) {
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (lVar2 == 0x80) {
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      goto LAB_006ea009;
    }
    lVar3 = *(longlong *)(param_2 + 0x18);
    iVar4 = (int)lVar3;
    puVar9 = *(ulonglong **)(lVar1 + (ulonglong)(iVar4 + (uint)lVar2 & 0xff) * 8);
    lVar12 = lVar2 + 1;
    *(longlong *)(param_2 + 0x20) = lVar12;
    bVar6 = *param_2;
    puVar16 = *(ulonglong **)(param_2 + 8);
    lVar14 = 1;
    puVar10 = puVar9;
    if (lVar12 != 0x80) {
      uVar11 = (ulonglong)((uint)lVar2 & 3);
      if (uVar11 != 3) {
        uVar13 = 1;
        puVar8 = puVar9;
        do {
          puVar10 = *(ulonglong **)(lVar1 + (ulonglong)(iVar4 + (int)lVar12 & 0xff) * 8);
          lVar12 = lVar12 + 1;
          puVar8[1] = (ulonglong)puVar10;
          uVar15 = uVar11 ^ uVar13;
          uVar13 = uVar13 + 1;
          puVar8 = puVar10;
        } while (uVar15 != 3);
      }
      if (2 < lVar2 - 0x7cU) {
        uVar11 = lVar3 + lVar12;
        lVar12 = lVar12 + -0x80;
        do {
          uVar13 = *(ulonglong *)(lVar1 + (uVar11 & 0xff) * 8);
          puVar10[1] = uVar13;
          iVar4 = (int)uVar11;
          lVar14 = *(longlong *)(lVar1 + (ulonglong)(iVar4 + 1U & 0xff) * 8);
          *(longlong *)(uVar13 + 8) = lVar14;
          lVar3 = *(longlong *)(lVar1 + (ulonglong)(iVar4 + 2U & 0xff) * 8);
          *(longlong *)(lVar14 + 8) = lVar3;
          puVar10 = *(ulonglong **)(lVar1 + (ulonglong)(iVar4 + 3U & 0xff) * 8);
          *(ulonglong **)(lVar3 + 8) = puVar10;
          uVar11 = uVar11 + 4;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      lVar14 = 0x80 - lVar2;
    }
    if ((bVar6 & puVar16 != (ulonglong *)0x0) == 1) {
      puVar10[1] = (ulonglong)puVar16;
      lVar14 = lVar14 + 1;
      puVar10 = puVar16;
    }
  }
  LOCK();
  bVar17 = (int)*(ulonglong *)param_1 == 0;
  if (bVar17) {
    *(int *)param_1 = 1;
  }
  UNLOCK();
  if (!bVar17) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    puVar16 = (ulonglong *)((longlong)param_1 + 4);
    if ((char)*(ulonglong *)((longlong)param_1 + 0x18) == '\0') {
LAB_006ea1ea:
      bVar6 = 0;
      goto LAB_006ea1ec;
    }
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    puVar16 = (ulonglong *)((longlong)param_1 + 4);
    if ((char)*(ulonglong *)((longlong)param_1 + 0x18) == '\0') {
      bVar6 = bVar6 ^ 1;
LAB_006ea1ec:
      puVar8 = *(ulonglong **)((longlong)param_1 + 0x10);
      if (*(ulonglong **)((longlong)param_1 + 0x10) == (ulonglong *)0x0) {
        puVar8 = (ulonglong *)param_1;
      }
      puVar8[1] = (ulonglong)puVar9;
      *(ulonglong **)((longlong)param_1 + 0x10) = puVar10;
      *(ulonglong *)((longlong)param_1 + 0x20) = lVar14 + *(ulonglong *)((longlong)param_1 + 0x20);
      if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)puVar16 = 1;
      }
      LOCK();
      uVar11 = *(ulonglong *)param_1;
      *(int *)param_1 = 0;
      UNLOCK();
      if ((int)uVar11 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
      return;
    }
    if (bVar6 == 0) goto LAB_006ea185;
  }
  if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0) {
    cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    puVar10 = (ulonglong *)param_1;
    if (cVar7 == '\0') {
      *(undefined1 *)((longlong)param_1 + 4) = 1;
    }
  }
LAB_006ea185:
  LOCK();
  uVar11 = *(ulonglong *)param_1;
  *(int *)param_1 = 0;
  UNLOCK();
  if ((int)uVar11 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  do {
    puVar16 = (ulonglong *)puVar9[1];
    LOCK();
    uVar11 = *puVar9;
    *puVar9 = *puVar9 - 0x40;
    UNLOCK();
    if (uVar11 >> 6 == 1) {
      (**(code **)(puVar9[2] + 0x10))();
    }
    else if (uVar11 >> 6 == 0) {
      param_1 = anon_c153c4d816f71af2accb98944a80e600_47_llvm_2617760850115737065;
      (*(code *)PTR_panic_00799338)();
      goto LAB_006ea1ea;
    }
    puVar9 = puVar16;
    if (puVar16 == (ulonglong *)0x0) {
      return;
    }
  } while( true );
}


