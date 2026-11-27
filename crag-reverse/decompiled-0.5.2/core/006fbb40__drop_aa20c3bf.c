// 006fbb40 drop

/* WARNING: Switch with 1 destination removed at 0x006fbbec */
/* <tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::task::local::Shared>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
   <tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong lVar5;
  char acVar6 [8];
  
  puVar2 = (ulonglong *)*param_1;
  LOCK();
  uVar1 = *puVar2;
  *puVar2 = *puVar2 - 0x40;
  UNLOCK();
  if (uVar1 >> 6 == 1) {
                    /* WARNING: Could not recover jumptable at 0x006fbb63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar2[2] + 0x10))();
    return;
  }
  if (uVar1 >> 6 != 0) {
    return;
  }
  (*(code *)PTR_panic_00799338)
            (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
  puVar4 = PTR_drop_slow_00799150;
  if (s___prev_ref_count_001b77b2._8_8_ - (longlong)s_n_failed_001b77aa != 0) {
    lVar5 = 1 - ((ulonglong)(s___prev_ref_count_001b77b2._8_8_ - (longlong)s_n_failed_001b77aa) >> 3
                );
    acVar6 = s_n_failed_001b77aa;
    do {
      plVar3 = *(longlong **)acVar6;
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)puVar4)();
      }
      acVar6 = (char  [8])((longlong)acVar6 + 8);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (s___prev_ref_count_001b77b2._0_8_ == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


