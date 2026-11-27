// 002f5ad0 <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>

/* WARNING: Switch with 1 destination removed at 0x002f5cf8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>(longlong param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  
  if (1 < *(uint *)(param_1 + 0x5b0)) {
    uVar9 = 0;
    LOCK();
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x230) + 0x10);
    cVar6 = *pcVar1;
    *pcVar1 = '\0';
    puVar4 = PTR_kill_00799120;
    UNLOCK();
    if (cVar6 != '\0') {
      (*(code *)PTR_kill_00799120)();
      (*(code *)puVar4)();
      puVar4 = PTR_waitpid_00799128;
      do {
        iVar7 = (*(code *)puVar4)();
        if (iVar7 < 1) break;
        bVar10 = uVar9 < 0x3f;
        uVar9 = uVar9 + 1;
      } while (bVar10);
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig>(param_1);
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>(param_1 + 0x198);
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>(param_1 + 600);
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x2d0);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar2);
    plVar3 = (longlong *)*puVar2;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar2);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x210);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<u64,tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>>>>
    ::drop_slow(param_1 + 0x210);
  }
  plVar3 = *(longlong **)(param_1 + 0x218);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>>>>
    ::drop_slow(param_1 + 0x218);
  }
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x2e0);
  <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x318);
  plVar3 = *(longlong **)(param_1 + 0x220);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>>
    ::drop_slow(param_1 + 0x220);
  }
  plVar3 = *(longlong **)(param_1 + 0x228);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<(std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<bool>,std[6c98fd8553dbae28]::sync::poison::condvar::Condvar)>>
    ::drop_slow(param_1 + 0x228);
  }
  plVar3 = *(longlong **)(param_1 + 0x230);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x230);
  }
  if (*(int *)(param_1 + 0x3a0) != -1) {
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x3a0);
  }
  if (*(int *)(param_1 + 0x470) != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x470);
  }
  puVar5 = PTR_drop_join_handle_slow_00799088;
  puVar4 = PTR_drop_join_handle_fast_00799080;
  for (lVar8 = *(longlong *)(param_1 + 0x5a8); lVar8 != 0; lVar8 = lVar8 + -1) {
    cVar6 = (*(code *)puVar4)();
    if (cVar6 != '\0') {
      (*(code *)puVar5)();
    }
  }
  if (*(longlong *)(param_1 + 0x598) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


