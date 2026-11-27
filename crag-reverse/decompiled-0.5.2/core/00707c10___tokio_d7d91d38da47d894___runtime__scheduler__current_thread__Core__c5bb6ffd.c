// 00707c10 <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x16);
  lVar1 = *(longlong *)(param_1 + 0x16);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 << 3;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*param_1 == -1) {
    return;
  }
  <tokio[d7d91d38da47d894]::runtime::driver::Driver>(param_1,lVar2);
  return;
}


