// 00409cc0 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::set_stage
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::set_stage
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::set_stage(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = (*(code *)PTR_enter_007998a8)();
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      if ((code *)*puVar1 != (code *)0x0) {
        uVar8 = (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,puVar1[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::_closure_0_>>>
              (*(undefined8 *)(param_1 + 0x18));
  }
  uVar8 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x10) = uVar8;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  (*(code *)PTR_drop_007998b0)();
  return;
}


