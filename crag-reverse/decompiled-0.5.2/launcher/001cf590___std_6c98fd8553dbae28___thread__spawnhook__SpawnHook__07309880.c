// 001cf590 <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>

/* WARNING: Switch with 1 destination removed at 0x001cf5e9 */
/* WARNING: Switch with 1 destination removed at 0x001f0961 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,puVar1[2]);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHook>(lVar3 + 0x10);
      if (lVar3 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar3 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_free_0021a8b8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


