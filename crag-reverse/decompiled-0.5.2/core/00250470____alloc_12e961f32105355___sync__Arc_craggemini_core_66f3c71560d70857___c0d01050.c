// 00250470 <(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>),<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::{closure#0}::{closure#1}>

/* WARNING: Switch with 1 destination removed at 0x002504a9 */
/* <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>>::map::<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>),
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::{closure#0}::{closure#1}>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>>
::map::
<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>),<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_::_closure_1_>
          (longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    param_1[3] = param_3[2];
    lVar1 = param_3[1];
    param_1[1] = *param_3;
    param_1[2] = lVar1;
    *param_1 = param_2;
    return;
  }
  param_1[1] = -2;
  if ((*param_3 == -1) || (*param_3 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


