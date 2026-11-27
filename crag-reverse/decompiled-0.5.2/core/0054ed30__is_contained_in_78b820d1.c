// 0054ed30 is_contained_in

/* <char as core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in */

bool __rustcall
<char_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
          (longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  if (0xf < param_2) {
    lVar1 = (*(code *)PTR_memchr_aligned_00799490)();
    return lVar1 == 1;
  }
  lVar1 = 0;
  do {
    bVar2 = *(char *)(param_1 + lVar1) == '\0';
    if (bVar2) {
      return bVar2;
    }
    bVar3 = param_2 - 1 != lVar1;
    lVar1 = lVar1 + 1;
  } while (bVar3);
  return bVar2;
}


