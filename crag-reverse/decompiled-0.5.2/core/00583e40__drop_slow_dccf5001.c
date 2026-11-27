// 00583e40 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00583e78 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::util::idle_notified_set::ListsInner<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::util::idle_notified_set::ListsInner<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x38) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


