// 0035d850 <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>

/* WARNING: Switch with 1 destination removed at 0x0035d899 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop((longlong *)(param_1 + 0x58));
  lVar1 = *(longlong *)(param_1 + 0x58);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 << 3;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::driver::Driver>>
            (param_1,lVar2);
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


