// 004b6a60 retire_acp_worker_bg

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg
          (undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  longlong local_868;
  longlong local_860;
  longlong local_858;
  undefined8 *local_850;
  longlong local_848;
  longlong local_840;
  longlong local_838;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined8 local_820;
  longlong local_818;
  longlong *local_810;
  undefined1 local_38;
  
  *(undefined1 *)(param_2 + 0x5c4) = 1;
  lVar7 = *(longlong *)(param_2 + 0x1a0);
  if (-1 < lVar7) {
    if (lVar7 == 0) {
      local_840 = 1;
      plVar8 = (longlong *)*param_1;
      LOCK();
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + 1;
      UNLOCK();
      if (*plVar8 != 0 && SCARRY8(lVar1,1) == *plVar8 < 0) {
LAB_004b6af7:
        local_830 = *param_3;
        uStack_82c = param_3[1];
        uStack_828 = param_3[2];
        uStack_824 = param_3[3];
        local_820 = *(undefined8 *)(param_3 + 4);
        local_38 = 0;
        LOCK();
        bVar9 = (int)plVar8[0x52] == 0;
        if (bVar9) {
          *(int *)(plVar8 + 0x52) = 1;
        }
        UNLOCK();
        local_848 = lVar7;
        local_838 = lVar7;
        local_818 = param_2;
        local_810 = plVar8;
        if (!bVar9) {
          (*(code *)PTR_lock_contended_00798fe0)();
        }
        if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
          bVar5 = 0;
        }
        else {
          bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          bVar5 = bVar5 ^ 1;
        }
        puVar3 = PTR___rust_dealloc_00798fc8;
        while (uVar10 = <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next
                                  (&local_868,plVar8 + 0x53), puVar4 = local_850, local_868 != 0) {
          if ((local_860 != 0) && (local_858 != 0)) {
            if ((code *)*local_850 != (code *)0x0) {
              uVar10 = (*(code *)*local_850)();
            }
            if (puVar4[1] != 0) {
              (*(code *)puVar3)(uVar10,puVar4[2]);
            }
          }
        }
        lVar7 = tokio[d7d91d38da47d894]::task::spawn::spawn::
                <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_>
                          (&local_848,
                           &anon_572fb51faa0db1e51baf8d00d92dd3e9_3_llvm_7677212527096675952);
        <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert(plVar8 + 0x53,lVar7);
        local_868 = lVar7;
        (*(code *)PTR_drop_00799460)();
        if (((bVar5 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
          *(undefined1 *)((longlong)plVar8 + 0x294) = 1;
        }
        LOCK();
        lVar7 = plVar8[0x52];
        *(int *)(plVar8 + 0x52) = 0;
        UNLOCK();
        if ((int)lVar7 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        return;
      }
      goto LAB_004b6c60;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_840 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_840 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar7);
      plVar8 = (longlong *)*param_1;
      LOCK();
      lVar1 = *plVar8;
      *plVar8 = *plVar8 + 1;
      UNLOCK();
      if (*plVar8 != 0 && SCARRY8(lVar1,1) == *plVar8 < 0) goto LAB_004b6af7;
      goto LAB_004b6c60;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004b6c60:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


