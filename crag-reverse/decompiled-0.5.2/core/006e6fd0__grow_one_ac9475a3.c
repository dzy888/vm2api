// 006e6fd0 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<usize>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Worker>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Core>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::task::local::Shared>>>>::grow_one
    */

void __rustcall <alloc[12e961f32105355]::raw_vec::RawVec<usize>>::grow_one(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_28 [2];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar3,8,8);
  if (local_28[0] == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[1] = local_20;
  *param_1 = uVar3;
  return;
}


