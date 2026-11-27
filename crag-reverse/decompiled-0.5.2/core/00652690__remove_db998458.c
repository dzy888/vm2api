// 00652690 remove

/* <craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::remove */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::remove
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  byte local_5c;
  int *local_50;
  byte local_48;
  longlong local_38;
  
  piVar1 = (int *)(param_1 + 0x20);
  LOCK();
  bVar9 = *(int *)(param_1 + 0x20) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x20) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_5c = 0;
    cVar7 = *(char *)(param_1 + 0x24);
  }
  else {
    local_5c = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_5c = local_5c ^ 1;
    cVar7 = *(char *)(param_1 + 0x24);
  }
  if (cVar7 == '\0') {
    piVar2 = (int *)(param_1 + 0x58);
    LOCK();
    bVar9 = *(int *)(param_1 + 0x58) == 0;
    if (bVar9) {
      *(int *)(param_1 + 0x58) = 1;
    }
    UNLOCK();
    if (!bVar9) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) {
      bVar6 = 0;
      cVar7 = *(char *)(param_1 + 0x5c);
    }
    else {
      bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar6 = bVar6 ^ 1;
      cVar7 = *(char *)(param_1 + 0x5c);
    }
    if (cVar7 == '\0') {
      lVar8 = <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::remove::<str>(param_1 + 0x28,param_2,param_3);
      if (lVar8 == 0) {
        if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
          *(undefined1 *)(param_1 + 0x5c) = 1;
        }
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      else {
        local_38 = lVar8;
        <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::hash::random::RandomState>>
        ::remove::<alloc[12e961f32105355]::string::String>(&local_50,param_1 + 0x60,lVar8 + 0x100);
        if ((local_50 != (int *)0xffffffffffffffff) && (local_50 != (int *)0x0)) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
        if (*(longlong *)(lVar8 + 800) != 0) {
          <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop
                    (*(longlong *)(lVar8 + 800) + 0x10);
        }
        if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
          *(undefined1 *)(param_1 + 0x5c) = 1;
        }
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar3 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
      }
      if (((local_5c == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      return lVar8;
    }
    local_50 = piVar2;
    local_48 = bVar6;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>>_00790660
               ,&local_50,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_007907f0);
  }
  else {
    local_50 = piVar1;
    local_48 = local_5c;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_63b06cc94833867f683611f039574387_321_llvm_6903579140370050947,&local_50,
               &PTR_anon_63b06cc94833867f683611f039574387_122_llvm_6903579140370050947_007907d8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


