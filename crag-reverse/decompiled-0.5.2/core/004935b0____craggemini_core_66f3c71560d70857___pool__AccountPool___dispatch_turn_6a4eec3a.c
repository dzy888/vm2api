// 004935b0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_bg::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>
    */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_bg::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>
          (longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  byte local_64;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  
  LOCK();
  bVar6 = *(int *)(param_1 + 0x280) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0x280) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_64 = 0;
  }
  else {
    local_64 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_64 = local_64 ^ 1;
  }
  puVar2 = PTR___rust_dealloc_00798fc8;
  while (<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next
                   (&local_50,param_1 + 0x288), puVar3 = local_38, local_50 != 0) {
    if ((local_48 != 0) && (local_40 != 0)) {
      if ((code *)*local_38 != (code *)0x0) {
        (*(code *)*local_38)();
      }
      if (puVar3[1] != 0) {
        (*(code *)puVar2)();
      }
    }
  }
  lVar5 = tokio[d7d91d38da47d894]::task::spawn::spawn::
          <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>
                    (param_2,&anon_572fb51faa0db1e51baf8d00d92dd3e9_3_llvm_7677212527096675952);
  <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert(param_1 + 0x288,lVar5);
  local_50 = lVar5;
  (*(code *)PTR_drop_00799460)();
  if (((local_64 == 0) &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0x284) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0x280);
  *(int *)(param_1 + 0x280) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


