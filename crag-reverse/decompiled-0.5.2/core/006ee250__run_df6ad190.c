// 006ee250 run

/* tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run */

void __rustcall
tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *local_30;
  longlong *local_28;
  
  LOCK();
  lVar1 = param_1[4];
  param_1[4] = 0;
  UNLOCK();
  if (lVar1 == 0) {
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      (*(code *)PTR_drop_slow_00799670)();
    }
    return;
  }
  if ((ulonglong)param_1[3] < *(ulonglong *)(param_1[2] + 0x1d8)) {
    plVar4 = (longlong *)(*(code *)PTR_current_007996d8)();
    local_30 = plVar4;
    (*(code *)PTR_set_thread_id_007996e0)();
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_drop_slow_007996e8)();
    }
    plVar4 = (longlong *)param_1[2];
    LOCK();
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 != 0 && SCARRY8(lVar2,1) == *plVar4 < 0) {
      plVar4 = (longlong *)param_1[2];
      local_30 = (longlong *)0x1;
      local_28 = plVar4;
      context::runtime::enter_runtime::
      <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::run::_closure_0_,()>
                (&local_30,1,param_1,lVar1,
                 &anon_dbc6346551702d8f49f87a432b9dece2_47_llvm_7788165550271277997);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
        return;
      }
      return;
    }
  }
  else {
    (*(code *)PTR_panic_bounds_check_00799520)
              (param_4,&anon_dbc6346551702d8f49f87a432b9dece2_46_llvm_7788165550271277997);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


