// 005c27e0 insert

/* <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::insert
          (undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_40 [16];
  undefined8 local_30;
  longlong *local_28;
  undefined **local_20;
  longlong *local_18;
  
  (*(code *)PTR_ref_inc_0079a020)();
  local_30 = param_2;
  local_40 = <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
             ::insert_idle(param_1,param_2);
  plVar2 = local_40._0_8_;
  local_18 = plVar2 + 2;
  local_20 = &anon_572fb51faa0db1e51baf8d00d92dd3e9_1_llvm_7677212527096675952;
  cVar1 = (*(code *)PTR_try_set_join_waker_00799ab0)();
  if (cVar1 != '\0') {
    local_28 = plVar2;
    <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_tokio[d7d91d38da47d894]::util::wake::Wake>
    ::wake_by_ref(&local_28,&local_20);
    plVar2 = (longlong *)local_40._0_8_;
  }
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
    ::drop_slow(local_40);
  }
  return param_2;
}


