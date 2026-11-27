// 006e7a50 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>

/* tokio[d7d91d38da47d894]::util::wake::wake_arc_raw::<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>
    */

void __rustcall
tokio[d7d91d38da47d894]::util::wake::wake_arc_raw::
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>(longlong param_1)

{
  char cVar1;
  longlong *local_10;
  
  local_10 = (longlong *)(param_1 + -0x80);
  LOCK();
  cVar1 = *(char *)(param_1 + 0x158);
  *(char *)(param_1 + 0x158) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    runtime::context::with_scheduler::
    <(),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle_as_tokio[d7d91d38da47d894]::util::wake::Wake>::wake_by_ref::_closure_0_>
              (&local_10);
  }
  LOCK();
  *local_10 = *local_10 + -1;
  UNLOCK();
  if (*local_10 == 0) {
    (*(code *)PTR_drop_slow_00799078)();
  }
  return;
}


