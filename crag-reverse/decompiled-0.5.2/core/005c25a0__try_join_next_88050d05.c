// 005c25a0 try_join_next

/* <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next
          (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 local_50 [16];
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  auVar2 = <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
           ::try_pop_notified(param_2);
  if (auVar2._0_8_ != 0) {
    do {
      local_50 = auVar2;
      <tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
      ::with_value_and_context::
      <<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next::_closure_0_,core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>
                ();
      if (local_40 != 1) {
        <tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
        ::remove(local_50._0_8_,local_50._8_8_);
        param_1[3] = local_28;
        *(undefined4 *)(param_1 + 1) = local_38;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
        *(undefined4 *)(param_1 + 2) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_2c;
        *param_1 = 1;
        cVar1 = (*(code *)PTR_drop_join_handle_fast_00799080)();
        if (cVar1 == '\0') {
          return param_1;
        }
        (*(code *)PTR_drop_join_handle_slow_00799088)();
        return param_1;
      }
      LOCK();
      *(longlong *)local_50._0_8_ = *(longlong *)local_50._0_8_ + -1;
      UNLOCK();
      if (*(longlong *)local_50._0_8_ == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
        ::drop_slow(local_50);
      }
      auVar2 = <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
               ::try_pop_notified(param_2);
    } while (auVar2._0_8_ != 0);
  }
  *param_1 = 0;
  return param_1;
}


