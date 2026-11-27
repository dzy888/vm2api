// 000a9f12 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::grow_one
    */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::
grow_one(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  ulonglong *unaff_R14;
  ulonglong uVar6;
  longlong lStack_60;
  
  lVar2 = (*(code *)PTR_grow_amortized_000c45c8)(8,1,0x70);
  if (lVar2 == -1) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_000c3a98)();
  pbVar4 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
  puVar3 = (ulonglong *)(*(code *)PTR_grow_amortized_000c45c8)(8,1,0x10);
  if (puVar3 == (ulonglong *)0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_000c3a98)();
  uVar1 = *(ulonglong *)(pbVar4 + 0x60);
  uVar6 = uVar1 - 1;
  if (uVar6 < puVar3[2]) {
LAB_000a9f98:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*(longlong *)pbVar4 != 0) {
      (*(code *)PTR_deallocate_000c4608)();
    }
  }
  else {
    if (uVar6 == puVar3[2]) {
      if (puVar3[5] != 0) {
        lVar2 = (*(code *)PTR_<u64>_000c4640)();
        unaff_R14 = puVar3;
        if (lVar2 != 0) goto LAB_000a9f98;
      }
      if (uVar6 == *puVar3) {
        (*(code *)PTR_grow_one_000c4648)();
      }
      plVar5 = (longlong *)(uVar6 * 0x70 + puVar3[1]);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *(longlong *)pbVar4;
        pbVar4 = pbVar4 + 8;
        plVar5 = plVar5 + 1;
      }
      puVar3[2] = uVar1;
    }
    else {
      unaff_R14 = puVar3 + 3;
      (*(code *)PTR_entry_000c4658)();
      if (lStack_60 == 0) goto LAB_000a9f98;
      (*(code *)PTR_insert_entry_000c4660)();
    }
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


