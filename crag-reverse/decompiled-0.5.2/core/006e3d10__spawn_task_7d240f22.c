// 006e3d10 spawn_task

/* <tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task
          (undefined4 param_1,longlong *param_2,ulonglong *param_3,undefined1 param_4,
          undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  byte local_8c;
  ulonglong *local_88;
  longlong local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ulonglong *local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x18);
  if (*(int *)(lVar3 + 0x10) == 1) {
    uVar8 = <tokio[d7d91d38da47d894]::runtime::blocking::sharded::ShardedImpl>::spawn_task::
            <<tokio[d7d91d38da47d894]::runtime::blocking::pool::Spawner>::spawn_task::_closure_0_>
                      (piVar1,param_3,param_4,lVar3 + 0x3f8,param_2,param_5);
    return uVar8;
  }
  LOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  local_58 = param_3;
  local_50 = param_4;
  if (iVar2 != 0) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_8c = 0;
    cVar7 = *(char *)(lVar3 + 0x98);
  }
  else {
    local_8c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_8c = local_8c ^ 1;
    cVar7 = *(char *)(lVar3 + 0x98);
    param_1 = extraout_XMM0_Da;
  }
  if (cVar7 == '\0') {
    uVar11 = (ulonglong)local_80 >> 8;
    local_80 = CONCAT71((int7)uVar11,param_4);
    uVar11 = *(ulonglong *)(lVar3 + 0x20);
    uVar9 = *(ulonglong *)(lVar3 + 0x38);
    local_88 = param_3;
    if (uVar9 == uVar11) {
      (*(code *)PTR_grow_0079a7a0)();
      uVar11 = *(ulonglong *)(lVar3 + 0x20);
      uVar9 = *(ulonglong *)(lVar3 + 0x38);
    }
    *(ulonglong *)(lVar3 + 0x38) = uVar9 + 1;
    uVar9 = uVar9 + *(longlong *)(lVar3 + 0x30);
    uVar12 = 0;
    if (uVar11 <= uVar9) {
      uVar12 = uVar11;
    }
    lVar4 = *(longlong *)(lVar3 + 0x28);
    lVar10 = (uVar9 - uVar12) * 0x10;
    *(ulonglong **)(lVar4 + lVar10) = param_3;
    *(undefined1 *)(lVar4 + 8 + lVar10) = param_4;
    LOCK();
    *(longlong *)(lVar3 + 0x408) = *(longlong *)(lVar3 + 0x408) + 1;
    UNLOCK();
    if (*(longlong *)(lVar3 + 0x400) == 0) {
      if (*(longlong *)(lVar3 + 0x3f8) != *(longlong *)(lVar3 + 1000)) {
        plVar5 = *(longlong **)(lVar3 + 0x70);
        if (plVar5 == (longlong *)0x0) {
          (*(code *)PTR_panic_00799338)(lVar4,&PTR_s__vendor_tokio_1_54_1_src_runtime_00793cf8);
LAB_006e4191:
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        LOCK();
        lVar4 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if (*plVar5 == 0 || SCARRY8(lVar4,1) != *plVar5 < 0) goto LAB_006e4191;
        lVar4 = *(longlong *)(lVar3 + 0x90);
        spawn_thread(&local_70,param_2,plVar5,param_5,lVar4);
        if (CONCAT44(uStack_6c,local_70) == 0) {
          lVar4 = CONCAT44(uStack_64,uStack_68);
          uVar13 = uStack_68 & 3;
          switch(uVar13) {
          case 0:
            cVar7 = *(char *)(lVar4 + 0x10);
            break;
          case 1:
            cVar7 = *(char *)(lVar4 + 0x1f);
            break;
          case 2:
            lVar10 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar7 = (**(code **)(lVar10 + 8))();
            break;
          case 3:
            cVar7 = (char)uStack_64;
          }
          if ((cVar7 != '\r') || (*(ulonglong *)(lVar3 + 0x3f8) <= *(ulonglong *)(lVar3 + 0x3f0))) {
            if ((local_8c == 0) &&
               (((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0 &&
                (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')))) {
              *(undefined1 *)(lVar3 + 0x1c) = 1;
            }
            LOCK();
            iVar2 = *piVar1;
            *piVar1 = 0;
            UNLOCK();
            if (iVar2 == 2) {
              (*(code *)PTR_wake_00799010)();
              return 1;
            }
            return 1;
          }
          if ((1 < uVar13 - 2) && (uVar13 != 0)) {
            local_80 = lVar4 + -1;
            local_88 = (ulonglong *)CONCAT71(local_88._1_7_,3);
            (*(code *)PTR_drop_00799040)();
          }
        }
        else {
          local_38 = local_60;
          local_48 = local_70;
          uStack_44 = uStack_6c;
          uStack_40 = uStack_68;
          uStack_3c = uStack_64;
          LOCK();
          *(longlong *)(lVar3 + 0x3f8) = *(longlong *)(lVar3 + 0x3f8) + 1;
          UNLOCK();
          *(longlong *)(lVar3 + 0x90) = lVar4 + 1;
          <hashbrown[b5c94476ffc33875]::map::HashMap<usize,std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,std[6c98fd8553dbae28]::hash::random::RandomState>>
          ::insert(&local_88,lVar3 + 0x40,lVar4);
          if (local_88 != (ulonglong *)0x0) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>(&local_88);
          }
        }
      }
    }
    else {
      LOCK();
      *(longlong *)(lVar3 + 0x400) = *(longlong *)(lVar3 + 0x400) + -1;
      UNLOCK();
      *(int *)(lVar3 + 0xa0) = *(int *)(lVar3 + 0xa0) + 1;
      (*(code *)PTR_notify_one_0079a770)();
    }
    if (((local_8c == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(lVar3 + 0x1c) = 1;
    }
    uVar8 = 0;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
      uVar8 = 0;
    }
  }
  else {
    if (((local_8c == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), param_1 = extraout_XMM0_Da_00,
       cVar7 == '\0')) {
      *(undefined1 *)(lVar3 + 0x1c) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      param_1 = (*(code *)PTR_wake_00799010)();
    }
    LOCK();
    uVar11 = *param_3;
    *param_3 = *param_3 - 0x40;
    UNLOCK();
    if (uVar11 < 0x40) {
      (*(code *)PTR_panic_00799338)
                (param_1,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
      goto LAB_006e4191;
    }
    (**(code **)(param_3[2] + 0x30))();
    uVar8 = 1;
  }
  return uVar8;
}


