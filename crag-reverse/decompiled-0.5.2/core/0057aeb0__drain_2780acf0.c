// 0057aeb0 drain

/* <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::drain */

void __rustcall
<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::drain(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong local_48 [3];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
            (local_48,uVar1,uVar2);
  puVar4 = PTR_add_permit_00799da0;
  uVar3 = local_48[0];
  while (uVar3 < 0xfffffffffffffffe) {
    local_48[0] = uVar3;
    (*(code *)puVar4)();
    if (uVar3 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
              (local_48,uVar1,uVar2);
    uVar3 = local_48[0];
  }
  return;
}


