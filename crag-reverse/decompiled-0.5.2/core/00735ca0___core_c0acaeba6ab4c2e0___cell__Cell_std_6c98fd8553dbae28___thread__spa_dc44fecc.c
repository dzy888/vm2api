// 00735ca0 <core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>

/* std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::<core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>
    */

void __rustcall
std[6c98fd8553dbae28]::sys::thread_local::native::eager::destroy::
<core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 1) = 2;
  (*(code *)PTR_drop_00799c68)();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799c70)();
    }
  }
  return;
}


