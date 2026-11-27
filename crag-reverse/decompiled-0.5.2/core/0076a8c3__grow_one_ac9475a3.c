// 0076a8c3 grow_one

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
  puVar2 = (ulonglong *)(*(code *)PTR_grow_amortized_0079b1d0)(8,1,0x10);
  if (puVar2 == (ulonglong *)0xffffffffffffffff) {
    return 0xffffffffffffffff;
  }
  (*(code *)PTR_handle_error_00798ff0)();
  uVar1 = plVar4[0xc];
  uVar6 = uVar1 - 1;
  if (uVar6 < puVar2[2]) {
LAB_0076a918:
    uVar6 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*plVar4 != 0) {
      (*(code *)PTR_deallocate_0079b210)();
    }
  }
  else {
    if (uVar6 == puVar2[2]) {
      if (puVar2[5] != 0) {
        lVar3 = (*(code *)PTR_<u64>_0079b248)();
        unaff_R14 = puVar2;
        if (lVar3 != 0) goto LAB_0076a918;
      }
      if (uVar6 == *puVar2) {
        (*(code *)PTR_grow_one_0079b250)();
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
      (*(code *)PTR_entry_0079b260)();
      if (lStack_58 == 0) goto LAB_0076a918;
      (*(code *)PTR_insert_entry_0079b268)();
    }
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}


