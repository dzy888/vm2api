// 006eff90 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006efff5 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::wake(lVar2 + 0x80,0x3f);
  if (*(longlong *)(lVar2 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xb0) + 0x18))();
  }
  if (*(longlong *)(lVar2 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0xc0) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


