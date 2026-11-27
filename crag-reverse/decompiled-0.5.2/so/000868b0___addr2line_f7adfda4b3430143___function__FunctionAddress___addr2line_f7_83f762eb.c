// 000868b0 <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<addr2line[f7adfda4b3430143]::function::FunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#1}>::{closure#0}>
    */

ulonglong * __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                        (param_1,param_1 + param_4 * 0xc,param_1 + param_4 * 0x15);
    param_2 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                        (param_2,param_2 + param_4 * 0xc,param_2 + param_4 * 0x15,param_4);
    param_3 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::FunctionAddress,<[addr2line[f7adfda4b3430143]::function::FunctionAddress]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_1_>::_closure_0_>
                        (param_3,param_3 + param_4 * 0xc,param_3 + param_4 * 0x15,param_4);
  }
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 < *param_3 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *param_3 != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


