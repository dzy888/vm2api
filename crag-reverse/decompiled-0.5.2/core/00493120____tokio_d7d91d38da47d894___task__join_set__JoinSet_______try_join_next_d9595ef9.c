// 00493120 <<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next::{closure#0},core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::with_value_and_context::<<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next::{closure#0},
   core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),
   tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>> */

void __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::with_value_and_context::
<<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>::try_join_next::_closure_0_,core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>
          (void)

{
  char cVar1;
  longlong *in_RSI;
  longlong in_FS_OFFSET;
  undefined **local_50;
  longlong local_48;
  undefined ***local_40;
  undefined ***local_38;
  undefined8 local_30;
  
  local_48 = *in_RSI + 0x10;
  local_50 = &anon_572fb51faa0db1e51baf8d00d92dd3e9_1_llvm_7677212527096675952;
  local_40 = &local_50;
  local_30 = 0;
  cVar1 = *(char *)(in_FS_OFFSET + -0xf0);
  local_38 = local_40;
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') goto LAB_00493184;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  cVar1 = *(char *)(in_FS_OFFSET + -0xf4);
  *(undefined1 *)(in_FS_OFFSET + -0xf4) = 0;
LAB_00493184:
  <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>as_core[c0acaeba6ab4c2e0]::future::future::Future>
  ::poll();
  if (cVar1 != '\x02') {
    (*(code *)PTR_drop_007997a8)();
  }
  return;
}


