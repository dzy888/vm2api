// 005548c0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  byte local_40 [32];
  
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
              (local_40,param_1 + 0x1a0,param_1 + 0x80);
    puVar1 = PTR___rust_dealloc_00798fc8;
    if (0xfd < local_40[0]) break;
    <serde_json[dc3825464c436029]::value::Value>(local_40);
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  do {
    lVar2 = *(longlong *)(lVar2 + 0x408);
    (*(code *)puVar1)(param_4,8);
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055495a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x100) + 0x18))();
  return;
}


