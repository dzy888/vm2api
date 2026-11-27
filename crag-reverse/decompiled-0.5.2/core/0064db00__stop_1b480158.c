// 0064db00 stop

/* <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop */

void __rustcall
<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  int *piVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  int *local_40;
  byte local_38;
  
  (*(code *)PTR_cancel_00799220)();
  piVar1 = (int *)(param_1 + 0x100);
  LOCK();
  bVar8 = *(int *)(param_1 + 0x100) == 0;
  if (bVar8) {
    *(int *)(param_1 + 0x100) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar6 = *(char *)(param_1 + 0x104);
    piVar5 = local_40;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar6 = *(char *)(param_1 + 0x104);
    piVar5 = local_40;
  }
  if (cVar6 != '\0') {
    local_40 = piVar1;
    local_38 = bVar7;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>_00790640
               ,&local_40,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_00790700);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_40 = *(int **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (local_40 != (int *)0x0) {
    (*(code *)PTR_remote_abort_00799330)();
    cVar6 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    piVar5 = local_40;
    if (cVar6 != '\0') {
      (*(code *)PTR_drop_join_handle_slow_00799088)();
      piVar5 = local_40;
    }
  }
  local_40 = piVar5;
  if (((bVar7 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0x104) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


