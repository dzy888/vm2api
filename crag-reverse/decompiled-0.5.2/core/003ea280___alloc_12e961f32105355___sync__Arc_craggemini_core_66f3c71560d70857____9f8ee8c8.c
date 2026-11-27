// 003ea280 <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0},alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   <[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::{closure#0}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_1030 [512];
  
  local_1030[0] = 0;
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 1000000;
  if (param_2 < 1000000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (0x200 < uVar4) {
    if (uVar4 * 8 < 0x7ffffffffffffff9 && uVar2 >> 0x3d == 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = 8;
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = uVar4;
        goto LAB_003ea352;
      }
    }
    else {
      uVar1 = 0;
    }
    param_1 = uVar1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar4 * 8;
  }
  puVar3 = local_1030;
  uVar2 = 0x200;
LAB_003ea352:
  drift::sort::
  <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,<[alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>]>::sort_by<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::list::_closure_0_>::_closure_0_>
            (param_1,param_2,puVar3,uVar2,param_2 < 0x41,param_3);
  if (0x200 < uVar4) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


