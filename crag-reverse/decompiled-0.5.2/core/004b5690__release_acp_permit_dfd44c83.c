// 004b5690 release_acp_permit

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::release_acp_permit */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::release_acp_permit
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  longlong *local_c0;
  byte local_b8;
  longlong local_a8;
  longlong local_90;
  longlong local_78;
  longlong local_60;
  longlong *local_38;
  
  plVar1 = (longlong *)(param_1 + 0x298);
  LOCK();
  bVar7 = *(int *)(param_1 + 0x298) == 0;
  if (bVar7) {
    *(int *)(param_1 + 0x298) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(param_1 + 0x29c);
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(param_1 + 0x29c);
  }
  if (cVar6 != '\0') {
    local_c0 = plVar1;
    local_b8 = bVar5;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_c0,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b9e8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AcpActiveTurn,std[6c98fd8553dbae28]::hash::random::RandomState>>
  ::remove::<str>(&local_c0,param_1 + 0x390,param_2,param_3);
  if (local_c0 != (longlong *)0xffffffffffffffff) {
    if (local_c0 != (longlong *)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((local_78 != -1) && (local_78 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((local_60 != -1) && (local_60 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (local_a8 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    LOCK();
    *local_38 = *local_38 + -1;
    UNLOCK();
    if (*local_38 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(&local_38);
    }
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  local_c0 = (longlong *)
             <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::remove::<str>(param_1 + 0x3f0,param_2,param_3);
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *local_c0 = *local_c0 + -1;
    UNLOCK();
    if (*local_c0 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Control>>::
      drop_slow(&local_c0);
    }
  }
  pump_acp_queue(param_1,param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x3a8) == 0) {
    (*(code *)PTR_notify_waiters_00799550)();
  }
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  LOCK();
  iVar2 = *(int *)plVar1;
  *(int *)plVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return;
}


