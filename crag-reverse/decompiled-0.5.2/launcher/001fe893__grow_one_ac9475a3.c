// 001fe893 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::AttributeSpecification>>::grow_one
    */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::AttributeSpecification>>
::grow_one(void)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *unaff_R14;
  ulonglong uVar6;
  longlong lStack_58;
  
  plVar4 = (longlong *)0x1;
  puVar2 = (ulonglong *)(*(code *)PTR_grow_amortized_0021ac18)(8,1,0x10);
  if (puVar2 == (ulonglong *)0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_00219c78)();
  uVar1 = plVar4[0xc];
  uVar6 = uVar1 - 1;
  if (uVar6 < puVar2[2]) {
LAB_001fe8e8:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*plVar4 != 0) {
      (*(code *)PTR_deallocate_0021ac58)();
    }
  }
  else {
    if (uVar6 == puVar2[2]) {
      if (puVar2[5] != 0) {
        lVar3 = (*(code *)PTR_<u64>_0021ac90)();
        unaff_R14 = puVar2;
        if (lVar3 != 0) goto LAB_001fe8e8;
      }
      if (uVar6 == *puVar2) {
        (*(code *)PTR_grow_one_0021ac98)();
      }
      plVar5 = (longlong *)(uVar6 * 0x70 + puVar2[1]);
      for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      puVar2[2] = uVar1;
    }
    else {
      unaff_R14 = puVar2 + 3;
      (*(code *)PTR_entry_0021aca8)();
      if (lStack_58 == 0) goto LAB_001fe8e8;
      (*(code *)PTR_insert_entry_0021acb0)();
    }
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


