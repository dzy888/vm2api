// 00558080 <tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong local_38 [3];
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<alloc[12e961f32105355]::string::String>>::pop
              (local_38,param_1 + 0x120,param_1);
    if (0xfffffffffffffffd < local_38[0]) break;
    if (local_38[0] != 0) {
      (*(code *)puVar1)(param_4,1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  do {
    lVar2 = *(longlong *)(lVar2 + 0x308);
    (*(code *)puVar1)(param_4,8);
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055811a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))();
  return;
}


