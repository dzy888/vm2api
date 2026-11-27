// 004a9110 insert_idle

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::insert_idle
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::insert_idle(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    local_68 = (longlong *)0x1;
    uStack_60 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    local_38 = 1;
    local_58 = plVar2;
    uStack_40 = param_2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    auVar9._0_8_ = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (auVar9._0_8_ == (longlong *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
    }
    else {
      auVar9._0_8_[6] = CONCAT71(uStack_37,local_38);
      *(undefined4 *)(auVar9._0_8_ + 4) = (undefined4)uStack_48;
      *(undefined4 *)((longlong)auVar9._0_8_ + 0x24) = uStack_48._4_4_;
      *(undefined4 *)(auVar9._0_8_ + 5) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)auVar9._0_8_ + 0x2c) = uStack_40._4_4_;
      *(undefined4 *)(auVar9._0_8_ + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)auVar9._0_8_ + 0x14) = local_58._4_4_;
      *(undefined4 *)(auVar9._0_8_ + 3) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)auVar9._0_8_ + 0x1c) = uStack_50._4_4_;
      *(undefined4 *)auVar9._0_8_ = (undefined4)local_68;
      *(undefined4 *)((longlong)auVar9._0_8_ + 4) = local_68._4_4_;
      *(undefined4 *)(auVar9._0_8_ + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)auVar9._0_8_ + 0xc) = uStack_60._4_4_;
      LOCK();
      bVar8 = (int)plVar2[2] == 0;
      if (bVar8) {
        *(int *)(plVar2 + 2) = 1;
      }
      UNLOCK();
      if (!bVar8) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar6 = 0;
        LOCK();
        lVar1 = *auVar9._0_8_;
        *auVar9._0_8_ = *auVar9._0_8_ + 1;
        UNLOCK();
        if (*auVar9._0_8_ == 0 || SCARRY8(lVar1,1) != *auVar9._0_8_ < 0) goto LAB_004a92ad;
      }
      else {
        bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar6 = bVar6 ^ 1;
        LOCK();
        lVar1 = *auVar9._0_8_;
        *auVar9._0_8_ = *auVar9._0_8_ + 1;
        UNLOCK();
        if (*auVar9._0_8_ == 0 || SCARRY8(lVar1,1) != *auVar9._0_8_ < 0) goto LAB_004a92ad;
      }
      local_68 = auVar9._0_8_ + 2;
      plVar3 = (longlong *)plVar2[5];
      if (plVar3 != local_68) {
        auVar9._0_8_[4] = (longlong)plVar3;
        auVar9._0_8_[3] = 0;
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = (longlong)local_68;
        }
        plVar2[5] = (longlong)local_68;
        if (plVar2[6] == 0) {
          plVar2[6] = (longlong)local_68;
        }
        if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
          *(undefined1 *)((longlong)plVar2 + 0x14) = 1;
        }
        LOCK();
        lVar1 = plVar2[2];
        *(int *)(plVar2 + 2) = 0;
        UNLOCK();
        if ((int)lVar1 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        auVar9._8_8_ = param_1;
        return auVar9;
      }
      core[c0acaeba6ab4c2e0]::panicking::assert_failed::
      <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                (1,plVar2 + 5,&local_68,0,param_5,
                 &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
    }
  }
LAB_004a92ad:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


