// 0063ef80 <(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>

/* WARNING: Switch with 1 destination removed at 0x0063efc2 */
/* WARNING: Switch with 1 destination removed at 0x006eff4a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,
   tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio[d7d91d38da47d894]::net::unix::stream::UnixStream,tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit)>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  (*(code *)PTR_drop_007990f0)();
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


