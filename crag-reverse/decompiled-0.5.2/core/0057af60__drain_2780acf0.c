// 0057af60 drain

/* <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<bytes[e9829e187354639b]::bytes::Bytes,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::drain */

void __rustcall
<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::drain(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_58;
  longlong local_50;
  undefined8 local_40;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
            (&local_58,uVar1,uVar2);
  puVar3 = PTR_add_permit_00799da0;
  bVar5 = local_50 != 0;
  if (((byte)local_58 & bVar5) == 1) {
    do {
      lVar4 = local_50;
      (*(code *)puVar3)();
      (**(code **)(lVar4 + 0x20))();
      <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<bytes[e9829e187354639b]::bytes::Bytes>>::pop
                (&local_58,uVar1,uVar2);
      bVar5 = local_50 != 0;
      if (local_58 != 1) break;
    } while (local_50 != 0);
  }
  if ((local_58 == 0) || (bVar5 == false)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057b01a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(local_50 + 0x20))(bVar5,local_40);
  return;
}


