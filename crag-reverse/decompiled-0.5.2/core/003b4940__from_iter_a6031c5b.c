// 003b4940 from_iter

/* <alloc[12e961f32105355]::vec::Vec<&str> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::{closure#0}>>>::from_iter */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::server::model_exists_in_catalog::{closure#0}>>>
::from_iter(undefined4 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar5;
  longlong local_60;
  longlong *plStack_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  
  puVar2 = PTR_index_into_00799300;
  do {
    if (param_3 == param_4) {
LAB_003b49a8:
      *param_2 = 0;
      param_2[1] = 8;
      param_2[2] = 0;
      return param_2;
    }
    pcVar3 = (char *)(*(code *)puVar2)(param_1,param_3);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
      lVar4 = *(longlong *)(pcVar3 + 0x10);
      lVar1 = *(longlong *)(pcVar3 + 0x18);
      if (lVar4 != 0) {
        local_40 = param_2;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        plStack_58 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
        if (plStack_58 == (longlong *)0x0) {
          uVar5 = (*(code *)PTR_handle_error_00798ff0)();
          if (local_60 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
          }
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume();
        }
        *plStack_58 = lVar4;
        plStack_58[1] = lVar1;
        puVar2 = PTR_index_into_00799300;
        local_60 = 4;
        local_50 = 1;
        uVar5 = extraout_XMM0_Da_00;
        local_48 = plStack_58;
        lVar4 = local_50;
        break;
      }
      goto LAB_003b49a8;
    }
    param_3 = param_3 + 0x20;
    param_1 = extraout_XMM0_Da;
  } while( true );
joined_r0x003b4a68:
  param_3 = param_3 + 0x20;
  if (param_3 == param_4) {
LAB_003b4b0c:
    local_40[2] = local_50;
    *local_40 = local_60;
    local_40[1] = (longlong)plStack_58;
    return local_40;
  }
  pcVar3 = (char *)(*(code *)puVar2)(uVar5,param_3);
  uVar5 = extraout_XMM0_Da_01;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x03')) {
    lVar1 = *(longlong *)(pcVar3 + 0x10);
    local_38 = *(longlong *)(pcVar3 + 0x18);
    if (lVar1 == 0) goto LAB_003b4b0c;
    if (lVar4 == local_60) {
      uVar5 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
              <alloc[12e961f32105355]::alloc::Global>(&local_60,lVar4,1,8,0x10);
      local_48 = plStack_58;
    }
    local_48[lVar4 * 2] = lVar1;
    local_48[lVar4 * 2 + 1] = local_38;
    local_50 = lVar4 + 1;
    lVar4 = local_50;
  }
  goto joined_r0x003b4a68;
}


