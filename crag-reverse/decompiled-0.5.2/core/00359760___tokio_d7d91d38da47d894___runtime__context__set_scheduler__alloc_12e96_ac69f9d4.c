// 00359760 <tokio[d7d91d38da47d894]::runtime::context::set_scheduler<(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::enter<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>>::{closure#0}>::{closure#0},(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>)>

/* <std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>::with::<tokio[d7d91d38da47d894]::runtime::context::set_scheduler<(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>>),
   <tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::enter<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::{closure#0}>>>::{closure#0},
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>>>::{closure#0}>::{closure#0},
   (alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,
   core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),
   core[c0acaeba6ab4c2e0]::io::error::Error>>)> */

longlong * __rustcall
<std[6c98fd8553dbae28]::thread::local::LocalKey<tokio[d7d91d38da47d894]::runtime::context::Context>>
::with::
<tokio[d7d91d38da47d894]::runtime::context::set_scheduler<(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>),<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::enter<<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>>::_closure_0_>::_closure_0_,(alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>)>
          (longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  lVar9 = (*(code *)*param_2)();
  if (lVar9 == 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
              (param_3[2]);
    (*(code *)PTR_panic_access_error_00799458)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Core>>
              (param_3[2]);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar10 = param_3[2];
  plVar2 = (longlong *)param_3[3];
  uVar3 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = *param_3;
  uVar12 = uVar3;
  local_78 = (*(code *)PTR_waker_ref_00799600)();
  local_50 = &local_78;
  local_40 = 0;
  local_70 = uVar12;
  local_48 = local_50;
  (*(code *)PTR_start_processing_scheduled_tasks_00799608)();
  puVar7 = PTR_run_task_00799618;
  puVar6 = PTR_next_task_00799610;
LAB_003597eb:
  do {
    LOCK();
    pcVar1 = (char *)(*plVar2 + 0x1d8);
    cVar8 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if ((cVar8 != '\0') &&
       (<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Context>::enter::
        <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>,<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::CoreGuard>::block_on<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::run::_closure_0_>>>::_closure_0_::_closure_0_>
                  (), lVar10 = local_68, local_60 != 1)) {
      lVar10 = 1;
LAB_00359900:
      *(undefined8 *)(lVar9 + 0x28) = uVar3;
      *param_1 = local_68;
      param_1[1] = lVar10;
      param_1[2] = local_58;
      return param_1;
    }
    lVar11 = *plVar2;
    iVar13 = *(int *)(lVar11 + 0x1c8);
    lVar4 = local_68;
    lVar5 = local_58;
    for (; local_68 = lVar10, local_58 = lVar11, iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*(char *)(local_68 + 0xa8) != '\0') {
        lVar10 = 0;
        goto LAB_00359900;
      }
      *(int *)(local_68 + 0xa0) = *(int *)(local_68 + 0xa0) + 1;
      local_68 = lVar4;
      local_58 = lVar5;
      lVar10 = (*(code *)puVar6)();
      if (lVar10 == 0) {
        (*(code *)PTR_end_processing_scheduled_tasks_00799620)();
        cVar8 = (*(code *)PTR_has_pending_work_00799630)();
        if (cVar8 == '\0') {
          lVar10 = (*(code *)PTR_park_00799638)();
        }
        else {
          lVar10 = (*(code *)PTR_park_yield_00799628)();
        }
        (*(code *)PTR_start_processing_scheduled_tasks_00799608)();
        goto LAB_003597eb;
      }
      lVar11 = (*(code *)puVar7)();
      lVar10 = lVar11;
      lVar4 = local_68;
      lVar5 = local_58;
    }
    local_68 = lVar4;
    local_58 = lVar5;
    (*(code *)PTR_end_processing_scheduled_tasks_00799620)();
    lVar10 = (*(code *)PTR_park_yield_00799628)();
    (*(code *)PTR_start_processing_scheduled_tasks_00799608)();
  } while( true );
}


