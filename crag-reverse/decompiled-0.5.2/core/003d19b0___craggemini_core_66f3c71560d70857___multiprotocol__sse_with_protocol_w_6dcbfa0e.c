// 003d19b0 <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::{closure#1}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::_closure_1_::_closure_0_>
          (int *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = (char)param_1[0xbc];
  if (cVar2 != '\0') {
    if (cVar2 != '\x03') {
      if (cVar2 != '\x04') {
        return;
      }
      piVar1 = param_1 + 0xbe;
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
      plVar3 = *(longlong **)piVar1;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<(),craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          ::drop_slow(piVar1);
        }
      }
    }
    <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>
              (param_1 + 0x5e);
    *(undefined1 *)((longlong)param_1 + 0x2f1) = 0;
    return;
  }
  if (*param_1 == 2) {
    return;
  }
  <craggemini_core[66f3c71560d70857]::multiprotocol::sse_with_protocol_with_ids::TranscodeState>
            (param_1);
  return;
}


