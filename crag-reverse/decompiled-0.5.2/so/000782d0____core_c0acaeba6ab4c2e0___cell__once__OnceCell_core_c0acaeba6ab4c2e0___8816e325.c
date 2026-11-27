// 000782d0 <<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::{closure#4}>::{closure#0},!>

/* <core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::try_init::<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,
   gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::{closure#4}>::{closure#0},
   !> */

char * __rustcall
<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>
::try_init::
<<core[c0acaeba6ab4c2e0]::cell::once::OnceCell<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>>>::get_or_init<<addr2line[f7adfda4b3430143]::unit::ResUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>::dwarf_and_unit::_closure_4_>::_closure_0_,_>
          (char *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  cVar1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  if (*param_1 == -2) {
    *param_1 = cVar1;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar3;
    return param_1;
  }
  if (cVar1 == -2) {
    return param_1;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::result::Result<&core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>,(&core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<addr2line[f7adfda4b3430143]::unit::DwoUnit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>,gimli[a7f20a324fd82d99]::read::Error>)>>
            (cVar1);
  (*(code *)PTR_panic_fmt_000c3e90)();
  pcVar4 = (code *)swi(3);
  pcVar5 = (char *)(*pcVar4)();
  return pcVar5;
}


