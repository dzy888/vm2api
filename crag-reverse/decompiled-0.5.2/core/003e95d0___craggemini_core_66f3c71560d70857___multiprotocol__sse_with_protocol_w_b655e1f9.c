// 003e95d0 <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>

/* WARNING: Switch with 1 destination removed at 0x003e964c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::RawState>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_1 + 6;
  <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(plVar1);
  plVar2 = (longlong *)*plVar1;
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<bytes[e9829e187354639b]::bytes::Bytes,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
    ::drop_slow(plVar1);
  }
  if (*param_1 != 0) {
    plVar1 = param_1 + 1;
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar1);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
        ::drop_slow(plVar1);
      }
    }
  }
  <tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::guard::DropGuard>(param_1 + 7);
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<bytes[e9829e187354639b]::bytes::Bytes>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 2);
  if (param_1[2] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


