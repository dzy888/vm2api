// 00572540 <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>

/* WARNING: Switch with 1 destination removed at 0x00572778 */
/* WARNING: Type propagation algorithm not settling */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  if (1 < *(uint *)(param_1 + 0x5b0)) {
    uVar8 = 0;
    LOCK();
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x230) + 0x10);
    cVar5 = *pcVar1;
    *pcVar1 = '\0';
    puVar3 = PTR_kill_00799120;
    UNLOCK();
    if (cVar5 != '\0') {
      (*(code *)PTR_kill_00799120)();
      (*(code *)puVar3)();
      puVar3 = PTR_waitpid_00799128;
      do {
        iVar6 = (*(code *)puVar3)();
        if (iVar6 < 1) break;
        bVar9 = uVar8 < 0x3f;
        uVar8 = uVar8 + 1;
      } while (bVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1);
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>(param_1 + 0x198);
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>(param_1 + 600);
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<alloc[12e961f32105355]::string::String>>
              (param_1 + 0x2d0);
  }
  plVar2 = *(longlong **)(param_1 + 0x210);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>>>
    ::drop_slow(param_1 + 0x210);
  }
  plVar2 = *(longlong **)(param_1 + 0x218);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>>>>
    ::drop_slow(param_1 + 0x218);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x2e0);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x318);
  plVar2 = *(longlong **)(param_1 + 0x220);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>>
    ::drop_slow(param_1 + 0x220);
    plVar2 = *(longlong **)(param_1 + 0x228);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar7 = *plVar2;
    UNLOCK();
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x228);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar7 = *plVar2;
    UNLOCK();
  }
  if (lVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<(std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<bool>,std[6c98fd8553dbae28]::sync::poison::condvar::Condvar)>>
    ::drop_slow(param_1 + 0x228);
    plVar2 = *(longlong **)(param_1 + 0x230);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar7 = *plVar2;
    UNLOCK();
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x230);
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar7 = *plVar2;
    UNLOCK();
  }
  if (lVar7 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x230);
    iVar6 = *(int *)(param_1 + 0x3a0);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x3a0);
  }
  if (iVar6 != -1) {
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x3a0);
  }
  if (*(int *)(param_1 + 0x470) != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x470);
  }
  puVar4 = PTR_drop_join_handle_slow_00799088;
  puVar3 = PTR_drop_join_handle_fast_00799080;
  for (lVar7 = *(longlong *)(param_1 + 0x5a8); lVar7 != 0; lVar7 = lVar7 + -1) {
    cVar5 = (*(code *)puVar3)();
    if (cVar5 != '\0') {
      (*(code *)puVar4)();
    }
  }
  if (*(longlong *)(param_1 + 0x598) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


