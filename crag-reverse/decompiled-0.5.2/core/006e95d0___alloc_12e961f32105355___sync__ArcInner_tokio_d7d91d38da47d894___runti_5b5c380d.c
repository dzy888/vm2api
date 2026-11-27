// 006e95d0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>
          (longlong param_1)

{
  longlong *plVar1;
  longlong local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799070)();
  }
  LOCK();
  local_10 = *(longlong *)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = 0;
  UNLOCK();
  if (local_10 != 0) {
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>
              (&local_10);
  }
  return;
}


