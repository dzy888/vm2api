// 003b3070 from_iter

/* <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::{closure#0}::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::schema::ensure_required_properties::{closure#0}::{closure#0}>>>
::from_iter(longlong *param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  
  do {
    pcVar4 = param_2;
    if (pcVar4 == param_3) goto LAB_003b30b8;
    param_2 = pcVar4 + 0x20;
  } while (*pcVar4 != '\x03');
  lVar5 = *(longlong *)(pcVar4 + 0x18);
  if (lVar5 < 0) {
LAB_003b30ac:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003b30b8:
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  if (lVar5 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) goto LAB_003b30ac;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar5);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *plVar3 = lVar5;
    plVar3[1] = lVar2;
    plVar3[2] = lVar5;
    local_58 = 4;
    lVar5 = 1;
    plStack_50 = plVar3;
    while( true ) {
      do {
        pcVar4 = param_2;
        if (pcVar4 == param_3) {
          param_1[2] = lVar5;
          *param_1 = local_58;
          param_1[1] = (longlong)plStack_50;
          return param_1;
        }
        param_2 = pcVar4 + 0x20;
      } while (*pcVar4 != '\x03');
      lVar2 = *(longlong *)(pcVar4 + 0x18);
      local_48 = lVar5;
      if (lVar2 < 0) break;
      if (lVar2 == 0) {
        local_60 = 1;
      }
      else {
        local_40 = *(undefined8 *)(pcVar4 + 0x10);
        local_38 = plVar3;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_60 = (*(code *)PTR___rust_alloc_00799000)();
        if (local_60 == 0) break;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar2);
        plVar3 = local_38;
      }
      if (lVar5 == local_58) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_58,lVar5,1,8,0x18);
        plVar3 = plStack_50;
      }
      plVar3[lVar5 * 3] = lVar2;
      plVar3[lVar5 * 3 + 1] = local_60;
      plVar3[lVar5 * 3 + 2] = lVar2;
      lVar5 = lVar5 + 1;
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


