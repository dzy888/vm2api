// 007357b0 <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<addr2line[f7adfda4b3430143]::function::FunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_1040 [16];
  undefined8 local_1030;
  ulonglong local_40;
  undefined8 local_38;
  
  local_1030 = 0;
  uVar4 = param_2 >> 1;
  uVar2 = param_2 - uVar4;
  uVar5 = 0x51615;
  if (param_2 < 0x51615) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar2) {
    uVar5 = uVar2;
  }
  uVar6 = 0x30;
  if (0x30 < uVar5) {
    uVar6 = uVar5;
  }
  if (uVar5 < 0xab) {
    puVar3 = local_1040;
    uVar4 = 0xaa;
  }
  else {
    uVar1 = uVar6 * 0x18;
    if (uVar2 < 0x555555555555556) goto LAB_00735849;
    param_1 = 0;
    while( true ) {
      (*(code *)PTR_handle_error_00798ff0)(uVar4);
      param_2 = uVar1;
LAB_00735849:
      uVar4 = uVar6;
      if (uVar1 == 0) break;
      local_40 = param_2;
      local_38 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
      param_2 = local_40;
      param_1 = local_38;
      if (puVar3 != (undefined1 *)0x0) goto LAB_00735899;
      uVar6 = 0;
      param_1 = 8;
    }
    puVar3 = &DAT_00000008;
    uVar4 = 0;
  }
LAB_00735899:
  drift::sort::
  <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
            (param_1,param_2,puVar3,uVar4,param_2 < 0x41,param_3);
  if (0xaa < uVar5) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


