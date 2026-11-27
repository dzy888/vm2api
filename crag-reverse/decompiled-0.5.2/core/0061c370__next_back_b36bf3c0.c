// 0061c370 next_back

/* <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back
          (longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  char local_28 [8];
  longlong local_20;
  longlong local_18;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    auVar5 = next_back(param_1);
    if ((auVar5._0_8_ != 0) && (auVar5._8_8_ != 0)) {
      return auVar5;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = auVar5._8_8_;
      return auVar3 << 0x40;
    }
  }
  lVar1 = param_1[2];
  <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::ReverseSearcher>
  ::next_match_back(local_28,param_1 + 2);
  if (local_28[0] == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    local_18 = *param_1;
    lVar4 = param_1[1] - local_18;
  }
  else {
    lVar4 = param_1[1] - local_18;
    param_1[1] = local_20;
  }
  auVar5._0_8_ = lVar1 + local_18;
  auVar5._8_8_ = lVar4;
  return auVar5;
}


