// 00554620 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::oneshot::Inner<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          (longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x70);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar1 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*(longlong *)(param_1 + 0x10) == -3) {
    return;
  }
  <core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>
            ((longlong *)(param_1 + 0x10));
  return;
}


