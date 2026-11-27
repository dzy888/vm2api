// 001fe862 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::grow_one
    */

ulonglong __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviation>>::
grow_one(void)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *unaff_R14;
  ulonglong uVar6;
  longlong lStack_60;
  
  lVar2 = (*(code *)PTR_grow_amortized_0021ac18)(8,1,0x70);
  if (lVar2 == -1) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_00219c78)();
  plVar4 = (longlong *)0x1;
  puVar3 = (ulonglong *)(*(code *)PTR_grow_amortized_0021ac18)(8,1,0x10);
  if (puVar3 == (ulonglong *)0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_00219c78)();
  uVar1 = plVar4[0xc];
  uVar6 = uVar1 - 1;
  if (uVar6 < puVar3[2]) {
LAB_001fe8e8:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*plVar4 != 0) {
      (*(code *)PTR_deallocate_0021ac58)();
    }
  }
  else {
    if (uVar6 == puVar3[2]) {
      if (puVar3[5] != 0) {
        lVar2 = (*(code *)PTR_<u64>_0021ac90)();
        unaff_R14 = puVar3;
        if (lVar2 != 0) goto LAB_001fe8e8;
      }
      if (uVar6 == *puVar3) {
        (*(code *)PTR_grow_one_0021ac98)();
      }
      plVar5 = (longlong *)(uVar6 * 0x70 + puVar3[1]);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      puVar3[2] = uVar1;
    }
    else {
      unaff_R14 = puVar3 + 3;
      (*(code *)PTR_entry_0021aca8)();
      if (lStack_60 == 0) goto LAB_001fe8e8;
      (*(code *)PTR_insert_entry_0021acb0)();
    }
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


