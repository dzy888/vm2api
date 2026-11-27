// 00730880 <addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          (longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0079ac20)();
  }
  <core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>
            (param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    <core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::line::Lines,gimli[a7f20a324fd82d99]::read::Error>>
              (param_1 + 0x1d0);
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    <core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>
              (param_1 + 0x1f8);
  }
  if (*(char *)(param_1 + 0x218) == -2) {
    return;
  }
  <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>
            (*(char *)(param_1 + 0x218),*(undefined8 *)(param_1 + 0x220));
  return;
}


