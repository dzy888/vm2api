// 006e7ae0 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>

/* tokio[d7d91d38da47d894]::util::wake::wake_by_ref_arc_raw::<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>
    */

longlong __rustcall
tokio[d7d91d38da47d894]::util::wake::wake_by_ref_arc_raw::
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>(longlong param_1)

{
  char cVar1;
  longlong local_8;
  
  local_8 = param_1 + -0x80;
  LOCK();
  cVar1 = *(char *)(param_1 + 0x158);
  *(char *)(param_1 + 0x158) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    runtime::context::with_scheduler::
    <(),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle_as_tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref::_closure_0_>
              (&local_8);
    return local_8;
  }
  return local_8;
}


