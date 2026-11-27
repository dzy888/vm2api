// 0072f8e0 <addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<addr2line[f7adfda4b3430143]::Context<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0079ac18)();
  }
  <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            (param_1 + 1);
  <addr2line[f7adfda4b3430143]::unit::SupUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            (param_1[5],param_1[6]);
  return;
}


