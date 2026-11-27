// 001cef20 <gimli[a7f20a324fd82d99]::read::dwarf::Unit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::dwarf::Unit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<gimli[a7f20a324fd82d99]::read::dwarf::Unit<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>
          (longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0021a750)();
  }
  <core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>
            (param_1 + 0x60);
  return;
}


