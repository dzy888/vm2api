// 00078290 <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::{closure#2}>::{closure#0},!>

/* <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::try_init::<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::{closure#2}>::{closure#0},
   !> */

char * __rustcall
<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>
::try_init::
<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::_closure_2_>::_closure_0_,_>
          (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char *pcVar2;
  
  if (*param_1 == -2) {
    *param_1 = -1;
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    return param_1;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>)>>
            (0xff,0);
  (*(code *)PTR_panic_fmt_000c3e90)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c1248);
  pcVar1 = (code *)swi(3);
  pcVar2 = (char *)(*pcVar1)();
  return pcVar2;
}


