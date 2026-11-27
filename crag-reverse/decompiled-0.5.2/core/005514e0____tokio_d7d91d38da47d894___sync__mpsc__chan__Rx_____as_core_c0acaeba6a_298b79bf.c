// 005514e0 <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<serde_json[dc3825464c436029]::value::Value,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_::Guard<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>
          (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte local_48 [32];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
            (local_48,uVar1,uVar2);
  puVar3 = PTR_add_permit_00799728;
  while (local_48[0] < 0xfe) {
    (*(code *)puVar3)();
    <serde_json[dc3825464c436029]::value::Value>(local_48);
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<serde_json[dc3825464c436029]::value::Value>>::pop
              (local_48,uVar1,uVar2);
  }
  return;
}


