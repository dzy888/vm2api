// 001ce8d0 <alloc[12e961f32105355]::boxed::Box<[addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>]>>

/* WARNING: Switch with 1 destination removed at 0x001ce96a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::boxed::Box<[addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>]>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::boxed::Box<[addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>]>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  
  puVar1 = PTR___rust_dealloc_00219c40;
  if (param_2 == 0) {
    return;
  }
  plVar2 = (longlong *)(param_1 + 0x20);
  do {
    if ((plVar2[-4] != 0) && (plVar2[-3] != 0)) {
      if (plVar2[-2] != 0) {
        (*(code *)puVar1)(param_4,8);
      }
      if (*plVar2 != 0) {
        (*(code *)puVar1)(param_4,8);
      }
    }
    plVar2 = plVar2 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


