// 0025ef90 <<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_>(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
    puVar3 = param_1;
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\x03') {
      return;
    }
    puVar3 = param_1 + 1;
    if (*(char *)(param_1 + 0xd) == '\x03') {
      if (*(char *)(param_1 + 4) == '\x04') {
        (*(code *)PTR_drop_00799100)();
        if (param_1[6] != 0) {
          (**(code **)(param_1[6] + 0x18))();
        }
      }
    }
    else if (*(char *)(param_1 + 0xd) != '\0') {
      return;
    }
    plVar2 = (longlong *)*puVar3;
    LOCK();
    *plVar2 = *plVar2 + -1;
    lVar1 = *plVar2;
    UNLOCK();
  }
  if (lVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::drop_slow
              (puVar3);
    return;
  }
  return;
}


