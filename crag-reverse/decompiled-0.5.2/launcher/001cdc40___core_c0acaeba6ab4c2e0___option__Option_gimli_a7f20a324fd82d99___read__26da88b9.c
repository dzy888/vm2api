// 001cdc40 <core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>

/* WARNING: Switch with 1 destination removed at 0x001cdcd2 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != -2) {
    if (*(longlong *)(param_1 + 0x16) != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,2);
    }
    if (*(longlong *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
    }
    if (*(longlong *)(param_1 + 0x22) != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,2);
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


