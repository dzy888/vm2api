// 003b1f50 from_iter

/* <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, usize)> as
   alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, usize),
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#0}>,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#1}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize)>as_alloc[12e961f32105355]::vec::spec_from_iter::SpecFromIter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,usize),core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#0}>,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}::{closure#1}>>>
::from_iter(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong local_110;
  longlong *plStack_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar13 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
           ::try_fold::
           <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,&mut<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::_closure_0_::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&craggemini_core[66f3c71560d70857]::pool::AgySlot>>
                     ();
  puVar5 = PTR_clone_00798fd0;
  if (lVar13 != 0) {
    (*(code *)PTR_clone_00798fd0)();
    (*(code *)puVar5)();
    lVar7 = lStack_e8;
    lVar15 = lStack_f0;
    lVar6 = local_f8;
    lVar13 = *(longlong *)(lVar13 + 0x828);
    local_a8 = lStack_f0;
    lStack_a0 = lStack_e8;
    if (local_f8 != -1) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar14 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar14 == (longlong *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      plVar14[6] = lVar13;
      plVar14[4] = lStack_140;
      plVar14[5] = local_138;
      plVar14[2] = lVar7;
      plVar14[3] = local_148;
      *plVar14 = lVar6;
      plVar14[1] = lVar15;
      local_110 = 4;
      local_100 = 1;
      local_58 = param_2[4];
      local_78 = *param_2;
      uStack_70 = param_2[1];
      local_68 = param_2[2];
      uStack_60 = param_2[3];
      lVar13 = 0x38;
      plStack_108 = plVar14;
      local_c8 = param_1;
      while (lVar6 = local_100,
            lVar15 = <alloc[12e961f32105355]::collections::vec_deque::iter::Iter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                     ::try_fold::
                     <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&craggemini_core[66f3c71560d70857]::pool::AgySlot,&mut<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::_closure_0_::_closure_0_>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&craggemini_core[66f3c71560d70857]::pool::AgySlot>>
                               (), lVar15 != 0) {
        (*(code *)puVar5)();
        (*(code *)puVar5)();
        uVar12 = local_38;
        uVar11 = uStack_40;
        lVar10 = local_48;
        lVar9 = lStack_b0;
        lVar8 = local_b8;
        lVar7 = local_c0;
        uVar3 = *(undefined8 *)(lVar15 + 0x828);
        local_f8 = local_b8;
        lStack_f0 = lStack_b0;
        lStack_e8 = local_48;
        uStack_e0 = uStack_40;
        local_d8 = local_38;
        if (local_c0 == -1) break;
        if (lVar6 == local_110) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(&local_110,lVar6,1,8,0x38);
          plVar14 = plStack_108;
        }
        *(undefined8 *)((longlong)plVar14 + lVar13 + 0x30) = uVar3;
        puVar1 = (undefined8 *)((longlong)plVar14 + lVar13 + 0x20);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        plVar2 = (longlong *)((longlong)plVar14 + lVar13 + 0x10);
        *plVar2 = lVar9;
        plVar2[1] = lVar10;
        *(longlong *)((longlong)plVar14 + lVar13) = lVar7;
        ((longlong *)((longlong)plVar14 + lVar13))[1] = lVar8;
        local_100 = lVar6 + 1;
        lVar13 = lVar13 + 0x38;
      }
      local_c8[2] = local_100;
      *local_c8 = local_110;
      local_c8[1] = (longlong)plStack_108;
      return local_c8;
    }
  }
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  return param_1;
}


