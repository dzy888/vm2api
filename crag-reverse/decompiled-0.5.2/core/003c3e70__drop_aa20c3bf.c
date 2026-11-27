// 003c3e70 drop

/* WARNING: Switch with 1 destination removed at 0x003c3ea7 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]>
            (*(longlong *)(param_1 + 8),
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) >> 5);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


