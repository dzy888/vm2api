// 001d37f0 <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},alloc[12e961f32105355]::vec::Vec<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset),
   <[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  bool bVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_1038 [8];
  undefined8 local_1030;
  ulonglong local_38;
  
  local_1030 = 0;
  uVar2 = param_2 - (param_2 >> 1);
  uVar7 = 500000;
  if (param_2 < 500000) {
    uVar7 = param_2;
  }
  if (uVar7 <= uVar2) {
    uVar7 = uVar2;
  }
  uVar5 = 0x30;
  if (0x30 < uVar7) {
    uVar5 = uVar7;
  }
  uVar6 = param_2;
  if (0x100 < uVar7) {
    uVar6 = uVar5 * 0x10;
    bVar1 = uVar2 >> 0x3c != 0;
    if (0x7ffffffffffffff8 < uVar6 || bVar1) {
      uVar4 = 0;
      uVar5 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff8 < uVar6 || bVar1);
    }
    else {
      local_38 = param_2;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
      puVar3 = (undefined1 *)(*(code *)PTR___rust_alloc_00219c88)();
      uVar4 = 8;
      uVar2 = local_38;
      if (puVar3 != (undefined1 *)0x0) goto LAB_001d38ba;
    }
    (*(code *)PTR_handle_error_00219c78)(uVar5);
    param_1 = uVar4;
  }
  puVar3 = local_1038;
  uVar5 = 0x100;
  uVar2 = uVar6;
LAB_001d38ba:
  drift::sort::
  <(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset),<[(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)]>::sort_by_key<gimli[a7f20a324fd82d99]::common::DebugInfoOffset,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
            (param_1,uVar2,puVar3,uVar5,uVar2 < 0x41,param_3);
  if (0x100 < uVar7) {
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
  return;
}


