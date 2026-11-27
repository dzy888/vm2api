// 005aba80 <craggemini_core[66f3c71560d70857]::pool::AgySlot>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  
  <craggemini_core[66f3c71560d70857]::pool::AgySlot_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
  drop();
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x6e8) != -1) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x700) != -1) && (*(longlong *)(param_1 + 0x700) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x438);
  if (*(int *)(param_1 + 0x4e0) != -1) {
    <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x4e0);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x7f8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  plVar1 = *(longlong **)(param_1 + 0x800);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>>
    ::drop_slow(param_1 + 0x800);
  }
  if (*(longlong *)(param_1 + 0x838) != 0) {
    cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar2 != '\0') {
      (*(code *)PTR_drop_join_handle_slow_00799088)();
    }
  }
  <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x10);
  <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::shm::ShmOwner>>
            (param_1 + 0x718);
  plVar1 = *(longlong **)(param_1 + 0x808);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
    drop_slow(param_1 + 0x808);
  }
  plVar1 = *(longlong **)(param_1 + 0x810);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x810);
  }
  plVar1 = *(longlong **)(param_1 + 0x818);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>>
    ::drop_slow(param_1 + 0x818);
  }
  plVar1 = *(longlong **)(param_1 + 0x820);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>>
    ::drop_slow(param_1 + 0x820);
  }
  if (*(longlong *)(param_1 + 0x780) != -1) {
    if (*(longlong *)(param_1 + 0x780) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x7a8);
  }
  <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x168);
  return;
}


