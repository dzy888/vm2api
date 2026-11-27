// 003d6930 <<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x210) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x188) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x118);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_003d69c1;
    puVar2 = (undefined8 *)(param_1 + 0x118);
  }
  else {
    if (*(char *)(param_1 + 0x188) != '\x03') goto LAB_003d69c1;
    puVar2 = (undefined8 *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x180) == '\x03') {
      if (*(char *)(param_1 + 0x138) == '\x04') {
        (*(code *)PTR_drop_00799100)();
        if (*(longlong *)(param_1 + 0x148) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x148) + 0x18))();
        }
      }
    }
    else if (*(char *)(param_1 + 0x180) != '\0') goto LAB_003d69c1;
    plVar1 = (longlong *)*puVar2;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_003d69c1;
  }
  <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::drop_slow
            (puVar2);
LAB_003d69c1:
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x68) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))();
  }
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xf8) + 0x18))();
  }
  if (*(char *)(param_1 + 400) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x198);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x198);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0x1a0)
  ;
  *(undefined1 *)(param_1 + 0x212) = 0;
  return;
}


