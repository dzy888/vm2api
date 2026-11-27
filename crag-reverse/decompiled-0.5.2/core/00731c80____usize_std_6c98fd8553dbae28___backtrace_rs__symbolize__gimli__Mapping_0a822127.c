// 00731c80 <(usize,std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(usize,
   std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(usize,std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::Mapping)>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1d0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_0079ac18)();
  }
  <addr2line[f7adfda4b3430143]::unit::ResUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            (param_1 + 0x1d8);
  <addr2line[f7adfda4b3430143]::unit::SupUnits<gimli[a7f20a324fd82d99]::read::endian_slice::EndianSlice<gimli[a7f20a324fd82d99]::endianity::LittleEndian>>>
            (*(undefined8 *)(param_1 + 0x1f8),*(undefined8 *)(param_1 + 0x200));
  if (*(longlong *)(param_1 + 8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x210);
  (*(code *)PTR_munmap_007990b8)();
  <std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::stash::Stash>(param_1 + 0x218,uVar2);
  return;
}


