// 006f4b80 <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::push_overflow::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::push_overflow::<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
          (longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  int local_48;
  int local_44;
  int *local_40;
  undefined *local_38;
  undefined1 *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_30 = (undefined1 *)&local_48;
  local_10 = (ulonglong)(uint)(param_4 - param_3);
  local_48 = param_3;
  local_44 = param_4;
  local_18 = param_2;
  if (param_4 - param_3 != 0x100) {
    local_40 = &local_44;
    local_38 = PTR_fmt_00799470;
    local_28 = PTR_fmt_00799470;
    (*(code *)PTR_<usize,usize>_00799710)
              (&DAT_0018c593,"",&local_40,
               &PTR_anon_d250138afc359909044a05a15195067d_2_llvm_15875357693395155123_007944e8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  LOCK();
  bVar2 = CONCAT44(param_3,param_3) == *(longlong *)(param_1 + 0x18);
  if (bVar2) {
    *(longlong *)(param_1 + 0x18) = CONCAT44(param_4,param_4);
  }
  UNLOCK();
  if (bVar2) {
    *(int *)(param_1 + 0x20) = param_4 + 0x80;
    local_30 = *(undefined1 **)(param_1 + 0x10);
    local_28 = (undefined *)(ulonglong)(param_3 + 0x80);
    local_20 = 0;
    local_40 = (int *)0x1;
    local_38 = (undefined *)param_2;
    <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle_as_tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::overflow::Overflow<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::push_batch::
    <core[c0acaeba6ab4c2e0]::iter::adapters::chain::Chain<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::queue::Local<_>>::push_overflow::BatchTaskIter<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>,core[c0acaeba6ab4c2e0]::iter::sources::once::Once<tokio[d7d91d38da47d894]::runtime::task::Notified<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>>
              (param_5,&local_40);
    param_2 = 0;
  }
  return param_2;
}


