// 00762f70 drop

/* <std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<std[6c98fd8553dbae28]::thread::spawnhook::SpawnHooks_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
drop(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined *puVar5;
  
  plVar1 = (longlong *)*param_1;
  *param_1 = 0;
  puVar5 = PTR___rust_dealloc_00798fc8;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) break;
    lVar2 = plVar1[2];
    puVar3 = (undefined8 *)plVar1[3];
    plVar4 = (longlong *)plVar1[4];
    if (plVar1 != (longlong *)0xffffffffffffffff) {
      LOCK();
      plVar1 = plVar1 + 1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar5)(param_4,8);
      }
    }
    if (lVar2 == 0) {
      return;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    plVar1 = plVar4;
    if (puVar3[1] != 0) {
      (*(code *)puVar5)(param_4,puVar3[2]);
    }
  }
  return;
}


