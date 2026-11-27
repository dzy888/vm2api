// 005553d0 <tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar1 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*(longlong *)(param_1 + 0x28) == -2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) != -1) {
    <craggemini_core[66f3c71560d70857]::server::JsonTurnResult>(param_1 + 0x28);
    return;
  }
  if ((*(longlong *)(param_1 + 0x30) != -1) && (*(longlong *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
            (*(undefined8 *)(param_1 + 0x60));
  return;
}


