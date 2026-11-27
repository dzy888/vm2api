// 001d3cf0 <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,
   <[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::{closure#0}>::{closure#0}>
    */

ulonglong * __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
          (ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                        (param_1,param_1 + param_4 * 0x10,param_1 + param_4 * 0x1c);
    param_2 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                        (param_2,param_2 + param_4 * 0x10,param_2 + param_4 * 0x1c,param_4);
    param_3 = (ulonglong *)
              <addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress,<[addr2line[f7adfda4b3430143]::function::InlinedFunctionAddress]>::sort_by<<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::parse::_closure_0_>::_closure_0_>
                        (param_3,param_3 + param_4 * 0x10,param_3 + param_4 * 0x1c,param_4);
  }
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar3 = *param_2;
  uVar4 = param_2[2];
  if (uVar2 < uVar4) {
    uVar6 = *param_3;
    uVar7 = param_3[2];
    bVar5 = true;
    if (uVar7 <= uVar2) {
      if (uVar7 < uVar2) {
        return param_1;
      }
      if (uVar6 <= uVar1) {
        return param_1;
      }
    }
  }
  else {
    bVar5 = uVar1 < uVar3 && uVar2 <= uVar4;
    uVar6 = *param_3;
    uVar7 = param_3[2];
    if (uVar2 < uVar7) {
      bVar5 = true;
      if (uVar1 >= uVar3 || uVar2 > uVar4) {
        return param_1;
      }
    }
    else if (bVar5 != (uVar1 < uVar6 && uVar2 <= uVar7)) {
      return param_1;
    }
  }
  if ((bool)(bVar5 ^ (uVar4 < uVar7 || uVar3 < uVar6 && uVar4 <= uVar7))) {
    param_2 = param_3;
  }
  return param_2;
}


