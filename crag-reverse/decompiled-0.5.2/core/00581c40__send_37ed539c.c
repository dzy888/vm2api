// 00581c40 send

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>::send */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
::send(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  if (param_2 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_00581d82:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar1 = param_2 + 2;
  local_30 = param_2;
  if (param_2[2] != -2) {
    iVar4 = (int)param_2[2];
    if (iVar4 == -1) {
      if ((param_2[3] != -1) && (param_2[3] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if ((param_2[6] != -1) && (param_2[6] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_2[9]);
    }
    else if (iVar4 != 2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::pool::AgySlot>
                (plVar1);
    }
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0x850);
  uVar5 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar5 & 5) == 1) {
    (**(code **)(param_2[0x10e] + 0x10))();
  }
  if ((uVar5 & 4) == 0) {
    *param_1 = -2;
    LOCK();
    *param_2 = *param_2 + -1;
    lVar2 = *param_2;
    UNLOCK();
  }
  else {
    lVar2 = *plVar1;
    *plVar1 = -2;
    if (lVar2 == -2) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_00581d82;
    }
    param_3 = param_2 + 3;
    (*(code *)PTR_memcpy_00799008)(param_4,0x848);
    *param_1 = lVar2;
    LOCK();
    *param_2 = *param_2 + -1;
    lVar2 = *param_2;
    UNLOCK();
  }
  if (lVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
    ::drop_slow(&local_30,param_3);
  }
  return param_1;
}


