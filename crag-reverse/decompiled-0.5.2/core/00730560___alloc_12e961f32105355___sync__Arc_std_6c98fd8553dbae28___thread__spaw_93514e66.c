// 00730560 <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>>

/* WARNING: Switch with 1 destination removed at 0x00730569 */
/* WARNING: Switch with 1 destination removed at 0x00757621 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
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


