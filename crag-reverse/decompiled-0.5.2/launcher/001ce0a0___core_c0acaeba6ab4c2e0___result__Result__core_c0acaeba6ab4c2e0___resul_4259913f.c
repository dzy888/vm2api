// 001ce0a0 <core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>)>>

/* WARNING: Switch with 1 destination removed at 0x001ce0f6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>,
   (&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>,
   core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Function<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>)>>
          (longlong *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    if (param_1[2] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_1[2] << 4,8);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR_free_0021a8b8)();
      return;
    }
  }
  return;
}


