// 001ff493 <&str>

/* <str>::trim_start_matches::<&str> */

undefined1  [16] __rustcall
<str>::trim_start_matches::<&str>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 local_a8 [104];
  longlong local_40;
  longlong local_38;
  
  (*(code *)PTR_new_0021a470)(param_3,param_2,param_4);
  do {
    <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next(&local_40,local_a8);
  } while (local_40 == 0);
  if ((int)local_40 != 1) {
    local_38 = param_2;
  }
  auVar1._8_8_ = param_2 - local_38;
  auVar1._0_8_ = param_1 + local_38;
  return auVar1;
}


