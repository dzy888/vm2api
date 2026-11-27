// 005589a0 <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit),tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


