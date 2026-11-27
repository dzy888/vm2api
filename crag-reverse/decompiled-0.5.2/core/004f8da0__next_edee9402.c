// 004f8da0 next

/* <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_30 [4];
  longlong local_20;
  
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    lVar1 = param_1[2];
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_30,param_1 + 2);
    if (local_30[0] == 1) {
      lVar2 = *param_1;
      *param_1 = local_20;
      return lVar1 + lVar2;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x41) = 1;
      if ((param_1[1] != *param_1 | *(byte *)(param_1 + 8)) == 1) {
        return *param_1 + param_1[2];
      }
    }
  }
  return 0;
}


