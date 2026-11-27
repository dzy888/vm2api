// 00584090 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00584147 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  byte local_40 [32];
  
  lVar2 = *param_1;
  while (<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>
         ::pop(local_40,lVar2 + 0x1a0,lVar2 + 0x80), puVar3 = PTR___rust_dealloc_00798fc8,
        local_40[0] < 0xfe) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_40);
  }
  lVar4 = *(longlong *)(lVar2 + 0x1a8);
  do {
    lVar4 = *(longlong *)(lVar4 + 0x408);
    (*(code *)puVar3)(param_4,8);
  } while (lVar4 != 0);
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x100) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


