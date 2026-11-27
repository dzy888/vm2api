// 0038ac50 bind_inner

/* <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::bind_inner
   <tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::bind_inner
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::list::OwnedTasks<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::bind_inner(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined *puVar7;
  char cVar8;
  bool bVar9;
  longlong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  int *local_40;
  byte local_38;
  
  *(longlong *)(param_2 + 0x18) = param_1[5];
  uVar4 = *(ulonglong *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48));
  piVar1 = (int *)(*param_1 + (param_1[4] & uVar4) * 0x18);
  piVar2 = (int *)(*param_1 + (param_1[4] & uVar4) * 0x18);
  LOCK();
  bVar9 = *piVar2 == 0;
  if (bVar9) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
  }
  if ((char)param_1[6] != '\0') {
    if (((local_38 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(piVar1 + 1) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    (*(code *)PTR_shutdown_00799708)();
    cVar8 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar8 != '\0') {
      (*(code *)PTR_dealloc_00799648)();
    }
    return 0;
  }
  local_50 = param_1 + 2;
  local_48 = param_1 + 3;
  local_58 = uVar4;
  local_40 = piVar1;
  if (*(ulonglong *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48)) == uVar4) {
    lVar5 = *(longlong *)(piVar1 + 2);
    local_60 = param_2;
    if (lVar5 != param_2) {
      *(longlong *)(param_2 + 8 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38)) = lVar5;
      *(undefined8 *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x38)) = 0;
      if (lVar5 != 0) {
        *(longlong *)(lVar5 + *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x38)) = param_2;
      }
      *(longlong *)(piVar1 + 2) = param_2;
      if (*(longlong *)(piVar1 + 4) == 0) {
        *(longlong *)(piVar1 + 4) = param_2;
        LOCK();
        *local_50 = *local_50 + 1;
        UNLOCK();
        LOCK();
        *local_48 = *local_48 + 1;
        UNLOCK();
      }
      else {
        LOCK();
        *local_50 = *local_50 + 1;
        UNLOCK();
        LOCK();
        *local_48 = *local_48 + 1;
        UNLOCK();
      }
      if (((local_38 == 0) && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *(undefined1 *)(piVar1 + 1) = 1;
      }
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      return param_3;
    }
    core[c0acaeba6ab4c2e0]::panicking::assert_failed::
    <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::runtime::task::core::Header>>>
              (1,piVar1 + 2,&local_60,0,param_5,
               &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
  }
  else {
    (*(code *)PTR_<usize,usize>_00799710)
              (0,&local_58,param_5,
               &PTR_anon_cbe4ed91a1eb3280be5cbdd57023f5c1_24_llvm_17798946807444736387_007879c8);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


