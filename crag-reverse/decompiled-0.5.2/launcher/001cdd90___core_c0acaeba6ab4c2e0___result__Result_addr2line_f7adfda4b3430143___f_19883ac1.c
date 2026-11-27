// 001cdd90 <core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>

/* WARNING: Switch with 1 destination removed at 0x001cde60 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,
   gimli[a7f20a324fd82d99]::read::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<addr2line[f7adfda4b3430143]::function::Functions<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>,gimli[a7f20a324fd82d99]::read::Error>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_00219c40;
  if (*param_1 != 0) {
    lVar3 = param_1[1];
    if (lVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x20);
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
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


