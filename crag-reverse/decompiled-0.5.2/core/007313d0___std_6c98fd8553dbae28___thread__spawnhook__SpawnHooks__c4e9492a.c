// 007313d0 <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>

/* WARNING: Switch with 1 destination removed at 0x007313f5 */
/* WARNING: Switch with 1 destination removed at 0x00757621 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  (*(code *)PTR_drop_00799c68)();
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *param_1;
      <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>(lVar2 + 0x10);
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
  }
  return;
}


