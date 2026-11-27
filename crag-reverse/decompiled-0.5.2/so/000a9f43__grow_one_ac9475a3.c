// 000a9f43 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::AttributeSpecification>>::grow_one
    */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::AttributeSpecification>>
::grow_one(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong *plVar5;
  ulonglong *unaff_R14;
  ulonglong uVar6;
  longlong lStack_58;
  
  pbVar4 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
  puVar2 = (ulonglong *)(*(code *)PTR_grow_amortized_000c45c8)(8,1,0x10);
  if (puVar2 == (ulonglong *)0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_000c3a98)();
  uVar1 = *(ulonglong *)(pbVar4 + 0x60);
  uVar6 = uVar1 - 1;
  if (uVar6 < puVar2[2]) {
LAB_000a9f98:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*(longlong *)pbVar4 != 0) {
      (*(code *)PTR_deallocate_000c4608)();
    }
  }
  else {
    if (uVar6 == puVar2[2]) {
      if (puVar2[5] != 0) {
        lVar3 = (*(code *)PTR_<u64>_000c4640)();
        unaff_R14 = puVar2;
        if (lVar3 != 0) goto LAB_000a9f98;
      }
      if (uVar6 == *puVar2) {
        (*(code *)PTR_grow_one_000c4648)();
      }
      plVar5 = (longlong *)(uVar6 * 0x70 + puVar2[1]);
      for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar5 = *(longlong *)pbVar4;
        pbVar4 = pbVar4 + 8;
        plVar5 = plVar5 + 1;
      }
      puVar2[2] = uVar1;
    }
    else {
      unaff_R14 = puVar2 + 3;
      (*(code *)PTR_entry_000c4658)();
      if (lStack_58 == 0) goto LAB_000a9f98;
      (*(code *)PTR_insert_entry_000c4660)();
    }
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


