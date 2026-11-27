// 00081ee0 <gimli[a7f20a324fd82d99]::read::line::LineRows<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>,usize>>

/* WARNING: Switch with 1 destination removed at 0x00081f69 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<gimli[a7f20a324fd82d99]::read::line::LineRows<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,
   usize>, usize>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<gimli[a7f20a324fd82d99]::read::line::LineRows<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>,usize>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,2);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,8);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,2);
  }
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


