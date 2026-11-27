// 001cec40 <addr2line[f7adfda4b3430143]::unit::SupUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>

/* WARNING: Switch with 1 destination removed at 0x001cecb6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<addr2line[f7adfda4b3430143]::unit::SupUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<addr2line[f7adfda4b3430143]::unit::SupUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_drop_slow_0021a750;
  if (param_2 == 0) {
    return;
  }
  puVar3 = (undefined8 *)(param_1 + 0x170);
  do {
    plVar1 = (longlong *)*puVar3;
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)puVar2)();
    }
    <core[c0acaeba6ab4c2e0]::option::Option<gimli[a7f20a324fd82d99]::read::line::IncompleteLineProgram<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>,usize>>>
              (puVar3 + -0x22);
    puVar3 = puVar3 + 0x39;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  (*(code *)PTR_free_0021a8b8)(param_4,8);
  return;
}


