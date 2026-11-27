// 0072fa60 <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>

/* WARNING: Switch with 1 destination removed at 0x0072face */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,
   gimli[a7f20a324fd82d99]::read::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>
          (char param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0 || param_1 != -1) {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x1c0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0079ac18)();
  }
  plVar1 = *(longlong **)(param_2 + 0x170);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0079ac20)();
  }
  <core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>
            (param_2 + 0x60);
  (*(code *)PTR_free_0079adc8)();
  return;
}


