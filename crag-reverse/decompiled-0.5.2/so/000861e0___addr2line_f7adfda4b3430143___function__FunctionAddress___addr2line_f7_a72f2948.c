// 000861e0 <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<addr2line[f7adfda4b3430143]::function::FunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>
          (undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte local_1040 [16];
  undefined8 local_1030;
  undefined *local_40;
  undefined8 local_38;
  
  local_1030 = 0;
  puVar4 = (undefined *)((ulonglong)param_2 >> 1);
  puVar2 = param_2 + -(longlong)puVar4;
  puVar5 = &UNK_00051615;
  if (param_2 < &UNK_00051615) {
    puVar5 = param_2;
  }
  if (puVar5 <= puVar2) {
    puVar5 = puVar2;
  }
  puVar6 = (undefined *)0x30;
  if ((undefined *)0x30 < puVar5) {
    puVar6 = puVar5;
  }
  if (puVar5 < (undefined *)0xab) {
    pbVar3 = local_1040;
    puVar4 = (undefined *)0xaa;
  }
  else {
    puVar1 = (undefined *)((longlong)puVar6 * 0x18);
    if (puVar2 < (undefined *)0x555555555555556) goto LAB_00086279;
    param_1 = 0;
    while( true ) {
      (*(code *)PTR_handle_error_000c3a98)(puVar4);
      param_2 = puVar1;
LAB_00086279:
      puVar4 = puVar6;
      if (puVar1 == (undefined *)0x0) break;
      local_40 = param_2;
      local_38 = param_1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      pbVar3 = (byte *)(*(code *)PTR___rust_alloc_000c3a90)();
      param_2 = local_40;
      param_1 = local_38;
      if (pbVar3 != (byte *)0x0) goto LAB_000862c9;
      puVar6 = (undefined *)0x0;
      param_1 = 8;
    }
    pbVar3 = &Elf64_Ehdr_00000000.e_ident_abiversion;
    puVar4 = (undefined *)0x0;
  }
LAB_000862c9:
  drift::sort::
  <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
            (param_1,param_2,pbVar3,puVar4,param_2 < (undefined *)0x41,param_3);
  if ((undefined *)0xaa < puVar5) {
    (*(code *)PTR___rust_dealloc_000c3aa0)();
  }
  return;
}


