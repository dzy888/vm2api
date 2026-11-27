// 0049f100 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0}> */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar1 = param_4 * 0x120;
    lVar5 = param_4 * 0x1f8;
    param_1 = <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                        (param_1,param_1 + lVar1,param_1 + lVar5);
    param_2 = <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                        (param_2,param_2 + lVar1,param_2 + lVar5,param_4,param_5);
    param_3 = <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
                        (param_3,lVar1 + param_3,lVar5 + param_3,param_4,param_5);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar5 = *(longlong *)(param_2 + 0x30);
  bVar3 = lVar1 < lVar5;
  if (lVar1 == lVar5) {
    bVar3 = *(uint *)(param_1 + 0x38) < *(uint *)(param_2 + 0x38);
  }
  lVar2 = *(longlong *)(param_3 + 0x30);
  bVar4 = lVar1 < lVar2;
  if (lVar1 == lVar2) {
    bVar4 = *(uint *)(param_1 + 0x38) < *(uint *)(param_3 + 0x38);
  }
  if (bVar3 == bVar4) {
    bVar4 = lVar5 < lVar2;
    if (lVar5 == lVar2) {
      bVar4 = *(uint *)(param_2 + 0x38) < *(uint *)(param_3 + 0x38);
    }
    param_1 = param_2;
    if (bVar3 != bVar4) {
      param_1 = param_3;
    }
  }
  return param_1;
}


