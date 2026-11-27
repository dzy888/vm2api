// 003b4770 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,
   craggemini_core[66f3c71560d70857]::resume::compute_receipt_key::{closure#0}>>>::from_iter */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>,craggemini_core[66f3c71560d70857]::resume::compute_receipt_key::{closure#0}>>>
::from_iter(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_50;
  longlong *plStack_48;
  longlong local_40;
  longlong *local_38;
  
  do {
    if (param_2 == param_3) {
LAB_003b48db:
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    if (*param_2 != -1) {
      lVar4 = param_2[1];
      lVar1 = param_2[2];
      if (lVar4 != 0) {
        local_38 = param_1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plStack_48 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plStack_48 == (longlong *)0x0) {
          uVar5 = (*(code *)PTR_handle_error_00798ff0)();
          if (local_50 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        *plStack_48 = lVar4;
        plStack_48[1] = lVar1;
        local_50 = 4;
        lVar4 = 1;
        plVar3 = plStack_48;
        break;
      }
      goto LAB_003b48db;
    }
    param_2 = param_2 + 0xb;
  } while( true );
joined_r0x003b4830:
  param_2 = param_2 + 0xb;
  if (param_2 == param_3) {
LAB_003b48ab:
    local_38[2] = lVar4;
    *local_38 = local_50;
    local_38[1] = (longlong)plStack_48;
    return local_38;
  }
  if (*param_2 != -1) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    if (lVar1 == 0) goto LAB_003b48ab;
    if (lVar4 == local_50) {
      local_40 = lVar4;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_50,lVar4,1,8,0x10);
      plVar3 = plStack_48;
    }
    plVar3[lVar4 * 2] = lVar1;
    plVar3[lVar4 * 2 + 1] = lVar2;
    lVar4 = lVar4 + 1;
  }
  goto joined_r0x003b4830;
}


