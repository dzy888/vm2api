// 006f0f40 release

/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>
   as tokio[d7d91d38da47d894]::runtime::task::Schedule>::release */

undefined8 __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>as_tokio[d7d91d38da47d894]::runtime::task::Schedule>
::release(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(*param_2 + 0x18) == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if (*(longlong *)(*param_2 + 0x18) == *(longlong *)(lVar1 + 0x218)) {
    uVar3 = <tokio[d7d91d38da47d894]::util::sharded_list::ShardedList<tokio[d7d91d38da47d894]::runtime::task::Task<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
            ::remove(lVar1 + 0x1f0);
    return uVar3;
  }
  (*(code *)
    PTR_<core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>,core[c0acaeba6ab4c2e0]::num::nonzero::NonZero<u64>>_0079a778
  )(0,lVar1 + 0x218,param_5,&anon_4a510ad2c2ece6409108a5920cec5cc2_8_llvm_1700297362806677381);
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}


