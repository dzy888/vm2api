// 006f0fd0 yield_now

/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
   as tokio[d7d91d38da47d894]::runtime::task::Schedule>::yield_now */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
::yield_now(longlong *param_1,undefined8 param_2)

{
  undefined1 local_19;
  longlong local_18;
  undefined8 local_10;
  undefined1 *local_8;
  
  local_18 = *param_1 + 0x80;
  local_19 = 1;
  local_8 = &local_19;
  local_10 = param_2;
  tokio[d7d91d38da47d894]::runtime::context::with_scheduler::
  <(),tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::with_current<(),<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_task::_closure_0_>::_closure_0_>
            (&local_18,&anon_dbc6346551702d8f49f87a432b9dece2_31_llvm_7788165550271277997);
  return;
}


