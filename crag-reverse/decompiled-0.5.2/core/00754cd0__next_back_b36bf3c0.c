// 00754cd0 next_back

/* <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char local_30 [8];
  longlong local_28;
  longlong local_20;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    auVar2 = next_back(param_1);
    if ((auVar2._0_8_ != 0) && (auVar2._8_8_ != 0)) {
      return auVar2._0_8_;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  lVar1 = param_1[2];
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
  ::next_match_back(local_30,param_1 + 2);
  if (local_30[0] == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    local_20 = *param_1;
  }
  else {
    param_1[1] = local_28;
  }
  return lVar1 + local_20;
}


