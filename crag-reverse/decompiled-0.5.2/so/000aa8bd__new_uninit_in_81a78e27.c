// 000aa8bd new_uninit_in

/* <alloc[12e961f32105355]::boxed::Box<alloc[12e961f32105355]::collections::btree::node::LeafNode<u64,
   gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>>::new_uninit_in */

void __rustcall
<alloc[12e961f32105355]::boxed::Box<alloc[12e961f32105355]::collections::btree::node::LeafNode<u64,gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>>
::new_uninit_in(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  qword qVar3;
  bool bVar4;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
  if (lVar2 != 0) {
    return;
  }
  (*(code *)PTR_handle_alloc_error_000c3d10)();
  if (__DT_SYMTAB[0x19].st_size == 0) {
    Elf64_Ehdr_00000000.e_ident_abiversion = 0x38;
    Elf64_Ehdr_00000000.e_ident_pad[0] = 5;
    Elf64_Ehdr_00000000.e_ident_pad[1] = 0;
    Elf64_Ehdr_00000000.e_ident_pad[2] = 0;
    Elf64_Ehdr_00000000.e_ident_pad[3] = 0;
    Elf64_Ehdr_00000000.e_ident_pad[4] = 0;
    Elf64_Ehdr_00000000.e_ident_pad[5] = 0;
    Elf64_Ehdr_00000000.e_ident_pad[6] = 0;
    Elf64_Ehdr_00000000.e_type = (short)param_3;
    Elf64_Ehdr_00000000.e_machine = (short)(param_3 >> 0x10);
    Elf64_Ehdr_00000000.e_version = (int)(param_3 >> 0x20);
    Elf64_Ehdr_00000000.e_entry = 0;
    return;
  }
  qVar3 = __DT_SYMTAB[0x19].st_size;
  Elf64_Ehdr_00000000.e_entry = __DT_SYMTAB[0x1a]._0_8_;
  do {
    lVar2 = (ulonglong)*(ushort *)(qVar3 + 0x532) << 3;
    Elf64_Ehdr_00000000.e_shoff = 0xffffffffffffffff;
    do {
      if (lVar2 == 0) {
        Elf64_Ehdr_00000000.e_shoff = (ulonglong)*(ushort *)(qVar3 + 0x532);
        goto LAB_000aa943;
      }
      uVar1 = *(ulonglong *)(qVar3 + 0x4e0 + Elf64_Ehdr_00000000.e_shoff * 8);
      Elf64_Ehdr_00000000.e_shoff = Elf64_Ehdr_00000000.e_shoff + 1;
      lVar2 = lVar2 + -8;
    } while ((char)((uVar1 < param_3) - (param_3 < uVar1)) == '\x01');
    if (uVar1 < param_3 == param_3 < uVar1) {
      Elf64_Ehdr_00000000.e_type = (short)qVar3;
      Elf64_Ehdr_00000000.e_machine = (short)(qVar3 >> 0x10);
      Elf64_Ehdr_00000000.e_version = (int)(qVar3 >> 0x20);
      Elf64_Ehdr_00000000.e_phoff = Elf64_Ehdr_00000000.e_shoff;
      Elf64_Ehdr_00000000.e_shoff = 0x538;
      Elf64_Ehdr_00000000.e_ident_abiversion = 0;
      Elf64_Ehdr_00000000.e_ident_pad[0] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[1] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[2] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[3] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[4] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[5] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[6] = 0;
      return;
    }
LAB_000aa943:
    bVar4 = Elf64_Ehdr_00000000.e_entry == 0;
    Elf64_Ehdr_00000000.e_entry = Elf64_Ehdr_00000000.e_entry - 1;
    if (bVar4) {
      Elf64_Ehdr_00000000.e_ident_abiversion = 0x38;
      Elf64_Ehdr_00000000.e_ident_pad[0] = 5;
      Elf64_Ehdr_00000000.e_ident_pad[1] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[2] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[3] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[4] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[5] = 0;
      Elf64_Ehdr_00000000.e_ident_pad[6] = 0;
      Elf64_Ehdr_00000000.e_type = (short)param_3;
      Elf64_Ehdr_00000000.e_machine = (short)(param_3 >> 0x10);
      Elf64_Ehdr_00000000.e_version = (int)(param_3 >> 0x20);
      Elf64_Ehdr_00000000.e_entry = qVar3;
      Elf64_Ehdr_00000000.e_phoff = 0;
      return;
    }
    qVar3 = *(qword *)(qVar3 + 0x538 + Elf64_Ehdr_00000000.e_shoff * 8);
  } while( true );
}


