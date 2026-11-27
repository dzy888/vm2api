// 006efcd0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x006efd1e */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<()>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<()>>>::drop_slow
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))();
  }
  if ((uVar3 & 8) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x18))();
  }
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


