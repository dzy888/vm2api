// 005c26a0 poll_join_next

/* <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::poll_join_next */

ulonglong * __rustcall
<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::poll_join_next
          (ulonglong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_88 [16];
  undefined **local_78;
  longlong local_70;
  undefined ***local_68;
  undefined ***local_60;
  undefined8 local_58;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  plVar1 = (longlong *)*param_3;
  local_88 = <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
             ::pop_notified(param_2,plVar1);
  uVar4 = local_88._8_8_;
  lVar3 = local_88._0_8_;
  if (lVar3 == 0) {
    *param_1 = (ulonglong)((uint)(*(longlong *)(param_2 + 8) != 0) * 2);
  }
  else {
    local_70 = lVar3 + 0x10;
    local_78 = &anon_572fb51faa0db1e51baf8d00d92dd3e9_1_llvm_7677212527096675952;
    local_68 = &local_78;
    local_58 = 0;
    local_60 = local_68;
    <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(local_48,lVar3 + 0x28,&local_68);
    if (local_48[0] == 1) {
      (**(code **)(*plVar1 + 0x10))();
      *param_1 = 2;
      LOCK();
      *(longlong *)local_88._0_8_ = *(longlong *)local_88._0_8_ + -1;
      UNLOCK();
      if (*(longlong *)local_88._0_8_ == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
        ::drop_slow(local_88);
      }
    }
    else {
      <tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
      ::remove(lVar3,uVar4);
      param_1[3] = local_30;
      *(undefined4 *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
      *(undefined4 *)(param_1 + 2) = uStack_38;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_34;
      *param_1 = 1;
      cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar2 != '\0') {
        (*(code *)PTR_drop_join_handle_slow_00799088)();
      }
    }
  }
  return param_1;
}


