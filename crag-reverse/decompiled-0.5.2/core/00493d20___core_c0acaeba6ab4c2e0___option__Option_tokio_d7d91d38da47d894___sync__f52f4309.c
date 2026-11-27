// 00493d20 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          (char *param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if ((*param_1 != '\0') && (plVar2 = *(longlong **)(param_1 + 8), plVar2 != (longlong *)0x0)) {
    uVar1 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar1 & 5) == 1) {
      (**(code **)(plVar2[4] + 0x10))();
      plVar2 = *(longlong **)(param_1 + 8);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
      ::drop_slow(param_1 + 8);
      return;
    }
  }
  return;
}


