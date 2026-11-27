// 006dcb90 <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>

/* WARNING: Switch with 1 destination removed at 0x006dcc42 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  if (*(int *)(param_1 + 0x38) == 1) {
    <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 0x40);
  }
  else if ((*(int *)(param_1 + 0x38) == 0) && (*(longlong *)(param_1 + 0x40) != -1)) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x60);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990f8)();
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x88) + 0x18))();
  }
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799678)();
    }
  }
  (*(code *)PTR_free_0079adc8)(param_4,0x80);
  return;
}


