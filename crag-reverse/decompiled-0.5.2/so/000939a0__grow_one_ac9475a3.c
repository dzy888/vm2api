// 000939a0 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::ffi::os_str::OsString>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::string::String>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::vec::Vec<u8>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::unit::AttributeValue<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<addr2line[f7adfda4b3430143]::line::LineRow>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<addr2line[f7adfda4b3430143]::function::FunctionAddress>>::grow_one
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::ffi::os_str::OsString>>::grow_one
          (ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_30 [2];
  ulonglong local_28;
  
  uVar2 = *param_1 * 2;
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_30,*param_1,param_1[1],uVar3,8,0x18);
  if (local_30[0] == 1) {
    (*(code *)PTR_handle_error_000c3a98)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[1] = local_28;
  *param_1 = uVar3;
  return;
}


