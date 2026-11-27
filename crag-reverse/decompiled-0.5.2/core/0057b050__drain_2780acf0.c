// 0057b050 drain

/* <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>::drain */

void __rustcall
<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
::drain(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  longlong local_58 [6];
  
  puVar3 = PTR_add_permit_00799da0;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
    ::pop(local_58,uVar1,uVar2);
    if ((local_58[0] == 2) || ((int)local_58[0] == -1)) break;
    (*(code *)puVar3)();
    if ((local_58[0] != -1) && ((int)local_58[0] != 2)) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>
                (local_58);
    }
  }
  return;
}


