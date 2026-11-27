// 006efe80 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::fs::File>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::fs::File>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  (*(code *)PTR_close_00799030)();
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


