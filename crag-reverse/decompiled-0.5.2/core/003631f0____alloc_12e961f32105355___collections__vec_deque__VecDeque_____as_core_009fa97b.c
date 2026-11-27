// 003631f0 <<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,
   _> as 
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
          (undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  
  puVar2 = PTR_dealloc_00799648;
  puVar1 = PTR_ref_dec_00799640;
  if (param_2 != 0) {
    do {
      cVar3 = (*(code *)puVar1)();
      if (cVar3 != '\0') {
        (*(code *)puVar2)();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


