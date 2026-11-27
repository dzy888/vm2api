// 007574b0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00757503 */
/* <alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<gimli[a7f20a324fd82d99]::read::dwarf::Dwarf<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x100);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_0079ac18)();
    }
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <gimli[a7f20a324fd82d99]::read::abbrev::AbbreviationsCache>(lVar1 + 0x108);
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


