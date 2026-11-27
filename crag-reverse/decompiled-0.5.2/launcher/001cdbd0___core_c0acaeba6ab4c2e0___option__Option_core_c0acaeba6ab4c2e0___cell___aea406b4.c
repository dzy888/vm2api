// 001cdbd0 <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>>

/* WARNING: Switch with 1 destination removed at 0x001cdc01 */
/* WARNING: Switch with 1 destination removed at 0x001f0961 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks>>>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 != '\0') {
    (*(code *)PTR_drop_0021a188)();
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 8);
        <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>(lVar2 + 0x10);
        if (lVar2 != -1) {
          LOCK();
          plVar1 = (longlong *)(lVar2 + 8);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (*(code *)PTR_free_0021a8b8)(param_4,8);
            return;
          }
        }
        return;
      }
    }
  }
  return;
}


