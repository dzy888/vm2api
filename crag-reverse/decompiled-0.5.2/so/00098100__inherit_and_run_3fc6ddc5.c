// 00098100 inherit_and_run

/* WARNING: Switch with 1 destination removed at 0x00098224 */
/* <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>::inherit_and_run */

void __rustcall
<std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>::inherit_and_run(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = param_1[3];
  plVar5 = (longlong *)__tls_get_addr();
  if ((char)plVar5[1] != '\0') {
    if ((char)plVar5[1] != '\x01') {
      (*(code *)PTR_panic_access_error_000c3e40)();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    (*(code *)PTR_register_000c4398)();
    *(undefined1 *)(plVar5 + 1) = 0;
  }
  plVar2 = (longlong *)*plVar5;
  *plVar5 = lVar1;
  (*(code *)PTR_drop_000c3e68)();
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_000c3e70)();
    }
  }
  puVar4 = PTR___rust_dealloc_000c3aa0;
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar6 = param_1[2] * 0x10 + lVar7;
  if (param_1[2] != 0) {
    do {
      lVar8 = lVar7 + 0x10;
      lVar7 = *(longlong *)(lVar7 + 8);
      (**(code **)(lVar7 + 0x18))();
      if (*(longlong *)(lVar7 + 8) != 0) {
        (*(code *)puVar4)();
      }
      lVar7 = lVar8;
    } while (lVar8 != lVar6);
    lVar7 = lVar6;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output_()>_core[c0acaeba6ab4c2e0]::marker::Send>]>
            (lVar7,(ulonglong)(lVar6 - lVar7) >> 4);
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)();
  return;
}


