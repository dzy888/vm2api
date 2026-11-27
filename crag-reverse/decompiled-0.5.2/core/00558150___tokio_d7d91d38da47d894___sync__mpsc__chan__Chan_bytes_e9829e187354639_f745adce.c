// 00558150 <tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          (longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  longlong local_40;
  longlong local_38;
  undefined8 local_28;
  
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
              (&local_40,param_1 + 0x120,param_1);
    if ((local_40 != 1) || (local_38 == 0)) break;
    (**(code **)(local_38 + 0x20))(1,local_28);
  }
  if ((local_40 != 0) && (local_38 != 0)) {
    (**(code **)(local_38 + 0x20))(local_40,local_28);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar2 = *(longlong *)(param_1 + 0x128);
  do {
    lVar2 = *(longlong *)(lVar2 + 0x408);
    (*(code *)puVar1)();
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00558218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))();
  return;
}


