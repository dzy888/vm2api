// 00700890 reap_orphans

/* <tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>::reap_orphans
    */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::process::imp::orphan::OrphanQueueImpl<std[6c98fd8553dbae28]::process::Child>>
::reap_orphans(int *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  byte local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  byte local_38;
  
  uVar10 = 0;
  LOCK();
  uVar2 = param_1[8];
  if (uVar2 == 0) {
    param_1[8] = 1;
  }
  else {
    uVar10 = (ulonglong)uVar2;
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  UNLOCK();
  if (uVar2 != 0) {
    return uVar10;
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
  }
  if (*(longlong *)(param_1 + 10) == 0) {
    LOCK();
    iVar3 = *param_1;
    if (iVar3 == 0) {
      *param_1 = 1;
    }
    UNLOCK();
    if (iVar3 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
      local_74 = 0;
      lVar4 = *(longlong *)(param_1 + 6);
    }
    else {
      local_74 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      local_74 = local_74 ^ 1;
      lVar4 = *(longlong *)(param_1 + 6);
    }
    if (lVar4 != 0) {
      tokio[d7d91d38da47d894]::signal::unix::signal_with_handle(&local_70,0x11,param_2);
      lVar4 = local_70;
      if (local_70 != 0) {
        local_60 = local_68;
        lVar5 = *(longlong *)(param_1 + 10);
        if (lVar5 != 0) {
          LOCK();
          plVar1 = (longlong *)(lVar5 + 0x138);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = lVar5 + 0x118;
            LOCK();
            bVar11 = *(int *)(lVar5 + 0x118) == 0;
            if (bVar11) {
              *(int *)(lVar5 + 0x118) = 1;
            }
            UNLOCK();
            if (!bVar11) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
              local_38 = 0;
            }
            else {
              local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              local_38 = local_38 ^ 1;
            }
            local_48 = lVar5 + 0x110;
            local_50 = *(undefined8 *)(lVar5 + 0x110);
            local_40 = local_58;
            (*(code *)PTR_notify_waiters_0079a750)();
          }
          plVar1 = *(longlong **)(param_1 + 10);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_drop_slow_0079a760)();
          }
        }
        *(longlong *)(param_1 + 10) = lVar4;
        *(undefined8 *)(param_1 + 0xc) = local_60;
        tokio[d7d91d38da47d894]::process::imp::orphan::drain_orphan_queue::
        <std[6c98fd8553dbae28]::process::Child>(param_1,local_74);
        if (local_70 == 0) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
          <core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>
                    (&local_70);
        }
        goto LAB_00700aa0;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>
                (&local_70);
    }
    if (((local_74 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    iVar3 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 10) + 0x130) & 0xfffffffffffffffe;
    if (*(ulonglong *)(param_1 + 0xc) != uVar10) {
      *(ulonglong *)(param_1 + 0xc) = uVar10;
      LOCK();
      iVar3 = *param_1;
      if (iVar3 == 0) {
        *param_1 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) == 0) {
        bVar9 = 0;
      }
      else {
        bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar9 = bVar9 ^ 1;
      }
      tokio[d7d91d38da47d894]::process::imp::orphan::drain_orphan_queue::
      <std[6c98fd8553dbae28]::process::Child>(param_1,bVar9);
    }
  }
LAB_00700aa0:
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 9) = 1;
  }
  LOCK();
  uVar2 = param_1[8];
  param_1[8] = 0;
  uVar10 = (ulonglong)uVar2;
  UNLOCK();
  if (uVar2 == 2) {
    uVar10 = (*(code *)PTR_wake_00799010)();
  }
  return uVar10;
}


