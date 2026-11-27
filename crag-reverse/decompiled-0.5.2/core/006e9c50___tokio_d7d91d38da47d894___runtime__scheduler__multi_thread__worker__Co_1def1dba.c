// 006e9c50 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>

/* WARNING: Switch with 1 destination removed at 0x006e9cd6 */
/* WARNING: Switch with 1 destination removed at 0x006f0923 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  
  puVar2 = (ulonglong *)*param_1;
  if (puVar2 != (ulonglong *)0x0) {
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
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 3);
  plVar3 = (longlong *)param_1[3];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_00799650)();
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      lVar4 = param_1[1];
      plVar3 = *(longlong **)(lVar4 + 0x10);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (*(code *)PTR_drop_slow_0079a860)();
      }
      if (lVar4 != -1) {
        LOCK();
        plVar3 = (longlong *)(lVar4 + 8);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


