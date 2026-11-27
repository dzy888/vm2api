// 0039c960 <core[c0acaeba6ab4c2e0]::cell::RefCell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>

/* WARNING: Switch with 1 destination removed at 0x0039c9d4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::cell::RefCell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::cell::RefCell<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  if ((*param_1 != 0) && (cVar2 = (*(code *)PTR_ref_dec_00799640)(), cVar2 != '\0')) {
    (*(code *)PTR_dealloc_00799648)();
  }
  <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 3);
  plVar1 = (longlong *)param_1[3];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799650)();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799658)();
    }
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


