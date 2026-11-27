// 0070b500 wake_by_ref

/* tokio[d7d91d38da47d894]::runtime::task::waker::wake_by_ref */

void __rustcall tokio[d7d91d38da47d894]::runtime::task::waker::wake_by_ref(ulonglong *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 local_10;
  ulonglong local_8;
  
  uVar6 = *param_1;
  do {
    if ((uVar6 & 2) != 0) {
      bVar4 = false;
      local_10 = 0;
      break;
    }
    if ((uVar6 & 4) == 0) {
      if ((uVar6 & 1) == 0) {
        if ((longlong)uVar6 < 0) {
          (*(code *)PTR_panic_00799338)
                    (&local_10,&anon_c153c4d816f71af2accb98944a80e600_61_llvm_2617760850115737065);
          cVar5 = <tokio[d7d91d38da47d894]::runtime::task::state::State>::
                  transition_to_notified_by_val
                            ("assertion failed: self.0 <= isize::MAX as usize",0x2f);
          if (cVar5 == '\0') {
            return;
          }
          if (cVar5 != '\x01') {
LAB_0070b5fc:
                    /* WARNING: Could not recover jumptable at 0x0070b604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(anon_c153c4d816f71af2accb98944a80e600_60_llvm_2617760850115737065._16_8_ +
                        0x10))();
            return;
          }
          uVar10 = (**(code **)(anon_c153c4d816f71af2accb98944a80e600_60_llvm_2617760850115737065.
                                _16_8_ + 8))();
          LOCK();
          lVar3 = anon_c153c4d816f71af2accb98944a80e600_60_llvm_2617760850115737065._0_8_ + -0x40;
          UNLOCK();
          uVar6 = (ulonglong)anon_c153c4d816f71af2accb98944a80e600_60_llvm_2617760850115737065._0_8_
                  >> 6;
          anon_c153c4d816f71af2accb98944a80e600_60_llvm_2617760850115737065._0_8_ = lVar3;
          if (uVar6 == 1) goto LAB_0070b5fc;
          if (uVar6 != 0) {
            return;
          }
          (*(code *)PTR_panic_00799338)
                    (uVar10,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          plVar7 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
          if (plVar7 == (longlong *)0x0) {
            (*(code *)PTR_handle_alloc_error_007991d8)();
          }
          else {
            *plVar7 = 1;
            plVar7[1] = 1;
            plVar7[6] = 0;
            *(undefined1 *)(plVar7 + 7) = 0;
            LOCK();
            lVar3 = *plVar7;
            *plVar7 = *plVar7 + 1;
            UNLOCK();
            if (*plVar7 == 0 || SCARRY8(lVar3,1) != *plVar7 < 0) goto LAB_0070b6d4;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[2] = plVar7;
              *puVar8 = 1;
              puVar8[1] = 1;
              return;
            }
          }
          (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0070b6d4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        bVar4 = true;
        local_8 = uVar6 + 0x44;
      }
      else {
        bVar4 = false;
        local_8 = uVar6 | 4;
      }
    }
    else {
      bVar4 = false;
      local_8 = uVar6;
    }
    local_10 = 1;
    LOCK();
    uVar1 = *param_1;
    bVar9 = uVar6 == uVar1;
    if (bVar9) {
      *param_1 = local_8;
    }
    else {
      uVar6 = uVar1;
    }
    UNLOCK();
  } while (!bVar9);
  if (bVar4) {
                    /* WARNING: Could not recover jumptable at 0x0070b59f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[2] + 8))();
    return;
  }
  return;
}


