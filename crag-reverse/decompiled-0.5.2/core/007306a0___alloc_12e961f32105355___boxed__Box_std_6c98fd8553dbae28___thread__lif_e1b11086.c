// 007306a0 <alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::thread::lifecycle::ThreadInit>>

/* WARNING: Switch with 1 destination removed at 0x00730703 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::thread::lifecycle::ThreadInit>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<std[6c98fd8553dbae28]::thread::lifecycle::ThreadInit>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007996e8)();
  }
  puVar2 = (undefined8 *)param_1[2];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)();
  }
  if (puVar2[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar2[2]);
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


