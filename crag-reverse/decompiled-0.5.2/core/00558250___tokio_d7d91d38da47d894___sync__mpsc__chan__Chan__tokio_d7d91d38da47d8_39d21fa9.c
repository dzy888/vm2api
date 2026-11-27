// 00558250 <tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong local_48 [6];
  
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
    ::pop(local_48,param_1 + 0x120,param_1);
    puVar1 = PTR___rust_dealloc_00798fc8;
    if ((local_48[0] == 2) || ((int)local_48[0] == -1)) break;
    <(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>
              (local_48);
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  do {
    lVar2 = *(longlong *)(lVar2 + 0x608);
    (*(code *)puVar1)(param_4,8);
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))();
  }
  return;
}


