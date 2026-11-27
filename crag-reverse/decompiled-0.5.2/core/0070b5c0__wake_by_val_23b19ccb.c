// 0070b5c0 wake_by_val

/* tokio[d7d91d38da47d894]::runtime::task::waker::wake_by_val */

void __rustcall tokio[d7d91d38da47d894]::runtime::task::waker::wake_by_val(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  
  cVar4 = <tokio[d7d91d38da47d894]::runtime::task::state::State>::transition_to_notified_by_val();
  if (cVar4 == '\0') {
    return;
  }
  if (cVar4 != '\x01') {
LAB_0070b5fc:
                    /* WARNING: Could not recover jumptable at 0x0070b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 0x10))();
    return;
  }
  uVar7 = (**(code **)(param_1[2] + 8))();
  LOCK();
  uVar1 = *param_1;
  *param_1 = *param_1 - 0x40;
  UNLOCK();
  if (uVar1 >> 6 == 1) goto LAB_0070b5fc;
  if (uVar1 >> 6 != 0) {
    return;
  }
  (*(code *)PTR_panic_00799338)
            (uVar7,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar5 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar5 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    *plVar5 = 1;
    plVar5[1] = 1;
    plVar5[6] = 0;
    *(undefined1 *)(plVar5 + 7) = 0;
    LOCK();
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar2,1) != *plVar5 < 0) goto LAB_0070b6d4;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[2] = plVar5;
      *puVar6 = 1;
      puVar6[1] = 1;
      return;
    }
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0070b6d4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


