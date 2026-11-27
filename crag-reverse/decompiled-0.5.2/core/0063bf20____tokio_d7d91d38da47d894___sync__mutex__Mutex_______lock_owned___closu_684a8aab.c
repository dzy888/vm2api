// 0063bf20 <<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>::lock_owned::_closure_0_::_closure_0_>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    if (*(char *)(param_1 + 0xc) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 3) == '\x04') {
      (*(code *)PTR_drop_00799100)();
      if (param_1[5] != 0) {
        (**(code **)(param_1[5] + 0x18))();
      }
    }
  }
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::drop_slow
              (param_1);
    return;
  }
  return;
}


