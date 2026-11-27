// 00555300 <tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = param_1[0x10e];
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar1 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*param_1 != -2) {
    iVar2 = (int)*param_1;
    if (iVar2 == -1) {
      if ((param_1[1] != -1) && (param_1[1] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      if ((param_1[4] != -1) && (param_1[4] != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (param_1[7]);
      return;
    }
    if (iVar2 != 2) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1);
      return;
    }
  }
  return;
}


