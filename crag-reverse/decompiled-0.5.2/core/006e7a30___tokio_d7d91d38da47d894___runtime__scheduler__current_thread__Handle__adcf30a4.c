// 006e7a30 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>

/* tokio[d7d91d38da47d894]::util::wake::drop_arc_raw::<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>
    */

longlong __rustcall
tokio[d7d91d38da47d894]::util::wake::drop_arc_raw::
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>(longlong param_1)

{
  longlong *plVar1;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x80);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799078)();
  }
  return param_1 + -0x80;
}


