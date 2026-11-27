// 0074cb40 inherit_and_run

/* WARNING: Switch with 1 destination removed at 0x0074cc64 */
/* <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>::inherit_and_run */

void __rustcall
<std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>::inherit_and_run(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *in_FS_OFFSET;
  
  lVar1 = param_1[3];
  lVar6 = *in_FS_OFFSET;
  if (*(char *)(lVar6 + -0xd0) != '\0') {
    if (*(char *)(lVar6 + -0xd0) != '\x01') {
      (*(code *)PTR_panic_access_error_00799458)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar6 + -0xd0) = 0;
  }
  plVar2 = *(longlong **)(lVar6 + -0xd8);
  *(longlong *)(lVar6 + -0xd8) = lVar1;
  (*(code *)PTR_drop_00799c68)();
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799c70)();
    }
  }
  puVar4 = PTR___rust_dealloc_00798fc8;
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar5 = param_1[2] * 0x10 + lVar6;
  if (param_1[2] != 0) {
    do {
      lVar7 = lVar6 + 0x10;
      lVar6 = *(longlong *)(lVar6 + 8);
      (**(code **)(lVar6 + 0x18))();
      if (*(longlong *)(lVar6 + 8) != 0) {
        (*(code *)puVar4)();
      }
      lVar6 = lVar7;
    } while (lVar7 != lVar5);
    lVar6 = lVar5;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>]>
            (lVar6,(ulonglong)(lVar5 - lVar6) >> 4);
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


