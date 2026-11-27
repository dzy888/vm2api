// 003b6700 from_iter

/* WARNING: Removing unreachable block (ram,0x003b6800) */
/* WARNING: Removing unreachable block (ram,0x003b6764) */
/* <alloc[12e961f32105355]::vec::Vec<usize> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<usize,
   core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   craggemini_core[66f3c71560d70857]::tools::parse_native_web_search_ccpa::{closure#9}::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<usize>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<usize,core[c0acaeba6ab4c2e0]::iter::adapters::filter_map::FilterMap<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::tools::parse_native_web_search_ccpa::{closure#9}::{closure#0}>>>
::from_iter(longlong *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong local_48;
  undefined8 *puStack_40;
  longlong local_38;
  
  do {
    pcVar2 = param_2;
    if (pcVar2 == param_3) {
      *param_1 = 0;
      param_1[1] = 8;
      param_1[2] = 0;
      return param_1;
    }
    param_2 = pcVar2 + 0x20;
  } while ((*pcVar2 != '\x02') || (*(longlong *)(pcVar2 + 8) != 0));
  uVar1 = *(undefined8 *)(pcVar2 + 0x10);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = (*(code *)PTR_handle_error_00798ff0)();
    if (local_48 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,8);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *puVar3 = uVar1;
  local_48 = 4;
  lVar4 = 1;
  puStack_40 = puVar3;
  while (pcVar2 = param_2, param_2 != param_3) {
    while ((param_2 = pcVar2 + 0x20, *pcVar2 != '\x02' || (*(longlong *)(pcVar2 + 8) != 0))) {
      pcVar2 = param_2;
      if (param_2 == param_3) goto LAB_003b6843;
    }
    uVar1 = *(undefined8 *)(pcVar2 + 0x10);
    if (lVar4 == local_48) {
      local_38 = lVar4;
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(&local_48,lVar4,1,8,8);
      puVar3 = puStack_40;
    }
    puVar3[lVar4] = uVar1;
    lVar4 = lVar4 + 1;
  }
LAB_003b6843:
  param_1[2] = lVar4;
  *param_1 = local_48;
  param_1[1] = (longlong)puStack_40;
  return param_1;
}


