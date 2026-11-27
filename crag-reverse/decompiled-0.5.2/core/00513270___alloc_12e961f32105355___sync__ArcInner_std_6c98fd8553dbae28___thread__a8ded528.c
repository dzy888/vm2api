// 00513270 <alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>

/* WARNING: Switch with 1 destination removed at 0x00513340 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
    }
  }
  *(longlong *)(param_1 + 0x18) = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (*(code *)PTR_decrement_num_running_threads_00799c30)();
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799c38)();
    }
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


