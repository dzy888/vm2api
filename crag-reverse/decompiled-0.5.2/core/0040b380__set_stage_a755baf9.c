// 0040b380 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::set_stage
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::set_stage
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
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
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  
  uVar17 = (*(code *)PTR_enter_007998a8)();
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      if ((code *)*puVar1 != (code *)0x0) {
        uVar17 = (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar17,puVar1[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_>
              (param_1 + 0x18);
  }
  uVar16 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = uVar16;
  uVar17 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xd];
  uVar14 = param_2[0xe];
  uVar15 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x40) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x44) = uVar13;
  *(undefined4 *)(param_1 + 0x48) = uVar14;
  *(undefined4 *)(param_1 + 0x4c) = uVar15;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  *(undefined4 *)(param_1 + 0x3c) = uVar12;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  (*(code *)PTR_drop_007998b0)();
  return;
}


