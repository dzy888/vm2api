// 006ec380 schedule_option_task_without_yield

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_option_task_without_yield
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::
schedule_option_task_without_yield(undefined8 param_1,longlong param_2)

{
  undefined1 local_19;
  undefined8 local_18;
  longlong local_10;
  undefined1 *local_8;
  
  if (param_2 != 0) {
    local_19 = 0;
    local_8 = &local_19;
    local_18 = param_1;
    local_10 = param_2;
    tokio[d7d91d38da47d894]::runtime::context::with_scheduler::
    <(),tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::with_current<(),<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>::schedule_task::_closure_0_>::_closure_0_>
              (&local_18,&anon_dbc6346551702d8f49f87a432b9dece2_31_llvm_7788165550271277997);
  }
  return;
}


