// 00730b90 <addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>

/* WARNING: Switch with 1 destination removed at 0x00730be6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          (longlong *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_1[2] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1[2] << 4,8);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


