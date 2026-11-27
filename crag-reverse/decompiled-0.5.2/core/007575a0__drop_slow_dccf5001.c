// 007575a0 drop_slow

/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::thread::Inner,
   std[6c98fd8553dbae28]::alloc::System>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::thread::Inner,std[6c98fd8553dbae28]::alloc::System>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if ((*(undefined1 **)(lVar2 + 0x18) != (undefined1 *)0x0) &&
     (lVar3 = *(longlong *)(lVar2 + 0x20), **(undefined1 **)(lVar2 + 0x18) = 0, lVar3 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


