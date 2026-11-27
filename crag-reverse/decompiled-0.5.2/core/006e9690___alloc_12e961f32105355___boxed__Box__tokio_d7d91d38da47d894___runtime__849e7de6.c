// 006e9690 <alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote]>>

/* WARNING: Switch with 1 destination removed at 0x006e9707 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote]>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<[tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Remote]>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  puVar3 = PTR_drop_slow_00799658;
  puVar2 = PTR_drop_slow_00799650;
  if (param_2 == 0) {
    return;
  }
  puVar4 = (undefined8 *)(param_1 + 8);
  do {
    plVar1 = (longlong *)puVar4[-1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)puVar2)();
    }
    plVar1 = (longlong *)*puVar4;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)puVar3)();
    }
    puVar4 = puVar4 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


