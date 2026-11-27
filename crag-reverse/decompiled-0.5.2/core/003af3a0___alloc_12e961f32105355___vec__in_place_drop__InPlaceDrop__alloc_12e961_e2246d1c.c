// 003af3a0 <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,!>>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#8}>,
   <craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#9}> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,
   alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>, !>> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::vec::into_iter::IntoIter<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#8}>,<craggemini_core[66f3c71560d70857]::pool::PoolManager>::resolve_target_for_model::{closure#9}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>,_>>
          (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != *(undefined8 **)(param_1 + 0x18)) {
    do {
      local_50 = (longlong *)puVar3[2];
      plVar1 = (longlong *)*puVar3;
      uVar2 = puVar3[1];
      *(undefined8 **)(param_1 + 8) = puVar3 + 3;
      local_48._0_4_ = SUB84(plVar1,0);
      local_48._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar2;
      uStack_40._4_4_ = (undefined4)(uVar2 >> 0x20);
      local_60 = (undefined4)local_48;
      uStack_5c = local_48._4_4_;
      uStack_58 = (undefined4)uStack_40;
      uStack_54 = uStack_40._4_4_;
      uVar4 = **(ulonglong **)(param_1 + 0x20) + 1000;
      if (0xfffffffffffffc17 < **(ulonglong **)(param_1 + 0x20)) {
        uVar4 = 0xffffffffffffffff;
      }
      if (uVar4 < uVar2) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        local_48 = plVar1;
        uStack_40 = uVar2;
        local_38 = local_50;
        if (*plVar1 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          ::drop_slow(&local_60);
        }
        LOCK();
        *local_50 = *local_50 + -1;
        UNLOCK();
        if (*local_50 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>
          ::drop_slow(&local_50);
        }
      }
      else {
        *param_3 = plVar1;
        param_3[1] = local_50;
        param_3 = param_3 + 2;
      }
      puVar3 = *(undefined8 **)(param_1 + 8);
    } while (puVar3 != *(undefined8 **)(param_1 + 0x18));
  }
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = param_2;
  return auVar5;
}


