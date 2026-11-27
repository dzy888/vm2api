// 007019f0 <<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,
   _> as 
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  
  if (param_2 != 0) {
    do {
      puVar2 = (ulonglong *)*param_1;
      LOCK();
      uVar1 = *puVar2;
      *puVar2 = *puVar2 - 0x40;
      UNLOCK();
      if (uVar1 >> 6 == 1) {
        (**(code **)(puVar2[2] + 0x10))();
      }
      else if (uVar1 >> 6 == 0) {
        (*(code *)PTR_panic_00799338)
                  (param_4,&anon_c153c4d816f71af2accb98944a80e600_48_llvm_2617760850115737065);
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}


