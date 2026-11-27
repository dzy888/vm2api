// 00380680 <<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x005c22f5) overlaps instruction at (ram,0x005c22f4)
    */
/* tokio[d7d91d38da47d894]::runtime::task::raw::poll::<<craggemini_core[66f3c71560d70857]::guard::GuardHandle
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::poll::
<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char *pcVar4;
  undefined8 extraout_RDX;
  longlong unaff_R14;
  undefined *puStack_2d8;
  longlong lStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined4 auStack_2a8 [2];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulonglong uStack_290;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  bVar2 = (*(code *)PTR_transition_to_running_00799fc8)();
  uVar1 = (&switchD_005c21e6::switchdataD_0019d5ec)[bVar2];
  pcVar4 = (char *)((longlong)&switchD_005c21e6::switchdataD_0019d5ec + (longlong)(int)uVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    puStack_2d8 = PTR_WAKER_VTABLE_00799fd0;
    unaff_R14 = param_1 + 0x20;
    uStack_2b8 = 0;
    lStack_2d0 = param_1;
    puStack_2c8 = (undefined1 *)&puStack_2d8;
    puStack_2c0 = (undefined1 *)&puStack_2d8;
    bVar2 = <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
            ::poll(unaff_R14,&puStack_2c8);
    uStack_290 = (ulonglong)bVar2;
    if ((bVar2 & 1) != 0) {
      bVar2 = (*(code *)PTR_transition_to_idle_00799fd8)();
      pcVar4 = (char *)(ulonglong)bVar2;
      goto switchD_005c21e6_caseD_5;
    }
    uStack_2a0 = 0;
    uStack_298 = 0;
    auStack_2a8[0] = 1;
    param_2 = auStack_2a8;
  case 4:
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(unaff_R14,param_2);
LAB_005c22ed:
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::complete(param_1);
    break;
  case 1:
    auStack_2a8[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_2a8);
    uStack_158 = *(undefined8 *)(param_1 + 0x28);
    uStack_150 = 0;
    auStack_160[0] = 1;
    uStack_148 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_160);
    goto LAB_005c22ed;
  case 2:
    break;
  case 5:
switchD_005c21e6_caseD_5:
                    /* WARNING: Could not recover jumptable at 0x005c2245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&UINT_0019d5fc + (longlong)(int)(&UINT_0019d5fc)[(longlong)pcVar4]))();
    return;
  case 6:
    cVar3 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar3 == '\0') {
      return;
    }
  case 3:
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
              (param_1);
    break;
  case 7:
    *pcVar4 = *pcVar4 + (char)pcVar4;
    (&UNK_0019d56d)[(int)uVar1] = (&UNK_0019d56d)[(int)uVar1] + -0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


