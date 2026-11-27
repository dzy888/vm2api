// 00085f50 <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0},alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::line::LineSequence>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<addr2line[f7adfda4b3430143]::line::LineSequence,
   <[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::{closure#1}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::line::LineSequence>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::line::LineSequence>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_1060 [48];
  undefined8 local_1030;
  ulonglong local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  local_1030 = 0;
  uVar1 = param_2 - (param_2 >> 1);
  uVar5 = 250000;
  if (param_2 < 250000) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  uVar3 = 0x30;
  if (0x30 < uVar5) {
    uVar3 = uVar5;
  }
  uVar4 = param_2;
  if (0x80 < uVar5) {
    uVar4 = uVar3 * 0x20;
    if (uVar4 < 0x7ffffffffffffff9 && uVar1 >> 0x3b == 0) {
      local_48 = param_1;
      local_40 = param_2;
      local_38 = param_3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      param_1 = 8;
      puVar2 = (undefined1 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (puVar2 != (undefined1 *)0x0) {
        local_50 = 0;
        uVar4 = local_40;
        param_1 = local_48;
        local_60 = uVar3;
        local_58 = puVar2;
        goto LAB_00086039;
      }
    }
    else {
      param_1 = 0;
    }
    (*(code *)PTR_handle_error_000c3a98)();
  }
  puVar2 = local_1060;
  uVar3 = 0x80;
LAB_00086039:
  drift::sort::
  <addr2line[f7adfda4b3430143]::line::LineSequence,<[addr2line[f7adfda4b3430143]::line::LineSequence]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::line::Lines>::parse<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>::_closure_1_>::_closure_0_>
            (param_1,uVar4,puVar2,uVar3,uVar4 < 0x41);
  if (0x80 < uVar5) {
    (*(code *)PTR___rust_dealloc_000c3aa0)();
  }
  return;
}


