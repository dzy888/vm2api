// 007054a0 run_worker

/* <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::run_worker */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::run_worker
          (undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
          undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  ulonglong *puVar10;
  char extraout_DL;
  char extraout_DL_00;
  undefined4 uVar11;
  undefined8 local_90;
  uint uStack_88;
  undefined4 uStack_84;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_78 = 0;
  puVar2 = (ulonglong *)(param_2 + 0x300);
  local_40 = param_1;
LAB_007054ea:
  do {
    while (puVar10 = (ulonglong *)pop(param_2,param_6), extraout_DL == '\x02') {
      LOCK();
      iVar3 = *(int *)puVar2;
      if (iVar3 == 0) {
        *(int *)puVar2 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar8 = 0;
      }
      else {
        bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar8 = bVar8 ^ 1;
      }
      puVar10 = (ulonglong *)pop(param_2,param_6);
      if (extraout_DL_00 == '\x02') {
        LOCK();
        param_3[1] = param_3[1] + 1;
        UNLOCK();
        bVar5 = *(byte *)(param_2 + 0x360);
LAB_00705560:
        if ((bVar5 & 1) != 0) {
          if (((bVar8 == 0) &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
            *(undefined1 *)(param_2 + 0x304) = 1;
          }
          LOCK();
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = 0;
          UNLOCK();
          if (iVar3 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          drain_and_seal(param_2,param_3,param_6);
          LOCK();
          iVar3 = *(int *)puVar2;
          if (iVar3 == 0) {
            *(int *)puVar2 = 1;
          }
          UNLOCK();
          if (iVar3 != 0) {
            (*(code *)PTR_lock_contended_00798fe0)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar8 = 0;
          }
          else {
            bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar8 = bVar8 ^ 1;
          }
          goto LAB_007057fc;
        }
        bVar7 = (*(code *)PTR_wait_timeout_007995e0)(param_5,param_4);
        if (*(char *)(param_2 + 0x304) != '\0') {
          local_80 = bVar7 ^ 1;
          uStack_88 = CONCAT31(uStack_88._1_3_,bVar8);
          local_90 = puVar2;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<(std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedCoord>,std[6c98fd8553dbae28]::sync::WaitTimeoutResult)>>_00795280
                     ,&local_90,&PTR_s__vendor_tokio_1_54_1_src_runtime_00795348);
          goto LAB_00705a7a;
        }
        if (*(int *)(param_2 + 0x368) == 0) goto code_r0x0070559e;
        *(int *)(param_2 + 0x368) = *(int *)(param_2 + 0x368) + -1;
        if (((bVar8 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
          *(undefined1 *)(param_2 + 0x304) = 1;
        }
        LOCK();
        iVar3 = *(int *)puVar2;
        *(int *)puVar2 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      else {
        uStack_88 = CONCAT31(uStack_88._1_3_,extraout_DL_00) & 0xffffff01;
        LOCK();
        param_3[2] = param_3[2] + -1;
        UNLOCK();
        local_90 = puVar10;
        if (((bVar8 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
          *(undefined1 *)(param_2 + 0x304) = 1;
        }
        LOCK();
        iVar3 = *(int *)puVar2;
        *(int *)puVar2 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        uVar11 = (**(code **)puVar10[2])();
        LOCK();
        uVar4 = *puVar10;
        *puVar10 = *puVar10 - 0x40;
        UNLOCK();
        if (uVar4 >> 6 == 1) {
          (**(code **)(puVar10[2] + 0x10))();
        }
        else if (uVar4 >> 6 == 0) {
          (*(code *)PTR_panic_00799338)
                    (uVar11,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
LAB_00705a7a:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
      }
    }
    LOCK();
    param_3[2] = param_3[2] + -1;
    UNLOCK();
    uVar11 = (**(code **)puVar10[2])();
    LOCK();
    uVar4 = *puVar10;
    *puVar10 = *puVar10 - 0x40;
    UNLOCK();
    if (uVar4 >> 6 != 1) {
      if (uVar4 >> 6 == 0) {
        (*(code *)PTR_panic_00799338)
                  (uVar11,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
        goto LAB_00705a7a;
      }
      goto LAB_007054ea;
    }
    (**(code **)(puVar10[2] + 0x10))();
  } while( true );
code_r0x0070559e:
  bVar5 = *(byte *)(param_2 + 0x360);
  if (bVar7 == 0 && bVar5 == 0) {
    local_38 = param_6;
    <hashbrown[b5c94476ffc33875]::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>>
    ::remove::<usize>(&local_90,param_2 + 0x308,&local_38);
    local_48 = *(undefined8 *)(param_2 + 0x350);
    local_58 = *(undefined8 *)(param_2 + 0x340);
    uStack_50 = *(undefined8 *)(param_2 + 0x348);
    *(undefined4 *)(param_2 + 0x340) = (undefined4)local_90;
    *(undefined4 *)(param_2 + 0x344) = local_90._4_4_;
    *(uint *)(param_2 + 0x348) = uStack_88;
    *(undefined4 *)(param_2 + 0x34c) = uStack_84;
    *(ulonglong *)(param_2 + 0x350) = CONCAT71(uStack_7f,local_80);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>>
              (&local_78);
    local_68 = local_48;
    local_78 = local_58;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
LAB_007057fc:
    LOCK();
    *param_3 = *param_3 + -1;
    UNLOCK();
    LOCK();
    plVar1 = param_3 + 1;
    local_90 = (ulonglong *)*plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (local_90 != (ulonglong *)0x0) {
      if ((*(char *)(param_2 + 0x360) != '\0') && (*param_3 == 0)) {
        (*(code *)PTR_notify_one_0079a770)();
      }
      if (((bVar8 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(param_2 + 0x304) = 1;
      }
      LOCK();
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      local_40[2] = local_68;
      *local_40 = local_78;
      local_40[1] = CONCAT44(uStack_6c,uStack_70);
      return;
    }
    (*(code *)PTR_<usize,usize>_00799710)
              ("`num_idle_threads` underflowed on thread exit","",0x5b,
               &PTR_s__vendor_tokio_1_54_1_src_runtime_00795360);
    goto LAB_00705a7a;
  }
  goto LAB_00705560;
}


