// 00637e50 <char>

/* <str>::contains::<char> */

bool __rustcall <str>::contains::<char>(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  if (0xf < param_2) {
    lVar1 = (*(code *)PTR_memchr_aligned_00799490)();
    return lVar1 == 1;
  }
  if (param_2 == 0) {
    return false;
  }
  lVar1 = 0;
  do {
    bVar2 = *(char *)(param_1 + lVar1) == ':';
    if (bVar2) {
      return bVar2;
    }
    bVar3 = param_2 - 1 != lVar1;
    lVar1 = lVar1 + 1;
  } while (bVar3);
  return bVar2;
}


