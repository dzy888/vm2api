// 00557e50 <tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*param_1 != -2) {
    iVar1 = (int)*param_1;
    if (iVar1 == -1) {
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
    if (iVar1 != 2) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>();
      return;
    }
  }
  return;
}


