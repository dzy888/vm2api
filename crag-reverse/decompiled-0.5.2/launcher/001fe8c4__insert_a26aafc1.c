// 001fe8c4 insert

/* <gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>::insert */

ulonglong __rustcall
<gimli[a7f20a324fd82d99]::read::abbrev::Abbreviations>::insert
          (ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *unaff_R14;
  ulonglong uVar4;
  longlong local_50;
  
  uVar1 = param_2[0xc];
  uVar4 = uVar1 - 1;
  if (uVar4 < param_1[2]) {
LAB_001fe8e8:
    uVar4 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (*param_2 != 0) {
      (*(code *)PTR_deallocate_0021ac58)();
    }
  }
  else {
    if (uVar4 == param_1[2]) {
      if (param_1[5] != 0) {
        lVar2 = (*(code *)PTR_<u64>_0021ac90)();
        unaff_R14 = param_1;
        if (lVar2 != 0) goto LAB_001fe8e8;
      }
      if (uVar4 == *param_1) {
        (*(code *)PTR_grow_one_0021ac98)();
      }
      plVar3 = (longlong *)(uVar4 * 0x70 + param_1[1]);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar3 = *param_2;
        param_2 = param_2 + 1;
        plVar3 = plVar3 + 1;
      }
      param_1[2] = uVar1;
    }
    else {
      unaff_R14 = param_1 + 3;
      (*(code *)PTR_entry_0021aca8)(param_4,uVar1);
      if (local_50 == 0) goto LAB_001fe8e8;
      (*(code *)PTR_insert_entry_0021acb0)();
    }
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}


