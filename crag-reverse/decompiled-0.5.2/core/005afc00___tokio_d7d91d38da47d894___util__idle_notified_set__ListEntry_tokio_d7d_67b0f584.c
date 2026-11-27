// 005afc00 <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>

/* tokio[d7d91d38da47d894]::util::wake::wake_by_ref_arc_raw::<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
    */

longlong __rustcall
tokio[d7d91d38da47d894]::util::wake::wake_by_ref_arc_raw::
<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
          (longlong param_1)

{
  longlong local_8;
  
  local_8 = param_1 + -0x10;
  <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_tokio[d7d91d38da47d894]::util::wake::Wake>
  ::wake_by_ref(&local_8);
  return local_8;
}


