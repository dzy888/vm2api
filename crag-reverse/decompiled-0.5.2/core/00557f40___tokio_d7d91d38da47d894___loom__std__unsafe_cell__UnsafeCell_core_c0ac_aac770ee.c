// 00557f40 <tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   craggemini_core[66f3c71560d70857]::protocol::Failure>>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -3) {
    return;
  }
  if (lVar1 == -2) {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
    return;
  }
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
            (param_1[6]);
  return;
}


