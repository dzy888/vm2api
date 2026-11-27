// 007041d0 <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task::{closure#0}>

/* <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::spawn_task::<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task::{closure#0}>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::spawn_task::
<<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task::_closure_0_>
          (longlong param_1,ulonglong *param_2,undefined1 param_3,longlong param_4,longlong *param_5
          ,undefined8 param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auVar18 [16];
  ulonglong *local_88;
  longlong local_80;
  longlong *local_70;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x37c) != '\0') {
    LOCK();
    uVar13 = *param_2;
    *param_2 = *param_2 - 0x40;
    UNLOCK();
    if (uVar13 < 0x40) {
      (*(code *)PTR_panic_00799338)
                (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
      goto LAB_007047ef;
    }
LAB_007042d5:
    (**(code **)(param_2[2] + 0x30))();
    uVar10 = 1;
    puVar15 = (ulonglong *)0x0;
    goto LAB_007042e7;
  }
  uStack_60 = CONCAT31(uStack_60._1_3_,param_3);
  local_88 = (ulonglong *)CONCAT44(local_88._4_4_,0x10);
  local_70 = param_5;
  local_68 = param_2;
  local_50 = param_6;
  uVar9 = <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
          ::with::<tokio[d7d91d38da47d894]::runtime::context::thread_rng_n::_closure_0_,u32>
                    (&anon_1c7207ea9655bfcf55d918eab6d9918c_0_llvm_17559541839288726608,&local_88);
  if (0xf < uVar9) {
    (*(code *)PTR_panic_bounds_check_00799520)
              (extraout_XMM0_Da,&PTR_s__vendor_tokio_1_54_1_src_runtime_00795378);
    goto LAB_007047ef;
  }
  piVar1 = (int *)(param_1 + (ulonglong)uVar9 * 0x30);
  piVar2 = (int *)(param_1 + (ulonglong)uVar9 * 0x30);
  LOCK();
  bVar16 = *piVar2 == 0;
  if (bVar16) {
    *piVar2 = 1;
  }
  UNLOCK();
  uVar17 = extraout_XMM0_Da;
  if (!bVar16) {
    uVar17 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = (char)piVar1[10];
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = (char)piVar1[10];
    uVar17 = extraout_XMM0_Da_00;
  }
  if (cVar8 != '\0') {
    if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), uVar17 = extraout_XMM0_Da_01,
             cVar8 == '\0')) {
      *(undefined1 *)(piVar1 + 1) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      uVar17 = (*(code *)PTR_wake_00799010)();
      LOCK();
      uVar13 = *param_2;
      *param_2 = *param_2 - 0x40;
      UNLOCK();
    }
    else {
      LOCK();
      uVar13 = *param_2;
      *param_2 = *param_2 - 0x40;
      UNLOCK();
    }
    if (uVar13 < 0x40) {
      (*(code *)PTR_panic_00799338)
                (uVar17,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
      goto LAB_007047ef;
    }
    goto LAB_007042d5;
  }
  uVar13 = (ulonglong)local_80 >> 8;
  local_80 = CONCAT71((int7)uVar13,param_3);
  uVar13 = *(ulonglong *)(piVar1 + 2);
  uVar11 = *(ulonglong *)(piVar1 + 8);
  local_88 = param_2;
  if (uVar11 == uVar13) {
    (*(code *)PTR_grow_0079a7a0)();
    uVar13 = *(ulonglong *)(piVar1 + 2);
    uVar11 = *(ulonglong *)(piVar1 + 8);
  }
  *(ulonglong *)(piVar1 + 8) = uVar11 + 1;
  uVar14 = 0;
  if (uVar13 <= uVar11 + *(longlong *)(piVar1 + 6)) {
    uVar14 = uVar13;
  }
  lVar4 = *(longlong *)(piVar1 + 4);
  lVar12 = ((uVar11 + *(longlong *)(piVar1 + 6)) - uVar14) * 0x10;
  *(ulonglong **)(lVar4 + lVar12) = param_2;
  *(undefined1 *)(lVar4 + 8 + lVar12) = param_3;
  LOCK();
  *(longlong *)(param_4 + 0x10) = *(longlong *)(param_4 + 0x10) + 1;
  UNLOCK();
  if (*(longlong *)(piVar1 + 8) == 1) {
    LOCK();
    *(ulonglong *)(param_1 + 0x370) = *(ulonglong *)(param_1 + 0x370) | 1L << ((byte)uVar9 & 0x3f);
    UNLOCK();
  }
  puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if (((bVar7 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(piVar1 + 1) = 1;
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  piVar1 = (int *)(param_1 + 0x300);
  LOCK();
  bVar16 = *(int *)(param_1 + 0x300) == 0;
  if (bVar16) {
    *(int *)(param_1 + 0x300) = 1;
  }
  UNLOCK();
  if (bVar16) {
    if ((*puVar15 & 0x7fffffffffffffff) == 0) goto LAB_007043f5;
LAB_00704494:
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    if (*(char *)(param_1 + 0x360) != '\x01') goto LAB_007044b9;
LAB_0070440b:
    if (((bVar7 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(param_1 + 0x304) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    if ((*puVar15 & 0x7fffffffffffffff) != 0) goto LAB_00704494;
LAB_007043f5:
    bVar7 = 0;
    if (*(char *)(param_1 + 0x360) == '\x01') goto LAB_0070440b;
LAB_007044b9:
    if (*(longlong *)(param_4 + 8) == 0) {
      lVar4 = *local_70;
      if (*(longlong *)(lVar4 + 0x3f8) != *(longlong *)(lVar4 + 1000)) {
        plVar5 = *(longlong **)(param_1 + 0x338);
        if (plVar5 == (longlong *)0x0) {
          (*(code *)PTR_panic_00799338)(param_4,&PTR_s__vendor_tokio_1_54_1_src_runtime_00795268);
LAB_007047ef:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        LOCK();
        lVar12 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 == 0 || SCARRY8(lVar12,1) != *plVar5 < 0) goto LAB_007047ef;
        lVar12 = *(longlong *)(param_1 + 0x358);
        <tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_thread
                  (&local_48,local_70,plVar5,local_50,lVar12);
        if (CONCAT44(uStack_44,local_48) == 0) {
          puVar15 = (ulonglong *)CONCAT44(uStack_3c,uStack_40);
          uVar9 = uStack_40 & 3;
          switch(uVar9) {
          case 0:
            cVar8 = (char)puVar15[2];
            break;
          case 1:
            cVar8 = *(char *)((longlong)puVar15 + 0x1f);
            break;
          case 2:
            lVar12 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar8 = (**(code **)(lVar12 + 8))();
            break;
          case 3:
            cVar8 = (char)uStack_3c;
          }
          if ((cVar8 != '\r') || (*(ulonglong *)(lVar4 + 0x3f8) <= *(ulonglong *)(lVar4 + 0x3f0))) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>>
                      (piVar1,bVar7);
            uVar10 = 1;
            goto LAB_007042e7;
          }
          if ((1 < uVar9 - 2) && (uVar9 != 0)) {
            local_80 = (longlong)puVar15 + -1;
            local_88 = (ulonglong *)CONCAT71(local_88._1_7_,3);
            (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          local_58 = local_38;
          local_68 = (ulonglong *)CONCAT44(uStack_44,local_48);
          uStack_60 = uStack_40;
          uStack_5c = uStack_3c;
          LOCK();
          *(longlong *)(lVar4 + 0x3f8) = *(longlong *)(lVar4 + 0x3f8) + 1;
          UNLOCK();
          *(longlong *)(param_1 + 0x358) = lVar12 + 1;
          <hashbrown[b5c94476ffc33875]::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::insert(&local_88,param_1 + 0x308,lVar12);
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>>
                    (&local_88);
        }
        puVar15 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
      }
      goto LAB_0070440b;
    }
    LOCK();
    *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + -1;
    UNLOCK();
    *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
    if (((bVar7 == 0) && ((*puVar15 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(param_1 + 0x304) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    (*(code *)PTR_notify_one_0079a770)();
  }
  uVar10 = 0;
LAB_007042e7:
  auVar18._8_8_ = puVar15;
  auVar18._0_8_ = uVar10;
  return auVar18;
}


