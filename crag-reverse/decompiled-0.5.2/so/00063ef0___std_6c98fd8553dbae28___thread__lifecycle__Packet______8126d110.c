// 00063ef0 <std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>

/* WARNING: Switch with 1 destination removed at 0x00063fb6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = (undefined8 *)param_1[3];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,puVar3[2]);
    }
  }
  param_1[1] = 0;
  plVar4 = (longlong *)*param_1;
  if (plVar4 != (longlong *)0x0) {
    (*(code *)PTR_decrement_num_running_threads_000c3e50)();
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::scoped::ScopeData>>::
      drop_slow(*param_1,(byte)lVar1 & lVar2 != 0);
    }
  }
  if ((param_1[1] != 0) && (param_1[2] != 0)) {
    puVar3 = (undefined8 *)param_1[3];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    if (puVar3[1] != 0) {
      (*(code *)PTR_free_000c4290)(param_4,puVar3[2]);
      return;
    }
  }
  return;
}


