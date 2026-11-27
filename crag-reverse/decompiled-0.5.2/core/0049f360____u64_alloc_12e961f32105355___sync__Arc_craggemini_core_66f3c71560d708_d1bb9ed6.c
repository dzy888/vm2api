// 0049f360 <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>), <[(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#7}>::{closure#0}>
    */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0x60;
    lVar4 = param_4 * 0xa8;
    param_1 = <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                        (param_1,param_1 + lVar3,param_1 + lVar4);
    param_2 = <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                        (param_2,param_2 + lVar3,param_2 + lVar4,param_4,param_5);
    param_3 = <(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>),<[(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)]>::sort_by_key<u64,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::_closure_7_>::_closure_0_>
                        (param_3,lVar3 + param_3,lVar4 + param_3,param_4,param_5);
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_2 + 8);
  if (uVar2 < *(ulonglong *)(param_3 + 8) != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *(ulonglong *)(param_3 + 8) != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


