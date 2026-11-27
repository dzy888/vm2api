// 000815a0 <alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>

/* WARNING: Switch with 1 destination removed at 0x00081647 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<addr2line[f7adfda4b3430143]::function::LazyFunction<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  puVar1 = PTR___rust_dealloc_000c3aa0;
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    plVar2 = (longlong *)(param_1[1] + 0x20);
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
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)(param_4,8);
  return;
}


