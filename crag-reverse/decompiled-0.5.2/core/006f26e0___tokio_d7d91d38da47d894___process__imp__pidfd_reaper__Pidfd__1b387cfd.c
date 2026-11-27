// 006f26e0 <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::deregister_source::
<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
          (longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_40;
  undefined4 local_34;
  
  local_34 = *param_3;
  local_40 = (longlong *)&local_34;
  lVar5 = (*(code *)PTR_deregister_0079a370)();
  if (lVar5 == 0) {
    plVar1 = param_1 + 1;
    LOCK();
    bVar8 = (int)param_1[1] == 0;
    if (bVar8) {
      *(int *)(param_1 + 1) = 1;
    }
    UNLOCK();
    if (!bVar8) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar3 = 0;
      plVar6 = (longlong *)*param_2;
      LOCK();
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + 1;
      UNLOCK();
      if (*plVar6 == 0 || SCARRY8(lVar7,1) != *plVar6 < 0) goto LAB_006f2861;
    }
    else {
      bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar3 = bVar3 ^ 1;
      plVar6 = (longlong *)*param_2;
      LOCK();
      lVar7 = *plVar6;
      *plVar6 = *plVar6 + 1;
      UNLOCK();
      if (*plVar6 == 0 || SCARRY8(lVar7,1) != *plVar6 < 0) goto LAB_006f2861;
    }
    lVar7 = param_1[4];
    local_40 = plVar6;
    if (lVar7 == param_1[2]) {
      (*(code *)PTR_grow_one_0079a7d8)();
    }
    *(longlong **)(param_1[3] + lVar7 * 8) = plVar6;
    lVar7 = lVar7 + 1;
    param_1[4] = lVar7;
    *param_1 = lVar7;
    if (lVar7 == 0x10) {
      if (((bVar3 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      }
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = 0;
      UNLOCK();
      if ((int)lVar7 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      local_40 = (longlong *)(*(code *)PTR_wake_0079a830)();
      if (local_40 != (longlong *)0x0) {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_c49be660a078f24638188b28ebcb61a3_1_llvm_15508925077749842928,&local_40,
                   &anon_c49be660a078f24638188b28ebcb61a3_21_llvm_15508925077749842928);
LAB_006f2861:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (((bVar3 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xc) = 1;
      }
      LOCK();
      lVar7 = *plVar1;
      *(int *)plVar1 = 0;
      UNLOCK();
      if ((int)lVar7 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
    }
  }
  return lVar5;
}


