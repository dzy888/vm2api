// 00735dc0 <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<addr2line[f7adfda4b3430143]::unit::UnitRange,
   <[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,
   <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#4}>::{closure#0}>
    */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    lVar4 = param_4 * 0x80;
    lVar3 = param_4 * 0xe0;
    param_1 = <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                        (param_1,param_1 + lVar4,param_1 + lVar3);
    param_2 = <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                        (param_2,param_2 + lVar4,param_2 + lVar3,param_4);
    param_3 = <addr2line[f7adfda4b3430143]::unit::UnitRange,<[addr2line[f7adfda4b3430143]::unit::UnitRange]>::sort_by_key<u64,<addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_4_>::_closure_0_>
                        (param_3,lVar4 + param_3,lVar3 + param_3,param_4);
  }
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_2 + 8);
  if (uVar2 < *(ulonglong *)(param_3 + 8) != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *(ulonglong *)(param_3 + 8) != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


